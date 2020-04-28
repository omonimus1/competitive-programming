// https://practice.geeksforgeeks.org/problems/swap-the-objects/1/
void swapper(Person **obj1, Person **obj2)
{
    //Your code here
    Person *temp = new Person; 
    temp = *obj1; 
    *obj1 = *obj2;
    *obj2 = temp;
}