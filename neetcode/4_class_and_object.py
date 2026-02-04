# https://neetcode.io/problems/python-object-methods/question
class Pet:
    def __init__(self, name: str):
        self.name = name
        self.hunger = 5

    def feed(self):
        self.hunger -=1
        print(f'{self.name} has been fed.')
        print(f"{self.name}'s hunger level: {self.hunger}")
        pass

my_pet = Pet("Fluffy")
for i in range(3):  #  Feed the pet three times
    my_pet.feed()
