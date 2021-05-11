#include <iostream>
#include "sort/selection.h"

using namespace std;

int main()
{

  int data[] = {5, 3, 2, 6, 4, 7, 43, 12, 41};

  int len = sizeof(data) / sizeof(data[0]);
  SelectionSort(data, len);

  for (int i = 0; i < len; i++)
  {
    cout << data[i] << endl;
  }
}
