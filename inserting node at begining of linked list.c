

#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* link;
};

struct Node* root =NULL;
void addbegin()
{
    struct Node* temp;
    temp=(struct Node*)malloc(sizeof(struct Node));
    printf("enter data u want to enter in node u have to insert in linked list");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        temp->link=root;//root holds the base addres of first node and we put it in link of node to which temp is pointing ,making it second node
        root=temp;//we assign address of node to be inserted to root so root now points to new node that is inserted ,making it first node
    }
}


int main()
{
    
    addbegin();
    return 0;
}

