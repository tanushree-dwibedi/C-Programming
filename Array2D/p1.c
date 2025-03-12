// wap to store roll no  and marks obtained by 4 students side by side in a matrix
//H:W = wap to take user input - > no of students , sand store the marks of P ,C , M
// let n be the no of rows i.e the no of students(user input) , & no of cols = 3 
#include <stdio.h>
#include <limits.h>

int main(){

int marks[4][2]={{1,97},{2,67},{3,88},{4,99}};

for(int i = 0 ;i<4;i++){
    for(int j = 0 ;j<2;j++){
    printf("%d ",marks[i][j]);
}
printf("\n");
}


int ten[5][5];

for(int i = 0 ;i<5;i++){
    for(int j = 0 ;j<5;j++){
    printf("10 ");
}
printf("\n");
}

int add1[2][2]={1,9,3,4};
int add2[2][2]={5,6,7,8};

for(int i = 0 ;i<2;i++){
    for(int j = 0 ;j<2;j++){
    printf("%d ",add1[i][j]+add2[i][j]);
}
printf("\n");
}

int sum = 0, max = INT_MIN;
// m x n  => rows x cols
for(int i = 0 ;i<2;i++){//m
    for(int j = 0 ;j<2;j++){//n
sum+=add1[i][j];
if(add1[i][j]>max)
max = add1[i][j];
}
// printf("\n");
}
printf("%d \n",sum);
printf("%d \n",max);

// Given a matrix 'a' of dimension nxm and 2 coordinates (l1,r1) and (l2,r2). Return the sum of the rectangle from (l1,r1) to (l2,r2) 

// int m = 3 ,n = 3 ;
// wrong
//  int rec[m][n]={1,2,3,4,5,6,9,8,7}; unfortunately this will generate an error

// Alternate method 1
// #define M 3
// #define N 3
// int rec[M][N] = {1, 2, 3, 4, 5, 6, 9, 8, 7};

// Alternate method 2
int m = 3, n = 4 , l1 = 0, r1 =1 , l2 = 2, r2 = 2;
int rec[m][n];
int values[] = {1, 2, 3, 4, 9, 6, 9, 8, 17,3 ,5 ,13};

for (int i = 0, k = 0; i < m; i++) {
    for (int j = 0; j < n; j++, k++) {
        rec[i][j] = values[k];
    }
}


for(int i = 0 ;i<m;i++){
    for(int j = 0 ;j<n;j++){
    printf("%d ",rec[i][j]);
}
printf("\n");
}
int recsum = 0 ;
for(int i = 0 ;i<m;i++){
    for(int j = 0 ;j<n;j++){
   if(i>=l1&&i<=l2&&j>=r1&&j<=r2){
   recsum+=rec[i][j];
   }
}

}
printf("%d\n ",recsum);
int maxrowsum = INT_MIN , maxrow= INT_MIN ;
// wap to print the row number having the maximum sum in a givne matrix
for(int i = 0 ;i<m;i++){
int rowsum=0;
    for(int j = 0 ;j<n;j++){
   rowsum+=rec[i][j];
   if(rowsum>maxrowsum){
   maxrowsum = rowsum;
   maxrow = i;
   }

   }
}
printf("%d \n",maxrowsum);
printf("%d \n",maxrow);

// given a matrix having only 0s and 1s , find the row with the maximum number of 1s;
int ones[3][4] = {{1,0,1,1},{0,1,0,1},{1,1,1,1}};
int maxcount = INT_MIN, maxidx =INT_MIN ;
for(int i = 0 ;i<m;i++){
int count1=0;
    for(int j = 0 ;j<n;j++){
        if(ones[i][j]==1)
   count1++;
  

   }
    if(count1>maxcount){
   maxcount= count1;
   maxidx = i;
   }
}
printf("%d \n",maxcount);
printf("%d \n",maxidx);
    return 0 ;
}

