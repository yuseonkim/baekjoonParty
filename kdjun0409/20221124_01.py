class Cat():
    def __init__(self, name, color):
        self.name = name
        self.color = color
    def meow(self, count):
        try:
            count = int(input('야옹거릴 횟수 : '))
        except:
            print('숫자를 입력하세요')
            return self.meow(n)     #일반적인 def구문의 return은 return meow()를 하지만, class 안의 def는 method로 생각하여
        print('야옹야옹 '*count)       # self.meow(n)으로 표현해주어야한다.


nabi = Cat('레오','흰색')
print(nabi.name)
print(nabi.color)
n=0
nabi.meow(n)    #n을 넣지않고 아무 정수나 넣고해도, meow안에서 다시 count를 설정하기 떄문에 상관없음.

def counting(n):
    try:
        n = int(input('counting count : '))
    except:
        print('숫자를 입력하세요')
        return counting(n)
    print('count '*n)

counting(n)



