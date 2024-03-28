# 백준 11720 - 숫자의 합
tmp = 0
N = int(input(""))
num_list = list(input())
for i in range(N):
    tmp += int(num_list[i])
print(tmp)