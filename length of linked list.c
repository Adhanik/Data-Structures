#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* link;
};

struct Node* root =NULL;
void append()
{
    struct Node* temp;
    temp = (struct Node*)malloc(sizeof(struct Node));//a new node is created everytime dynamically and the user is then asked to enter the data AND LINK IN NODE ,THEN IT CHECKS WHETHER THE LINK IS ROOT NODE OR NOT.
    printf("enter the data \n");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(root == NULL)
    {
        root=temp;
    }
    else
    {
        struct Node* p;
        p=root;
        while(p->link != NULL)
        {
            p=p->link;
        }
        p->link=temp;
        
    }
    
}



int length()
{
    struct Node* temp;
    int count=0;
    temp=root;
    while(temp!=NULL)
    {
        count++;
        temp = temp->link;
        
    }
    return count;
}


int main()
{
    append();
    length();
    return 0;
}

