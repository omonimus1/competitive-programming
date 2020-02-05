/*
    Author: Davide Pollicino 
    Date: 05/02/2022
    Summary: Implement the most common APIs of an Hashtable (insert, delete and search)
*/

void display(void)
{
    for (int i=0; i< SIZE; i++)
    {
        if(hashArray[i] != NULL)
            printf(" (%d,%d)" , hashArray[i]-> key , hashArray[i] ->data);
        else
            printf(" -,- ");
    }
    printf("\n");
}

int hashCode(int key)
{
    return key % SIZE;
}

void insert(int key , int data)
{
    struct DataItem *item = (struct DataIteam*) malloc(sizeof(struct DataIteam));
    item -> data = data;
    item ->key = key; 

    int hashIndex = hashCode(key);
    while(hashArray[hashIndex] != NULL && hashArray[hashIndex] -> key != -1)
    {
        ++hashIndex;
        hashIndex %= SIZE; 
    }
    hashArray[hashIndex] = item;
    
}

