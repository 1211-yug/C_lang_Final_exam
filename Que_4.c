#include<stdio.h>

void main(){
	
	int arr[5],i,n;
	int *ptr;
	
	for(i=0 ; i<5 ; i++){
		printf("Enter element:- ");
        scanf("%d", &arr[i]);
	}
	
	printf("\nEven elements are:- \n");
    for(i=0 ; i<n ; i++){
        if(arr[i] % 2 != 1)
            printf("%d ",arr[i]);
    		arr[i] = ptr;
	}
	
	
	return 0;
}