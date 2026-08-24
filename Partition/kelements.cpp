#include<iostream>
using namespace std;
int part(int arr[], int low, int high) {
    int v = arr[low];
    int i = low;
    int j = high;
    while(i<j) {
        while(i<=high && arr[i]<=v) {
            i++;
        }
        while(j>=low && arr[j]>v) {
            j--;
        }
        if(i<j) {
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j; 
}
void kelements(int arr[],int n,int k) {
    int low=0,high=n-1;
    while(low<=high) {
        int p=part(arr,low,high);
        if(p>k-1){
            high=p-1;
        }
        else{
            low=p+1;
        }
    }
}
int main(){
    int arr[]={3,5,2,1,4};
    int n=5;
    int k=3;
    kelements(arr,n,k);
    for (int i=0;i<k;i++) {
        cout<<arr[i]<<" ";
    }
}