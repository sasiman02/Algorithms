#include <iostream>
#define MAX 10
using namespace std;
 
int main() {
	int a[MAX];
	int b[42] ={};
	int cnt = 0;
	for(int i = 0; i < MAX; i++) {
		cin >> a[i];
	}
	
	for(int i = 0; i < MAX; i++) {
		for(int j = 0; j < 42; j++) {
			if(a[i] % 42 == j) {
				b[j]++;
			}
		}
	}
	
	for(int i = 0; i < 42; i++) {
		if(b[i] != 0) {
			cnt++;
		}
	}
	
	cout << cnt;
}
