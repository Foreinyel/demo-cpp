#include <iostream>
#include "sort/insertion.h"

using namespace std;

int main()
{

  int data[] = {5, 6, 3, 27, 3, 8, 2, 9};
  int len = sizeof(data) / sizeof(data[0]);

  InsertionSort(data, len);

  for (int i = 0; i < len; i++)
  {
    cout << data[i] << endl;
  }
}
