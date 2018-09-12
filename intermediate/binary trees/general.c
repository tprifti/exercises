#include <stdio.h>

#define true 1
#define false 0

struct node {
    int data;
    struct node* left;
    struct node* right;
};

/**
 * create new node given value
 */
struct node* newNode(int data){
    struct node* node = malloc(sizeof(struct node));

    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return node;
}

/**
 * find element in given tree
 */
static int findElementByValue(struct node* node, int target){
    if(node == NULL){
        return;
    }else {
        if(target == node->data) return(true);
        else {
            if(target < node->data) return(findElementByValue(node->left, target));
            else return(findElementByValue(node->right, target));
        }
    }
}

struct node* insert(struct node* node, int data){
    if(node == NULL){
        return;
    }else {
        if(data <= node->data) node->left =  insert(node->left, data);
        else node->right = insert(node->right, data);
    }
    return(node);
}

int size(struct node* node){
    if(node == NULL){
        return;
    }else {
        return(size(node->left) + 1 + size(node->right));
    }
}

int maxDepth(struct node* node){
    if(node == NULL){
        return;
    }else {
        int lDepth = maxDepth(node->left);
        int rDepth = maxDepth(node->right);

        if(lDepth > rDepth) return(lDepth+1);
        else return(rDepth + 1);
    }
}

void printTree(struct node* node) {
    if (node == NULL) return;

    printTree(node->left);
    printf("%d ", node->data);
    printTree(node->right);
}

void mirror(struct node* node) {
    if (node==NULL) {
        return;
    }else {
        struct node* temp;

        mirror(node->left);
        mirror(node->right);

        temp = node->left;
        node->left = node->right;
        node->right = temp;
    }
}

int sameTree(struct node* a, struct node* b) {
    if (a==NULL && b==NULL) return(true);

    else if (a!=NULL && b!=NULL) {
        return(
            a->data == b->data &&
            sameTree(a->left, b->left) &&
            sameTree(a->right, b->right)
        );
    }else return(false);
}

int countTrees(int numKeys) {
    if (numKeys <=1) {
        return(1);
    }else {
        int sum = 0;
        int left, right, root;

        for (root=1; root<=numKeys; root++) {
            left = countTrees(root - 1);
            right = countTrees(numKeys - root);
            // number of possible trees with this root == left*right
            sum += left*right;
        }
        return(sum);
    }
}

int isBST(struct node* node) {
    if (node==NULL) return(true);
    // false if the min of the left is > than us
    if (node->left!=NULL && minValue(node->left) > node->data)
    return(false);
    // false if the max of the right is <= than us
    if (node->right!=NULL && maxValue(node->right) <= node->data)
    return(false);
    // false if, recursively, the left or right is not a BST
    if (!isBST(node->left) || !isBST(node->right))
    return(false);
    // passing all that, it's a BST
    return(true);
}

int isBSTRecursive(struct node* node, int min, int max) {
    if (node==NULL) return(true);
    // false if this node violates the min/max constraint
    if (node->data<min || node->data>max) return(false);
    // otherwise check the subtrees recursively,
    // tightening the min or max constraint
    return(
        isBSTRecursive(node->left, min, node->data) &&
        isBSTRecursive(node->right, node->data+1, max)
    );
}
