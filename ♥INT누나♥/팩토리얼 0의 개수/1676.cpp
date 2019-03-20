#include<iostream>
using namespace std;
int fun(int n, int s) {
	int cnt = 0;
	
	while(1) {
		if(n%s == 0) {
			cnt++;
			n = n / s;
		}
		else {
			break;
		}
	}
	return cnt;
}
int main() {
	int n;
	cin >> n;
	int cnt2 = 0;
	int cnt5 = 0;
	
	for(int i = 1; i <= n; i++) {
		if(i%2 == 0) {
			cnt2 += fun(i,2);
		}
		if(i%5 == 0) {
			cnt5 += fun(i,5);
		}
	}
	
	if(cnt2 > cnt5) {
		cout << cnt5 << endl;
	}
	else {
		cout << cnt2 << endl;
	}
}
