n = int(input())

num = list(map(int, input().split()))

arr = [min(num[0], num[5]), min(num[1], num[4]), min(num[2], num[3])]
arr = sorted(arr)


if n>1:
    print(4*(arr[0]+arr[1]+arr[2])+(8*n-12)*(arr[0]+arr[1])+(5*n*n-16*n+12)*arr[0])
else:
    print(sum(num)-max(num))
    
# 주사위의 합을 3가지 종류로 나눠서 각 임의의 크기에 생기는 종류를 곱해서 계산함
