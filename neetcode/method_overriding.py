#User function Template for python3
# Implement Employee and SalesEmployee class

class Employee:
    def __init__(self, id, salary):
        self.id = id
        self.salary = salary

    def get_info(self):
        return f"EmployeeID:{self.id} Salary:{self.salary}"


class SalesEmployee(Employee):
    def __init__(self, id, salary, sales=0):
        super().__init__(id, salary)
        self.sales = sales

    def get_info(self):
        return f"EmployeeID:{self.id} Salary:{self.salary} Sales:{self.sales}"
