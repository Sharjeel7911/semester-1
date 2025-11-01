#include <iostream>
using namespace std;

//Problem 1: Using modulus
/*
Write and run a program that reads a six-digit integer and prints the sum of its six digits.
Sample Input: 153426
Sample output: 21*/

int SumOfDigits(int a) {
	int sum = 0;

	for (int i = 0; i < 6; i++) {
		int b = a % 10;
		sum += b;
		a = a / 10;
	}
	return sum;
}

//Problem 2 - ascii values
/*Take a character input from the user and tell whether the number is a capital letter or a small letter.
Sample Input: A
Sample Output: Capital letter
Sample Input: g
Output: small letter
Sample Input: )
*/

void CharacterType(char ch) {
	int asciiValue = int(ch);
	if (asciiValue >= 65 && asciiValue <= 90) {
		cout << "Capital letter";
	}
	else if (asciiValue >= 97 && asciiValue <= 122) {
		cout << "Small letter";
	}
	else {
		cout << "Enter an Alphabet...!!";
	}

}

//Problem 3 - mod, quotient and greaterness
/*Write and run a program that reads two integers and then uses the conditional expression operator to print
either “multiple” or “not” according to whether one of the integers is a multiple of the other.
Sample Input: 12 6
Output: 12 = 6x2
Sample Input: 12 27
Output: 13 = 12x2+3*/

int FindMultiple(int a, int b) {
	if (a > b) {
		if (a % b == 0) {
			int c = a / b;
			cout << b << " x " << c;
		}
		else if (a % b != 0) {
			int c = a / b;
			int d = a % b;
			cout << b << " x " << c << " + " << d;

		}
		return 1;
	}

	else {
		if (b % a == 0) {
			int c = b / a;
			cout << a << "x" << c;
		}
		else if (b % a != 0) {
			int c = b / a;
			int d = b % a;
			cout << a << "x" << c << "+" << d;

		}
	}
}

//Problem 4 - Using If and switch separately
/* Write a program that will take at max: a six-digit number and output each of its digits in words, (Bonus) if
the number is less than 6 digits it should not print initial zeros. If the number is greater than 6 digits then it
should output the wrong input.
Sample Input: 651432
Output: Six Five One Four Three two
(Bonus)Sample Input: 1432
Sample Output: One Four Three two*/

void PrintCharacter(int a) {
	int num = a;
	for (int i = 100000; i >= 1; i /= 10) {

		int b = num / i;
		num = num % i;

		switch (b) {
		case 0:
			cout << "Zero ";
			break;
		case 1:
			cout << "One ";
			break;
		case 2:
			cout << "Two ";
			break;
		case 3:
			cout << "Three ";
			break;
		case 4:
			cout << "Four ";
			break;
		case 5:
			cout << "Five ";
			break;
		case 6:
			cout << "Six ";
			break;
		case 7:
			cout << "Seven ";
			break;
		case 8:
			cout << "Eight ";
			break;
		case 9:
			cout << "Nine ";
			break;
		}
	}
	cout << endl;

}

//Problem 5 - Float and Integer truncating
/*Write a program that takes as input a floating number and prints its ceiling Integer.
Sample Input: 5.5
Output: 6
Sample Input: -5.5
Output: -5
Sample Input: 5
Output: 5*/

void CeilNo(double a) {
	cout << ceil(a);
}

//Problem 5 - Float and Integer truncating
	/* Write a program that takes as input a floating number and prints its floor value.
Sample Input: 5.5
Output: 5
Sample Input: -5.5
Output: -6
Sample Input: 5
Output: 5*/

void FloorNo(double a) {
	cout << floor(a);
}

//Problem 6 - Finding Minimum and Maximum
/*Computing Fundamentals has 5 sections. We are required to find out which section's average is higher.
Write a program that takes each section’s average and Output which section has won w.r.t average.
Sample Input: B 90
D 80
C 60
A 99
E 91
Output: A got the highest average of 99
C got the lowest average of 60*/

void MaxMin(int a, int b, int c, int d, int e) {
	cout << "The highest average is: " << max({ a, b, c, d, e }) << endl;
	cout << "The lowest average is: " << min({ a, b, c, d, e });
}

//Problem 6 - Course Aggregate
/*
Write a program which takes marks of 5 courses as input, of 5 students and output the students who got
the highest aggregate.
Roll# C1 C2 C3 C4 C5
Sample Input:
1391 80 70 60 14 88
1376 70 80 80 88 89
1374 71 82 50 80 79
1372 77 90 90 99 100
1375 73 83 40 81 69
Sample Output: 1372 has the highest Aggregate of 456
*/

void HighestAggregate(int a, int b, int c, int e, int f, int g, int h, int i, int j, int k, int l, int m) {
	int x = e + f + g;
	int y = h + i + j;
	int z = k + l + m;
	int HighestAvg = max({ x,y,z });
	if (x == HighestAvg) {
		cout << "Roll no. " << a << " has the highest Aggregate of " << HighestAvg << ".";
	}
	else if (y == HighestAvg) {
		cout << "Roll no. " << b << " has the highest Aggregate of " << HighestAvg << ".";
	}
	else {
		cout << "Roll no. " << c << " has the highest Aggregate of " << HighestAvg << ".";

	}
}

//Problem 6 - @nd Max
/*Write a program that takes 5 input integers and tells the 2nd maximum.
Sample Input: 90 5 60 30 20
Sample Output: 60*/

void SecondMax(int a, int b, int c, int d, int e) {

	int Max = max({ a, b, c, d, e });

	if (a == Max) {
		if (b > c && b > d && b > e) {
			cout << b << " is the second maximum no.";
		}
		else if (c > b && c > d && c > e) {
			cout << c << " is the second maximum no.";
		}
		else if (d > b && d > c && d > e) {
			cout << d << " is the second maximum no.";
		}
		else {
			cout << e << " is the second maximum no.";
		}
	}
	if (b == Max) {
		if (a > c && a > d && a > e) {
			cout << a << " is the second maximum no.";
		}
		else if (c > a && c > d && c > e) {
			cout << c << " is the second maximum no.";
		}
		else if (d > a && d > c && d > e) {
			cout << d << " is the second maximum no.";
		}
		else {
			cout << e << " is the second maximum no.";
		}
	}
	if (c == Max) {
		if (a > b && a > d && a > e) {
			cout << a << " is the second maximum no.";
		}
		else if (b > a && b > d && b > e) {
			cout << b << " is the second maximum no.";
		}
		else if (d > a && d > b && d > e) {
			cout << d << " is the second maximum no.";
		}
		else {
			cout << e << " is the second maximum no.";
		}
	}
	if (d == Max) {
		if (a > b && a > c && a > e) {
			cout << a << " is the second maximum no.";
		}
		else if (b > a && b > c && b > e) {
			cout << b << " is the second maximum no.";
		}
		else if (c > a && c > b && c > e) {
			cout << c << " is the second maximum no.";
		}
		else {
			cout << e << " is the second maximum no.";
		}
	}
	if (e == Max) {
		if (a > b && a > d && a > c) {
			cout << a << " is the second maximum no.";
		}
		else if (b > a && b > d && b > c) {
			cout << b << " is the second maximum no.";
		}
		else if (d > a && d > b && d > c) {
			cout << d << " is the second maximum no.";
		}
		else {
			cout << c << " is the second maximum no.";
		}
	}

}

//The Challenge: Making a series of Rock-Paper Scissor
/*
Write and run a program that plays the game o
f “Rock, paper, scissors.” In this game, two players simultaneously say (or display a hand symbol representing) either
“rock,” “paper,” or “scissors.” The winner is the one whose choice dominates the other. The rules are: paper dominates
(wraps) rock, rock dominates (breaks) scissors, and scissors dominate (cut) paper.
You can use r=rock,p=paper,s=scissors
Sample Input: r(it should be displayed *) r
Sample Output: Draw
Sample Input: r p
Sample Output: 2nd player wins
			 Extending to a series (the program should play and ask at the end of the game if you would like to play
another game, if so the game should be played again, and then prompt again if the user wants to play
again). At the end of the program, it should display how many games were played and display player 1’s
and player 2’s wins count along with who wins the series.*/

void RokPPrSzr(char x, char y) {

	if (x == y) {
		cout << "Draw";
	}
	else if ((x == 'r' && y == 's') || (x == 'p' && y == 'r') || (x == 's' && y == 'p')) {
		cout << "First player wins";
	}
	else if ((x == 's' && y == 'r') || (x == 'r' && y == 'p') || (x == 'p' && y == 's')) {
		cout << "Second player wins";
	}

	else {
		cout << "Invalid input! Please enter 'r', 'p', or 's'." << endl;
	}




}

int main1()
{
	int a;
	cout << "Enter a six-digit integer" << endl;
	cin >> a;
	if (a > 99999 && a < 999999) {
		cout << "The sum of the six digits of the entered number is: " << SumOfDigits(a) << endl;
	}
	else {
		cout << "Please enter a six-digit integer...!!" << endl;
	}
	return 0;
}

int main2() {
	char ch;
	cout << "Enter a character..." << endl;
	cin >> ch;
	CharacterType(ch);
	return 0;
}

int main3() {
	int a, b;
	cout << "Enter the first number" << endl;
	cin >> a;
	cout << "Enter the second number" << endl;
	cin >> b;

	FindMultiple(a, b);

	return 0;
}

int main4() {
	int a;

	cout << "Enter a six-digit integer: " << endl;
	cin >> a;

	if (a > 99999 && a < 1000000) {
		PrintCharacter(a);
	}
	else {
		cout << "Please enter a six-digit integer...!!" << endl;
	}

	return 0;
}

int main51() {
	double a;
	cout << "Enter a number" << endl;
	cin >> a;
	CeilNo(a);
	return 0;
}

int main52() {
	double a;
	cout << "Enter a number" << endl;
	cin >> a;
	FloorNo(a);
	return 0;
}

int main61() {
	int a, b, c, d, e;
	cout << "Enter the average of five sections" << endl;
	cin >> a >> b >> c >> d >> e;
	MaxMin(a, b, c, d, e);
	return 0;
}

int main62() {
	int a, b, c;
	cout << "Enter first student roll no: " << endl;
	cin >> a;
	cout << "Enter second student roll no: " << endl;
	cin >> b;
	cout << "Enter third student roll no: " << endl;
	cin >> c;
	cout << endl;
	int e, f, g;
	cout << "Enter first student English no: " << endl;
	cin >> e;
	cout << "Enter first student Urdu no: " << endl;
	cin >> f;
	cout << "Enter first student Punjabi no: " << endl;
	cin >> g;
	cout << endl;
	int h, i, j;
	cout << "Enter second student English no: " << endl;
	cin >> h;
	cout << "Enter second student Urdu no: " << endl;
	cin >> i;
	cout << "Enter second student Punjabi no: " << endl;
	cin >> j;
	cout << endl;
	int k, l, m;
	cout << "Enter third student English no: " << endl;
	cin >> k;
	cout << "Enter third student Urdu no: " << endl;
	cin >> l;
	cout << "Enter third student Punjabi no: " << endl;
	cin >> m;
	cout << endl;

	HighestAggregate(a, b, c, e, f, g, h, i, j, k, l, m);
	return 0;
}

int main63() {
	int a, b, c, d, e;
	cout << "Enter five numbers" << endl;
	cin >> a >> b >> c >> d >> e;
	SecondMax(a, b, c, d, e);
	return 0;
}

int main() {
	char x, y;

	cout << "Enter first player choice..." << endl;
	cin >> x;
	cout << "Enter second player choice..." << endl;
	cin >> y;

	RokPPrSzr(x, y);
	return 0;
}