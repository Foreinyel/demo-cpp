#include "merge.h"
#include <stdlib.h>

void MergeSort(int data[], int from, int to)
{

  if (from >= to)
  {
    return;
  }

  int len = to - from + 1;

  int boundary = from + len / 2 - 1;

  MergeSort(data, from, boundary);
  MergeSort(data, boundary + 1, to);

  int tmp[len];
  int k = 0;

  // int loopCount = boundary - from > to - (boundary + 1) ? boundary - from : to - (boundary + 1);
  int i1 = from, i2 = boundary + 1;
  while (i1 <= boundary || i2 <= to)
  {
    int a = i1 <= boundary ? data[i1] : NULL;
    int b = i2 <= to ? data[i2] : NULL;

    if (a != NULL && b != NULL)
    {
      if (a <= b)
      {
        tmp[k] = a;
        i1++;
      }
      else
      {
        tmp[k] = b;
        i2++;
      }
    }
    else if (a != NULL && b == NULL)
    {
      tmp[k] = a;
      i1++;
    }
    else if (a == NULL && b != NULL)
    {
      tmp[k] = b;
      i2++;
    }
    k++;
  }
  for (int j = 0; j < len; j++)
  {
    data[from + j] = tmp[j];
  }
}
