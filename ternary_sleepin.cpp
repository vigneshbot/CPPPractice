// Sleep in if it is not a weekday and we are on vacation

#include <iostream>
using namespace std;

bool sleepIn(bool weekday, bool vacation){
	return (weekday) ? false : (vacation ? true : false);
}

int main(){
	char weekday, vacation;
	bool w, v;
	cout << "Is it a weekday? (Y/N): ";
	cin >> weekday;
	(weekday == 'Y') ? w = true : w = false;
	cout << "Are you on vacation? (Y/N): ";
	cin >> vacation;
	(vacation == 'Y') ? v = true : v = false;
	cout << "\SleepIn Result: ";
	sleepIn ? cout << "True" : cout << "False";
	return 0; 
	
}
