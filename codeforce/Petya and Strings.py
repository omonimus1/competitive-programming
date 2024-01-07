def retur(s1,s2):
     if s1 > s2:
          return 1
     elif s1 < s2:
          return -1
     else:
          return 0

st1 = str(input().lower())
st2 = str(input().lower())
print(retur(st1,st2))
