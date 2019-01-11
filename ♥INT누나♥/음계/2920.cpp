#include <iostream>
using namespace std;

int main() {
	int arr[8];
	int cnt = 0;
	for(int i = 0; i < 8; i++) {
		cin >> arr[i];
	}
	
	for(int i = 0; i < 8; i++) {
		if(arr[i] == i + 1) {
			cnt++;
		}
	}
	
	if(cnt == 8) {
		cout << "ascending";
		return 0;
	}
	
	cnt = 0;
	
	for(int i = 0; i < 8; i++) {
		if(arr[i] == 8 - i) {
			cnt++;
		}
	}
	
	if(cnt == 8) {
		cout << "descending";
		return 0;
	}
	
	cout << "mixed";
	return 0;
}
