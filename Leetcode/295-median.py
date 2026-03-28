# https://leetcode.com/problems/find-median-from-data-stream/description/?envType=problem-list-v2&envId=sorting&
class MedianFinder:

    def __init__(self):
        self.numbers = []
        

    def addNum(self, num: int) -> None:
        self.numbers.append(num)

    def findMedian(self) -> float:
        self.numbers.sort() # Key here, to find the median -> Of course, we can sort it into a dedicated method, or when adding a number - up to you
        number_of_elements = len(self.numbers)
        # print(str(number_of_elements))
        # print(self.numbers)
        if number_of_elements % 2 == 0:
            #  If the size of the list is even, there is no middle value, and the median is the mean of the two middle values.
            middle_index = number_of_elements  // 2 -1
            #print('middle index: ',str(middle_index))
            median = (self.numbers[middle_index] + self.numbers[middle_index+1]) /2
            # print(str(median))
            return median
        else:
            median = self.numbers[number_of_elements // 2] 
            # print('median: ',str(median))
            return median

        


# Your MedianFinder object will be instantiated and called as such:
# obj = MedianFinder()
# obj.addNum(num)
# param_2 = obj.findMedian()
