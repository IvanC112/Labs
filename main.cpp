#include <iostream>
using namespace std;

int main() {
   int i;
   int j;
   const int numRows = 4;
   const int numColumns = 3;
   int userInput[numRows][numColumns];
   
   
   for (i=0; i < numRows; ++i) {
      for (j=0; j < numColumns; ++j) {
         cin >> userInput[i][j];
      }
   }
   
   for (i=numRows-1; i >= 0; --i) {
      for (j=numColumns-1; j >= 0; --j) {
         cout << userInput[i][j] << " ";
      }
      cout << endl;
   }
   
   
   
   return 0;
}
