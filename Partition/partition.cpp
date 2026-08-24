#include <iostream>
using namespace std;
int part(int arr[],int low,int high) {
    int v = arr[low];
    int i = low;
    int j = high;
    while (i < j) {
        while (i < high && arr[i] <= v) {
            i++;
        }
        while (j >= low && arr[j] > v) {
            j--;
        }
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j; 
}
int main() {
    int arr[] = {3, 5, 2, 1, 4};
    part(arr,0,4);
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
}