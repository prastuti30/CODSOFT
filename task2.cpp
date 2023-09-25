#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
int num, guess, tries = 0;
srand(time(0)); //this is random number generator
num = rand() % 100 + 1; // generating random no. between 1 to 100;
cout<<"\t\tWELCOME TO THE PROGRAMME\t\t"<<endl;
cout<<"\t\tTHIS IS RANDOM NUMBER GENERATING GAME\t\t"<<endl;
cout<<"Be ready to guess the number nowwwwww....!"<<endl;
cout << "Guess My Number Game\n\n";

do
{
cout << "Enter a guess between 1 and 100 : ";
cin >> guess;
tries++;

if (guess > num)
cout << "Too high!\n\n";
else if (guess < num)
cout << "Too low!\n\n";
else
cout << "\nCorrect! You got it in " << tries << " guesses!\n";
} while (guess != num);

return 0;
}