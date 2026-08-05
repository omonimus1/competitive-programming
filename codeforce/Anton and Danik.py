n = int(input())
s = input()
if s.count('A')>s.count('D'):
    print("Anton")
if s.count('A')<s.count('D'):
    print('Danik')
if s.count('A') == s.count('D'):
    print('Friendship')
