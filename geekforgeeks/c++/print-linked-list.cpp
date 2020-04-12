// https://practice.geeksforgeeks.org/problems/print-linked-list-elements/1
void display(Node *head)
{
  //your code goes here
  Node *list_element = head; 
  while(list_element != NULL)
  {
      cout << list_element ->data << " ";
      list_element = list_element ->next; 
  }
}