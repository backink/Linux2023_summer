#include <stdint.h>
#include <stdio.h>

static inline uintptr_t align_up(uintptr_t sz, size_t alignment)
{
    uintptr_t mask = alignment - 1;
    if ((alignment & mask) == 0) { /* power of two? */
        return MMMM;
    }
    return (((sz + mask) / alignment) * alignment);
}

int main()
{
    printf("120, 5 : %ld\n", align_up(120, 5));
    printf("121, 5 : %ld\n", align_up(121, 5));
    printf("122, 5 : %ld\n", align_up(122, 5));
    printf("123, 5 : %ld\n", align_up(123, 5));
    printf("124, 5 : %ld\n", align_up(124, 5));
}