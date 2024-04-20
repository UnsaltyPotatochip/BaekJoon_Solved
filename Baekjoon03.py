# 백준 11399 - ATM
N = int(input(""))
tmp = input("")
P = list(map(int, tmp.split()))

# 1초에 2천만번 연산한다고 가정, 제한시간은 1초, 데이터의 최대 크기가 1000이므로 빅-오 표기법에 의해
# 20,000,000 * 1 > 1,000^2 이므로 어떤 정렬을 써도 괜찮다.

# 버블정렬 사용
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
