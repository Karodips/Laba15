#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int i, n, j, pimoch;
	cin >> n;
	pimoch = 0;
	int* arr = new int[n];
	double* mass = new double[n];
	for (i = 0; i < n; i++) cin >> arr[i];
	for (i = 0; i < n; i++) {
		for (j = 0; j <= i; j++) {
			pimoch = pimoch + arr[j];
		}
		mass[i] = (double) pimoch / (i + 1);
		pimoch = 0;
	}
	for (i = 0; i < n; i++) cout << mass[i] << " ";
	cout << endl;
	system("pause");
	return 0;
}
