#include<stdio.h>

int main(){
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int p = 0 ; p < size ; p++){
        scanf("%d", &arr[p]);
    }
    int best = arr[0];
    int left = 0 , right = 0;
    for(int p = 0 ; p < size ; p++){
        int curr = arr[p];
        for(int q = p ; q < size ; q++){
            if(q != p) {
                curr += arr[q];
            }
            if(best < curr) {
                best = curr;
                left = p;
                right = q;
            }
        }
    }
    for(int p = left ; p <= right ; p++){
        printf("%d\t", arr[p]);
    }
    printf("\n");
    
}