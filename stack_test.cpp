#include <iostream>
#include "stack/stack.h"

using namespace std;

int main()
{
  Stack *stack = CreateStack();
  Push(1, stack);
  Push(2, stack);
  Push(4, stack);
  cout << "1st element of stack: " << std::to_string(Pop(stack)) << endl;
  cout << "2nd element of stack: " << std::to_string(Pop(stack)) << endl;
  cout << "3rd element of stack: " << std::to_string(Pop(stack)) << endl;
  free(stack);
  return 0;
}
