size = int(input())
num = list(input().split())
l=[]
for i in range(1,size+1):
    l.append(int(num.index(str(i)))+1)

print(*l,end=" ")
    
