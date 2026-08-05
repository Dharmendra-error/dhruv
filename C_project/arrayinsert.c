#include<stdio.h>

void traverse(int arr[], int size);
int insert(int arr[], int size, int capacity, int element, int index);

  
int main(){

int arr[100] = {2,3,4,78,90}; 
int capacity=100, size = 5, index = 3, element=72;

traverse(arr,size);

insert(arr, size, capacity,element,index);
size+=1;

traverse(arr,size);

return 0; 
}

void traverse(int arr[], int size){
  
    for(int i = 0 ; i< size ; i++){

        printf("%d ",arr[i]);
    }
        
    printf("\n");

}

int insert(int arr[], int size, int capacity, int element, int index){

    if(size>= capacity){

        return -1;

    }

    for(int i= size-1; i>= index ; i--){
    
        arr[i+1] = arr[i];
    } 
    arr[index] = element;

    return 1;
}

