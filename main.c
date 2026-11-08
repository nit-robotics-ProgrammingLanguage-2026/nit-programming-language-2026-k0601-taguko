#include <stdio.h>

int main(void)
{
    long n;
    scanf("%ld", &n);
    /* TODO: n が負なら NG、そうでなければ 1+2+...+n を for 文で計算して表示 */
    if (n < 0) printf("NG");
    else printf("%ld", n * (n + 1) / 2);
    return 0;
}
