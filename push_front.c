#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Node{
    int data;
    struct Node *next;
}
Node;
Node *head = NULL;
Node* createNode(int x){
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
} 
void Push_front(int x){
    Node *newNode = createNode(x);
    newNode->next = head;
    head = newNode;
    
}
void Print_list(){
    if(head == NULL){
        printf("EMPTY\n");
        return;
    }
    Node *temp = head;
    while(temp != NULL){
        printf("%d", temp -> data);
        if(temp->next != NULL){
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
        if(strcmp(command, "PUSH_FRONT") == 0){
        int x;
        scanf("%d", &x);
        Push_front(x);
    }
    else if(strcmp(command, "PRINT") == 0){
        Print_list();
    }
    }
    
    return 0;
}
