#include <iostream>

using namespace std;

const int LEN = 5;
int main() 
{

   int array[] = {1, 2, 4, 4, 5};
   // int* ptr = array;
   int sum = 0;
   for (int i = 0; i < LEN; i++) {
      sum += array[i];
   }
  float average = (float) sum / LEN;
   cout << average << endl;
   return 0;
}