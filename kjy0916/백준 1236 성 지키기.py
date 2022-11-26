#1236 성 지키기
'''
행에 경비원이 없으면
경비원이 없는 열에 경비원을 배치하기
'''
N, M = map(int, input().split()) #N세로, M가로
castle = []
res = 0
for _ in range(N): #y, x = N, M
    castle.append(list(input()))

for i in range(N): #행 선택
    if 'X' not in castle[i]: #경비원 없으면
        for j in range(M): #열 선택
            x = 0
            for k in range(N): #행 선택
                if castle[k][j] == 'X': #K행의 J열이 X면
                    x = 1
                    break
            if x == 0: 
                castle[i][j] = 'X'
                res += 1
                break
        if 'X' not in castle[i]:
            castle[i][j] = 'X'
            res += 1

'''
위의 코드를 작성하다 보니
행에는 경비원이 있으나 열에는 없는 경우는 고려하지 못한 걸 알게 되어
행에는 경비원이 있고 열에는 없는 경우에 대한 코드 작성
'''
for i in range(M): #열
    x = 0
    for j in range(N): #행
        if castle[j][i] == 'X':
            x = 1
            break
    if x == 0:
        res += 1

print(res)
