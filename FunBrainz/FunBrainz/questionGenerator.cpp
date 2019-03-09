#include <stdio.h>  
#include <utility> 
#include<cmath>
#include<ctime>
#include<string>
#include<iostream>
using namespace std;

pair <string, long int> generateQuestion(int operatorIndex, int level)
{
	if (operatorIndex == 4)
	{
		operatorIndex = rand() % 4;
		pair < string, long int > temp;
		temp = generateQuestion(operatorIndex, level);
		return temp;

	}

	else
	{
		pair < string, long int > temp;

		long int range;

		if (operatorIndex < 2)
		{
			range = pow(2, level + 3);
		}

		else
		{
			range = pow(2, level);
		}

		int num1, num2;

		num1 = rand() % range;
		num2 = rand() % range;

		if (operatorIndex >= 2)
		{
			if (range >= 100)
			{
				num2 = rand() % 100 + 1;
			}
		}
		// 		cout << num << " ";
		long int result;


		string question = "";
		question += to_string(num1);

		if (operatorIndex == 0)
		{
			result = num1 + num2;
			question += '+';
		}

		else if (operatorIndex == 1)
		{
			result = num1 - num2;
			question += '-';

		}

		else if (operatorIndex == 2)
		{
			result = num1 * num2;
			question += '*';

		}

		else if (operatorIndex == 3)
		{
			result = rand() % range + 1;

			if (result > 50)
			{
				result = rand() % 50 + 1;
			}

			num2 = rand() % range + 1;

			if (num2 >= 100)
				num2 = rand() % 100 + 1;

			num1 = num2 * result;

			question = "";
			question += to_string(num1);
			question += '/';
		}

		question += to_string(num2);
		temp.first = question;
		temp.second = result;
		return temp;
	}

}

/*int main()
{
	srand(time(0));
	pair < string, long int > temp;

	temp = generateQuestion(2, 1);
	cout << temp.first << " " << temp.second << endl;




	for (int i = 1; i <= 10; i++)
	{
		for (int j = 0; j <= 4; j++)
		{
			temp = generateQuestion(j, i);
			cout << temp.first << " " << temp.second << endl;

		}

	}

}*/