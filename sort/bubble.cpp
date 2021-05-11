#include <stdlib.h>
#include "bubble.h"
#include <iostream>

using namespace std;

void BubbleSort(int data[], int length)
{

  // int length = sizeof(data) / sizeof(data[0]);
  // 想将数组传入，然后在这里计算数组的长度，但是不可行！！！
  // You cannot do it that way. When you pass an array to a function, it decays into a pointer
  // to the first element, at which point knowledge of its size is lost.
  // If you want to know the size of an array passed to the function, you need to work it out
  // before decay and pass that information with the array, something like:
  // void function(size_t sz, int *arr){...}
  // :
  // {
  //   int x[20];
  //   function(sizeof(x) / sizeof(*x), x);
  // }

  // cout << "length: " << length << endl;
  bool sorted = false;
  while (!sorted)
  {
    int changed = 0;
    for (int i = 0; i < length - 1; i++)
    {
      int j = i + 1;
      int current = data[i];
      int next = data[j];
      if (current > next)
      {
        changed += 1;
        int tmp = next;
        data[j] = data[i];
        data[i] = tmp;
      }
    }

    if (changed == 0)
    {
      sorted = true;
    }
  }
}
