n,h = map(int,input().split())
a = list(input().split())
w = 0
for i in a :
    if int(i) > h:
        w = w+2
    else:
        w = w+1
print(w)
