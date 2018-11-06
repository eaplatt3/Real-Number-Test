#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Earl Platt III
//Data Structures - BCS 370
//11/6/2018
//Real Number Problem: 
// 1) Enter Real Numbers in a Vector
// 2) Determine What are the Highest & Lowest Values
// 3) Determine Average of All the Numbers

//Input: Prompt User for Real Numbers
//Output: Display Highest, Lowest Numbers & Average

int main() {

	int num;
	int min = 0;
	int max = 0;
	int average;

	vector<int> intList;

	do {
		cout << "Enter Numbers: " << endl;
		cin >> num;
		intList.push_back(num);
	} while (num != -99);

	for (int i = 0; i < intList.size(); i++) {

		average = (intList[i] + intList[i]) / intList.size();

	}

	cout << "The Average is: " << average << endl;

	for (int i = 0; i < intList.size(); i++) {
		if (intList[i] < min)
			min = intList[i];
	}

	for (int i = 0; i < intList.size(); i++) {
		if (intList[i] > max)
			max = intList[i];
	}

	cout << "The Lowest Number is: " << min << endl;
	cout << "The Higest Number is: " << max << endl;

	system("pause");

	return 0;
}
