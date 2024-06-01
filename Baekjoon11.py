# 백준 1427 - 소트인사이드
import sys

N = sys.stdin.readline()

N = sorted(N)
N.pop(0)
N.reverse()

for i in range(len(N)):
    print(N[i], end="")