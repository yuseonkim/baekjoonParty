n = int(input())
word = [] # 단어들을 모아논 2중 리스트
for i in range(n):
    word.append(input())

# 입력받은 단어 중에서 제일 긴 자릿수를 추출한다. word_max
word_max = len(word[0])
print(word[0][1])
for i in word:
    if len(i) >= word_max:
        word_max = len(i)

alp = [' ']*word_max
print(alp)
for i in range(len(word)):
    for j in range(len(word[i])):
        alp[len(alp)-len(word[i])+j] += word[i][j]
strip_alp = []
for i in alp:
    i = i.strip()
    strip_alp.append(i)
print(strip_alp)

anw = {}
for i in range(len(strip_alp)):
    for j in range(len(strip_alp[i])):
        anw.setdefault(strip_alp[i][j])
for i in range(len(strip_alp)):
    for j in range(len(strip_alp[i])):
        anw[strip_alp[i][j]] += 10**(len(strip_alp)-i)
print(anw)

# 원소 하나씩 접근해서 그 값 하나를 dict로 만들고 key를 넣게한다.

