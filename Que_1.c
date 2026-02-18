#include<stdio.h>

void main(){
	
    int marks[5], i;
    float sum=0, avg;

    for(i=0 ; i<5 ; i++) {
        printf("Enter marks of subject %d:- ", i+1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    avg = sum / 5;
    printf("\nAverage = %f\n\n", avg);

    if(avg >= 90)
        printf("Grade:- A\n");
    else if(avg >= 75)
        printf("Grade:- B\n");
    else if(avg >= 60)
        printf("Grade:- C\n");
    else if(avg >= 50)
        printf("Grade:- D\n");
    else
        printf("Grade:- Fail\n");
        
}
