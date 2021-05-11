#include <iostream>
#include "queue/queue.h"

using namespace std;

int main()
{

  Queue *Q = CreateQueue();

  Enqueue(1, Q);
  Enqueue(2, Q);
  Enqueue(3, Q);
  Enqueue(4, Q);
  Enqueue(5, Q);

  cout << "current head of Queue:" << Dequeue(Q) << endl;
  cout << "current head of Queue:" << Dequeue(Q) << endl;
  cout << "current head of Queue:" << Dequeue(Q) << endl;
  cout << "current head of Queue:" << Dequeue(Q) << endl;
  cout << "current head of Queue:" << Dequeue(Q) << endl;

  return 0;
}
