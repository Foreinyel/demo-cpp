#include "insertion.h"

void InsertionSort(int data[], int length)
{

  int boundary = 0; // 边界，前一部分的尾下标

  while (boundary < length)
  {
    // 获取后一部分的下标
    int next = boundary + 1;

    if (next == length)
    {
      break; // 超出数组边界，退出循环
    }

    int nextValue = data[next];
    int i = 0;
    for (; i <= boundary; i++)
    {

      if (data[i] > nextValue)
      {
        break;
      }
    }

    for (int j = next; j > i; j--)
    {
      data[j] = data[j - 1];
    }

    data[i] = nextValue;

    boundary++;
  }
}