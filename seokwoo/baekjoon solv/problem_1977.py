m = int(input())
n = int(input())
k = False

jegop = []
for i in range(m,n+1):
    if (i**0.5)%1 == 0:
        jegop.append(i)
        k = True

if k:
    sum = 0
    for i in jegop:
        sum += i
    print(sum)
    print(min(jegop))
else:
    print(-1)
