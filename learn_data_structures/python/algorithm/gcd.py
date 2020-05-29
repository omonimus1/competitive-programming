"""
Having Two numbers, a and b, find the GCD(Greatst Common denominator)
"""

def gcd(a,b):
    while(b != 0):
        temporary = a
        a = b
        b = temporary % b
    return a


# Try out the function with few examples
print(gcd(60, 96))  # Should be 12
print(gcd(20,8))    # Shoudl be 4 