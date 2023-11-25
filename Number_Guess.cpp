#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    srand(time(0));
    int secretNumber=1+rand()%100;
    int guess;
    bool Guess=false;
    cout<<"Welcome to number guessing game!"<<endl;
    cout<<"Please guess a number between 1 and 100: ";
    cin>>guess;
    while(!Guess)
    {
        if(guess<secretNumber)
        {
            cout<<"Your guess is too low.Try again: "<<endl;
            cin>>guess;
        }
        else if(guess>secretNumber)
        {
            cout<<"Your guess is too high.Try again: "<<endl;
            cin>>guess;
        }
        else
        {
            Guess=true;
        }
    }
    cout<<"Congratulations! You guessed the correct number: "<<secretNumber<<endl;
    return 0;
}
