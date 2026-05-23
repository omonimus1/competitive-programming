def get_dis(s):
    return len(set(s))-4
s = input()
if len(s) == 2:
    print(0)
else:
    print(abs(get_dis(s)))
