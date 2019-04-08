#include <iostream>
#include <string>
#include <vector>

using namespace std;

// All the function prototypes.
void ScreenFormat();
void display(const vector<string>* const pInventory);

// A double cast *pointer* GetWeeklyHours function definition (ASSIGNED THE ADDRESS FOR GetWeeklyHours).
double &GetWeeklyHours()
{
	// int data type scope for workHours.
	int workHours;
	// cout statement asking user how many hours they worked during the week.
	cout << "How many hours did you work this week: ";
	// cin collecting the user input (GATHERING VALUE FOR INT workHours).
	cin >> workHours;
	// The variable double cast h is equal to the hours working in a week.
	double h = workHours;
	// Double cast *pointer* hours variable initialized and is equal to h (ASSIGNED THE ADDRESS FOR THE VARIABLE hours TO VARIABLE h).
	double &hours = h;
	// Return the value of hours.
	return hours;
}

// A doubled cast *pointer* GetSalary function definition (POINTER INITIALIZED).
double *GetSalary()
{
	// int data type scope for money.
	int money;
	// cout statement asking user how much money they get paid per the hour.
	cout << "How much money do you get paid per the hour: ";
	// cin collecting the user input (GATHERING VALUE FOR INT money).
	cin >> money;
	// The double cast variable salary is equal to the money being paid per hour.
	double salary = money;
	// The double cast *pointer* variable HourlySalary is equal to salary (ASSIGNED THE ADDRESS FOR THE VARIABLE salary to POINTER VARIABLE HourlySalary).
	double *HourlySalary = &salary;
	// Return the value of HourlySalary.
	return HourlySalary;
}

int main()
{
	// Changes the title of the program to Dystopian Company Work Pay.
	system("title Dystopian Company Work Pay");
	// Changes the background to black and the font color green.
	system("color 0A");

	// Double cast hours is equal to the function GetWeeklyHours.
	double hours = GetWeeklyHours(); //FUNCTION CALL.
	// Double cast salary is equal to the function GetSalary (POINTER DEREFERENCE).
	double salary = *GetSalary(); //FUNCTION CALL.
	// Double cast WeeklySalary is equal to the variables hours multiplied by salary.
	double WeeklySalary = hours * salary;
	// Double cast MonthlySalary is equal to WeeklySalary multiplied by 4.
	double MonthlySalary = WeeklySalary * 4;
	// Double cast YearlySalary is equal to WeeklySalary multiplied by 52.
	double YearlySalary = WeeklySalary * 52;

	// cout statement telling the user their weekly hours.
	cout << "Weekly Hours:  " << hours << endl;
	// cout statement telling the user their hourly hours.
	cout << "Hourly Salary: " << salary << endl;
	// cout statement telling the user their weekly salary.
	cout << "Weekly Salary: " << WeeklySalary << endl;
	// cout statement telling the user their monthly salary.
	cout << "Monthly Salary: " << MonthlySalary << endl;
	// cout statement telling the user their yearly salary.
	cout << "Yearly Salary: " << YearlySalary << endl;

	// Function in charge of formatting the screen.
	ScreenFormat(); // FUNCTION CALL.

	// cout statement telling user for thanking them for there input and they can now collect their items.
	cout << "Thank you for your input, you may now collect the following items.\n";

	// A string vector that obtains all string elements.
	vector<string> inventory;
	// Add the element "wallet" to the end.
	inventory.push_back("- wallet");
	// Add the element "phone" to the end.
	inventory.push_back("- phone");
	// Add the element "keys" to the end.
	inventory.push_back("- keys");

	// Function in charge of displaying the inventory items on the screen (PARAMETER AT THE POINTER ADDRESS inventory).
	display(&inventory); // FUNCTION CALL

	// cout statement thanking user input and  reminding them to not go to work with any distractions or they'll get punished.
	cout << "Remember to always come back to work without any distractions, or you will be punished.\n";
	// cout statement stating that the company is always watching their workers to make sure there not working with distractions.
	cout << "WE ARE ALWAYS WATCHING!\n";
	// cout statement telling the user to have a nice day.
	cout << "Have a nice day.\n";

	// Prevents the program from just running and not showing the user the console box.
	system("pause");
	// A exit number for the program. If zero is returned at the of the program, then the program ran successfully.
	return 0;
}

// Function definition of ScreenFormat.
void ScreenFormat()
{
	// cout used in formatting.
	cout << "=====================================================================================================================\n";
	cout << "=====================================================================================================================\n";
	cout << "=====================================================================================================================\n";
}

// Function definition of display, specifically display(const vector<string>* const pInventory) *pointer*.
void display(const vector<string>* const pInventory)
{
	// for loop for when string vector is equal to the inventory *pointer*.
	for (vector<string>::const_iterator iter = (*pInventory).begin();
		iter != (*pInventory).end(); ++iter)
	{
		// cout statement to print out the *pointer* iter.
		cout << *iter << endl;
	}
}