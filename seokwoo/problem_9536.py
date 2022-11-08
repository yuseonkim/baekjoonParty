n = int(input())
for _ in range(n):
    sound = list(map(str, input().split(" ")))

    while(True):
        end = list(map(str,input().split(" ")))
        if len(end) == 3:
            while end[2] in sound:
                sound.remove(end[2])
        else:
            for _ in sound:
                print( _ , end=" ")
            break

# 알게된 사실!
# remove함수 : list.remove('지울 문자')를 지워준다
# 근데 하나만 지워주기 때문에 반복문을 써야한다.
# 근데 또 없는데 지우라고 그러면 오류가 뜨게된다.
# 그래서 while '지울문자' in list 써서 조건문을 만들면 된다!