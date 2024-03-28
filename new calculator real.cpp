#include <iostream>
using namespace std;
int main()
{
	cout << "  _____________________" << endl;
    cout << " |  _________________  |" << endl;
    cout << " | |                 | |" << endl;
    cout << " | |                 | |" << endl;
    cout << " | |                 | |" << endl;
    cout << " | |                 | |" << endl;
    cout << " | |                 | |" << endl;
    cout << " | |_________________| |" << endl;
    cout << " |  ___ ___ ___   ___  |" << endl;
    cout << " | | 7 | 8 | 9 | | + | |" << endl;
    cout << " | |___|___|___| |___| |" << endl;
    cout << " | | 4 | 5 | 6 | | - | |" << endl;
    cout << " | |___|___|___| |___| |" << endl;
    cout << " | | 1 | 2 | 3 | | x | |" << endl;
    cout << " | |___|___|___| |___| |" << endl;
    cout << " | | . | 0 | = | | / | |" << endl;
    cout << " | |___|___|___| |___| |" << endl;
    cout << " |_____________________|" << endl;
	char oper;
	float num1,num2;
	cout<<"Enter the first number:"<<endl;
	cin>>num1;
	cout<<"Enter the second number:"<<endl;
	cin>>num2;
	cout << "Choose operation:" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "Enter your choice (1/2/3/4): ";
    cin >> oper;
	switch(oper)
	{
		case '1':
		cout<< num1 << "+" << num2 << "=" << num1+num2 <<endl;
		break;	
		case '2':
		cout<< num1 << "-" << num2 << "=" << num1-num2 <<endl;
		break;	
		case '3':
		cout<< num1 << "*" << num2 << "=" << num1*num2 <<endl;
		break;	
		case '4':
			if(num1!=0 && num2!=0) 
			{
		      cout<< num1 << "/" << num2 << "=" << num1/num2 <<endl;
	        }
	        else 
			{
	          cout << "Error! Division by zero is not allowed." << endl;
			}
			break;
		default:
		cout<<"Your entered operator doesn't match with the required one. Please try again!";
		break;
	}
	return 0;
}


