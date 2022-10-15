#include <iostream>
// https://www.youtube.com/watch?v=FXzpFn8LJUI
using namespace std;

// // pass by value;
// int change(int x)
// {
//    x = 13;
//    return x;
// }

// pass by reference; you can change the value of the varbale that passed in. 
// y is an alias of x
int change(int &y)
{
   y = 13;
   return y;
}

int main() 
{
   int x = 5;
   change(x);
   cout << x << endl;
   return 0;
}