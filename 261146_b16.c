#include<stdio.h>
#include<limits.h>
void f(int a[4][4]) {
    int b[4][4],i,j,x,y,m;
    for(i=0;i<4;i++) {
        for(j=0;j<4;j++) {
            m=INT_MIN;
            for(x=i-1;x<=i+1;x++) {
                for(y=j-1;y<=j+1;y++) {
                    if(x<0 || x>3 || y<0 || y>3) {
                        continue;
                    }
                    if(x==i && y==j) {
                        continue;
                    }
                    if(a[x][y]>m) {
                        m=a[x][y];
                    }
                }
            }
            b[i][j]=m;
        }
    }
    for(i=0;i<4;i++) {
        for(j=0;j<4;j++) {
            a[i][j]=b[i][j];
        }
    }
}
int main() {
    int a[4][4],i,j;
    printf("Enter matrix\n");
    for(i=0;i<4;i++) {
        for(j=0;j<4;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    f(a);
    printf("Result\n");
    for(i=0;i<4;i++) {
        for(j=0;j<4;j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}