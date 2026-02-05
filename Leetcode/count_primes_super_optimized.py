# https://leetcode.com/problems/count-primes/submissions/
class Solution:
    def countPrimes(self, n: int) -> int:
        if n < 2:
            return 0

        # Step 1: assume all numbers are prime
        is_prime = [True] * n # set all is_prime to true
        is_prime[0] = is_prime[1] = False

        # Step 2: eliminate multiples
        p = 2
        while p * p < n:
            if is_prime[p]:
                #“When p is still marked as prime, we use it to eliminate all of its multiples.
                # We start from p² because smaller multiples were already handled by smaller primes.
                # This way, every composite number is eliminated exactly once, which makes the sieve efficient.”
                for multiple in range(p * p, n, p): # increment by P, to indeed hit the multiplers.
                    is_prime[multiple] = False # it skips all numbers that can be divided by the prime number.
            p += 1

        # Step 3: count what remains
        return sum(is_prime) # count just the True elements in the arrays.
