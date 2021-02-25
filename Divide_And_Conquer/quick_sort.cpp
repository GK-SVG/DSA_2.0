#include<iostream>
using namespace std;

int partition(int arr[], int low, int high){
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<high;j++){
        if(arr[j]<=pivot){
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int temp=arr[i+1];
    arr[i+1]=arr[high];
    arr[high]=temp;
    return (i+1);
}

void quicksort(int arr[], int low, int high){
    if(low<high){
        int pi = partition(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}

int main(){
    int arr[] = {10,80,30,90,40,50,70};
    int low = 0,high=6;
    quicksort(arr,low,high);
    for (int i = 0; i <= high; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    
    return 0;
}