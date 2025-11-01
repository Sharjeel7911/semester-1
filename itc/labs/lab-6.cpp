#include <iostream>
using namespace std;

//Task 1

int main1()
{
    int year;
    cout << "Enter the year..." << endl;
    cin >> year;

    if (year % 100 == 0) {
        if (year % 400 == 0) {
            cout << "The year is a leap year.";
        }
        else {
            cout << "The year is not a leap year.";
        }
        return 1;
    }
    if (year % 4 == 0) {

        cout << "The year is a leap year.";
    }
    else {
        cout << "The year is not a leap year.";
    }
    return 0;
}

//Task 2

int main2() {
    int registration, totalNo, Physics, Chemistry, Math;

    cout << "Enter Registration number..." << endl;
    cin >> registration;
    cout << "Enter the total marks..." << endl;
    cin >> totalNo;
    cout << "Enter Marks of Physics..." << endl;
    cin >> Physics;
    cout << "Enter Marks of Chemistry..." << endl;
    cin >> Chemistry;
    cout << "Enter Marks of Math..." << endl;
    cin >> Math;

    int obtainedNo = Physics + Chemistry + Math;
    float percentage = float(obtainedNo) / float(totalNo) * 100;
    if (obtainedNo > totalNo) {
        cout << "Error... Obtaine marks must be less than or equal to Total marks...";
    }
    else {
        if (percentage >= 60 && percentage <= 100) {
            cout << "Registration Number: " << registration << endl;
            cout << "Total Marks: " << obtainedNo << endl;
            cout << "Percentage: " << percentage << " %" << endl;
            cout << "You got 1st division...!!";
        }
        else if (percentage < 60 && percentage >= 48) {
            cout << "Registration Number: " << registration << endl;
            cout << "Total Marks: " << obtainedNo << endl;
            cout << "Percentage: " << percentage << " %" << endl;
            cout << "You got 2nd division...!!";
        }
        else if (percentage < 48 && percentage >= 36) {
            cout << "Registration Number: " << registration << endl;
            cout << "Total Marks: " << obtainedNo << endl;
            cout << "Percentage: " << percentage << " %" << endl;
            cout << "Pass...!!";
        }
        else if (percentage < 36) {
            cout << "Registration Number: " << registration << endl;
            cout << "Total Marks: " << obtainedNo << endl;
            cout << "Percentage: " << percentage << " %" << endl;
            cout << "Fail...!!";
        }
    }
    return 0;
}

//Task 3

int main3() {
    int num1, num2;
    cout << "Enter the first number" << endl;
    cin >> num1;
    cout << "Enter the second number" << endl;
    cin >> num2;

    if (num1 >= num2) {
        if (num1 % num2 == 0) {
            int num3 = num1 / num2;
            cout << num2 << " x " << num3;
        }
        else if (num1 % num2 != 0) {
            int num3 = num1 / num2;
            int num4 = num1 % num2;
            cout << num2 << " x " << num3 << " + " << num4;

        }
        return 1;
    }

    else {
        if (num2 % num1 == 0) {
            int num3 = num2 / num1;
            cout << num1 << " x " << num3;
        }
        else if (num2 % num1 != 0) {
            int num3 = num2 / num1;
            int num4 = num2 % num1;
            cout << num1 << " x " << num3 << " + " << num4;

        }
    }
}

//Task 4

int main4() {
    float percentage;
    cout << "Enter the marks percentage" << endl;
    cin >> percentage;

    if (percentage > 100.0) {
        cout << "Error... Percentage must be less than or equal to 100 %...";
    }
    else {
        if (percentage >= 86.0 && percentage <= 100.0) {
            cout << "Letter Grade: A" << endl;
            cout << "Grade Point: 4.0";
        }
        else if (percentage >= 82.0 && percentage <= 85.0) {
            cout << "Letter Grade: A-" << endl;
            cout << "Grade Point: 3.67";
        }
        else if (percentage >= 78.0 && percentage <= 81.0) {
            cout << "Letter Grade: B+" << endl;
            cout << "Grade Point: 3.33";
        }
        else if (percentage >= 74.0 && percentage <= 77.0) {
            cout << "Letter Grade: B" << endl;
            cout << "Grade Point: 3.00";
        }
        else if (percentage >= 70.0 && percentage <= 73.0) {
            cout << "Letter Grade: B-" << endl;
            cout << "Grade Point: 2.67";
        }
        else if (percentage >= 66.0 && percentage <= 69.0) {
            cout << "Letter Grade: C+" << endl;
            cout << "Grade Point: 2.33";
        }
        else if (percentage >= 62.0 && percentage <= 65.0) {
            cout << "Letter Grade: C" << endl;
            cout << "Grade Point: 2.00";
        }
        else if (percentage >= 58.0 && percentage <= 61.0) {
            cout << "Letter Grade: C-" << endl;
            cout << "Grade Point: 1.67";
        }
        else if (percentage >= 54.0 && percentage <= 57.0) {
            cout << "Letter Grade: D+" << endl;
            cout << "Grade Point: 1.33";
        }
        else if (percentage >= 50.0 && percentage <= 53.0) {
            cout << "Letter Grade: D" << endl;
            cout << "Grade Point: 1.00";
        }
        if (percentage < 50.0) {
            cout << "Letter Grade: F" << endl;
            cout << "Grade Point: 0.00";
        }
    }
    



    return 0;
}

//Task 5

int main5() {
    char opretor;
    float num1, num2;

    cout << "Enter the first number..." << endl;
    cin >> num1;
    cout << "Enter the second number..." << endl;
    cin >> num2;
    cout << "Enter the operator...(+,-,*,/,%)" << endl;
    cin >> opretor;

    switch (opretor) {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;
    case '/':
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;
    case '%':
        if (num1 >= num2) {
            cout << num1 << " % " << num2 << " = " << int(num1) % int(num2);
        }
        else {
            cout << num2 << " % " << num1 << " = " << int(num2) % int(num1);
        }
        return 1;
    default:
        cout << "Error! operator is not correct";
        break;
    }
    return 0;
}

//Task 6

int main6() {
    char choice;
    float value, result;

    cout << "Enter a value.." << endl;
    cin >> value;

    cout << "Choose conversion type..." << endl;
    cout << " I - Inches to Centimeters..." << endl;
    cout << " c - Centimeters to Inches..." << endl;
    cout << " G - Gallons to Liters..." << endl;
    cout << " L - Liters to Gallons..." << endl;
    cout << " M - Miles to Kilometers..." << endl;
    cout << " K - Kilometers to Miles..." << endl;
    cout << " P - Pounds to Kilograms..." << endl;
    cout << " O - Pounds to Ounces..." << endl;
    cout << " F - Fahrenheit to Celsius..." << endl;
    cout << " C - Celsius to Fahrenheit..." << endl;
    cout << "Enter your choice..." << endl;
    cin >> choice;

    switch (choice) {
    case 'I': 
        result = value * 2.54;
        cout << value << " inches = " << result << " centimeters" << endl;
        break;
    case 'c': 
        result = value * 0.393701;
        cout << value << " centimeters = " << result << " inches";
        break;
    case 'G': 
        result = value * 3.78541;
        cout << value << " gallons = " << result << " liters";
        break;
    case 'L': 
        result = value * 0.264172;
        cout << value << " liters = " << result << " gallons";
        break;
    case 'M': 
        result = value * 1.60934;
        cout << value << " miles = " << result << " kilometers";
        break;
    case 'K': 
        result = value * 0.621371;
        cout << value << " kilometers = " << result << " miles";
        break;
    case 'P': 
        result = value * 0.453592;
        cout << value << " pounds = " << result << " kilograms";
        break;
    case 'O': 
        result = value * 16;
        cout << value << " pounds = " << result << " ounces";
        break;
    case 'F': 
        result = (value - 32) * (5.0 / 9.0);
        cout << value << " Fahrenheit = " << result << " Celsius";
        break;
    case 'C':
        result = value * (9.0 / 5.0) + 32;
        cout << value << " Celsius = " << result << " Fahrenheit";
        break;
    default:
        cout << "Invalid choice. Please enter a valid conversion type.";
        break;
    }
    return 0;
}

//Task 7

int main7() {
    int age;

    cout << "Enter your age..." << endl;
    cin >> age;

    if (age >= 18) {
        cout << "You are eligible to vote...!" << endl;
    }
    else {
        cout << "You are not eligible to vote. You need to be at least 18 years old." << endl;
    }
    return 0;
}

//Task 8

int main8() {
    int month;

    cout << "Enter a number (1-12) to get the month..." << endl;
    cin >> month;

    switch (month) {
    case 1:
        cout << "January" << endl;
        break;
    case 2:
        cout << "February" << endl;
        break;
    case 3:
        cout << "March" << endl;
        break;
    case 4:
        cout << "April" << endl;
        break;
    case 5:
        cout << "May" << endl;
        break;
    case 6:
        cout << "June" << endl;
        break;
    case 7:
        cout << "July" << endl;
        break;
    case 8:
        cout << "August" << endl;
        break;
    case 9:
        cout << "September" << endl;
        break;
    case 10:
        cout << "October" << endl;
        break;
    case 11:
        cout << "November" << endl;
        break;
    case 12:
        cout << "December" << endl;
        break;
    default:
        cout << "Invalid input! Please enter a number between 1 and 12." << endl;
        break;
    }

    return 0;
}

//Task 9

int main9() {
    char light;

    cout << "Enter the traffic signals (R for Red, Y for Yellow, G for Green)..." << endl;
    cin >> light;

    switch (light) {
    case 'R': case 'r':
        cout << "Stop" << endl;
        break;
    case 'Y': case 'y':
        cout << "Ready" << endl;
        break;
    case 'G': case 'g':
        cout << "Go" << endl;
        break;
    default:
        cout << "Invalid input! Please enter R, Y, or G." << endl;
        break;
    }

    return 0;
}

//Task 10

int main10() {
    int number;

    cout << "Enter an integer..." << endl;
    cin >> number;

    if (number % 3 == 0 && number % 5 == 0) {
        cout << "The number is divisible by both 3 and 5..." << endl;
    }
    else if (number % 3 == 0) {
        cout << "The number is divisible by 3..." << endl;
    }
    else if (number % 5 == 0) {
        cout << "The number is divisible by 5..." << endl;
    }
    else {
        cout << "The number is not divisible by 3 or 5." << endl;
    }
    return 0;
}

//Task 11

int main11() {
    double side1, side2, side3;

    cout << "Enter the length of the first side..." << endl;
    cin >> side1;
    cout << "Enter the length of the second side..." << endl;
    cin >> side2;
    cout << "Enter the length of the third side..." << endl;
    cin >> side3;

    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)) {
        cout << "The triangle is valid." << endl;
    }
    else {
        cout << "The triangle is not valid." << endl;
    }

    return 0;
}

//Task 12

int main12() {
    float balance = 10000.00;
    int option;
    float amount;

    cout << "\n***** ATM Menu *****\n";
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit Money" << endl;
    cout << "3. Withdraw Money" << endl;
    cout << "Enter an option (1-3)..." << endl;
    cin >> option;

    switch (option) {
    case 1:
        cout << "Your current balance is..." << balance << endl;
        break;

    case 2:
        cout << "Enter the amount to deposit..." << endl;
        cin >> amount;
        if (amount > 0) {
            balance += amount;
            cout << "Rs. " << amount << " has been deposited." << endl << "New balance : Rs. " << balance << endl;
        }
        else {
            cout << "Invalid deposit amount." << endl;
        }
        break;

    case 3:
        cout << "Enter the amount to withdraw..." << endl;
        cin >> amount;
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Rs. " << amount << " has been withdrawn." << endl << "New balance: Rs. " << balance << endl;
        }
        else if (amount <= 0) {
            cout << "Invalid withdrawal amount." << endl;
        }
        else {
            cout << "Insufficient funds." << endl << "Current balance: Rs. " << balance << endl;
        }
        break;
    default:
        cout << "Invalid option. Please try only between 1 and 3...";
    }
    return 0;
}

//Task 13

int main13() {
    int month;

    cout << "Enter the month number (1-12)...." << endl;
    cin >> month;

    switch (month) {
    case 1:
        cout << "January - 31 days" << endl;
        break;
    case 2:
        cout << "February - 28 or 29 days (depending on leap year)" << endl;
        break;
    case 3:
        cout << "March - 31 days" << endl;
        break;
    case 4:
        cout << "April - 30 days" << endl;
        break;
    case 5:
        cout << "May - 31 days" << endl;
        break;
    case 6:
        cout << "June - 30 days" << endl;
        break;
    case 7:
        cout << "July - 31 days" << endl;
        break;
    case 8:
        cout << "August - 31 days" << endl;
        break;
    case 9:
        cout << "September - 30 days" << endl;
        break;
    case 10:
        cout << "October - 31 days" << endl;
        break;
    case 11:
        cout << "November - 30 days" << endl;
        break;
    case 12:
        cout << "December - 31 days" << endl;
        break;
    default:
        cout << "Invalid month number! Please enter a number between 1 and 12..." << endl;
        break;
    }
    return 0;
}

//Task 14

int main14() {
    int number;

    cout << "Enter a number..." << endl;
    cin >> number;

    switch (number) {
    case 0:
        cout << "The number is zero, and cannot be converted." << endl;
        break;
    default:
        if (number > 0) {
            cout << "Converted to negative: " << -number << endl;
        }
        else {
            cout << "Converted to positive: " << -number << endl;
        }
        break;
    }
    return 0;
}

//Task 15

int main15() {
    char character;

    cout << "Enter a single character..." << endl;
    cin >> character;

    if ((character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z')) {
        cout << character << " is an alphabet." << endl;
    }
    else if (character >= '0' && character <= '9') {
        cout << character << " is a digit." << endl;
    }
    else {
        cout << character << " is a special character." << endl;
    }
    return 0;
}