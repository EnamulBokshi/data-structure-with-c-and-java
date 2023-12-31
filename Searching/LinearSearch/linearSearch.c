#include<stdio.h>


int linearSearch(int arr[],int n,int item){
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == item){
            return i;
        }
    }
  return -1;  
}

int main(){
    int arr[]  = {10,20,30,40,50,60,70,80,90,100};
    int index,item;
    item = 10;
    index = linearSearch(arr,10,item);
    if(index != -1){
        printf("item: %d has found at index %d",item,index);
    }
    else printf("Item does not exists! ");

    
    return 0;
}