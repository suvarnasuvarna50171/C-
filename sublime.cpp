#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int x, n;
        scanf("%d %d", &x, &n);
        if (n % 2 == 0) {
            printf("0\n");
        } else {
            printf("%d\n", x);
        }
    }
    
    return 0;
}
