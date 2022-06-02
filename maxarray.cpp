//created by Karthik Chavan k1833342 at 6/9/20
//used interlude 1 to understand the use of the template class. Return max along with the array each iteration
//max() no work so put the "max num" in the arguments before you forget
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

template <class ElementType>
void maxn(ElementType array[], int n, ElementType max);


int main()
{
   //int array max
   double m = 0;
   double x[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
   maxn(x, 5,m);
   //double array max
   int n = 0;
   int num[] = { 1, 2, 3, 4 };
   maxn(num, 4,n);

}

template <class ElementType>
void maxn(ElementType array[], int n, ElementType max)
{
   if (n == 1)
   {
      if (max > array[n - 1])
      {
         cout << max << endl;
      }
      else
      {
         array[n - 1];
      }
   }
   else
   {
      if (max < array[n])
      {
         max = array[n];
      }
      n = n - 1;
      maxn(array, n, max);
   }
}

