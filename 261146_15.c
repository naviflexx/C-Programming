#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if(n == 0) {
        printf("0\n");
        return 0;
    }
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i< n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(a[j] > a[j+1]) {
                int t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
    int count = 1;
    int ans = 1;
    int start = 0;
    int best = 0;
    for(int i=1; i<n; i++){
        if(a[i] == a[i-1]){
            continue;
        }
        if(a[i] == a[i-1] + 1){
            count++;
        }
        else {
            count = 1;
            start = i;
        }
        if(count > ans){
            ans = count;
            best = start;
        }
    }
    for(int i=best; i<best+ans; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    
}
