/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#define CAPACITY 5
int stack[CAPACITY],top=-1;
void push(int);
int pop();
int peek();
void traversal();
int isempty();
int isfull();

int main()

{
    int c,ele;
    while(1)
    {
        
        printf("1. push operation\n");
        printf("2. pop operation \n");
        printf("3. peek operation \n");
        printf("4. traveral operation \n");
        printf("5. exit \n");
        printf("enter the choice\n ");
        scanf("%d",&c);
        switch(c)
        {
            case 1: printf("enter element");
                    scanf("%d",&ele);
                    push(ele);
                    break;
            case 2: ele=pop();
                    if (ele==0)
                    {
                        printf(" stack is empty\n");
                        
                    }
                    else
                    {
                        printf("%d is poped out\n",ele);
                    }
                    break;
            case 3: ele=peek();
                    if(ele==0)
                    {
                        printf("stack is empty");
                    }
                    else
                    {
                        printf("the top element is %d\n",ele);
                    }
                    break;
            case 4: traversal();
                    break;
            
            
            case 5 : exit(0);
                     
            
            default: printf("enter a valid choice\n");
                     
            
            
            
                    
        }
    }
    

    return 0;
}
        
void push(int ele)
    {
            if(isfull())
            {
                printf("stack is full\n");
            }
            else
            {
                top++;
                stack[top]=ele;
                printf("%d element is pushed \n",ele);
            }
            
    }
    
int isfull()
    {
            if(top == CAPACITY-1)
            {
                return 1;
            }
            else
            {
                return 0;
            }
    }
    
    
int isempty()
    {
            if(top==-1)
            {
                return 1;
            }
            else
            {
                return 0;
            }
    }
int pop()
    {
            int ele;
            if(isempty())
            {
                return 0;
            }
            else
            {
                ele=stack[top];
                top--;
            }
            return ele;
    }
        
int peek()
    {
            if(isempty())
            {
                return 0;
            }
            else
            {
                return stack[top];
            }
    }
    
    
void traversal()
    {
            if(isempty())
            {
                printf("the stack is empty\n");
                
            }
            else
            {
                printf("the array elements are \n");
                for(int i =0;i<=top;i++)
                {
                    printf("%d\n",stack[i]);
                }
            }
    }
        
        


