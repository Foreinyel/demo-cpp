#include "selection.h"

void SelectionSort(int data[], int length)
{
  int boundary = 0;

  while (boundary < length)
  {
    int nextPartStart = boundary;

    if (nextPartStart == length)
    {
      break;
    }

    int minIndex = nextPartStart;

    for (int i = nextPartStart + 1; i < length; i++)
    {
      if (data[minIndex] > data[i])
      {
        minIndex = i;
      }
    }

    int minValue = data[minIndex];

    data[minIndex] = data[boundary];

    data[boundary] = minValue;

    boundary++;
  }
}