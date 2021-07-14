#include <iostream>
using namespace std;

#pragma pack(1)

struct temp{
	char c;
	int a;
	char b; 
	
};

int main(){
	temp t1;
	cout << "The size is: " << sizeof(t1);
	return 0;
	
}
