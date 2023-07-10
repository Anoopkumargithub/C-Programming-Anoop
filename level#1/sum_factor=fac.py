n = int(input())
b = 1
c = 0
for i in range(1,n+1):
    if n%i==0:
        c = c+i
for i in range(1,n+1):
    b = b*i
if b==c:
    print("Sum of all Factor is equal to factorial")
else:
    print("error")