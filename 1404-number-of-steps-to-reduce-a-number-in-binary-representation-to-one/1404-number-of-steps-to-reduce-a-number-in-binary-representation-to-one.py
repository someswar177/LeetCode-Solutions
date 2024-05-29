class Solution:
    def numSteps(self, s: str) -> int:
        length = len(s)
        value = 0
        step = 0
        for i in range(length):
            digit = int(s[i]) * (2 ** (length - i - 1))
            value += digit
        while  value!=1:
            if value%2 == 0:
                value //= 2
            else:
                value += 1
            step += 1
            
        return step
            