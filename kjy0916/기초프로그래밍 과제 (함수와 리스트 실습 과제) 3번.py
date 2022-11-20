#문장이 들어오면, 각 단어를 공백 단위로 분할하고 각 단어와 단어의 개수를 리스트에 담아 반환하는 함수를 만드시오.

def word_count(S):
    S_split = S.split() #문자열을 공백을 기준으로 나누기
    L = [] #결과값 저장하기 위한 빈 리스트
    for i in range(len(S_split)): 
        k = 0
        for j in range(i):
            if S_split[j] == S_split[i]: #만약 이전 단어와 같은 단어라면
                k += 1 #k에 1을 더한다
        if k == 0: #한 번이라도 겹쳤던 단어: k!=0, 처음 등장한 단어: k=0
            L.append(S_split[i]) #단어를 결과값에 추가
            L.append(S_split.count(S_split[i])) #단어의 개수를 결과값에 추가
    return L

S = input()
print(word_count(S))
