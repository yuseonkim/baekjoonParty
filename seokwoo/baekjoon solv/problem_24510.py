# Problem_24510
import sys

#  같은게 있는지 확인하는 함수 
def check(number):
    sort_array = [0]*10
    number_str = str(number) # 숫자를 문자열로 반환
    number_len = len(number_str) # 숫자의 길이 반환
    for i in range(number_len):
        sort_array[int(number_str[i])] += 1
    if max(sort_array) <2:
        return number # 
    else:
        return 0
# n번째 반복숫자 없는 수~
def repeat(num):
    anw = []
    i = 0
    while(len(anw) <= num-1): # 입력한 값의 인덱스만큼까지 append
        if check(i) != 0:
            anw.append(i)
        i +=1
    return anw

while True:
    n = int(sys.stdin.readline())
    if(n!=0):
        print(repeat(n)[-1])
    else:
        break




# 각 수마다 반복이 있는지 없는지를 체크해야한다.
# for문으로 범위를 얼만큼 정해야 할지 모르겠음
# 배열에다가 추가하는 식으로 하고 while로 해서 길이가 특정값을 넘으면 끝나도록?

# 1. 0~9 까지의 리스트를 만들어서 각 인덱스마다 그 값이 있으면 1을 추가
# 2. max값이 2 이상이면 제외