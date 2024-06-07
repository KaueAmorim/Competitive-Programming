A = [x for x in input().split()]
dia1 = int(A[1])
B = [x for x in input().split()]
hora1 = int(B[0])
minuto1 = int(B[2])
segundo1 = int(B[4])
C = [x for x in input().split()]
dia2 = int(C[1])
D = [x for x in input().split()]
hora2 = int(D[0])
minuto2 = int(D[2])
segundo2 = int(D[4])
total1 = hora1*3600 + minuto1*60 + segundo1
total2 = hora2*3600 + minuto2*60 + segundo2
if hora2 > hora1:
    total = total2 - total1
    W = dia2 - dia1
    X = total // 3600
    Y = (total % 3600) // 60
    Z = (total % 3600) % 60
elif hora2 < hora1:
    total = 86400 - (total1 - total2)
    W = dia2 - dia1 - 1
    X = total // 3600
    Y = (total % 3600) // 60
    Z = (total % 3600) % 60
else:
    if minuto2 > minuto1:
        total = total2 - total1
        W = dia2 - dia1
        X = total // 3600
        Y = (total % 3600) // 60
        Z = (total % 3600) % 60
    elif minuto2 < minuto1:
        total = 86400 - (total1 - total2)
        W = dia2 - dia1 - 1
        X = total // 3600
        Y = (total % 3600) // 60
        Z = (total % 3600) % 60
    else:
        if segundo2 > segundo1:
            total = total2 - total1
            W = dia2 - dia1
            X = total // 3600
            Y = (total % 3600) // 60
            Z = (total % 3600) % 60
        elif segundo2 < segundo1:
            total = 86400 - (total1 - total2)
            W = dia2 - dia1 - 1
            X = total // 3600
            Y = (total % 3600) // 60
            Z = (total % 3600) % 60
        else:
            W = dia2 - dia1
            X = 0
            Y = 0
            Z = 0
    
print(W, "dia(s)")
print(X, "hora(s)")
print(Y, "minuto(s)")
print(Z, "segundo(s)")
