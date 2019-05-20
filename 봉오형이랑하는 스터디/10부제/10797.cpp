#include<iostream>
using namespace std;
 
int main() {
	int day;
	int carNum[5];
	
	cin >> day;
	
	int cnt = 0;
	
	for(int i = 0; i < 5; i++) {
		cin >> carNum[i];
		if(day == carNum[i]) {
			cnt++;		
		}
	}
	
	cout << cnt;
}

