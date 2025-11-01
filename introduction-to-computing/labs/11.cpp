#include <iostream>
using namespace std;

//Bubble sort

int main01() {
    int array[10] = {};
    cout << "Enter 10 elements: " << endl;
    for (int i = 0; i < 10; i++) {
        cin >> array[i];
    }

    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i <= 9; i++) {
        cout << array[i] << " ";
    }
    return 0;
}

//Selection sort

int main02() {
    int array[10] = {};
    cout << "Enter 10 elements: " << endl;
    for (int i = 0; i < 10; i++) {
        cin >> array[i];
    }
    for (int i = 0; i < 10 - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < 10; j++) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }
        int temp = array[i];
        array[i] = array[minIndex];
        array[minIndex] = temp;
    }

    for (int i = 0; i <= 9; i++) {
        cout << array[i] << " ";
    }
    return 0;
}




//Task 1
/*Create an integer array of Size 10 and initialize it with some random numbers.Write a program that takes
array and prints it in reverse order.*/

int main1() {
    int array[10] = {};
    cout << "Enter 10 elements: " << endl;
    for (int i = 0; i < 10; i++) {
        cin >> array[i];
    }
    cout << "Reversed array: ";
    for (int i = 9; i >= 0; i--) {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}

//Task 2
/*Create two array called Array1 and Array2. Initialize Array1 with some random numbers. Array2 is blank
and same as size of Array1. Write a program that Array1 and Array2 and store Values of Array1 in Array2
but in reverse order and print values of array.
*/

int main2() {
    int array1[10] = {};
    int array2[10] = {};
    int n = 9;
    for (int i = 0; i < 10; i++) {
        cin >> array1[i];
        array2[n] = array1[i];
        n--;
    }
    cout << "Array 1: ";
    for (int i = 0; i <= 9; i++) {
        cout << array1[i] << " ";
    }

    cout << endl << "Array 2: ";
    for (int i = 0; i <= 9; i++) {
        cout << array2[i] << " ";
    }
    return 0;
}

//Task 3
/*Create an integer array of Size 10 and initialize it with some random numbers. Take an input from user
and finds entered number into array and print not found if number does not found.*/

int main3() {
    int array[10] = {};
    for (int i = 0; i < 10; i++) {
        cin >> array[i];
    }
    cout << "Enter a number" << endl;
    int num;
    cin >> num;

    bool ispresent = false;
    for (int i = 0; i < 10; i++) {

        if (num == array[i]) {
            cout << "Index of number is: " << i << endl;
            ispresent = true;
        }
    }
    if (!ispresent) {
        cout << "Not found." << endl;
    }
    return 0;
}

//Task 4
/*Create an integer array of Size 10 and initialize it with some random numbers and finds minimum and
maximum number in array*/

int main4() {
    int array[10] = {};

    cout << "Enter 10 elements: " << endl;
    cin >> array[0];
    int max = array[0];
    int min = array[0];

    for (int i = 1; i < 10; i++) {
        cin >> array[i];
        if (array[i] > max) {
            max = array[i];
        }
        if (array[i] < min) {
            min = array[i];
        }
    }
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
    return 0;
}

//Task 5
/*Create an integer array of Size 10 and initialize it with some random numbers. Write a program that finds
how many even numbers are on even index.*/

int main5() {
    int array[10] = {};
    int count = 0;
    for (int i = 0; i < 10; i++) {
        cin >> array[i];
        if (i % 2 == 0) {
            if (array[i] % 2 == 0) {
                count++;
            }
        }
    }
    cout << "Number of even number present on even index are :" << count;
    return 0;
}

//Task 6
/*Create two integer array of Size 10 and initialize both with some random numbers. Find a maximum
number in Array 1 and search it in Array2, if it is present than prints its index.*/

int main6() {
    int array1[10] = {};
    cout << "Enter 10 elements of array 1: " << endl;
    cin >> array1[0];
    int max = array1[0];

    for (int i = 0; i < 10; i++) {
        cin >> array1[i];
        if (array1[i] > max) {
            max = array1[i];
        }
    }
    int array2[10] = {};
    bool ispresent = false;
    cout << "Enter 10 elements of array 2: " << endl;
    for (int i = 0; i < 10; i++) {
        cin >> array2[i];
    }

    for (int i = 0; i < 10; i++) {
        if (array2[i] == max) {
            ispresent = true;
            cout << "Maximum number in array 1 is on index in Array 2 : " << i << endl;
        }
    }

    if (!ispresent) {
        cout << "Not present.";
    }
    return 0;
}

//Task 7
/*Write a C++ Program that finds the nth maximum number in the array and print its index number.*/

int main7() {
    int array[10] = {};
    cout << "Enter 10 elements of array: " << endl;
    for (int i = 0; i < 10; i++) {
        cin >> array[i];
    }

    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    cout << "Enter value." << endl;
    int num;
    cin >> num;
    cout << "The " << num << "th Maximum number in array is: " << array[10 - num] << endl;

    for (int i = 0; i <= 9; i++) {
        cout << array[i] << " ";
    }
    return 0;
}

//Task 8
/*Write a C++ Program that fill array with random numbers and print in descending order.*/

int main8() {
    int array[10] = {};
    cout << "Enter 10 elements of array: " << endl;
    for (int i = 0; i < 10; i++) {
        cin >> array[i];
    }

    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }

    for (int i = 9; i >= 0; i--) {
        cout << array[i] << " ";
    }
    return 0;
}