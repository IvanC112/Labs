#include <iostream>
using namespace std;

int main() {

   int userInteger;
   int integerCount = 1;

   cin >> userInteger;
   if (userInteger == 1) {cout << userInteger << endl;}
   else {cout << userInteger << "\t";}
   
   while (userInteger > 1) {
      if (userInteger % 2 == 0) {
         userInteger = (userInteger / 2);
      }
      else if (userInteger % 2 != 0) {
         userInteger = ((userInteger * 3) + 1); 
      }
       if (integerCount % 10 == 0) {
      cout << endl;
   }
   integerCount++;
   
   if (userInteger == 1) {
         cout << userInteger << endl;
      }
      else {
         cout << userInteger << "\t";
      }
   }
 

   return 0;
}