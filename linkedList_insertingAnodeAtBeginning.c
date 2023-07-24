#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node
{
  int data;
  struct node* next;
};

struct node* head;      //global variable


void insert(int x){
  struct node* temp = (struct node*)malloc(sizeof(struct node));
  temp -> data = x;
  temp -> next = head;
  head = temp;

}

void print(){
  struct node *temp = head;
  while(temp != NULL){

    printf("%d", temp ->data);
    temp = temp -> next;

  }
  printf("\n");

}

int main(){
  head = NULL;
  printf("How many numbers you want to insert? \n");
  int n, x, i;
  scanf("%d", &n);
  for ( i = 0; i < n; i++)
  {
    printf("Enter the number \n");
    scanf("%d", &x);
    insert(x);
    print();

    
  }
  
return 0;
}
