#  백준 2427


n = int(input())
start = 0
end = 3037000500
answer = 0
a = False

while start < end:
    mid = (start + end) // 2
    if mid**2 > n:
        end = mid - 1
    elif mid **2 <n:
        start = mid +1
    else:
        answer = mid
        a = True
        break
if a == False:
    if end*end < n:
        answer = end +1
    else:
        answer = end
print(answer)

# 이분 탐색을 쓰는 이유 
#  - n을 1부터 증가해서 찾으면 시간제한에 걸리게 된다.
# end를 3037000500으로 잡은 이유
#  - 입력값의 제한이 2^63이기 때문에 최대값의 제곱근을 end값으로 잡았다
#  마지막 if문을 쓰는 이유
#  - while문을 다돌게 되면 end에 제곱근과 근접한 값이 들어가기 때문에 답으로 넣어야함
