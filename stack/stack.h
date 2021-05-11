#ifndef _Stack_h

struct Node;
typedef Node Stack;

int IsEmpty(Stack *S);

Stack *CreateStack(void);

// void DisposeStack(Stack *S);

void MakeEmpty(Stack *S);

void Push(int X, Stack *S);

// int Top(Stack S);

int Pop(Stack *S);

#endif

struct Node
{
  int Element;
  Node *Next;
};
