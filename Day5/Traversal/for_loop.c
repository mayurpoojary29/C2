//forward-list-traversal using for loop

#include <stdio.h>
#include <stdlib.h>
typedef struct _node_t{
    float data;
    struct _node_t* next;
} node_t;
node_t* createNode(float item) {
    node_t* rE = (node_t*)malloc(
            sizeof(node_t));//
    rE->data = item;
    rE->next = NULL;
    return rE;
}

void doTraversal(node_t* head) {
    for(node_t* rE = head; 
        rE != NULL;
        rE = rE->next) {
        printf("%.2f ",rE->data);
    }
}
int main()
{
    //20.0f, 15.0f, 35.0f, 40.0f, 25.0f    
    node_t* head = createNode(20.0f);
    head->next = createNode(15.0f);
    head->next->next = createNode(35.0f);
    head->next->next->next = createNode(40.0f);
    head->next->next->next->next = createNode(25.0f);

    doTraversal(head);
    return 0;
}