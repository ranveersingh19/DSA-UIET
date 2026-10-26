#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Node {
	int data;
	Node* next;
};
void heapify(vector<int>& values, int n, int root) {
	int largest = root;
	int left = 2 * root + 1;
	int right = 2 * root + 2;
	if (left < n && values[left] > values[largest])
		largest = left;
	if (right < n && values[right] > values[largest])
		largest = right;
	if (largest != root) {
		swap(values[root], values[largest]);
		heapify(values, n, largest);
	}
}
void heapSort(Node* head) {
	vector<int> values;
	for (Node* current = head; current != nullptr; current = current->next)
		values.push_back(current->data);
	int n = values.size();
	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(values, n, i);
	for (int i = n - 1; i > 0; i--) {
		swap(values[0], values[i]);
		heapify(values, i, 0);
	}
	int i = 0;
	for (Node* current = head; current != nullptr; current = current->next)
		current->data = values[i++];
}
int main() {
	int numbers[] = {12, 11, 13, 5, 6, 7, -3, 11};
	int n = sizeof(numbers) / sizeof(numbers[0]);
	Node* head = nullptr;
	for (int i = 0; i < n; i++)
		head = new Node{numbers[i], head};
	cout << "Before sorting: ";
	for (Node* current = head; current != nullptr; current = current->next)
		cout << current->data << " ";
	cout << "\n";
	heapSort(head);
	cout << "After sorting:  ";
	for (Node* current = head; current != nullptr; current = current->next)
		cout << current->data << " ";
	cout << "\n";
	while (head != nullptr) {
		Node* next = head->next;
		delete head;
		head = next;
	}
	return 0;
}