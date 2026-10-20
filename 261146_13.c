#include <stdio.h>

int main(){
    int m, n;
    scanf("%d", &m);
    int nums1[m + n];
    for(int i = 0; i < m; i++){
        scanf("%d", &nums1[i]);
    }
    scanf("%d" , &n);
    int nums2[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &nums2[i]);
    }
    int copy[m];
    for(int i = 0; i < m; i++){
        copy[i] = nums1[i];
    }
    int i = 0, j = 0, k = 0;
    while(i < m && j < n){
        if(copy[i] < nums2[j]){
            nums1[k++] = copy[i++];
        }
        else if(copy[i] > nums2[j]){
            nums1[k++] = nums2[j++];
        }
        else{
            nums1[k++] = copy[i++];
            nums1[k++] = nums2[j++];
        }
    }
    while(i < m){
        nums1[k++] = copy[i++];
    }
    while(j < n){
        nums1[k++] = nums2[j++];
    }
    for(int i = 0; i < m + n; i++){
        printf("%d ", nums1[i]);
    }
    printf("\n");
    
}