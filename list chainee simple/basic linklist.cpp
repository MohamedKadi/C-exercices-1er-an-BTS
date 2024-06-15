#include<time.h>
#include<stdlib.h>
#include<stdio.h>

struct node{
    int value;
    struct node* next; //Pointer to the next element in the list
};


int main()
{
    srand(time(NULL)); // set the random seed
    struct node *root; // declare a pointer that we will use to denote the start of the LL      

    root = (struct node *) malloc( sizeof(struct node) ); // allocated enough memory for the structure.  Make root point to this memory.
    root->next = NULL;   // root has no next element so we set next to null
    root->value = 4; // pick some value to store 


    // Lets make a list of random length between 6-10 nodes
    int size = rand() % 5 + 6; // rand()%5 returns a random number between 0 and 4.  + 6 shifts the range so new range is 6-10
    struct node* cur = root; // this will point to the last node in our list

    while(size-->0){
        cur->next = (struct node *) malloc( sizeof(struct node) );  // same as above, allocated memory for the structure
        cur = cur->next; // Since we just added a new node to the end update cur to be the end
        cur->value = rand() % 10 + 10; // some arbitrary data 
        cur->next = NULL; //Set next to null in new node
    }

    cur = root; //use cur to point to start of LL
    int i;
    for(i=0;cur;cur = cur->next){  // while the pointer cur is nonNull, continue loop
        printf("Node %d has value of %d\n", i++,cur->value);
    }
    // cleanup
    cur = root;
    while(cur)
   { 
        struct node* tmp = cur->next;
        free(cur);
        cur = tmp;
   }           
   return 0;
}
