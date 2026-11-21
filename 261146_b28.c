#include <stdio.h>

int f(int m[][4], int a, int b, int c, int d){
    int s=0, i, j;
    for(i=a; i<=c; i++){
        for(j=b; j<=d; j++) s+=m[i][j];
    }
    return s;
}

int main(){
    int m[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    printf("%d", f(m, 1, 1, 2, 2));
    return 0;
}