#include "linked_list.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct Node
{
    Element val;
    struct Node* next;
} Node;

struct LinkedList {
    Node* head;
    size_t size;
};

LinkedList* list_create(void){
    LinkedList* list = malloc(sizeof(LinkedList));

    list->head = NULL;
    list->size = 0;

    return list;
}

void list_destroy(LinkedList* list){
    while(thrash != NULL){
        free(thrash);
        thrash - list->head
    }
    free(list);

}
void list_insert_first(LinkedList* list, Element element){
    Node* new_node = malloc(sizeof(Node));

    new_node->val = element;
    new_node->next = list->head;
    list->head = new_node;
    list->size++;
}
void list_print(LinkedList* list){
        Node* cur = list->head;

    while(cur != NULL){
        element_print(cur->val);

        cur = cur->next;

        printf("->");
    }

    printf("\n");
}

int main(void){
    Node* head = create_list();

    print_list(head);
}
