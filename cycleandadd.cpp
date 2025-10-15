#include <stdio.h>
#define ll long long

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N;
        ll C;
        scanf("%d %lld", &N, &C);
        ll B[N], D[N];
        for (int i = 0; i < N; i++) scanf("%lld", &B[i]);
        for (int i = 0; i < N; i++) scanf("%lld", &D[i]);

        ll ans = 1e18;

        // Try all possible number of shifts (k)
        for (int k = 0; k < N; k++) {
            ll cost = C * k;
            for (int i = 0; i < N; i++) {
                int idx = (i - k + N) % N;
                cost += D[i] * B[idx];
            }
            if (cost < ans) ans = cost;
        }

        printf("%lld\n", ans);
    }
    return 0;
}

