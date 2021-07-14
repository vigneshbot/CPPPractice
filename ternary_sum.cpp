//Return sum of two numbers. Unless the two numbers are same, then return double the sum

#include<iostream>
using namespace std;

int sumDouble(int a, int b){
	return (a==b) ? ((a+b)*2) : (a+b);  
}

int main(){
	int result;
	cout << "Enter two numbers:\n";
	int n1, n2;
	cin >> n1 >> n2;
	cout << "Result: " << sumDouble(n1, n2);
	return 0;
}
