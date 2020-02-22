/*
    Author: Davide Pollicino 
    Date: 05/02/2022
    Summary: Implement the most common APIs of an Hashtable (insert, display and search )
    Source: TutorialPoint.com/
*/

#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include <stdbool.h>

#define SIZE 20

struct DataItem
{
    int data;
    int key; 
};

struct DataItem * hashArray[SIZE];
struct DataItem * dummyItem; 
struct DataItem * item; 


int hashCode(int key)
{
    return key % SIZE;
}

struct DataItem * search (int key)
{
    // Get the has
    int hashIndex = hashCode(key);

    //Iterate the array until it's empty
    while (hashArray[hashIndex] != NULL)
    {
        if(hashArray[hashIndex]->key == key)
            return hashArray[hashIndex];

        // go to next array element
        ++hashIndex;

        hashIndex %= SIZE; 
    }
    return NULL; 
}

void insert(int key, int data)
{
    struct DataItem * item = (struct DataItem*) malloc(sizeof(struct DataItem));
    item->data  = data;
    item->key = key; 

    //get the has 
    int hashIndex = hashCode(key);

    // Iterate the array 
    while(hashArray[hashIndex] != NULL && hashArray[hashIndex] -> key != -1)
    {
        // Go to next element
        ++hashIndex;

        hashIndex %= SIZE; 
    }
    hashArray[hashIndex] = item; 
}


void display() {
   int i = 0;
	
   for(i = 0; i<SIZE; i++) {
	
      if(hashArray[i] != NULL)
         printf(" (%d,%d)",hashArray[i]->key,hashArray[i]->data);
      else
         printf(" ~~ ");
   }
	
   printf("\n");
}

int main() {
   dummyItem = (struct DataItem*) malloc(sizeof(struct DataItem));
   dummyItem->data = -1;  
   dummyItem->key = -1; 

   insert(2, 32);
   insert(3, 43);
   insert(42, 665);
   insert(45, 98);
   insert(4, 23);
   insert(55, 11);
   insert(67, 23);
   insert(22, 3);
   insert(31, 97);

   display();
   item = search(37);

   if(item != NULL) {
      printf("Element found: %d\n", item->data);
   } else {
      printf("Element not found\n");
   }

  
   item = search(37);

   if(item != NULL) {
      printf("Element found: %d\n", item->data);
   } else {
      printf("Element not found\n");
   }
}
