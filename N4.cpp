#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int i, n, min, max,maxnum,minnum;
	cin >> n;
	int* arr = new int[n];
	for (i = 0; i < n; i++) { 
		cin >> arr[i];
	}
	for (i = 0; i < n; i++) cout << arr[i] << " ";
	cout << endl;
	min = arr[1];
	minnum = 0;
	max = arr[1];
	maxnum = 0;
	for (i = 1; i < n; i++) {
		if (max < arr[i]) { 
			max = arr[i];
			maxnum = i;
		}
		if (min > arr[i]) {
			min = arr[i];
			minnum = i;
		}
	}
	for (i = minnum + 1; i < maxnum; i++) {
		arr[i] = 0;
	}
	for (i = 0; i < n; i++) cout << arr[i] << " ";
	cout << endl;
	system("pause");
	return 0;
}
