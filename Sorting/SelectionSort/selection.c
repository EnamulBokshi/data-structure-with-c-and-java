#include<stdio.h>

void selectionSort(int arr[],int n){
    int i,j,min,temp;
    for(i = 0; i<n-1; i++){
        for(j = i; j<n;j++){
            min = arr[i];
            if(min>arr[j]){
                arr[i] = arr[j];
                arr[j] = min;
            }
        }
    }

}

int main(){
    int arr[] = {10,9,8,7,20,23,60};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    for(int i = 0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}