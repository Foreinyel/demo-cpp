#include <iostream>
// #include <string>

/**
 * 会无限循环打印hello world，参考：https://time.geekbang.org/column/article/40961
 * 对文中示例的无限循环有疑问的同学，建议去查函数调用的栈桢结构细节（操作系统或计算机体系结构的教材应该会讲到）。
 * 函数体内的局部变量存在栈上，且是连续压栈。在Linux进程的内存布局中，栈区在高地址空间，从高向低增长。
 * 变量i和arr在相邻地址，且i比arr的地址大，所以arr越界正好访问到i。当然，前提是i和arr元素同类型，否则那段代码仍是未决行为。
*/

int main()
{
  int i = 0;
  int arr[] = {0};
  for (; i <= 3; i++)
  {
    arr[i] = 0;
    printf("hello world\n");
    printf("%d\n", i);
  }

  return 0;
}
