   #include <iostream>
   #include <string>
using namespace std;

int main() {
   
   const int ROCK = 0;
   const int PAPER = 1;
   const int SCISSORS = 2;

   int seed;
   cin >> seed;
   srand(seed);

   string playerNum1;
   string playerNum2;
   cin >> playerNum1;
   cin >> playerNum2;
   int numRounds;
   cin >> numRounds;
   string winValue1;
   string winValue2;
   int player1Wins = 0;
   int player2Wins = 0;
   int i;

   while (numRounds < 1) {
      cout << "Rounds must be > 0" << endl;
      cin >> numRounds;
   }
   cout << playerNum1 << " vs " << playerNum2 << " for " << numRounds << " rounds" << endl;
   
   int randNum1;
   int randNum2;
   randNum1 = rand() % 3;
   randNum2 = rand() % 3;
    
    
    for (i =0; i < numRounds; ++i) {
       while (randNum1 == randNum2) {
    cout << "Tie" << endl;
    randNum1 = rand() % 3;
    randNum2 = rand() % 3;
       }
   
   if (randNum1 == ROCK  && randNum2 == SCISSORS ) {
       winValue1 = "rock";
       cout << playerNum1 << " wins with " << winValue1 << endl;
       player1Wins++;
   }
   else if (randNum1 == ROCK && randNum2 == PAPER) {
       winValue2 = "paper";
       cout << playerNum2 << " wins with " << winValue2 << endl;
       player2Wins++;
   }
   else if (randNum1 == SCISSORS && randNum2 == ROCK) {
       winValue2 = "rock";
       cout << playerNum2 << " wins with " << winValue2 <<endl;
       player2Wins++;
   }
   else if (randNum1 == SCISSORS &&  randNum2 == PAPER) {
       winValue1 = "scissors";
       cout << playerNum1 << " wins with " << winValue1 << endl;
       player1Wins++;
   }
   else if (randNum1 == PAPER && randNum2 == SCISSORS) {
       winValue2 = "scissors";
       cout << playerNum2 << " wins with " << winValue2 << endl;
       player2Wins++;
   }
   else if (randNum1 == PAPER && randNum2 == ROCK) {
       winValue1 = "paper";
       cout << playerNum1 << " wins with " << winValue1 << endl;
       player1Wins++;
   }
   randNum1 = rand() % 3;
   randNum2 = rand() % 3;
    }
   
   cout << playerNum1 << " wins " << player1Wins << " and " << playerNum2 << " wins " << player2Wins << endl;
   
   
    return 0;

}