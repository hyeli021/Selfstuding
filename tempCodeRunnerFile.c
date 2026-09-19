# include <stdio.h> 
# include <stdlib.h>
# include <memory.h>

typedef struct TreeNode { 
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
}TreeNode;

int main() {
    TreeNode *n1, *n2, *n3, *n4, *n5;
    n1 = (TreeNode*)malloc(sizeof(TreeNode)); 
    n2 = (TreeNode*)malloc(sizeof(TreeNode));
    n3 = (TreeNode*)malloc(sizeof(TreeNode));
    n4 = (TreeNode*)malloc(sizeof(TreeNode));
    n5 = (TreeNode*)malloc(sizeof(TreeNode));

    n1 -> data = 10;
    n1 -> left = n2;
    n1 -> right = n3;

    n2 -> data = 20;
    n2 -> left = n4;
    n2-> right = NULL;

    n3 -> data = 15;
    n3 -> left = n5;
    n3 -> right = NULL;

    n4 -> data = 40;
    n4 -> left = NULL;
    n4 -> right = NULL;

    n5 -> data = 40;
    n5 -> left = NULL;
    n5 -> right = NULL;

    int a;
    scanf("%d",&a);

    n4 -> data += a;

    printf("%d\n", n1 -> data );
    printf("%d\n", n2 ->data) ;
    printf("%d\n",n4 -> data);

    printf("%d",n1->data + n2->data +n4->data);
    
}
