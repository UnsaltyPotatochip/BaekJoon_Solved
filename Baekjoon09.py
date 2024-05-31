# 백준 2751 - 수 정렬하기 2
import sys

N = int(sys.stdin.readline())
arr = []
for i in range(N):
    arr.append(int(sys.stdin.readline()))
result = sorted(arr)

for index in range(N):
    print(result[index])