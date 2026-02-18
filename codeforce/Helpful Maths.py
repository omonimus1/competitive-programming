word = input()
l = []
if len(word) <= 1:
    print(word)
else:
    for i in word:
        if i.isdigit():
            l.append(int(i))

    N_word = ""
    l.sort()
    for k in l  :
        N_word = N_word + '+' + str(k)

    print(N_word[1:])
    
