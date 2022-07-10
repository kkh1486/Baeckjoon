#include <iostream>

using namespace std;


int main()
{
   int X = 0, i = 1;

   cin >> X;
   for (; X - i > 0; i++) {
      X -= i;
   }
   if (i % 2 == 1) {
      cout << i + 1 - X << "/" << X;
   }
   else {
      cout << X << "/" << i + 1 - X;
   }

   return 0;
}