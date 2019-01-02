#include <iostream>
using namespace std;

int main() {
	int D,M;
	cin >> D >> M;
	if(M >= 2)
		D += 31;
	if(M >= 3)
		D += 28;
	if(M >= 4)
		D += 31;
	if(M >= 5)
		D += 30;
	if(M >= 6)
		D += 31;
	if(M >= 7)
		D += 30;
	if(M >= 8)
		D += 31;
	if(M >= 9)
		D += 31;
	if(M >= 10)
		D += 30;
	if(M >= 11)
		D += 31;
	if(M >= 12)
		D += 30;
	
	if(D%7 == 1) 
		cout << "Thursday";
	else if(D%7 == 2)
		cout << "Friday";
	else if(D%7 == 3)
		cout << "Saturday";
	else if(D%7 == 4)
		cout << "Sunday";
	else if(D%7 == 5)
		cout << "Monday";
	else if(D%7 == 6)
		cout << "Tuesday";
	else if(D%7 == 0)
		cout << "Wednesday";
	
}
