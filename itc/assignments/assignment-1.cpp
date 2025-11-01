#include <iostream>
using namespace std;

//Problem 1
/*Q1: Criteria for calculation of wages in a company is given below.
Basic Salary = Pay Rate Per Hour * Working Hours of Employee
Overtime Salary = Overtime Pay Rate * Overtime Hours of Employee
Total Salary = Basic Salary + Overtime Salary
Write a c++ program that should take working hours and overtime hours of employee is input.
The program should calculate and display the total salary of an employee.*/

	int main1()
	{
		int basic, overtime, basicsalary, overtimesalary;

		cout << "Enter Basic salary of the employee..." << endl;
		cin >> basic;

		cout << "Please enter the working hours..." << endl;
		cin >> basicsalary;

		char isovertime;
		cout << "Does the employee is working overtime (y/n)" << endl;
		cin >> isovertime;

		if (isovertime == 'y' || isovertime == 'Y') {
			cout << "How many hours the employee is working overtime..." << endl;
			cin >> overtime;
			cout << "Enter the overtime salary per hour..." << endl;
			cin >> overtimesalary;
			int totalsalary = (basic * basicsalary) + (overtime * overtimesalary);
			cout << "The total salary of the employee is: Rs." << totalsalary;
		}
		else if (isovertime == 'n' || isovertime == 'N') {
			int totalsalary = basic * basicsalary;
			cout << "The total salary of the employee is: Rs." << totalsalary;
		}
		else {
			cout << "Please only enter n or y....";
		}

		return 0;
	}

//Problem 2 
/*Q2: Write a program based on following criteria
Calculate Total Price
Write a program that calculates the total original price of 5 shirts, given their individual prices.Use the following
prices :
Shirt1 = 432
Shirt2 = 320
Shirt3 = 270
Shirt4 = 680
Shirt5 = 520
Store the prices in separate variables and output the total price before any discounts.
Calculate Discount Amount
Calculate the total discount amount based on a 15 % discount on the total original price of the shirts.Output the
amount of discount availed by the lady after the calculation.
Calculate Price After Discount
Extend the program to compute the final price after applying the 15 % discount.Display both the total price
before the discount and the total price after the discount.Ensure that you calculate and display the discount
amount as well.
*/

int main2() {
	int Shirt1 = 432;
	int Shirt2 = 320;
	int Shirt3 = 270;
	int Shirt4 = 680;
	int Shirt5 = 520;
	int price = Shirt1 + Shirt2 + Shirt3 + Shirt4 + Shirt5;

	float discount = (15.0 / 100) * price;

	float totalprice = price - discount;

	cout << "Original price: Rs." << price << endl << "Discounted amount: Rs." << discount << endl << "Final price to pay: Rs." << totalprice << endl;
	cout << endl << "Thank you for shopping ^_^" << endl;
	return 0;

}

//Problem 3
/*Q3: Write a program that takes monthly income and monthly expenses of the user like electricity bill, gas bill,
food expense.The program should calculate the following :
 Total monthly expenses
 Totally yearly expenses
 Monthly savings
 Yearly saving
 Average saving per month
 Average expense per month*/

int main3() {

	int income, elecbill, gasbill, foodbill, otherbill;

	cout << "What is your monthly income..." << endl;
	cin >> income;
	cout << "How much is the electricity bill..." << endl;
	cin >> elecbill;
	cout << "How much is the gas bill..." << endl;
	cin >> gasbill;
	cout << "What is your foood expenses..." << endl;
	cin >> foodbill;
	cout << "Any other expenses..." << endl;
	cin >> otherbill;
	
	int monthlyexpenses = elecbill + gasbill + foodbill + otherbill;
	int yearlyexpenses = 12 * monthlyexpenses;

	if (monthlyexpenses > income) {

		int monthlysavings = monthlyexpenses - income;
		int yearlysavings = 12 * monthlysavings;

		cout << "Total monthly expenses: Rs." <<monthlyexpenses << endl;
		cout << "You are at loss of: Rs." <<monthlysavings << " per month." << endl;
		cout << "Total yearly expenses: Rs." << yearlyexpenses << endl;
		cout << "You are at loss of: Rs." << yearlysavings << " per year." << endl;
	}
	else if (income >= monthlyexpenses) {

		int monthlysavings = income - monthlyexpenses;
		int yearlysavings = 12 * monthlysavings;

		cout << "Total monthly expenses: Rs." << monthlyexpenses << endl;
		cout << "You are saving: Rs." << monthlysavings << " per month." << endl;
		cout << "Total yearly expenses: Rs." << yearlyexpenses << endl;
		cout << "You are saving: Rs." << yearlysavings << " per year." << endl;
	}
	return 0;
}

//Problem 4 
/*Q4.Write a program that takes a character and a number of steps as input from the user.The program should
then jump a number of steps from that character.
Sample output :
Enter character : a
Enter steps : 2
New character : c*/

int main4() {

	char alphabet;
	int steps;
	cout << "Enter an alphabet..." << endl;
	cin >> alphabet;
	cout << "Enter number of steps you want to jump..." << endl;
	cin >> steps;
	char x = alphabet + steps;
	cout << "The next alphabet after jumping " << steps << " steps is: " << x << endl;
	return 0;
}

//Problem 5 
/*Q5.Write a program that takes a 5 - digit number as input, calculates, and displays the sum of the first and last
digit of the number.*/

int main5() {

	int number;
	cout << "Enter a five-digit number..." << endl;
	cin >> number;

	if (number > 9999 && number < 100000) {

		int a = number / 10000;
		int b = number % 10;
		cout << "The first digit: " << a << endl << "The last digit: " << b << endl;
		cout << "The sum of first and last digit of the five-digit entered number is: " << a + b;
	}
	else {
		cout << "Please enter a five-digit integer only...";
	}
	return 0;
}