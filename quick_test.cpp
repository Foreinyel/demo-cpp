#include "sort/quick.h"
#include <iostream>

using namespace std;

int main()
{
  int data[] = {8, 9, 1, 4, 5, 6, 3, 4, 2, 4, 432, 123, 32, 12, 4};
  int len = sizeof(data) / sizeof(data[0]);
  QuickSort(data, 0, len - 1);

  for (int i = 0; i < len; i++)
  {
    cout << data[i] << endl;
  }
  return 0;
}
