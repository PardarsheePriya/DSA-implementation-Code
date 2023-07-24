#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
 
void main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    
    struct node *head;
    head = NULL;
    
    
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp -> data = 2;
    temp -> next = NULL;
    head = temp;
    printf("%d", head->data);
    
}
    


