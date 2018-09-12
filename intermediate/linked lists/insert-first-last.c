#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node *ShtoNeFund(struct node **, int);
void PrintList(struct node **);
struct node* mockList();
int Length(struct node *);

int main(){
    struct node * list = mockList();
    ShtoNeFund(&list, 4);
    ShtoNeFund(&list, 5);
    ShtoNeFund(&list, 6);
    //PrintList(&list);>
    return 0;
}
int Length(struct node* head) {
    int count = 0;
    struct node* current = head;
    while (current != NULL) {
        count++;
        current=current->next;
    }
    return(count);
}

struct node *ShtoNeFund(struct node** headRef, int data){
    struct node* last = *headRef;

    struct node* element = malloc(sizeof(struct node));
    element->data = data;
    element->next = NULL;

    while(last->next != NULL){
        last = last->next;
    }

    last->next = element;
    PrintList(headRef);
    return *headRef;
}

void PrintList(struct node ** list){
    struct node * head = *list;

    while(head != NULL){
        printf("Element: %d\n", head->data);
        head = head->next;mockList
    }
    printf("\n");
    return;
}

struct node* mockList() {
    struct node* first = NULL;
    struct node* second = NULL;
    struct node* third = NULL;

    first = malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));
    third = malloc(sizeof(struct node));

    first->data = 1;
    first->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    return first;
}