
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* link;
};
struct node* root = NULL;
void addatloc(void);
int len;
int length();
int main()
{
    addatloc();

    

    return 0;
}
void addatloc(void)
{
    struct node* p,*temp;
    int len,loc,i=1;
    len = length();
    printf("enter the loc where you want to insert ");
    scanf("%d",&loc);
    if(loc>len)
    {
        printf("the insertion of node at %d location is not possible",loc);
    }
    else
    {
        //struct node* p,*temp;//you should not declare variables in loop
        p=root;
        while(i<loc)//not p->link since p->link consists of address parts (like 2000,3000)
        {
            p=p->link;//here u keep updating link part so it reaches that address where new node has to be inserted.
            i++;
            
        }
        temp=(struct node*)malloc(sizeof(struct node));
        printf("enter the node data");
        scanf("%d",&temp->data);//you have to enter the node data and address otherwise the node u are inserting will be an empty node.
        temp->link=NULL;
        
        temp->link = p->link;//not temp = p->link
        p->link=temp;
    }
    
}
int length()
{
    struct node* temp;
    int count=0;
    temp=root;
    if(root==NULL)
    {
        printf("linked list is empty");
    }
    else
    {
        while(temp!=NULL)
        {
            count++;
            temp=temp->link;
            
        }
        
    }
    return count;
}
void display()
{
    struct node* p;
    p=root;
    if(p == NULL)
    {
        printf("the node is empty");
    }
    else
    {
    while(p!=NULL)
    {
        printf("%d-->",p->data);
        p=p->link;
    }
    }
}