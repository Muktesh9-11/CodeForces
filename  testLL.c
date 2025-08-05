#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data ;
    struct Node* next ;
};


struct Node* createNode(int  value ){
    struct Node* NewNode = (struct Node*)malloc(sizeof(struct Node));
    NewNode->next = NULL;
    NewNode->data = value;
    return NewNode;
}

void InsertAtfirst(struct Node** head , int value){
    struct Node* NewNode = createNode(value);
    NewNode->next = *head;
    *head = NewNode;
}

void InserAtEnd(struct Node** head , int value ){
    struct Node* NewNode = createNode(value);
    if(*head == NULL){
        *head = NewNode ;
        return ;
    }
    struct Node *temp = *head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = NewNode;
}

void deleteNode(struct Node** head , int key){
    struct Node* temp = *head;
    if (*head == NULL)
        return;
    if(temp->data == key){
        *head = temp->next;
        free(temp);
        return;
    }
    while(temp->next != NULL){
        if(temp->next->data == key){
            temp->next = temp->next->next;
            break;
        }
        temp = temp->next; 
    }

}

void display(struct Node** head){
    struct Node* temp = * head;
    while(temp!=NULL){
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
    printf("NULL");
}
int main(){
    struct Node* head = NULL;
    InserAtEnd(&head,10);
    InserAtEnd(&head,20);
    InserAtEnd(&head,30);
    InserAtEnd(&head,40);
    display(&head);
    //deleteNode(&head,30);
    InsertAtfirst(&head,5);
    display(&head);
    deleteNode(&head,5);
    display(&head);
    display(&head);
    return 0 ;
}