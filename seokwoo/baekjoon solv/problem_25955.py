n = int(input())
li = list(map(str, input().split(" ")))
li_dict = {"B": 0, "S" : 1, "G" : 2, "P" : 3, "D" :4}
new_li = sorted(li, key = lambda x:(li_dict[x[0]], -int(x[1:])))
if li == new_li:
    print("OK")
else:
    print("KO")
    for i in range(n):
        if li[i] != new_li[i]:
            print(new_li[i], end= " ")

# 내가 하고싶은 것 
# sort -> 오름차순으로 정렬을 해주는건데
# 정렬을 특정 규칙에 의해서 정렬을 할 수 있는 방법이 있을까?

# 해결
# 결론 -> 리스트의정렬을 내가 원하는 순서대로 하는방법
# 딕셔너리에 키값을 내가 원하는 순서를 가질 수 있도록 설정하고
# lambda와 sort를 이용하여 내가 원하는 규칙대로 정렬하도록 설정하면 된다.
