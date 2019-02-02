#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
	int arr1[4];
	int arr2[4]; 
	int arr[4];
	
	cin >> arr1 >> arr2;
	
	cout << sizeof(arr1) << sizeof(arr2);
	
	for(int i = 0; i < 4; i++) {
		arr[i] = arr1[3 - i] + arr2[3 - i];
	}
	
	return 0;
}
