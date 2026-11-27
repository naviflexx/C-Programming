#include <stdio.h>
#include <string.h>

int main(){
    char a[100], b[100];
    int n;
    scanf("%s", a);
    scanf("%s", b);
    scanf("%d", &n);
    printf("%d", strncmp(a, b, n));
    return 0;
}