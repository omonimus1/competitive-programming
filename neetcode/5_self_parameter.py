# https://neetcode.io/problems/python-self-parameter/question
class SuperHero:
    def __init__(self, name: str, power: str, strength: int):
        self.name = name
        self.power = power
        self.strength = strength
    
    def power_boost(self, strength_increase: int) -> None:
        self.strength += strength_increase
        print(f"{self.name}'s strength increased to {self.strength}!")

ironman = SuperHero("Iron Man", "Repulsor Beams", 85)
ironman.power_boost(15)
