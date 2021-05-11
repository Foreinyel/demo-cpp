#ifndef QUEUE_H

struct Node
{
  int data;
  Node *Next;
  Node *Prev;
};

struct Queue
{
  Node *head;
  Node *tail;
};

Queue *CreateQueue(void);

void Enqueue(int X, Queue *Q);

int Dequeue(Queue *Q);

int IsEmpty(Queue *Q);

#endif
