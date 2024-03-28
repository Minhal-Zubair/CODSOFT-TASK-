#include <iostream>
using namespace std;
int main()
{
	char oper;
	int num1,num2;
	cout<<"Enter the first number:"<<endl;
	cin>>num1;
	cout<<"Enter the second number:"<<endl;
	cin>>num2;
	cout<<"Enter the operator you want to use:"<<endl;
	cin>>oper;
	switch(oper)
	{
		case '+':
		cout<< num1 << "+" << num2 << "=" << num1+num2 <<endl;
		break;	
		case '-':
		cout<< num1 << "-" << num2 << "=" << num1-num2 <<endl;
		break;	
		case '*':
		cout<< num1 << "*" << num2 << "=" << num1*num2 <<endl;
		break;	
		case '/':
		cout<< num1 << "/" << num2 << "=" << num1/num2 <<endl;
		break;	
		default:
		cout<<"Your entered operator doesn't match with the required one. Please try again!";
		break;
	}
	return 0;
}

