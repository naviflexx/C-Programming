#include<stdio.h>

int main(){
    int n;
    scanf("%d" , &n);
    int matrix[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int x; scanf("%d" , &x);
            matrix[i][j]=x;
        }
    }
    int matrix1[n][n];
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            matrix1[i][j] = matrix[i][j];
        }
    }
    for(int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            matrix[i][j] = matrix1[n-1-j][i];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d " , matrix[i][j]);
        }
        printf("\n");
    }
}
