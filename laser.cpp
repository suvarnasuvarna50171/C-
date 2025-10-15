#include <stdio.h>

int lower_bound(int arr[], int size, int value) {
    int left = 0, right = size;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] < value)
            left = mid + 1;
        else
            right = mid;
    }
    return left;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, m, x, y;
        scanf("%d %d %d %d", &n, &m, &x, &y);

        int a[n], b[m];
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        for (int i = 0; i < m; i++)
            scanf("%d", &b[i]);

        int h_cross = lower_bound(a, n, y);
        int v_cross = lower_bound(b, m, x);

        printf("%d\n", h_cross + v_cross);
    }

    return 0;
}
