#include <stdio.h>

float average(int arr[2][2]) {
    int i, j;
    float sum = 0;

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            sum += arr[i][j];
        }
    }
    return sum / 4;
}

int main() {
    int arr[2][2], i, j;

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("Enter element: ");
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Average = %f", average(arr));

}
