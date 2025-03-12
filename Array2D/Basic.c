#include <stdio.h>

int main(){
int r , c ;
printf("Enter the no of rows: ");
scanf("%d",&r);
printf("Enter the no of cols: ");
scanf("%d",&c);
int a[r][c];
printf("Enter the elements of the array: ");
for(int i = 0 ;i<r;i++){
    for(int j = 0 ;j<c;j++){
    scanf("%d",&a[i][j]);
}
// printf("\n");
}
for(int i = 0 ;i<r;i++){
    for(int j = 0 ;j<c;j++){
    printf("%d ",a[i][j]);
}
printf("\n");
}

// these 2 are the only 2 correct ways of declaring 2d arrays
int array2[2][4]={12,23,45,67,89,77,3,5};
int array1[][2]={12,23,45,67,89,77};
//int array1[3][]={12,23,45,67,89,77};//this will also generate an error
//int array2[][]={12,23,45,67,89,77,3,5,4};// this will generate an error 
//int arr[][3];//this will also generate an error


int ar[2][3]={1,2,4,3,5,6};//2*3=6;
for(int i = 0 ;i<2;i++){
    for(int j = 0 ;j<3;j++){
    printf("%d ",ar[i][j]);
}
printf("\n");
}




int arr[2][2]={{1,2},{3,4}};

for(int i = 0 ;i<2;i++){
    for(int j = 0 ;j<2;j++){
    printf("%d ",arr[i][j]);
}
printf("\n");
}

// arr[0][0]=1;
// arr[0][1]=2;
// arr[1][0]=3;
// arr[1][1]=4;
    return 0 ;
}