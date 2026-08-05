n = int(input())
s = ""
for i in range(1,n+1):
     s = s+" "+ "I"
     if i != n:
          if i%2 != 0:
               s = s+" "+ "hate that"
               #print("hate that")
          else:
              s = s+" "+ "love that"
               #print("love that")
     else:
          if n%2 != 0:
               s = s+" "+ "hate"
               #print("hate")
          else:
               s = s+" "+ "love"
               #print("love")
s = s+" "+ "it"
print(s)
               
