#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> userValues;
   int values;
   int N;
   
   cin >> values;
   while(values > 0) {
      userValues.push_back(values);
      cin >> values;
      if (values < 0) {N = abs(values);
      break;}
   }
   
   if (userValues.size() < N) {cout << N * -1;}
   else {cout << userValues.at(userValues.size() - N);}
   
   cout << endl;
   
   

   return 0;
}
