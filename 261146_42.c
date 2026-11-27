#include <stdio.h>

int g[100][100], n, m;

void d(int i, int j){
    int a, b;
    if(i<0 || j<0 || i>=n || j>=m || g[i][j]==0) return;
    g[i][j]=0;
    for(a=-1; a<=1; a++){
        for(b=-1; b<=1; b++) d(i+a, j+b);
    }
}

int main(){
    int i, j, c=0;
    scanf("%d %d", &n, &m);
    for(i=0; i<n; i++){
        for(j=0; j<m; j++) scanf("%d", &g[i][j]);
    }
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(g[i][j]==1){
                c++;
                d(i, j);
            }
        }
    }
    printf("%d", c);
    return 0;
}