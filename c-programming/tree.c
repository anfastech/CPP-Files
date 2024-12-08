#include <stdio.h>
#include <stdlib.h>

#define Reset "\033[0m"

// Creating the Struct Node 
typedef struct Node
{
    int value;
    struct Node *left; 
    struct Node *right; 
} Node;

// Creating CreateNode Pointer Fn()
Node *createNode(int value){
    Node* result = malloc(sizeof(Node));
    if(result != NULL){
        result->left = NULL;
        result->right = NULL;
        result->value = value;
    }
    return result;
}

void printTabs(int numTabs){
    for (int i=0; i<numTabs; i++){
        printf("\t");
    }
}

// Recursive Tree Print 
void printTree_rec(Node *root, int level){
    if(root == NULL){
        printTabs(level);
        printf("\033[0;30m---<EMPTY>---\n" Reset);
        return;
    }
    printTabs(level);
    printf("\033[0;32m value = %d\n" Reset, root->value);

    printTabs(level);
    printf("\033[0;34mleft\n");
    printTree_rec(root->left, level+1);

    printTabs(level);
    printf("\033[0;35mright\n");
    printTree_rec(root->right, level+1);

    printTabs(level);
    printf("\033[0;33mdone!!!\n");
}

void printTree(Node *root){
    printTree_rec(root, 0);
}

void main() {
    // creating Tree 
    Node *n1 = createNode(10);
    Node *n2 = createNode(12);
    Node *n3 = createNode(13);
    Node *n4 = createNode(14);
    Node *n5 = createNode(15);

    n1->left = n2;
    n1->right = n3;
    n2->left = n4;
    n2->right = n5;

    printTree(n1);

    free(n1);
    free(n2);
    free(n3);
    free(n4);
    free(n5);
}