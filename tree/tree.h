/**
 * 二叉树,平衡二叉树AVL
*/

#ifndef TREE_H

struct Node;

typedef Node *Tree;



Tree InsertNode(Tree tree, int Data);

int CalcHeight(Tree tree);

void PreOrderTraversal(Tree tree);

// void DeleteNode(Tree tree, int Data);

#endif

struct Node
{
  int Data;
  Tree Left;
  Tree Right;
  // int Height;
};
