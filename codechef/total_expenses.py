# https://www.codechef.com/submit/FLOW009
for i in range(int(input())):
    quantity,price = map(int, input().split())
    total = quantity*price
    if quantity <= 1000:
        print(total)
    else:
        discounted = total-(total*10/100)
        print(discounted)