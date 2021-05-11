#include <stdlib.h>
#include <iostream>
#include "tree/tree.h"

using namespace std;

int main()
{

  Tree tree = InsertNode(NULL, 5);
  // PreOrderTraversal(tree);

  // cout << endl;
  tree = InsertNode(tree, 3);
  cout << endl;
  PreOrderTraversal(tree);

  tree = InsertNode(tree, 4);
  cout << endl;
  PreOrderTraversal(tree);

  tree = InsertNode(tree, 6);
  cout << endl;
  PreOrderTraversal(tree);

  tree = InsertNode(tree, 7);
  cout << endl;
  PreOrderTraversal(tree);

  tree = InsertNode(tree, 8);
  cout << endl;
  PreOrderTraversal(tree);

  // cout << CalcHeight(tree) << endl;
}
