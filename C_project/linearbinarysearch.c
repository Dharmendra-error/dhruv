#include<stdio.h>
int linearsearch(int arr[], int size, int element);
// int binarysearch(int arr[], int size, int element);
 
int main(){

int arr[] = {13,14,15,16,17};
int size = sizeof(arr)/sizeof(int);
int element = 16 ;
int searchindex = linearsearch( arr , size, element);
if(searchindex != -1){
printf("element %d found at index %d\n ", element, searchindex);
}
else{ 
    printf("element not found\n");
}

return 0;
}

/*int binarysearch(int arr[], int size, int element){

    int low, mid, high ;
    low = 0 ;
    high = size - 1 ;

while(low<=high){
    mid = low + ( high - low )/2 ;
    if (arr[mid] == element){
return mid ;

    }else if(arr[mid]<element){
low = mid + 1;

    }else{
        high = mid - 1;
    }
}
return -1;
}*/

int linearsearch(int arr[], int size, int element){

    for(int i = 0 ; i<size ; i++){
     
         if(arr[i] == element){
            return i ;
         }

    }
}





