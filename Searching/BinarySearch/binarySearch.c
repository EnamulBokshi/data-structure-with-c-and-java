#include<stdio.h>

int binarySearch(int arr[],int item,int n){
    int right,left,mid;
    left = 0;
    right = n-1;
    while (left<right)
    {    
        mid = left+(right-left)/2;
        if(arr[mid] == item) return mid;
        else if(item>arr[mid]){
            left = mid+1;
        }
        else right = mid-1;
    }
    return -1;   
}
int main(){
    int arr[]= {10,20,30,40,50,60,70,80,90,100};
    int index,item;
    item = 50;
    index = binarySearch(arr,item,10);
    if(index != -1) printf("Item: %d has found at index: %d",item,index);
    else printf("Item has not found! ");
    return 0;
}