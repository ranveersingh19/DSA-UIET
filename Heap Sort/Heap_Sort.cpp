#include <iostream>
#include <algorithm>
using namespace std;
void heapify(int arr[], int n, int root) {
	int largest = root;
	int left = 2 * root + 1;
	int right = 2 * root + 2;
	if (left < n && arr[left] > arr[largest])
		largest = left;

	if (right < n && arr[right] > arr[largest])
		largest = right;

	if (largest != root) {
		swap(arr[root], arr[largest]);
		heapify(arr, n, largest);
	}
}
void heapSort(int arr[], int n) {
	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(arr, n, i);

	for (int i = n - 1; i > 0; i--) {
		swap(arr[0], arr[i]);
		heapify(arr, i, 0);
	}
}
int main() {
	int arr[] = {12, 11, 13, 5, 6, 7, -3, 11};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Before sorting: ";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << "\n";
	heapSort(arr, n);
	cout << "After sorting:  ";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << "\n";
	return 0;
}