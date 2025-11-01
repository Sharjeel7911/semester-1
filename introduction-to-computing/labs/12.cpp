#include <iostream>
using namespace std;


//Task 1
	/*Write a program that creates a character array to store the word "Hello" and prints it.*/

int main1() {
	char array[] = "Hello";
	cout << array;
	return 0;
}

//Task 2
/*Write a program to declare a character array and takes input from the user. Then display the length of that cstring.*/

int main2() {
	int counter = 0;
	char array[100] = {};
	cout << "Enter the string." << endl;
	cin.getline(array, 100);

	while (array[counter] != '\0') {
		counter++;
	}

	cout << "Total characters: " << counter;
	return 0;
}

//Task 3
/*Write a program which prints all vowel characters present in the character array entered by the user along with their total count*/

int main3() {
	int count = 0;
	cout << "Enter the characters." << endl;
	char array[100] = {};
	cin.getline(array, 100);

	cout << "Vowels: ";
	for (int i = 0; array[i] != '\0'; i++) {
		if (array[i] == 'a' || array[i] == 'A' || array[i] == 'e' || array[i] == 'E' || array[i] == 'i' || array[i] == 'I' || array[i] == 'o' || array[i] == 'O' || array[i] == 'u' || array[i] == 'U') {
			cout << array[i] << " ";
			count++;
		}
	}
	cout << endl;
	cout << "Total vowels: " << count;

	return 0;
}

//Task 4
/*Write a program which display the number of capital letters, small letters, and numbers present in the character array entered by the user.*/

int main4() {
	int count = 0;
	int COUNT = 0;
	int c073T = 0;
	cout << "Enter the characters." << endl;
	char array[100] = {};
	cin.getline(array, 100);

	for (int i = 0; array[i] != '\0'; i++) {
		if (array[i] >= 65 && array[i] <= 90) {
			COUNT++;
		}
		else if (array[i] >= 97 && array[i] <= 122) {
			count++;
		}
		else if (array[i] >= '0' && array[i] <= '9') {
			c073T++;
		}
	}
	cout << "Capital letters: " << COUNT << endl;
	cout << "Small letters: " << count << endl;
	cout << "Numbers: " << c073T << endl;
	return 0;
}

//Task 5
/*Write a program that takes two character-arrays called source and destination array. It copies source array into destination array*/

int main5() {
	char source[100] = {};
	char destination[100] = {};
	cout << "Enter the characters for source array." << endl;
	cin.getline(source, 100);

	for (int i = 0; source[i] != '\0'; i++) {
		destination[i] = source[i];
	}

	cout << "Destination array:";
	cout << destination << endl;

	return 0;
}

//Task 6
/*Write a program that takes two character-arrays called source and destination array. It copies source array into destination array but in reverse order.*/


int main6() {
	char source[100] = {};
	char destination[100] = {};
	cout << "Enter the characters for source array." << endl;
	cin.getline(source, 100);

	int length = 0;
	while (source[length] != '\0') {
		length++;
	}

	for (int i = 0; i < length; i++) {
		destination[i] = source[length - 1 - i];
	}
	destination[length] = '\0';
	cout << "Destination array: " << destination << endl;
	return 0;
}

//Task 7
/*Write a program that takes two character-arrays called s1 and s2. Compare both cstrings and display “Same String” if both are the same, otherwise display “Not Matched”.*/

int main7() {
	cout << "Enter first string: ";
	char s1[100] = {};
	cin.getline(s1, 100);

	cout << "Enter second string: ";
	char s2[100] = {};
	cin.getline(s2, 100);

	bool isequal = true;
	for (int i = 0; s1[i] != '\0' && s2[i] != '\0'; i++) {
		if (s1[i] != s2[i]) {
			isequal = false;
			cout << "Not Matched." << endl;
			break;
		}
	}
	if (isequal) {
		cout << "Same String." << endl;
	}


	return 0;
}

//Task 8
/*Write a program that converts all lowercase characters in a character array to uppercase, and all uppercase characters to lowercase.*/

int main8() {
	char array[100] = {};
	cout << "Enter the characters." << endl;
	cin.getline(array, 100);

	for (int i = 0; array[i] != '\0'; i++) {
		if (array[i] >= 65 && array[i] <= 90) {
			array[i] += 32;
		}
		else if (array[i] >= 97 && array[i] <= 122) {
			array[i] -= 32;
		}
	}
	cout << "The new array is : " << array << endl;
	return 0;
}

//Task 9
/*Write a program that takes a long sentence as input using cin.getline().*/

int main9() {
	char array[100] = {};
	cout << "Enter the characters." << endl;
	cin.getline(array, 100);
	cout << "The sentence you entered: " << array;
	return 0;
}

//Task 10
/*Write a program that takes the age of a user (in an integer variable) and their full name (first and last name separated by spaces all together in a single character array), and then displays the information.*/

int main10() {
	int age;
	char array[100] = {};

	cout << "Enter your age: ";
	cin >> age;
	cin.ignore();
	cout << "Enter your full name: ";
	cin.getline(array, 100);

	cout << "User Information:" << endl;
	cout << "Age: " << age << endl;
	cout << "Full Name: " << array << endl;

	return 0;
}