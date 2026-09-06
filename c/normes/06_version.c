#include <stdio.h>

int main(void)
{
#ifdef __STDC_VERSION__
    printf("__STDC_VERSION__ = %ld\n", (long)__STDC_VERSION__);
#else
    puts("__STDC_VERSION__ non definie (cas attendu en C89/C90).");
#endif
    return 0;
}
