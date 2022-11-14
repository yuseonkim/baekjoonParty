n = int(input())

num = list(map(int, input().split()))

arr = [min(num[0], num[5]), min(num[1], num[4]), min(num[2], num[3])]
arr = sorted(arr)


if n>1:
    print(4*(arr[0]+arr[1]+arr[2])+(8*n-12)*(arr[0]+arr[1])+(5*n*n-16*n+12)*arr[0])
else:
    print(sum(num)-max(num))
    
# 주사위의 합을 3개로 나눠어서 품
# 임의의 주사위에 3가지 종류의 합이 몇가지 나오는지 계산하고 그걸로 품
