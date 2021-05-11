#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include "tree.h"

using namespace std;

int CalcHeight(Tree tree)
{
  if (tree == NULL)
  {
    return 0;
  }
  return std::max(CalcHeight(tree->Left), CalcHeight(tree->Right)) + 1;
}

// 向左旋转 for RR
Tree singleRotateToLeft(Tree tree)
{
  Tree t1 = tree;
  tree = tree->Right;
  t1->Right = tree->Left;
  tree->Left = t1;
  return tree;
}

// 向右旋转 for LL
Tree singleRotateToRight(Tree tree)
{
  Tree t1 = tree;
  tree = tree->Left;
  t1->Left = tree->Right;
  tree->Right = t1;
  return tree;
}

// 先左后右旋转 for LR
Tree doubleRotateToLeftToRight(Tree tree)
{
  tree->Left = singleRotateToLeft(tree->Left);
  // cout << 'b' << endl;
  // PreOrderTraversal(tree);
  tree = singleRotateToRight(tree);
  // cout << 'c' << endl;
  // PreOrderTraversal(tree);
  return tree;
}

// 先右后左旋转 for RL
Tree doubleRotateToRightToLeft(Tree tree)
{
  tree->Right = singleRotateToRight(tree->Right);
  return singleRotateToLeft(tree);
}

Tree InsertNode(Tree tree, int Data)
{
  if (tree == NULL)
  {
    Node *node = new Node();
    node->Data = Data;
    return node;
  }
  else if (tree->Data > Data) // 插入左子树
  {
    tree->Left = InsertNode(tree->Left, Data);
    // cout << endl;
    // PreOrderTraversal(tree);
    int LeftChildHeight = CalcHeight(tree->Left);
    int RightChildHeight = CalcHeight(tree->Right);
    if (std::abs(LeftChildHeight - RightChildHeight) > 1)
    {
      if (tree->Left->Data > Data) // 插入左儿子的左子树, LL
      {
        return singleRotateToRight(tree);
      }
      else
      { // 插入左儿子的右子树, LR
        // cout << 'a' << endl;
        return doubleRotateToLeftToRight(tree);
      }
    }
    return tree;
  }
  else // 插入右子树
  {
    tree->Right = InsertNode(tree->Right, Data);
    // cout << endl;
    // PreOrderTraversal(tree);

    int LeftChildHeight = CalcHeight(tree->Left);
    int RightChildHeight = CalcHeight(tree->Right);
    if (std::abs(LeftChildHeight - RightChildHeight) > 1)
    {
      if (tree->Right->Data > Data) // 插入右儿子的左子树, RL
      {
        return doubleRotateToRightToLeft(tree);
      }
      else // 插入右儿子的右子树
      {
        return singleRotateToLeft(tree);
      }
    }

    return tree;
  }
}

void PreOrderTraversal(Tree tree)
{
  if (tree == NULL)
  {
    return;
  }
  cout << tree->Data << endl;
  PreOrderTraversal(tree->Left);
  PreOrderTraversal(tree->Right);
}
