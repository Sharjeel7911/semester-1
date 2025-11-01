#include <iostream>
using namespace std;

//BINARY SEARCH

int main12() {
	cout << "Enter the array." << endl;
	char array[100] = {};
	cin.getline(array, 100);

	int length = 0;
	while (array[length] != '\0') {
		length++;
	}

	if (length == 0) {  // Edge case: Empty input
		cout << "No input given!" << endl;
		return 0;
	}

	//BUBBLE SORT
	for (int i = 0; i < length - 1; i++) {
		for (int j = 0; j < length - 1 - i; j++) {
			if (array[j] > array[j + 1]) {
				char temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}

	cout << "Sorted array: " << array << endl;


	cout << "Which element? ";
	char x;
	cin >> x;

	int s = 0;
	int e = length - 1;

	while (s <= e) {
		int mid = s + (e - s) / 2; // Avoid integer overflow

		if (array[mid] == x) {
			cout << "Element found at index: " << mid << endl;
			return 0;
		}
		else if (array[mid] > x) {
			e = mid - 1;
		}
		else {
			s = mid + 1;
		}
	}

	cout << "Element not found!" << endl;
	return 0;
}














//Task 1
/*Write a program that removes all spaces from a given character array.*/

int main1() {
	cout << "Enter the array." << endl;
	int x = 0;
	char array[100] = {};
	cin.getline(array, 100);

	for (int i = 0; array[i] != '\0'; i++) {
		if (array[i] != ' ') {
			array[x] = array[i];
			x++;
		}
	}
	array[x] = '\0';
	cout << "String without spaces: " << array << endl;
	return 0;
}

//Task 2
/*Write a program to find common elements between two character-arrays*/

int main2() {
	cout << "Enter the elements in array 1." << endl;
	char array1[100] = {};
	cin.getline(array1, 100);

	cout << "Enter the elements in array 2." << endl;
	char array2[100] = {};
	cin.getline(array2, 100);

	for (int i = 0; array1[i] != '\0' ; i++) {
		for(int j = 0; array2[j] != '\0'; j++)
			if (array1[i] == array2[j]) {
				cout << array1[i] << " ";
				array2[j] = '\0';
				break;
			}
	}
	cout << endl;
	return 0;
}

//Task 3
/*Write a program to find and print unique elements in a character array.*/

int main3() {
	cout << "Enter the array." << endl;
	char array[100] = {};
	cin.getline(array, 100);

	bool isunique;
	cout << "Unique characters: ";
	for (int i = 0; array[i] != '\0'; i++) {
		isunique = true;
		for (int j = 0; array[j] != '\0'; j++) {
			if (i != j && array[i] == array[j]) {
				isunique = false;
				break;
			}
		}
		if (isunique) {
			cout << array[i] << " ";
		}
	}
	cout << endl;
	return 0;
}

//Task 4
/*Write a program that counts the frequency of each character in a character array.*/

int main4() {
	cout << "Enter the array." << endl;
	char array[100] = {};
	cin.getline(array, 100);

	int count;
	for (int i = 0; array[i] != '\0'; i++) {
		count = 0;

		bool alreadyCounted = false;
		for (int k = 0; k < i; k++) {
			if (array[i] == array[k]) {
				alreadyCounted = true;
				break;
			}
		}

		if (!alreadyCounted) {
			for (int j = 0; array[j] != '\0'; j++) {
				if (array[i] == array[j]) {
					count++;
				}
			}
			cout << "Counter of " << array[i] << ": " << count << endl;
		}
	}
	return 0;
}

//Task 5
/*Write a program in which two character-arrays are taken from the user and merged into a third array. But the entries are done in alphabetical order (sorted).*/

int main5() {
	cout << "Enter the elements in array 1." << endl;
	char array1[100] = {};
	cin.getline(array1, 100);

	int length1 = 0;
	while (array1[length1] != '\0') {
		length1++;
	}
	//BUBBLE SORT
	for (int i = 0; i < length1 - 1; i++) {
		for (int j = 0; j < length1 - 1 - i; j++) {
			if (array1[j] > array1[j + 1]) {
				char temp = array1[j];
				array1[j] = array1[j + 1];
				array1[j + 1] = temp;
			}
		}
	}

	cout << "Enter the elements in array 2." << endl;
	char array2[100] = {};
	cin.getline(array2, 100);

	int length2 = 0;
	while (array2[length2] != '\0') {
		length2++;
	}
	//SELECTION SORT
	for (int i = 0; i < length2 - 1; i++) {
		int minIndex = i;
		for (int j = i + 1; j < length2; j++) {
			if (array2[j] < array2[minIndex]) {
				minIndex = j;
			}
		}
		if (minIndex != i) {
			char temp = array2[i];
			array2[i] = array2[minIndex];
			array2[minIndex] = temp;
		}
	}

	char array[200] = {};

	for (int i = 0; array1[i] != '\0'; i++) {
		array[i] = array1[i];
	}

	int length = 0;
	while (array[length] != '\0') {
		length++;
	}
	for (int i = 0; array2[i] != '\0'; i++) {
		array[length + i] = array2[i];
	}

	cout << array;

	return 0;
}

//Task 6
/*Write a program in which the user enters names of animals in a character array of size 100 (with spaces).Then the user enters an animal’s name in second array and the program determines if the second array is present in the first array*/

int main() {
	char animalList[100];  
	char animalToFind[50]; 
	bool found = false;    

	cout << "Enter a list of animal names (separated by spaces): ";
	cin.getline(animalList, 100);  

	cout << "Enter an animal name to search for: ";
	cin.getline(animalToFind, 50);  

	int i = 0;
	int j = 0; 

	while (animalList[i] != '\0') {
		int start = i;  
		while (animalList[i] == animalToFind[j] && animalToFind[j] != '\0') {
			i++;  
			j++; 
		}

		if (animalToFind[j] == '\0') {
			found = true;
			break;  
		}

		j = 0;

			i = start + 1;
	}

	if (found) {
		cout << "The animal " << animalToFind << " is found in the list." << endl;
	}
	else {
		cout << "The animal " << animalToFind << " is not found in the list." << endl;
	}

	return 0;
}

//Task 7
/*Write a program that takes a sentence as input from the user. It then separates capital letters, small letters, numbers, and special characters in four separate character arrays.*/

int main7() {
	cout << "Enter the array." << endl;
	int x = 0;
	char array[100] = {};
	cin.getline(array, 100);

	char lowercase[100] = {};
	char uppercase[100] = {};
	char number[100] = {};
	char special[100] = {};

	int l = 0, u = 0, n = 0, s = 0;

	for (int i = 0; array[i] != '\0'; i++) {
		if (array[i] >= 'A' && array[i] <= 'Z') {  
			uppercase[u] = array[i];
			u++;
		}
		else if (array[i] >= 'a' && array[i] <= 'z') {  
			lowercase[l] = array[i];
			l++;
		}
		else if (array[i] >= '0' && array[i] <= '9') {  
			number[n] = array[i];
			n++;
		}
		else {  
			special[s] = array[i];
			s++;
		}
	}

	cout << "Uppercase letters: " << uppercase << endl;
	cout << "Lowercase letters: " << lowercase << endl;
	cout << "Numbers: " << number << endl;
	cout << "Special characters: " << special << endl;
	return 0;
}

//Task 8
/*Write a program that finds a specific character and replaces it with another character.*/

int main8() {
	cout << "Enter the array." << endl;
	char array[100] = {};
	cin.getline(array, 100);

	char replace, replaced;
	cout << "What character do you want to replace?" << endl;
	cin >> replace;
	cout << "With which character?" << endl;
	cin >> replaced;

	bool found = false;  
	for (int i = 0; array[i] != '\0'; i++) {
		if (replace == array[i]) {
			array[i] = replaced; 
			found = true;  
		}
	}
	if (found) {
		cout << "Modified array: " << array << endl;
	}
	else {
		cout << "Character '" << replace << "' not found in the array!" << endl;
	}
	return 0;
}