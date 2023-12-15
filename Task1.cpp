#include<iostream>
using namespace std;
int main()
{
	int user_input, result;
	cout << "Enter your number for user_input= ";
	cin >> user_input;

	if (user_input < 6)
	{
		result = -1;
	}
	else if (user_input >= 0 && user_input <= 5)
	{
		result = 6;
	}
	else if (user_input >= 6 && user_input <= 12)
	{
		result = 1;
	}
	else if (user_input >= 13 && user_input <= 19)
	{
		result = 2;
	}
	else if (user_input >= 20 && user_input <= 50)
	{
		result = 3;
	}
	else if (user_input >= 51 && user_input <= 68)
	{
		result = 4;
	}
	else if (user_input >= 61 && user_input <= 101)
	{
		result = 5;
	}
	else if (user_input > 101)

	{
		result = -1;
	}
	else
	{
		cout << "\n\nINVALID INPUT";
	}
	cout << "\nRESULT: " << result;
	cout << endl;
	return 0;
}