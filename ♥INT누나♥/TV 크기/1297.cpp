#include<iostream>
#include<cmath>
using namespace std;

int main() {
	//16a*16a + 10b*10b == c*c
	double a, b ,c, s;
	
	cin >> c >> a >> b;
	
	s = sqrt(pow(c,2)/(pow(a,2)+pow(b,2)));
	
	cout << floor(a*s) << ' ' << floor(b*s);
} 
