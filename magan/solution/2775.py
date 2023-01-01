import sys
input = sys.stdin.readline

dic = {
    (0, 1): 1,
    (0, 2): 2,
    (0, 3): 3,
    (0, 4): 4,
    (0, 5): 5,
    (0, 6): 6,
    (0, 7): 7,
    (0, 8): 8,
    (0, 9): 9,
    (0, 10): 10,
    (0, 11): 11,
    (0, 12): 12,
    (0, 13): 13,
    (0, 14): 14
}

def answer(k, n):
    if n == 1:
        return 1
    if k == 0:
        return n
    if (k, n) not in dic:
        dic[(k, n-1)] = dic.get((k, n-1)) or answer(k, n-1)
        dic[(k-1, n)] = dic.get((k-1, n)) or answer(k-1, n)
        dic[(k, n)] = dic[(k, n-1)] + dic[(k-1, n)]
    return dic[(k, n)]

T = int(input().strip())

for i in range(T):
    k = int(input().strip())
    n = int(input().strip())
    print(answer(k, n))