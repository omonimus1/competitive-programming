class Person:
    def __init__(self):
        # Private attributes
        self.__name = "Geeks"  # Private
        self.__age = 10         # Private

    # --------------------
    # PUBLIC methods
    # --------------------
    def get_name(self):
        """Public getter for name"""
        return self.__name

    def get_age(self):
        """Public getter for age"""
        return self.__age

    def set_name(self, name):
        """Public setter for name"""
        self.__name = name

    def set_age(self, age):
        """Public setter for age"""
        if self.__is_valid_age(age):  # Calls private method internally
            self.__age = age
            self.__log_change()       # Calls private method internally

    # --------------------
    # PROTECTED methods (convention: single underscore)
    # --------------------
    def _debug_info(self):
        """Protected method for internal debugging"""
        return f"Name: {self.__name}, Age: {self.__age}"

    # --------------------
    # PRIVATE methods (name-mangled, double underscore)
    # --------------------
    def __is_valid_age(self, age):
        """Private helper to validate age"""
        return age >= 0

    def __log_change(self):
        """Private helper to log changes"""
        print("Age updated")
