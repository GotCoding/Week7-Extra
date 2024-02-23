#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"

#include "Queue.h"

int main(int argc , char **argv) {
  NodePtr headPtr=NULL;
   NodePtr tailPtr=NULL;
/* For struct Queue*/
  Queue  q;
  q. headPtr=NULL;
  q.tailPtr=NULL;
  q.size=0;
  int i,x;
  
  // enqueue_struct(&q, 2);
  // enqueue_struct(&q, 3);
  // enqueue_struct(&q, 4);
  // enqueue_struct(&q, 5);
  // printf("%d\n", dequeue_struct(&q));
  // printf("%d\n", dequeue_struct(&q));
  // printf("%d\n", dequeue_struct(&q));
  // printf("%d\n", dequeue_struct(&q));
  // printf("%d\n", dequeue_struct(&q));
  // printf("%d\n", dequeue_struct(&q));
  // printf("%d\n", dequeue_struct(&q));
  // printf("%d\n", dequeue_struct(&q));
  // printf("%d\n", dequeue_struct(&q));
  // printf("%d\n", dequeue_struct(&q));
  // printf("%d\n", dequeue_struct(&q));
 for(i=1;i<argc;i++){
        if(strcmp(argv[i],"x")==0){
            x=dequeue_struct(&q);
            if (x != 0)
              printf("dequeing %d\n",x);
            else
              printf("Emptyqueue\n");
        }
        else {
       enqueue_struct(&q, atoi(argv[i]));
           
        }
 }
  return 0;
}
