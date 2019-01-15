// 갑을병정무기경신임계(1 2 3 4 5 6 7 8 9 10) (4 5 6 7 9 0 1 2 3) 자축인묘진사오미신유술해 (1 2 3 4 5 6 7 8 9 10 11 12) (4 5 6 7 8 9 10 11 0 1 2 3)
#include<iostream>
using namespace std;

int main() {
	int year;
	
	cin >> year;
	
	int sipgan = ((year) % 10);
	if(sipgan  == 0) {
		sipgan = 10;
	}
	int c = sipgan - 3;
	if(c <= 0) {
		c = c + 10;
	}
	int sipez = ((year) % 12);
	if(sipez == 0) {
		sipez = 12;
	}
	int d = sipez - 3;
	if(d <= 0) {
		d = d + 12;
	}
	
	char a = d + 64;
	char b = c + 47;
	
	cout << a << b;
}
