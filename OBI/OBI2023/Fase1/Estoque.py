m, n = [int(x) for x in input().split()]

tabela = []
for i in range(m):
    linha = [int(x) for x in input().split()]
    tabela.append(linha)

p = int(input())
total = 0
for k in range(p):
    a, b = [int(x) for x in input().split()]
    if tabela[a - 1][b - 1] != 0:
        tabela[a - 1][b - 1] -= 1
        total += 1

print(total)

