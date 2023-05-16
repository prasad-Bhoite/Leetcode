class Solution:
    def nthSuperUglyNumber(self, n: int, primes: List[int]) -> int:
        # create a list to store the super ugly numbers, initialize with 1
        super_ugly = [1]
        # create a list to store the indices for each prime number
        idx = [0] * len(primes)
        # create a list to store the product of prime numbers with their corresponding indices
        # this will be used to find the next super ugly number
        prod = [p for p in primes]
        
        # loop until we find the nth super ugly number
        while len(super_ugly) < n:
            # find the minimum value in prod, which will be the next super ugly number
            next_ugly = min(prod)
            # append it to the list of super ugly numbers
            super_ugly.append(next_ugly)
            
            # update the index for each prime number whose product is equal to next_ugly
            for i in range(len(primes)):
                if next_ugly == prod[i]:
                    idx[i] += 1
                    prod[i] = primes[i] * super_ugly[idx[i]]
        
        # return the last element in the list of super ugly numbers, which is the nth super ugly number
        return super_ugly[-1]