class Solution:
    def reverse(self, x: int) -> int:
        is_negative = x < 0
        s = str(abs(x))[::-1]
        reverse_num = int(s)

        if is_negative:
            reverse_num = -reverse_num
        if reverse_num < -(2**31) or reverse_num > 2**31 - 1:
            return 0
        return reverse_num
        