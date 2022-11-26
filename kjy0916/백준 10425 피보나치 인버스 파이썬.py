#10425 피보나치 인버스

T = int(input())
fib = [0, 1, 1]
for _ in range(T):
    Fn = int(input())
    if Fn == 1:
        print(2)
    elif Fn == 0:
        print(0)
    while Fn > 1:
        fib.append(fib[-1]+fib[-2])
        if fib[-1] == Fn:
            print(len(fib)-1)
            break
'''
처음엔 함수 만들어서 함수값이랑 출력값이랑 같을 때의 n값을 출력하는 코드를 짰는데 시간 초과가 떴다
근데 이렇게 하니까 되네...
이유 아는 사람!!
'''
