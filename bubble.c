#include <stdio.h>

#define MAX 10

int main(){
    int temp, a[MAX], n;

    printf("Please enter the number of elements that you would like to insert (up to 10 elements): \n");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Enter the data for element %d: \n", i);
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++){
        printf("%d | ", a[i]); 
    }
    printf("\n");

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - 1 - i; j++){
            if(a[j+1] < a[j]){
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        } 
    }

    for(int i = 0; i < n; i++){
        printf("%d | ", a[i]); 
    }
    printf("\n");


    return 0;
}