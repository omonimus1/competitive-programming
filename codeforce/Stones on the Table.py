n = int(input())
s = input()
x = 0
for i in range(0,n-1):
    if s[i] == s[i+1]:
        x = x+1
print(x)
        
