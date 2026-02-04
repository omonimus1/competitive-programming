# https://leetcode.com/problems/two-sum-iii-data-structure-design/description/?envType=problem-list-v2&envId=two-pointers&
class TwoSum:
    def __init__(self):
        self.numbers = []

    def add(self, number: int) -> None:
        # add the number to the array
        self.numbers.append(number)
        # sort the array
        self.numbers.sort()

    def find(self, value: int) -> bool:
        size = len(self.numbers)
        # print(str(size))
        if size <=1:
            return False

        # value = target
        low = 0
        high = size-1

        while low < high:
            # print(str(self.numbers[low]), '---', str(self.numbers[high]))
            if self.numbers[low]+self.numbers[high] == value:
                return True
            elif self.numbers[low]+self.numbers[high] > value:
                high-=1
            else:
                low+=1
        return False

# Your TwoSum object will be instantiated and called as such:
# obj = TwoSum()
# obj.add(number)
# param_2 = obj.find(value)
