t = int(input())
l = []
for i in range(t):
     a,b = map(str,input().split())
     b = list(b)
     s = 0
     for i in b :
          s = s+int(i)
     if s%2 == 0:
          l.append(a)
print(*l,sep='\n')
