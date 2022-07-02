#include <stdio.h>
#include <stdbool.h>
long long int w[200000];
long long int pile[200001];
long long int n, q, x;

int compare(const void *a,const void *b){
    return *(long long int*)a-*(long long int*)b;
}
int abs(int n) {
    if (n < 0) {
        return -n;
    } else {
        return n;
    }
}
int binary_search(int key) {
    int ok = n;
    int ng = -1;
    while(abs(ok-ng) > 1) {
        int m = (ok + ng) / 2;
        if (pile[m] >= key) {
            ok = m;
        } else {
            ng = m;
        }
    }
    if (pile[ok] < key) {
        ok = -1;
    }
    return ok;
}
int main() {
    scanf("%lld %lld %lld", &n, &q, &x);
    for (int i = 0; i < n; ++i) {
        scanf("%lld", &w[i]);
    }

    pile[0] = 0;
    for (int i = 0; i < n; ++i) {
        pile[i+1] = pile[i] + w[i];
    }
    int idxLst[200001];
    for (int i = 0; i <= n; ++i) {
        idxLst[i] = -1;
    }
    for (int i = 0; i <= n; ++i) {
        long long int t = w[i];
        int idx = binary_search(pile[i] + x);
        if (idx == -1) {
            idx = binary_search(pile[i] + x - pile[n]);
        }
        printf("%d %d %lld\n", i, idx, pile[i] + x - pile[n]);

        if (idxLst[i] == -1) {
            idxLst[i] = idx;
        }
    }

    int ansLst[200001];
    ansLst[0] = 0;
    for (int i = 0; i < n; ++i) {
        ansLst[i+1] = idxLst[ansLst[i]];
    }

    bool used[200001];
    for (int i = 0; i <= n; ++i) {
        used[i] = false;
    }

    int roop[20001];
    int roopEnd = 0;
    int t = 0;
    for (int i = 0; i < n; ++i) {
        roop[i+1] = ansLst[roop[i]];
    }

    for (int i = 0; i < q; ++i) {
        long long int k;
        scanf("%lld", &k);
    }


    return 0;
}
