import sys
input = sys.stdin.readline

fibo_dic = {
    0: 0,
    1: 1,
}

def fibo(n):
    if n < 2:
        return n
    if n not in fibo_dic:
        n1 = fibo_dic.get(n-1) or fibo(n-1)
        n2 = fibo_dic.get(n-2) or fibo(n-2)
        fibo_dic[n] = n1 + n2
    return fibo_dic[n]

print(fibo(int(input().strip())))