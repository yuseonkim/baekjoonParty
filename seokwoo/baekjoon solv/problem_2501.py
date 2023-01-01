n, m = map(int, input().split(" "))
yak = []
for i in range(1,(n//2)+1):
    if n %i == 0:
        yak.append(i)
yak.append(n)
if len(yak) < m:
    print(0)
else:
    print(yak[m-1])