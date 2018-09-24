// auto_ptr example
#include <iostream>
#include <memory>

//ref 2 http://www.gotw.ca/publications/using_auto_ptr_effectively.htm
int main () {
  std::auto_ptr<int> p1 (new int);
  *p1.get()=10;

  std::auto_ptr<int> p2 (p1);

  std::cout << "p2 points to " << *p2 << '\n';
  // (p1 is now null-pointer auto_ptr)

  return 0;
}
