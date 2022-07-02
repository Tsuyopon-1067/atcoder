#include <stdio.h>
int main() {
    int n, q;
    char s[500000];
    scanf("%d %d", &n, &q);
    scanf("%s", s);

    int init = 0;
    for (int i = 0; i < q; ++i) {
        int w, x;
        scanf("%d %d", &w, &x);
        if (w == 1) {
            init = (init - x + n) % n;
        } else if (w == 2) {
            int idx = (init + x - 1 + n) % n;
            printf("%c\n", s[idx]);
        }
    }
    return 0;
}
