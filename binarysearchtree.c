#include<stdio.h>
#include<stdlib.h>
typedef struct treee tr;
struct treee{
    int data;
    tr *right,*left;
};
tr *create(int a)
{
    tr *temp=(tr *)malloc(sizeof(tr));
    temp->data=a;
    temp->right=NULL;
    temp->left=NULL;
}
tr *tree(tr *root,int a)
{
    tr *temp=create(a);
    if(root==NULL)
    return temp;
    if(root->data > temp->data)
    root->left=tree(root->left,a);
    else if(root->data < temp->data)
    root->right=tree(root->right,a);
    return root;
}
void display(tr *root)
{
    if(!root)
    return ;
    display(root->left);
    display(root->right);
    printf("%d ",root->data);
}
int main()
{
    tr *root=NULL;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        root=tree(root,a);
    }
    display(root);
}