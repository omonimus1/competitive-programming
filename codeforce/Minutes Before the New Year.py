n = int(input())
t = 1440
l = []
for i in range(n):
     h,m = map(int,input().split())
     z = (h*60)+m
     a = t-z
     l.append(a)
print(*l,sep='\n')S
