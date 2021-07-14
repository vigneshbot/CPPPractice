//Monkey Trouble function returns true if both smiling or neither are smiling

#include<iostream>
using namespace std;

bool monkeyTrouble(bool aSmile, bool bSmile){
	return (aSmile && bSmile) ? true : ((!aSmile && !bSmile) ? true : false);
}

int main(){
	char aSmile, bSmile;
	bool a, b;
	cout << "Is Monkey A smiling? (Y/N): ";
	cin >> aSmile;
	(aSmile == 'Y') ? a = true : a = false;
	cout << "Is Monkey B smiling? (Y/N): ";
	cin >> bSmile;
	(bSmile == 'Y') ? b = true : b = false;
	cout << "\MonkeyTrouble Result: ";
	monkeyTrouble ? cout << "True" : cout << "False";
	return 0;
}
