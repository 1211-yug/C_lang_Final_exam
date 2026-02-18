#include<stdio.h>

void printOdd(int arr[], int n){
    
	int i;
    
    printf("\nOdd elements are:- \n");
    for(i=0 ; i<n ; i++){
        if(arr[i] % 2 != 0)
            printf("%d ",arr[i]);
    }
}

void main(){
	
    int arr[5],i;

    for(i=0 ; i<5 ; i++) {
        printf("Enter element:- ");
        scanf("%d", &arr[i]);
    }
    
    printOdd(arr, 5);

    return 0;
}
