import sys

n = int(input())
n_list = [0] *10001
for i in range(n):
    n_list[int(sys.stdin.readline())] += 1
for i in range(10001):
    if n_list[i] != 0:
            for j in range(n_list[i]):
                print(i)

# 알게 된 점 !!
# 입력 개수를 보고 시간제한, 메모리 제한을 야물딱지게 생각해놔야함!
# 1. 숫자의 입력범위가 그렇게 크지 않다는 것(메모리제한)
# 2. 정렬을 해야하고 숫자의 개수가 중복이 된다는 것
# 그래서 counting sort 알고리즘을 써야한다!
