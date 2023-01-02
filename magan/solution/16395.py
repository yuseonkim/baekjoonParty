import sys
input = sys.stdin.readline

n, k = map(int, input().strip().split())
dic = { 1: 1, 2: 1, 3: 1}

def answer(n, k):
    if k == 1 or n == k:
        return 1
    index = n * (n-1) // 2 + k
    if index not in dic:
        n1 = answer(n-1, k)
        n2 = answer(n-1, k-1)
        dic[index] = n1 + n2
    return dic[index]

print(answer(n, k))