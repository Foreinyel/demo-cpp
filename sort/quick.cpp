#include "quick.h"
#include <iostream>

using namespace std;

void QuickSort(int data[], int from, int to)
{

  if (from >= to)
  {
    return;
  }

  int pivot = data[to];
  int pivotIndex = to;

  for (int i = to - 1; i >= from; i--)
  {
    int current = data[i];
    if (current > pivot)
    {
      for (int j = i; j < pivotIndex; j++)
      {
        data[j] = data[j + 1];
      }
      data[pivotIndex] = current;
      pivotIndex--;
      // i--;
    }
  }

  // cout << "from: " << from << " to: " << to << " pivot: " << pivot << " pivotIndex: " << pivotIndex << endl;
  // for (int k = from; k <= to; k++)
  // {
  //   cout << data[k] << ", ";
  // }
  // cout << endl;

  if (from < pivotIndex - 1)
  {
    QuickSort(data, from, pivotIndex - 1);
  }
  if (pivotIndex + 1 < to)
  {
    QuickSort(data, pivotIndex + 1, to);
  }
}
