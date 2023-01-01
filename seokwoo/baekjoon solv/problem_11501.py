'''import sys
test_case = int(sys.stdin.readline())

def find_max(stock_list):
    stock_index = stock_list.index(max(stock_list))
    money_s= 0
    count = 0
    if stock_index == 0:
        del stock_list[0]
    else:
        for i in stock_list[:stock_index]:
            money_s -= i
            count += 1
            del stock_list[0]
        money_s += stock_list[0] * count
        del stock_list[0]
    return money_s, stock_list

for _ in range(test_case):
    days = int(sys.stdin.readline())
    stock_list = list(map(int, sys.stdin.readline().split(" ")))

    total_money = 0
    while(True):
        if len(stock_list) == 0 or len(stock_list) == 1:
            break
        money, stock_list = find_max(stock_list)
        total_money += money
        
    print(total_money)'''
test_case = int(input())

for _ in range(test_case):
    days = int(input())
    stock_list = list(map(int, input().split(" ")))
    stock_list_rev = stock_list[::-1]
    stock_max = stock_list_rev[0]
    money = 0
    for i in range(1, days):
        if stock_max < stock_list_rev[i]:
            stock_max = stock_list_rev[i]
            continue
        else:
            money += (stock_max - stock_list_rev[i])
    print(money)


# 위에 주석인 코드는 시간초과로 인해 사용불가
# a.index(max(a)) 이런식으로 최대값의 인덱스를 찾는 코드는 시간이 오래걸리게 된다
# 그래서 list에서 0번쨰 index의 값을 최대로 설정한 후 하나씩 비교하면서 최대값을 수정하면 된다.
#  