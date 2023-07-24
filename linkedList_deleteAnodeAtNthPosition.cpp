#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
struct node
{
  int data;
  struct node* next;
};

void insert(struct node*& head, int x){
    if(head == NULL) {
        head = new node();
        head->data = x;
        head->next = NULL;
        return;
    }
    
    
    node* tmp = new node();
    tmp->data = x;
    tmp->next = NULL;
    
    node* curr = head;
    
    while(curr->next != NULL) {
        curr = curr->next;
    }
    
    curr->next = tmp;
    
    tmp = NULL;

}

void print(node* head){
  node* temp = head;
  cout << "The list is: ";
  while(temp != NULL){
    cout<< temp -> data;
    temp = temp -> next;
  }
}



void deletes(node* head, int n){
    node* temp1 = head;
    if(n == 1){
        head = temp1 -> next; //head points second
        free(temp1);
        return;
    }
    
    int i;
    for(i = 0; i < n-2; i++){
        temp1 = temp1 -> next; //temp1 points to n-1 node
        
    }
    node* temp2 = temp1 -> next; //points to nth node;
    temp1 -> next = temp2 -> next; //points to n+1 node
    
    free(temp2);
}

int main(){

  struct node* head;
  head = NULL;
  int x;
  int n;
  insert(head, 5);
  insert(head, 6);
  insert(head, 7);
  insert(head, 8);
  print(head);
  cout << "\n\nEnter the position you want to delete" << endl;
  cin >> n;
  deletes(head, n);
  print(head);
}