def WTLW(s):
    a = len(s)-2
    return s[0]+str(a)+s[-1]
n = int(input())
for i in range(n):
    w = input()
    if len(w)>10:
        print(WTLW(w))
    else:
        print(w)
    
