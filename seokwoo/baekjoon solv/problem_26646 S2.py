n = int(input())
high = list(map(int, input().split(" ")))
len = 0
hi = 0

for i in range(n-1):
    len += (high[i] + high[i+1])**2
    print(len)
    hi += (high[i]-high[i+1])**2
    print(hi)
print(len + hi)

# 1. 인덱스차이 -> 높이차이
# 2. 값차이 -> 길이차이
#. 산이 3개라면 노선은 총 2개가 된다. -> N개라면 N-1개가 노선의 길이 되게됨
#. 각 노선의 길이를 구하는 방법
# 그냥 값차이를 빼서 제곱한거 + 높이차이를 빼서 제곱한거 를 더해주면 값이 나오게 될듯