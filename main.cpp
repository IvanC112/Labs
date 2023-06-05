#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {

   const int HEADS = 1;
   const int TAILS = 0;
   int numRounds;
   int seed;
   string userGuess;
   cin >> numRounds;
   cin >> seed;
   cin >> userGuess;
   
   srand(seed);
   int headSum =0;
   int tailSum =0;
   int randNumber;
   
   for (int i=0; i < numRounds; i++) {
      randNumber = rand() % 2;
      if (randNumber == 1) {headSum++;}
      else {tailSum++;}
   }
   
   double percentageValue;
   
   
   if (userGuess == "heads" || userGuess == "Heads" || userGuess == "HEADS") {percentageValue = (static_cast<double>(headSum) / numRounds) * 100;}
   else {percentageValue = (static_cast<double>(tailSum) / numRounds) * 100;}

   cout << headSum << " heads" << endl;
   cout << tailSum << " tails" << endl;
   cout << fixed << setprecision(2) << percentageValue << "% ";
   
   if (userGuess == "heads" || userGuess == "Heads" || userGuess == "HEADS") {cout << "heads" << endl;}
   else {cout << "tails" << endl;}
   

   return 0;
}
