# Author: Davide POllicino 
# Date: 06/02/2020


def print_result(result):
    if result:
        print("True")
    else:
        print("False")

if __name__ == '__main__':
    s = raw_input()

    for x in s:
        isAlphanumeric = False
        if not x.isalnum():
            continue
        else:
            isAlphanumeric = True
            break
    print_result(isAlphanumeric)


    for x in s:
        isAlphabetic = False
        if not x.isalpha():
            continue
        else:
            isAlphabetic = True
            break
    print_result(isAlphabetic)
    
    
    for x in s:
        is_digit = False
        if not x.isdigit():
            continue
        else:
            is_digit = True
            break
    print_result(is_digit) 
    

    for x in s:
        is_low = False
        if not x.islower():
            continue
        else:
            is_low = True
            break
    print_result(is_low)

    for x in s:
        is_up = False
        if not x.isupper():
            continue
        else:
            is_up = True
            break
    print_result(is_up)


