k,n,w=map(int,input().split())
price = 0
for i in range(1,w+1):
    price = price+i*k
if price>n: 
    print(price-n)
else:
    print(0)
