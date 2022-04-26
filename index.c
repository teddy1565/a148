#include <stdio.h>

int main(void) {
    int n;
    while(scanf("%d", &n) != EOF) {
        double current = 0;
        for (int i=0;i<n;i++) {
            double temp;
            scanf("%lf", &temp);
            current += temp;
        }
        double average = current/n;
        if (average > 59) {
            printf("no\n");
        } else {
            printf("yes\n");
        }
    }
    return 0;
}