#include "sort/merge.h"
#include <iostream>

using namespace std;

int main()
{
  int data[] = {8,
                7,
                6,
                8,
                4,
                5,
                3,
                2,
                6,
                54,
                23,
                9,
                1};
  int len = sizeof(data) / sizeof(data[0]);
  MergeSort(data, 0, len - 1);

  for (int i = 0; i < len; i++)
  {
    cout << data[i] << endl;
  }
  return 0;
}
