#include<iostream>
using namespace std;

// This Function can cancatenate two numbers
long join(int first, int second){

	// If scond number is Zero don't do any thing
	if (second == 0)
		return first;

	int powOfTen = 1;

	// Check in which power of 10 First number is
	while (second != second % powOfTen) 
		powOfTen *= 10;
	
	// Append that many zeros at the end of fist number
	long result = first * powOfTen;
	result += second;    // Than add second number in it

	// Return Answer
	return result;

} // End join(first, second)

int main(){

	int firstNumber = 0;
	int secondNumber = 0;

	cout << "Please Enter First Number: ";
	cin >> firstNumber;
	cout << "Please Enter Second Number: ";
	cin >> secondNumber;

	cout << "Resultant Appended number is: ";
	cout << join(firstNumber, secondNumber) << endl;

} // END main()
