#include <stdlib.h>
#include "stack.h"

int IsEmpty(Stack *S)
{
  return S->Next == NULL;
}

Stack *CreateStack(void)
{
  Node *node = new Node();
  if (node == NULL)
  {
    throw "Out of space!";
  }
  node->Next = NULL;
  MakeEmpty(node);
  return node;
}

void MakeEmpty(Stack *S)
{
  if (S == NULL)
  {
    throw "Must use CreateStack first";
  }
  else
  {
    while (!IsEmpty(S))
    {
      Pop(S);
    }
  }
}

int Pop(Stack *S)
{
  int value;
  if (IsEmpty(S))
  {
    throw "Empty stack!";
  }
  else
  {
    Node *FirstNode = S->Next;
    S->Next = S->Next->Next;
    value = FirstNode->Element;
    free(FirstNode);
  }
  return value;
}

void Push(int X, Stack *S)
{
  Node *node = new Node();
  if (node == NULL)
  {
    throw "Out of space!";
  }
  node->Element = X;
  node->Next = S->Next;
  S->Next = node;
}
