#include <iostream>
#include <stdlib.h>

using namespace std;

struct Node{
    int data;
    struct Node* next;
};

//insert a node on the first
Node* insertFirst(Node* root, int new_data){
    
    Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node-> next = root;
    return new_node;
}

//print function of node
void printNode (struct Node*n){
while(n != NULL){
    cout << n->data << endl;
    n = n->next;
}
}

int main (){
    //node initialization
    struct Node* ptr1 = NULL;
    struct Node* ptr2 = NULL;
    struct Node* ptr3 = NULL;

    //memory allocation of nodes
    ptr1 =(struct Node*)malloc(sizeof(struct Node));
    ptr2 =(struct Node*)malloc(sizeof(struct Node));
    ptr3 =(struct Node*)malloc(sizeof(struct Node));

    //data assign of nodes
    ptr1->data= 10;
    ptr1->next = ptr2;

    ptr2->data = 20;
    ptr2->next = ptr3;

    ptr3->data = 30;
    ptr3->next = NULL;

    //call print function
    // printNode(ptr1);

    //call function for add new node on first
    int data = 4;
    ptr1 = insertFirst(ptr1,data);
    printNode(ptr1);

    return 0;
}