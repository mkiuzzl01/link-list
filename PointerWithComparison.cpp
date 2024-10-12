#include <iostream>
using namespace std;

int main() {
   int a, b, c;
   a = 10;
   b = 20;
   c = 40;

   // Pointer definitions
   int *p1, *p2, *p3;
   p1 = &a;
   p2 = &b;
   p3 = &c;

   // Comparison for the largest value of the variables
   if (*p1 > *p2 && *p1 > *p3) {
       cout << "The largest value is " << *p1 << endl;
   } else if (*p2 > *p1 && *p2 > *p3) {
       cout << "The largest value is " << *p2 << endl;
   } else {
       cout << "The largest value is " << *p3 << endl;
   }

   return 0;
}
