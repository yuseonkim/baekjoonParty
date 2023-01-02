import sys
input = sys.stdin.readline


def answer(pair):
    while True:
        if len(pair) == 2:
            return pair
        tmp = ''
        for i in range(len(pair)-1):
            tmp += str(( int(pair[i]) + int(pair[i+1]) ) % 10)
        pair = tmp
    


num1 = input().strip()
num2 = input().strip()
pair = ''

for i in range(len(num1)):
    pair += num1[i] + num2[i]

print(answer(pair))