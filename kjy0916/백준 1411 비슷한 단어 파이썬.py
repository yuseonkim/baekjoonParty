#1411 비슷한 단어

N = int(input())

syom = []

for _ in range(N):
    syom.append(list(input()))

for i in range(N):
    syomdict = {} #숌 딕셔너리
    syomplus = 0 #더할 거
    for j in range(len(syom[i])):
        try:
            syom[i][j] = syomdict[syom[i][j]]
        except:
            syomdict[syom[i][j]] = syomplus
            syomplus += 1
            syom[i][j] = syomdict[syom[i][j]]

res = 0
for i in range(N): #숌 하나 지정
    if i+1 <= N: #마지막 번호가 아니면
        for j in range(i+1, N): #다음 숌 중 겹치는 거 ㅇㅅ으면
            if syom[i] == syom[j]:
                res += 1
print(res)
