#include <iostream>
using namespace std;

int main() {
	int price;
	cin >> price;
	int sum = 0;
	int a;
	for(int i = 0; i < 9; i++) {
		cin >> a;
		sum += a;
	}
	
	cout << price - sum;
	
}
