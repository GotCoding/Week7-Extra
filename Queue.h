

typedef struct {
	NodePtr headPtr,tailPtr;
	int size;
}Queue;


void enqueue_struct(Queue* q, int order, int amount)
{
  Node *new_node = (Node*)malloc(sizeof(Node));
  if(new_node)
  {
    /*Finish enqueue */
    new_node->order_number = order;
    new_node->quantity = amount;
    new_node->nextPtr = NULL;
    if (q->headPtr == NULL)
      q->headPtr = new_node;
    else
      q->tailPtr->nextPtr = new_node;
    q->tailPtr = new_node;
    printf("My order is %d\n", order);
  }
  q->size++;
}


int dequeue_struct(Queue *q)
{
  NodePtr t = q->headPtr;
  char name[32];
  int price = 0;
  int value = 0;
  int pay = 0;
  int noFood = 0;
  int static count = 1;
  if (t)
  {
    switch (t->order_number)
    {
      case 1: value = 100; strcpy(name, "Ramen"); break;
      case 2: value = 20; strcpy(name, "Somtum"); break;
      case 3: value = 50; strcpy(name, "Fried Chicken"); break;
      default: printf("No Food\n"); noFood = 1;
    }
    if (noFood == 0)
    {    
      price = value*t->quantity;
      printf("Customer No.%d\n", count);
      printf("%s\n", name);
      printf("You have to pay %d\n", price);
      while (1)
      {
        printf(":");
        scanf("%d", &pay);
        if (pay == price)
        {
          printf("Thank you\n");
          break;
        }
        else if (pay > price)
        {
          printf("Thank you\n");
          printf("Change is %d\n", pay - price);
          break;
        }
      }
    }
    // int value = t->order_number;
        /*Finish dequeue */
    
    q->headPtr = q->headPtr->nextPtr;
    free(t);
    q->size--;
    count++;
    return value;
  }
  // printf("Empty queue");
  return 0;
}

