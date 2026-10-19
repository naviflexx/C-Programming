#include<stdio.h>

int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    int matrix[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    int copy[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            copy[i][j] = matrix[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(copy[i][j]==0){
                for(int k=0; k<n; k++){
                    matrix[i][k]=0;
                }
                for(int k=0; k<m; k++){
                    matrix[k][j]=0;
                }
            }
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}