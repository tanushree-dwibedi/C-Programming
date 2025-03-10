#include <stdio.h>

int main(){
    int arr[100];
    printf("Enter the elements of the array  : \n");
    for(int i = 0 ; i< 5;i++){
        printf("Enter element no %d : ",i+1);
        scanf("%d",&arr[i]);
    }
        for(int i = 0 ; i< 5;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Printing in reverse order : ");
         for(int i = 4 ; i>=0;i--){
        printf("%d ",arr[i]);
    }
}