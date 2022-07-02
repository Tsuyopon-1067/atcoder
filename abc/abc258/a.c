#include <stdio.h>
int main() {
    int k;
    scanf("%d", &k);
    int h = k / 60 + 21;
    int m = k % 60;
    printf("%02d:%02d\n", h, m);
    return 0;
}
