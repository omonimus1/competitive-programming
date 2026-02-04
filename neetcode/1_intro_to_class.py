# https://neetcode.io/problems/python-intro-to-classes/question
# In Python, self represents the instance of the class.
# Classes are template for creating objects. Objects are instances of a class, and they represent real-world entities in code.
# allowing new instances of that type to be made. Each class instance can have attributes attached to it for maintaining its state. Class instances can also have methods (defined by its class) for modifying its state.
class Pet:
    def __init__(self, name:str, species:str):
        self.name = name
        self.species = species

# Do not modify below this line
my_pet = Pet("Fluffy", "cat")
print(f"My pet is a {my_pet.species} named {my_pet.name}")
