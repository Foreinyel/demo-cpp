#include <iostream>
#include "sort/bubble.h"

using namespace std;

int main()
{

  int data[] = {9, 8, 7, 6, 5, 4, 3, 32, 1};
  // cout << sizeof(data);
  BubbleSort(data, sizeof(data) / sizeof(data[0]));

  for (int i = 0; i < 9; i++)
  {
    cout << std::to_string(data[i]) << endl;
  }
}
