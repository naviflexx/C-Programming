#include<stdio.h>

int main(){
    int k;
    scanf("%d", &k);
    int nums[k];
    for(int i=0; i<k; i++){
        scanf("%d", &nums[i]);
    }
    int copy[k];
    for(int i=0; i<k; i++){
        copy[i] = nums[i];
    }
    int p = 0;                     
    for(int i=0; i<k; i++){
        if(copy[i]!=0){
            nums[p++] = copy[i];
        }
    }
    for(int i=p; i<k; i++){
        nums[i] = 0;
    }
    for(int i=0; i<k; i++){
        printf("%d ", nums[i]);
    }
    printf("\n");
    
}