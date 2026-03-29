# https://leetcode.com/problems/design-parking-system/?envType=study-plan-v2&envId=programming-skills
class ParkingSystem:

    def __init__(self, big: int, medium: int, small: int):
        self.slots = {
            1: big,
            2: medium,
            3: small
        }

    def addCar(self, carType: int) -> bool:
        if self.slots[carType] > 0:
            self.slots[carType] -= 1
            return True
        return False
