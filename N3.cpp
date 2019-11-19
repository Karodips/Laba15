#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int i, n, j, pimoch;
	cin >> n;
	pimoch = 0;
	int* arr = new int[n];
	for (i = 0; i < n; i++) { 
		cin >> arr[i];
		if (arr[i] % 2 != 0) pimoch = 1;
	}
	for (i = 0; i < n; i++) cout << arr[i] << " ";
	cout << endl;
	if (pimoch == 1) {
		for (i = 0; i < n; i++) {
			if (arr[i] % 2 != 0) j = arr[i];
		}
		for (i = 0; i < n; i++) {
			if (arr[i] % 2 != 0) arr[i] = arr[i] + j;
		}
	}
	for (i = 0; i < n; i++) cout << arr[i] << " ";
	cout << endl;
	system("pause");
	return 0;
}
