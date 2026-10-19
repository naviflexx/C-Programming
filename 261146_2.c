#include <stdio.h>

int main(){
    int n, m;
    scanf("%d", &n);
    int nums1[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &nums1[i]);
    }
    scanf("%d", &m);
    int nums2[m];
    for(int i = 0; i < m; i++){
        scanf("%d", &nums2[i]);
    }
    int result[n];
    int r = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(nums1[i] == nums2[j]){
                result[r++] = nums1[i];
                for(int k = j; k < m - 1; k++){
                    nums2[k] = nums2[k + 1];
                }
                m--;
                break;
            }
        }
    }
    for(int i = 0; i < r; i++){
        printf("%d ", result[i]);
    }
    printf("\n");
}