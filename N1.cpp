#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int i, n, j;
	cin >> n;
	int* arr = new int[n];
	int* mass = new int[n];
	for (i = 0; i < n; i++) cin >> arr[i];
	for (i = 0; i < n; i++) cin >> mass[i];
	for (i = 0; i < n; i++) cout << arr[i] << " ";
	cout << endl;
	for (i = 0; i < n; i++) cout << mass[i] << " ";
	cout << endl;
	for (i = 0; i < n; i++) {
		j = arr[i];
		arr[i] = mass[i];
		mass[i] = j;
	}
	for (i = 0; i < n; i++) cout << arr[i] << " ";
	cout << endl;
	for (i = 0; i < n; i++) cout << mass[i] << " ";
	cout << endl;
	system("pause");
	return 0;
}
