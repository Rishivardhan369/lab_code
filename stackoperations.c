#include<stdio.h>
#define max 100
int stack[max];
int top=-1;
void push()
{
    int a;
    scanf("%d",&a);
    top++;
    stack[top]=a;
}
int pop()
{
    if(top==-1)
    return -1;
    return stack[top--];
}
int size()
{
    printf("size:%d",top+1);
}
void peak()
{
    printf("%d ",stack[top]);
}
void display()
{
    for(int i=0;i<top;i++)
    {
        printf("%d ",stack[i]);
    }
}
int main()
{
    while(1)
    {
        printf("1.push\n2.delete\n3.size\n4.top element\n5.display\n6.exit\n");
        int ch;
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            push();
            break;
            case 2:
            if(top==-1)
            {
                printf("there are no elements to remove\n");
                break;
            }
            pop();
            break;
            case 3:
            size();
            break;
            case 4:
            peak();
            break;
            case 5:
            display();
            break;
            case 6:
            return 0;
        }
    }
}