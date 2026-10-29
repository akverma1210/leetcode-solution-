class Solution:
    def checkPerfectNumber(self, num: int) -> bool:
        if num <= 1:
            return False
        sum_of_divisors = 1
        i = 2
        while i * i <= num:
            if num % i == 0:
                if i * i == num:
                    sum_of_divisors += i
                else:
                    sum_of_divisors += i + (num // i) #i can write here sum_of_diviors as total both will run.

            i += 1

        return  sum_of_divisors == num




        