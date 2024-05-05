# 백준 2750 - 수 정렬하기
N = int(input(""))
arr = list()
for i in range(N):
    tmp = int(input(""))
    arr.append(tmp)

for i in range(N):
    flag = 0
    for j in range(N-1):
        # swap
        if arr[j] > arr[j+1]:
            arr[j], arr[j+1] = arr[j+1], arr[j]
            flag += 1
    # 해당 서클에서 단 한번도 swap이 일어나지 않았다면 이미 정렬이 끝났다고 볼 수 있다.
    if flag == 0:
        break

for i in range(N):
    print(arr[i])