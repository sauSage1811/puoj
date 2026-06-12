#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Node{
    int data;
    struct Node *next;
}Node;
Node *head = NULL;
Node* createNode(int x){
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}
void push_back(int x){
    Node *newNode = createNode(x);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node *temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = newNode;
}
void print(){
    if(head == NULL){
        printf("EMPTY\n");
        return;
    }
    Node *temp = head;
    while(temp != NULL){
        printf("%d", temp -> data);
        if(temp -> next != NULL){
            printf(" ");
        }
        temp = temp -> next;
    }
    printf("\n");
}
int main() {
    int q;
    scanf("%d", &q);
    while(q--){
        char command[20];
        scanf("%s", command);
        
        if(strcmp(command, "PUSH_BACK") == 0){
            int x ;
            scanf("%d", &x);
            push_back(x);
        }else if(strcmp(command, "PRINT") == 0){
            print();
        }
    }
    return 0;
}
