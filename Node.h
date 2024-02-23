//
//  linkedlist.h
//  LinkedList_simple
//
//  Created by Mingmanas Sivaraksa on 5/2/2566 BE.
//
#ifndef Node_h
#define Node_h

struct node
{
    int order_number;
    int quantity;
    struct node *nextPtr;
};

typedef struct node Node;
typedef struct node* NodePtr;


// void enqueue(NodePtr * head, NodePtr* tail, int order, int q){
//   Node* new_node=(NodePtr) malloc(sizeof(Node));
//   if(new_node)
//   { 
//   /* Finish queue*/
//     new_node->order_number = order;
//     new_node->quantity = q;
//     new_node->nextPtr = NULL;
//     if (*head == NULL)
//       *head = new_node;
//     else
//       (*tail)->nextPtr = new_node;
//     *tail = new_node;   
//   }
// }


// int dequeue(NodePtr* head, NodePtr* tail){
//   NodePtr t=*head;
//    if(t){
//    int value= t->order_number;
//    /* Finish dequeue*/
//    *head = (*head)->nextPtr;
//    if (*head == NULL)
//     *tail = NULL;
//    free(t);    
//    return value;
//    }
//    printf("Empty queue");
//    return 0;
// }



#endif

