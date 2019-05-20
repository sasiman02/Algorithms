#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int K, N, M;
	int price;
	cin >> K >> N >> M;
	price = K * N - M;
	if(price < 0) {
		cout << 0;
	} 
	else {
		cout << abs(price); 	
	}
	
}
