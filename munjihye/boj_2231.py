n = int(input())

result =0
for i in range(1,n+1):
  a = list(map(int, str(i)))  # str 함수로 i의 각 자리 수 리스트에 넣기
  result = i+sum(a)  # 그대로인 값 i와 각 자리수가 들어간 a 리스트의 합 더하기
  if result == n:
    print(i)
    break

  if i==n:  # 생성자가 없는경우
    print(0)
