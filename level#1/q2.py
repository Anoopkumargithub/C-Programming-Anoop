n = int(input())
b = 1
c = 0
if n%2==0:
    for i in range(1,n+1):
        c = c+i
    print(c)
else:
    for i in range(1,n+1):
        b = b*i
    print(b)