# https://neetcode.io/problems/python-object-attributes/question
class Pet:
    def __init__(self, name: str, species: str, hunger: int, energy: int):
        self.name = name
        self.species = species
        self.hunger = hunger
        self.energy = energy

whiskers = Pet("Whiskers", "cat", 6, 8)

print(f"Initial Attributes: Whiskers (cat) - Hunger: {whiskers.hunger}, Energy: {whiskers.energy}")    
#  - Decrease hunger by 3
#  - Increase energy by 2
whiskers.hunger -=3
whiskers.energy += 2
print(f"Modified Attributes: Whiskers (cat) - Hunger: {whiskers.hunger}, Energy: {whiskers.energy}")    
