#include<stdio.h>
#include<stdlib.h>
typedef struct tree tr;
struct tree{
	int data;
	tr *right,*left;
};
tr * create(int a){
	tr *ab=(tr *)malloc(sizeof(tr));
	ab->data=a;
	ab->right=NULL;
	ab->left=NULL;
	return ab;
}
tr *tree(tr *root,int a){
	tr *temp=create(a);
	if(root==NULL)
	return temp;
	if(root->data > a)
	root->left=tree(root->left,a);
	else if(root->data < a)
	root->right=tree(root->right,a);
	return root;
}
void display(tr *root){
	if(root==NULL)
	{
		printf("\n");
		return ; 
	}
	display(root->left);
	printf("%d ",root->data);
	display(root->right);
}
tr *insert(int a,tr *root){
	tr *te=create(a);
	te->right=root;
	te->left=NULL;
	return te;
}
void levelorder(tr *root){
	int first=0,last=0;
	tr **queue=(tr **)malloc(100*sizeof(tr *));
	queue[last++]=root;
	while(first<last)
	{
		tr *temp=queue[first++];
		printf("%d ",temp->data);
		if(temp->left)
		queue[last++]=temp->left;
		if(temp->right)
		queue[last++]=temp->right;
	}
	free(queue);
}
int main(){
	tr *root=NULL;
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int a;
		scanf("%d",&a);
		root=tree(root,a);
	}
	// display(root);
	// root=insert(10,root);
	// display(root);
	levelorder(root);
}