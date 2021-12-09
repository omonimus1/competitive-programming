# https://www.codechef.com/problems/HS08TEST
a,b =input().split()
to_widthdrawn = int(a)
available = float(b)
if (to_widthdrawn %5 ==0) and to_widthdrawn<= available-0.50:
    new_amount = available - to_widthdrawn - 0.50
    print(round(new_amount, 2))
else:
    print(available)