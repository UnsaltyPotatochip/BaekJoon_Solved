# 백준 11399 - ATM
N = int(input(""))
tmp = input("")
P = list(map(int, tmp.split()))

# 각 사람이 돈을 인출하는데 걸리는 시간의 합의 최솟값
def swap(front, second):
    buff = front
    front = second
    second = buff
    return front, second

flag = 0
block = N - 1
for i in range(N):
    flag = 0
    for j in range(block):
        if P[j] > P[j + 1]:
            P[j], P[j + 1] = swap(P[j], P[j + 1])
            flag += 1
    block -= 1
    if flag == 0:
        break

for i in range(N):
    if i != 0:
        P[i] += P[i-1]
    else:
        continue

result = sum(P)
print(result)
