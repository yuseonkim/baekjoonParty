n = int(input())

num = list(map(int, input().split()))

arr = [min(num[0], num[5]), min(num[1], num[4]), min(num[2], num[3])]
arr = sorted(arr)


if n>1:
    print(4*(arr[0]+arr[1]+arr[2])+(8*n-12)*(arr[0]+arr[1])+(5*n*n-16*n+12)*arr[0])
else:
    print(sum(num)-max(num))
