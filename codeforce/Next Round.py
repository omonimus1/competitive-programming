n,k = map(int,input().split())
l = list(input().split())
c = 0
for i in l :
    if  int(i)!= 0 and int(i)>=int(l[k-1]) :
        c=c+1
print(c)
