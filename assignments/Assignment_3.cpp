#include <iostream>
using namespace std;

//1. Sum of Even Numbers
/*Write a program that takes integer inputs from the user and calculates the sum of all
even numbers entered. Stop the program when the user enters 0.*/

int main1()
{
	int num = 1;
	int sum = 0;

	while (num != 0) {
		cout << "Enter a number..." << endl;
		cin >> num;
		if (num % 2 == 0) {
			 sum += num;
		}
	}
	cout <<"The sum of Even number you entered is: "<< sum;
	return 0;
}

//2. Count Digits in a Number
/*Write a program to take a positive integer as input from the user and count the number
of digits in it using a while loop.*/

int main2() {
	int num = 0;
	int i = 0;

	cout << "Enter a positive integer... " << endl;
    cin >> num;

    if (num <= 0) {
        cout << "Please enter a positive integer...!" << endl;
        return 1; 
    }
    while (num != 0) {
		num = num / 10;
        i++;   
    }
    cout << "The number of digits is: " << i << endl;
    return 0;
}

//3. Check Palindrome Number
/*Write a program that takes an integer as input and checks if it is a palindrome using a
while loop.*/

int main3() {
	int num = 0;
	int original = 0;
	int reverse = 0;

	cout << "Enter a positive integer... " << endl;
	cin >> num;
	original = num;

	while (num != 0) {
		int digit = num % 10;
		reverse = reverse * 10 + digit;
		num = num / 10;
	}

	if (original == reverse) {
		cout << "The number is palindrome";
	}
	else {
		cout << "The number is not palindrome";
	}
	return 0;
}

//4. Multiplication Table
/*Write a program that takes an integer input from the user and prints its multiplication
table up to 10 using a for loop.*/

int main4() {
	int num = 0;

	cout << "Enter a positive integer... " << endl;
	cin >> num;

	for (int i = 1; i <= 10; i++) {
		cout << num << " x " << i << " = " << num * i << endl;
	}
	return 0;
}

//5. Categorize Numbers
/*Write a program that takes integer inputs from the user and categorizes them into
three ranges:
o Less than 10
o Between 10 and 50
o Greater than 50
Stop the program when the user enters 0.*/

int main5() {
	int num = 1;

	while (num != 0) {
		cout << "Enter a number..." << endl;
		cin >> num;

		if (num == 0) {
			break;
		}
		if (num < 10) {
			cout << "Less than 10." << endl;
		}
		else if (num > 10 && num < 50) {
			cout << "Between 10 and 50." << endl;
		}
		else if (num > 50) {
			cout << "Greater than 50." << endl;
		}
	}
	return 0;
}

//6. Prime Number Validator
/*Write a program that repeatedly takes integer inputs from the user and checks if each
number is prime. Stop the program when the user enters 0 and display the count of
prime numbers entered.*/

int main6() {
	int num = 1;
	int totalprime = 0;
	int i = 0;

	while (num!=0) {
		cout << "Enter a positive integer... " << endl;
		cin >> num;


		bool isprime = true;
		if (num == 0 || num == 1 || num == 2)  {
			isprime = false;
		}

		for (int i = 2; i <= num / 2; i++) {
			if (num % i == 0) {
				isprime = false;
				break;
			}
		}
		if (isprime) {
			cout << num << " is a prime number." << endl;
			i++;
			totalprime = i;
		}
		else {
			cout << num << " is not a prime number." << endl;
		}
	}
	cout << "The total prime numbers are: " << totalprime << endl;
	return 0;
}

//7. Range-Based Maximum
/*Write a program that calculates the maximum of numbers entered, but only considers
values between 20 and 100. Stop the program when the user inputs 0.*/

int main7() {
	int num = 1;
	int max = 0;
	
	while (num!=0) {
		cout << "Enter a positive integer... " << endl;
		cin >> num;

		if (num > 20 && num < 100) {
			if (num >= max) {
				max = num;
			}
		}
	}
	if (max == 0) {
		cout << "There was no number between 20 and 100 added.So the program cannot show the maximum number." << endl;
	}
	else {
		cout << "The maximum number is: " << max << endl;
	}
	return 0;
}

//8. Odd Numbers Average
/*Write a program that calculates the average of all odd numbers entered by the user.
Stop the program when the user enters -999.*/

int main8() {
	int num = 0;
	int sum = 0;
	float average = 0.0;
	int i = 0;

	while (num != -999) {
		cout << "Enter a number... " << endl;
		cin >> num;
		if (num != -999 && num % 2 != 0) {
			sum = sum + num;
			i++;
		}
	}
	if (i > 0) {
		average = float(sum) / i;
		cout << "The average of the odd numbers is: " << average << endl;
	}
	else {
		cout << "No odd numbers were entered." << endl;
	}
	return 0;
}

//9. Sum of Digits
/*Write a program to take an integer as input and calculate the sum of its digits. Repeat
this for multiple inputs and terminate the program when the user enters -1.*/

int main9() {
	int num = 0;
	int mod = 0;
	int sum = 0;

	while (true) {
		cout << "Enter a number..." << endl;
		cin >> num;

		if (num == -1) {
			break;
		}
		sum = 0;

		while (num != 0) {
			mod = num % 10;
			sum = sum + mod;
			num = num / 10;
		}
		cout << "The sum of he digits of the number: " << sum << endl;
	}
	return 0;
}

//10. Track Multiples of 3
/*Write a program that takes integer inputs from the user and calculates the sum of all
numbers that are multiples of 3. Stop when the user enters 0.*/

int main10() {
	int num = 1;
	int sum = 0;

	while (num != 0) {
		cout << "Enter a number..." << endl;
		cin >> num;

		if (num % 3 == 0) {
			sum = sum + num;
		}
	}
	cout << "The sum of numbers that are divisible by 3 is: " << sum << endl;
	return 0;
}

//11. Find Second Largest Number
/*Write a program that takes integer inputs from the user and determines the secondlargest 
number among them. Stop the program when the user enters -1.*/

int main11() {
	int num = 1;
	int max = -2147483648;
	int secmax = -1;
	int i = 0;

	while (num != -1) {
		cout << "Enter a number..." << endl;
		cin >> num;


		if (num != -1) {
			i++;
			if (num > max) {
				secmax = max;
				max = num;
			}
			
			else if (num < max && num > secmax) {
				secmax = num;
			}
			
		}
	}
	
	if (i < 2) {
		cout << "There is no second number input";
	}
	else if (max == secmax) {
		cout << "Every number is same.";
	}
	else {
		cout << "The second maximum number is: " << secmax << endl;
	}
	return 0;
}

//12. Shopping Cart Manager
/*Write a program that allows the user to repeatedly add item prices to a cart. After each
addition, ask if they want to "Continue" or "Checkout." At checkout, display the total
amount, maximum price, and minimum price.*/

int main() {
	int price = 0;
	char option;
	int sum = 0;
	int max = 0;
	int min = 2147483647;

	while (true) {
		cout << "Enter the item price..." << endl;
		cin >> price;
		if (price <= 0) { 
			cout << "Invalid price! Please enter a positive number." << endl;
			continue;  
		}

		sum += price;

		if (price > max) {
			max = price;
		}
		if (price < min) {
			min = price;
		}

		cout << "Do you want to continue(Y/N)..." << endl;
		cin >> option;
		
		if (option == 'n' || option == 'N') {
			cout <<"The total price is: "<< sum << endl;
			cout <<"The max price is: "<< max << endl;
			cout <<"The min price is: "<< min << endl;
			break;
		}	
		else if (option == 'Y' || option == 'y') {
			continue;
		}
		else  {
			while (true) {
				cout << "Invalid input! Please enter only (Y/N)." << endl;

				cout << "Do you want to continue(Y/N)..." << endl;
				cin >> option;
				if (option == 'n' || option == 'N') {
					cout << "The total price is: " << sum << endl;
					cout << "The max price is: " << max << endl;
					cout << "The min price is: " << min << endl;
					break;
				}
				else if (option == 'Y' || option == 'y') {
					break;
				}
				else  {
					continue;
				}
			}
		}
	}
	return 0;
}

//13. Grade Calculator
/*Write a program that takes marks for N students (input by the user) and calculates
 their grades based on the following criteria:
 Use loops for iteration and if-else for decision-making.
*/

int main13() {
	int totalmarks = 100;
	int marks = 0;
	int students = 0;
	int i = 0;

	cout << "How many students?" << endl;
	cin >> students;

	while (true) {
		
		cout << "Enter the marks..." << endl;
		cin >> marks;

		if (marks >= 90 && marks <= totalmarks) {
			cout << "Grade A" << endl;
		}
		else if (marks >= 75 && marks <= 89) {
			cout << "Grade B" << endl;
		}
		else if (marks >= 50 && marks <= 74) {
			cout << "Grade C" << endl;
		}
		else if (marks < 50 && marks >= 0) {
			cout << "Fail" << endl;
		}
		else {
			cout << "Invalid input." << endl;
		}
		i++;
		if (i == students) {
			break;
		}
	}
	return 0;
}

//14. Check Perfect Numbers in a Range
/*Write a program that takes two integers as input (start and end) and finds all perfect
numbers in this range. A perfect number is one where the sum of its proper divisors
equals the number itself.
*/

int main14() {
	int start, end;

	cout << "Enter the start of the range..." << endl;
	cin >> start;
	cout << "Enter the end of the range..." << endl;
	cin >> end;
	cout << "Perfect numbers in the range is/are:" << endl;

	for (int i = start; i <= end; i++) {
		int sum = 0;

		for (int k = 1; k < i; k++) {
			if (i % k == 0) {
				sum += k;
			}
		}

		if (sum == i && i != 0) {
			cout << i << " ";
		}
	}
	return 0;
}

//15. Find income tax.
/* For each income entered, calculate the tax based on the criteria:
*/

int main15() {
	int income;

	while (true) {
		cout << "Enter the income." << endl;
		cin >> income;

		if (income <= 0) {
			cout << "Negative number or Zero is not allowed." << endl;
			break;
		}
		else if (income <= 50000) {
			cout << "Income Tax: 0" << endl;
		}
		else if (income > 50000 && income <= 100000) {
			cout << "Income Tax: " << float(.10) * income << endl;
		}
		else if (income > 100000 && income <= 200000) {
			cout << "Income Tax: " << float(.20) * income << endl;
		}
		else if (income > 200000) {
			cout << "Income Tax: " << float(.30) * income << endl;
		}
	}
	return 0;
}