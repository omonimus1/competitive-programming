a = input()
b = input()
Nn = ''
for i in range(len(a)):
    if a[i] != b[i]:
        Nn = Nn+'1'
    else:
         Nn = Nn+'0'
print(Nn)
        
