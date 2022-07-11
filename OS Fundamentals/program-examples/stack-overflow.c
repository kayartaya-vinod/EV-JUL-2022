#include <stdio.h>

int n = 1;

void foo()
{
    int nums[10000];
    printf("(%d) just allocated 40000 bytes inside foo()\n", n++);
    foo(); // after calling around 209 times (in my computer), this will cause an error (ideally stack-overflow),
    // but since it is trying to capture memory outside of its jurisdiction,
    // OS will prevent it by giving segmentation fault error.
}

int main()
{
    foo();
}