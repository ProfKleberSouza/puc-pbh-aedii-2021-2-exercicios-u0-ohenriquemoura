#include <stdio.h>
#define N 10
int main() {
    int vet1[N], vet2[N];
    int i;
    for(i = 0; i < N; i++) {
        
        scanf("%d", &vet1[i]);
    }
    for(i = 0; i < N; i++) {
        vet2[i] = vet1[N-i-1];
        printf("%d\n", vet2[i]);
    }
    return 0;
}