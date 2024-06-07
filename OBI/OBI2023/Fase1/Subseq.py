X = [int(x) for x in input().split()]

SA = [int(x) for x in input().split()]
SB = [int(x) for x in input().split()]
N = SB.copy()
SB.sort()
sub = True

if N != SB:
    sub = False

for i in range(X[1]):
    if SB[i] not in SA:
        sub = False
        break

if sub:
    print('S')
else:
    print('N')

