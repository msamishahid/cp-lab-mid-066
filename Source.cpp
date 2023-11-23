#include<iostream>
using namespace std;
int main()
{
	float salary, newsalary, years;
	char choise;
	cout << "Enter the amount of salary of an employee \n";
	cin >> salary;
	cout << "for how many year you want to calculate increament";
	cin >> years;
	for (int i = 1; i <= years; i++)
	{
		cout << newsalary;
		newsalary = (salary * 5) / 100;

		cout << "choose b and B for additional  2% bonous for extra performance";
		cin >> choise;
		if (choise == 'b' || choise == 'B')
		{
			cout << newsalary;
			newsalary = salary * 0.07;
		}


	}


}