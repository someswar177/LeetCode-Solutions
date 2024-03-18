class Solution:
    def reverse(self, x: int) -> int:
        reversed_num = 0
        negative = x < 0
        if negative:
            x = -x

        while x != 0:
            if reversed_num > (2**31-1) // 10:
                return 0
            digit = x % 10
            reversed_num = (reversed_num*10) + digit
            x = x // 10
        if negative:
            reversed_num = -reversed_num
        return reversed_num

        