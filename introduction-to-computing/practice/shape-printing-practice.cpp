#include <iostream>
using namespace std;

//Left-Aligned Star Triangle

int main11()
{
	int n;
	cout << "Enter height." << endl;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}

//Left-Aligned Inverted Star Triangle

int main12() {
	int n;
	cout << "Enter height." << endl;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}

//Left-Aligned Star Hollow Triangle

int main13() {
	int n;
	cout << "Enter height." << endl;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			if (j == 1 || j == i || i == n) {
				cout << "* ";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
	return 0;
}

//Right-Aligned Star Triangle

int main21() {
	int n;
	cout << "Enter height." << endl;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n - 1; j++) {
			cout << "  ";
		}
		for (int j = 1; j <= i; j++) {
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}

//Right-Aligned Inverted Star Triangle

int main22() {
	int n;
	cout << "Enter height." << endl;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		if (i > 1) {
			for (int j = 1; j < i; j++) {
				cout << "  ";
			}
		}
		for (int j = i; j <= n; j++) {
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}

//Right-Aligned Star Hollow Triangle

int main23() {
	int n;
	cout << "Enter height." << endl;
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n-1; j++) {
			cout << "  ";
		}
		for (int j = 1; j <= i; j++) {
			if (j == 1 || j == i || i == n) {
				cout << "* ";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
	return 0;
}

//Equilateral Triangle

int main31() {
	int n;
	cout << "Enter height." << endl;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n - 1; j++) {
			cout << "  ";
		}
		for (int j = 1; j <= i; j++) {
			cout << "* ";
		}
		for (int j = 1; j < i; j++) {
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}

//Inverted Equilateral Triangle

int main32() {
	int n;
	cout << "Enter height." << endl;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		if (i > 1) {
			for (int j = 1; j < i; j++) {
				cout << "  ";
			}
		}
		for (int j = i; j <= n; j++) {
			cout << "* ";
		}
		for (int j = i; j < n; j++) {
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}

// Diamond shape
/*

                       1
                    1  2  1
                 1  2  3  2  1 
              1  2  3  4  3  2  1
           1  2  3  4  5  4  3  2  1
              1  2  3  4  3  2  1 
                 1  2  3  2  1
				    1  2  1
					   1
*/


int main4() {
	int n;
	cout << "Enter height." << endl;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = i; j < n; j++) {
			cout << "  ";
		}
		for (int j = 1; j <= i; j++) {
			cout << " " << j;
		}
		for (int j = i - 1; j >= 1; j--) {
			cout << " " << j;
		}
		cout << endl;
	}

	for (int i = 1; i < n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "  ";
		}
		for (int j = 1; j <= n - i; j++) {
			cout << " " << j;
		}
		for (int j = n - i - 1; j >= 1; j--) {
			cout << " " << j;
		}
		cout << endl;
	}
	return 0;
}

//Pascal's Triangle

int main5() {
	int n;
	cout << "Enter height: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		int x = 1;
		for (int j = i; j < n - 1; j++) {
			cout << "  ";
		}
		for (int j = 0; j <= i; j++) {
			cout << x << "   ";
			x = x * (i - j) / (j + 1);
		}
		cout << endl;
	}
	return 0;
}

//Butterfly 

int main6() {
	int n;
	cout << "Enter the number of rows: ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}

		for (int j = 1; j <= 2 * (n - i); j++) {
			cout << " ";
		}

		for (int j = 1; j <= i; j++) {
			cout << "*";
		}

		cout << endl;
	}

	for (int i = n - 1; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}

		for (int j = 1; j <= 2 * (n - i); j++) {
			cout << " ";
		}

		for (int j = 1; j <= i; j++) {
			cout << "*";
		}

		cout << endl;
	}

	return 0;
}

//Not shape printing but whatever

int main69()
{
    char array[100] = { 'a','b','c','d','e','\0' };
    const char size = 6;
    cout << array << endl;

    cout << "Word to remove" << endl;
    char x;
    cin >> x;

    for (int i = 0; array[i] != '\0'; i++) {

        if (array[i] == x) {

            for (int j = i; array[j] != '\0'; j++) {
                array[j] = array[j + 1];
            }

        }

    }
    cout << array;

    return 0;
}