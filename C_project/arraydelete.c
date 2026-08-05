#include<stdio.h>
#include<stdlib.h>

void display(int arr[],int size);
void deletion(int arr[],int size,int index);

int main(){

    int arr[100] = {4,6,78,12,34};
    int size = 5 , index = 3 ;

    display (arr,size);
 deletion (arr,size,index);
 size-= 1 ;
display (arr,size) ; 

return 0;

}

void display(int arr[],int size){

    for( int i = 0 ; i < size ; i++ ){

        printf("%d ",arr[i]);

    }

    printf( "\n" ) ; 

}

void deletion(int arr[],int size,int index){

    for(int i = index ; i < size - 1 ; i++){

        arr[i] = arr[i+1];

    }
}

