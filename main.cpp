#include <iostream>

using namespace std;

// TODO: Write a void function SelectionSortDescendTrace() that takes
//       an integer array and the number of elements in the array as arguments,
//       and sorts the array into descending order.
void SelectionSortDescendTrace(int numbers [], int numElements) {
   int i;
   int j;
   int tempValue;
   int highestValue;
   
   for (i=0; i < numElements-1; ++i) {
      highestValue = i;
      for (j =i+1; j < numElements; ++j) {
         if (numbers[j] > numbers[highestValue]) {
            highestValue = j;
         }
      }
      tempValue = numbers[i];
      numbers[i] = numbers[highestValue];
      numbers[highestValue] = tempValue;
      
      
      for (int k= 0; k < numElements; ++k) {
         cout << numbers[k] << " ";
      }
      cout << endl;
   }
   
}

int main() {
   int input, i = 0;
   int numElements = 0;
   int numbers [10];

   // TODO: Read in a list of up to 10 positive integers; stop when
   //       -1 is read. Then call SelectionSortDescendTrace() function.
   
   while (i < 10) {
      cin >> input;
      if (input == -1) {break;}
      else {
         numbers[i] = input;
         numElements++;
      }
      ++i;
   }
   
   SelectionSortDescendTrace(numbers, numElements);

  return 0;
}