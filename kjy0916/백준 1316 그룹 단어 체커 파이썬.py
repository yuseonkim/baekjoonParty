#1316 그룹 단어 체커

'''
단어 내에서
현재 알파벳과 다음 알파벳이 일치하지 않으면 리스트에 추가하고
일치하면 추가하지 않는다
그리고 마지막에 해당 리스트를 집합으로 만들어 리스트와 집합의 길이를 비교했을 때
길이가 같으면 그룹 단어이고, 다르면 그룹 단어가 아니다
'''

N = int(input())
group_word = 0
for _ in range(N):
    word = list(input())
    alp = []
    if len(word) == 1: #단어의 길이가 1일 경우는 무조건 그룹 단어
        group_word += 1
    else:
        alp.append(word[0])
        for i in range(len(word)-1): 
            if word[i] != word[i+1]: #현재 알파벳과 다음 알파벳이 일치하지 않으면
                alp.append(word[i+1]) #리스트에 추가
        if len(alp) == len(set(alp)): #리스트의 길이와 집합의 길이 비교
            group_word += 1
print(group_word)

'''
현재 코드는 첫 알파벳을 리스트에 추가하고,
for문 안에서 i+1에 해당하는 알파벳을 리스트에 추가하는 코드이지만,
처음엔 (첫 알파벳을 추가하지 않고) for문에서 i에 해당하는 알파벳을 리스트에 추가하고,
i가 마지막일 경우에 (알파벳이 일치하지 않으면) 마지막 알파벳도 추가해주는 코드였는데
aaaaaaabbbbbbbbbbaaaaaaa 같은 단어가 들어갈 경우 그룹 단어라고 인식해서 코드를 수정했다
다시 생각해보니 처음 코드대로라면 뒷 부분의 a가 리스트에 저장이 안 되어 틀릴만했다...
'''
