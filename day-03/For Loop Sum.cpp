#include<iostream>

using namespace std;
int main()
{
   double number, sum = 0 , average;

   for (int x = 5; x >= 1; x --)
   {
       cout << "Enter number "<< x << ":";
       cin >> number;
       sum = sum + number;
   }
   average = sum /5;
   cout << "The sum is: "<< sum << endl;
   cout << "The average is: " << average<<endl;

   return 0;
}



