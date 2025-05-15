#include <iostream>
using namespace std;


int main()
{
	float heightF, heightI;
	float weight;

	cout << "Enter your height in feet..." << endl;
	cin >> heightF;
	cout << "Enter your height in Inches..." << endl;
	cin >> heightI;
	cout << "Enter your weight..." << endl;
	cin >> weight;

	float Inch = heightF * 12 + heightI;
	float meter = Inch * 0.0254;

	float BMI = weight / (meter * meter);

	if (BMI < 18.5 && BMI > 0) {
		cout << "Your BMI is: " << BMI << endl;
		cout << "You are underweight." << endl;
		cout << "Recommendation: High-calorie diet and strength training exercises.";
	}
	else if (BMI >= 18.5 && BMI < 24.9) {
		cout << "Your BMI is: " << BMI << endl;
		cout << "You have Normal weight." << endl;
		cout << "Recommendation: Balanced diet and regular aerobic exercises.";
	}
	else if (BMI >= 25 && BMI < 29.9) {
		cout << "Your BMI is: " << BMI << endl;
		cout << "You are Overweight." << endl;
		cout << "Recommendation: Calorie-controlled diet and a combination of cardio and strength training exercises.";
	}
	else if (BMI >= 30 && BMI < 34.9) {
		cout << "Your BMI is: " << BMI << endl;
		cout << "You are Obese(Class I)..." << endl;
		cout << "Recommendation: Calorie-controlled diet, low-impact cardio, and strength training; consult a dietitian.";
	}
	else if (BMI >= 35 && BMI < 39.9) {
		cout << "Your BMI is: " << BMI << endl;
		cout << "You are Obese(Class II)..." << endl;
		cout << "Recommendation: Structured weight-loss program with reduced calorie intake, moderate cardio, and strength training; medical supervision recommended.";
	}
	else if (BMI >= 40) {
		cout << "Your BMI is: " << BMI << endl;
		cout << "You are Obese(Class III)..." << endl;
		cout << "Recommendation: Tailored diet plan, professional-led exercise routines, and possible medical interventions like bariatric consultation.";
	}
	else {
		cout << "Error...";
	}
	return 0;
}