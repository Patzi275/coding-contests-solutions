#include <stdio.h>
#include <stdlib.h>

__u_long h(int n) {
    if (n == 1) 
        return 1;
    else if (n % 2 == 0)
        return n + h(n/2);
    else
        return n + h(3*n+1);
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    printf("%ld", h(n));
    return 0;
}
