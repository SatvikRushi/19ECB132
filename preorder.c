#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct node {
    
    int n;
    struct node *left;
    struct node *right;
  
};

struct node* insert( struct node* root, int n ) {
        
    if(root == NULL) {
    
        struct node* node = (struct node*)malloc(sizeof(struct node));

        node->n = n;

        node->left = NULL;
        node->right = NULL;
        return node;
      
    } else {
      
        struct node* cur;
        
        if(n <= root->n) {
            cur = insert(root->left, n);
            root->left = cur;
        } else {
            cur = insert(root->right, n);
            root->right = cur;
        }
    
        return root;
    }
}


void preOrder( struct node *root) {
if (root != NULL) {
        printf("%d ", root->n);
        preOrder(root->left);
        preOrder(root->right);
    }
}


int main() {
  
    struct node* root = NULL;
    
    int t;
    int n;

    scanf("%d", &t);

    while(t-- > 0) {
        scanf("%d", &n);
        root = insert(root, n);
    }
  
    preOrder(root);
    return 0;
}
/* output
1
2
2 */