//Sum of digits

#include<iostream>
using namespace std;

int main(){
	int n;
	cout << "Enter a number:\n";
	cin >> n;
	int rem, temp = n, result = 0;
	while(temp>0){
		rem = temp % 10;
		temp /= 10;
		result += rem;
	}
	cout << "Sum of digits: " << result;
	return 0;
}
