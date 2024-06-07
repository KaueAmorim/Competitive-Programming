V = int(input())
A = int(input())
F = int(input())
P = int(input())
X = [A, F, P]
X.sort()
soma = 0
cont = 0
for i in range(3):
    soma += X[i]
    if soma <= V:
        cont += 1

print(cont)

