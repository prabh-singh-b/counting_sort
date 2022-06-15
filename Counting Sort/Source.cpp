#include <iostream>
#include <vector>
using namespace std;

void counting_sort(int arr[], int n, int range) {

	vector<int> count(range,0);

	for (int i = 0; i < n; i++) {

		count[arr[i] - 1]++;

	}


	int arr_count = 0;
	for (int i = 0; i < range; i++) {
		while (count[i] != 0) {
			arr[arr_count++] = i + 1;
			count[i]--;
		}
	}


}

int main() {

	int arr[] = { 88,97,10,12,15,1,5,6,12,5,8 };
	int n = sizeof(arr) / sizeof(int);
	int range = 0;
	for (int x : arr) {
		if (x > range)
			range = x;
	}
	counting_sort(arr, n, range);

	for (int x : arr) {
		cout << x << " ";
	}

}