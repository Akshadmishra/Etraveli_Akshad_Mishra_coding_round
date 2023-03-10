#include <stdio.h>
#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node* next;
};

void printfromlast(struct Node* head, int N, int l)
{
    int  i;
    struct Node* temp = head;
  
    if (l < N)
        return;
  
    temp = head;
  
    for (i = 1; i < l - N + 1; i++)
        temp = temp->next;
  
    cout << temp->data;
  
    return;
}
  
void add_node(struct Node** head_ref, int new_data)
{
    
    struct Node* new_node = new Node();
  
   
    new_node->data = new_data;
  
   
    new_node->next = (*head_ref);
 
    (*head_ref) = new_node;
}
  

int main()
{
    
    struct Node* head = NULL;
    int l;
    
    std::cout<<"please enter size of the list \n";
    std::cin>> l;
    std::cout<<"please enter numbers of the list \n";
    for(int i=0;i<l;i++){
        int n;
       std::cin>> n;
        add_node(&head,n);
    }
    std::cout<<"please enter the place of element \n";
    int n;
    std::cin>>n;
    printfromlast(head, n,l);
    return 0;
}