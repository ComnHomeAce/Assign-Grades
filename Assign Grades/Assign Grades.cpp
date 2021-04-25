//This program reads student scores, gets the best score, and then assigns grades

#include <iostream>
using namespace std;

int main()
{
	double grades[100];
	int students;
	double max = grades[0];

	cout << "This program reads student scores, gets the best score, and then assigns grades based on the below scheme:\n";
	cout << "Gade is A if score is >= best - 10\n";
	cout << "Gade is B if score is >= best - 20\n";
	cout << "Gade is C if score is >= best - 30\n";
	cout << "Gade is D if score is >= best - 40\n";
	cout << "Gade is F if score is  < best - 40\n";

	cout << "\nEnter number of students: ";
	cin >> students;
	cout << "\nEnter " << students << " grades. Press 'enter' after each grade.\n";

	for (int i = 0; i < students; i++)
	{
		cin >> grades[i];
	}
	
	cout << "\n";

	for (int i = 0; i < students; i++)
	{
		if (grades[i] > max)
			max = grades[i];
	}
	for (int i = 0; i < students; i++)
	{
		cout << "Student " << i << "'s score is " << grades[i] << " and their grade is ";
		if (grades[i] >= (max - 10))
		{
			cout << "A\n";
		}
		else if (grades[i] >= (max - 20))
		{
			cout << "B\n";
		}
		else if (grades[i] >= (max - 30))
		{
			cout << "C\n";
		}
		else if (grades[i] >= (max - 40))
		{
			cout << "D\n";
		}
		else
		{
			cout << "F\n";
		}
	}
}