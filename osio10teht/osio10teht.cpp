/*
***TT1***
// #include <iostream>
using namespace std;

void printNum(int number);

int main() {
	printNum(35);
	return 0;
}

void printNum(int number) {
	cout << number;
}
*/



/*
***TT2***
#include <iostream>
	using namespace std;
	void printNum(int _number) {
		std::cout << _number;
	};

	int main() {
		int number = 35;
		printNum(number);
		return 0;
	}*/

	/*
	***TT3***
	#include <iostream>

	int doubleNumber(int _num) {
		int _numdouble = _num * 2;
		return(_numdouble);
	}

	int main() {
		int num = 35;
		num = doubleNumber(num);
		std::cout << num; // Should print 70
		return 0;
	}
	*/

	/*
	***TT4***
	#include <iostream>
	#include <stdlib.h>// contains math functions like abs

	int difference(int x, int y) {
		int diff = abs(x - y); // abs ( n) returns absolute value of n
		return diff;
	}

	int main() {
		std::cout << difference(24, 1238);
		return 0;
	}
	*/

	/*
	***TT5***
	#include <iostream>

	int sum(int x, int y, int z) {
		int SumOf3Numbers = x + y + z;
		return SumOf3Numbers;
	}

	void printNum() {
		std::cout << sum(1, 2, 3); // Should print 6
	}

	int main() {
		printNum();
	}
	*/
#include <iostream>
#include <string.h>
#include <string>
using namespace std;

void ViikkoTeht1();
void ViikkoTeht2();

int main() {
	ViikkoTeht2();
}

float CelciusToFarenheit(float _CelciusInput) {
	float _FarenheitOutput = _CelciusInput * 1.8 + 32;
	return(_FarenheitOutput);
}

float FarentheitToCelsius(float _FarenheitInput) {
	float _CelciusOutput = _FarenheitInput / 1.8 - 32/1.8;
	return(_CelciusOutput);
}
void ViikkoTeht1() {
	char UserMenuInput;
	UserMenuInput = 'S';
	string UserAmountCelciusOrFarenheit;
	while (UserMenuInput != 'Q' && UserMenuInput != 'q') {
		cout << "C - translate Celcius to Farenheit" << endl << "F - translate Farenheit to Celsius" << endl << "Q - quit" << endl;
		cin >> UserMenuInput;

		if (UserMenuInput == 'C' || UserMenuInput == 'c') {
			cout << "Input amount of Celcius degrees to translate" << endl << "Q - quit" << endl;
			cin >> UserAmountCelciusOrFarenheit;
			UserMenuInput = UserAmountCelciusOrFarenheit[0];
			if (UserMenuInput != 'Q' && UserMenuInput != 'q') {
				cout << CelciusToFarenheit(stof(UserAmountCelciusOrFarenheit)) << endl;
			}
		}

		if (UserMenuInput == 'F' || UserMenuInput == 'f') {
			cout << "Input amount of Farenheit degrees to translate" << endl << "Q - quit" << endl;
			cin >> UserAmountCelciusOrFarenheit;
			UserMenuInput = UserAmountCelciusOrFarenheit[0];
			if (UserMenuInput != 'Q' && UserMenuInput != 'q') {
				cout << FarentheitToCelsius(stof(UserAmountCelciusOrFarenheit)) << endl;
			}
		}
	}
}


string odds(int _Numbers[40]) {
	string AllOddNumbers;
	for (int i = 0; i < 40; i++) {
		if (_Numbers[i] % 2 != 0) {
			AllOddNumbers = AllOddNumbers + to_string(_Numbers[i]) + ", ";
		}
	}
	return(AllOddNumbers);
}

string evens(int _Numbers[40]) {
	string AllEvenNumbers;
	for (int i = 0; i < 40; i++) {
		if (_Numbers[i] % 2 == 0) {
			AllEvenNumbers = AllEvenNumbers + to_string(_Numbers[i]) + ", ";
		}
	}
	return(AllEvenNumbers);
}

string positives(int _Numbers[40]) {
	string AllPositiveNumbers;
	for (int i = 0; i < 20; i++) {
		if (_Numbers[i] > 0) {
			AllPositiveNumbers = AllPositiveNumbers + to_string(_Numbers[i]) + ", ";
		}
	}
	return(AllPositiveNumbers);
}

string negatives(int _Numbers[40]) {
	string AllNegativeNumbers;
	for (int i = 0; i < 40; i++) {
		if (_Numbers[i] < 0) {
			AllNegativeNumbers = AllNegativeNumbers + to_string(_Numbers[i]) + ", ";
		}
	}
	return(AllNegativeNumbers);
}

int HowManyZeros(int _Numbers[40]){
	int AmountOfZeros = 0;
	for (int i = 0; i < 40; i++) {

			if (_Numbers[i] == 0) {
				AmountOfZeros = AmountOfZeros + 1;
			}
	}

	return(AmountOfZeros);
}

void ViikkoTeht2() {
	int Random40Numbers[40];
	for (int i = 0; i < 40; i++) {
		Random40Numbers[i] = i;
	}
	cout << "Odd numbers are" << odds(Random40Numbers) << endl;
	cout << "Even numbers are" <<  evens(Random40Numbers) << endl;
	cout << "Positive numbers are" << positives(Random40Numbers) << endl;
	cout << "Negative numbers are" << negatives(Random40Numbers) << endl;
	cout << "Amount of zeros is" << HowManyZeros(Random40Numbers) << endl;
}