#include "queue.h"
#include <stdlib.h>

// struct Queue
// {
//   Node *head;
//   Node *tail;
// };

Queue *CreateQueue(void)
{
  Queue *queue = new Queue();

  if (queue == NULL)
  {
    throw "Failed to create Queue";
  }

  return queue;
}

void Enqueue(int X, Queue *Q)
{
  // new Node
  Node *node = new Node();
  node->data = X;
  if (Q->tail != NULL)
  {
    Q->tail->Prev = node;
    node->Next = Q->tail;
  }

  Q->tail = node;

  // If Q->head is NULL, then current node is the first node, should set Q->head to node
  if (Q->head == NULL)
  {
    Q->head = node;
  }
}

int IsEmpty(Queue *Q)
{
  return Q->head == NULL;
}

int Dequeue(Queue *Q)
{
  if (IsEmpty(Q))
  {
    throw "Queue is empty";
  }
  Node *head = Q->head;
  Q->head = head->Prev;
  return head->data;
}
