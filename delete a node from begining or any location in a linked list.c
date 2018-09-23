 
 
#include <stdio.h>
#include <stdlib.h>
void delete();
int length();
int count;
struct node
{
    int data;
    struct node* link;
};
struct node* root = NULL;
void delete()
{
    struct node* temp,*p;
    int loc, len,i=1;
    len=length();
    printf("enter the location to delete");
    scanf("%d",&loc);
    if (loc>len)
    {
        printf("invalid location");
    }
    else if(loc==1)//delete the first node in the linked list
    {
        temp=root;
        root=temp->link;
        temp->link=NULL;
        free(temp);
    }
    else // delete the node from any location in linked list
    {
        p= root;
        while(i<loc-1)
        {
            p=p->link;
            i++;
        }
        temp=p->link;//temp is now pointing to the node which you want to delete
        p->link=temp->link;
        temp->link=NULL;
        free(temp);
        
    }
}
int length()
{
    struct node*p;
    p=root;
    while(p!= NULL)
    {
        count++;
        p=p->link;
        
    }
    return count;
}
int main()
{
    delete();

    return 0;
}
