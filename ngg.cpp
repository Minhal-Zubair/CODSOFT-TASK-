#include <iostream>
#include <cstdlib> // for random number generator
#include <ctime>   // for system time
using namespace std;
int main() {
	srand(time(0)); // seed the random number with current time
	int number=rand()%100+1;
	int guess;
	int tries=0;
	
	cout<<"WELCOME TO MY NUMBER GUESSING GAME."<< endl;
	cout<<"I have choose a number between 1 to 100. Try to guess it. :)"<< endl;
	
	do {
		cout<<"enter your guess :"<< endl;
		cin>> guess;
		tries++;
		
		if(guess>number) 
		{
			cout<<"No, your guess is too high. Please try again."<< endl;
		}
		else if(guess<number) 
		{
			cout<<"No, your guess is too low. Please try again."<< endl;
		}
		else 
		{
			cout<<" CONGRATULATIONS! you guessed the number " << number << " in " << tries << " tries! "<< endl; 
		}
	} while(guess!=number);
	
	return 0;
}
