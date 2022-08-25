#include <iostream>


int* matrix_min_max(int **vals,int num_rows, int num_cols){
int max = vals[0][0];

for(int i = 0; i < num_rows; i++){
    for(int j = 0; j< num_cols; j++){
        if (vals[i][j]>= max){
            max = vals[i][j];
        }


    }

}
int min = vals[0][0];
for(int i = 0; i < num_rows; i++){
    for(int j = 0; j< num_cols; j++){
        if (vals[i][j]<= min){
            min = vals[i][j];
        }


    }

}

   int *arr; 
   arr = new int[2];

   arr[0] = min;
   arr[1] = max;



return arr;



}