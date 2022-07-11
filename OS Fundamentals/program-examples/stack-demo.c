#include <stdio.h>

void bar()
{
    int nums[2000];
    printf("inside bar(), 8000 bytes are reserved\n\n");
    printf("exiting from bar()..\n\n");
}

void foo()
{
    int nums[1000];
    printf("inside foo(), 4000 bytes are reserved\n\n");
    bar();
    printf("exiting from foo()..\n\n");
}

int main()
{
    int nums[5000];
    printf("inside main(), 20000 bytes are reserved\n\n");
    foo();
    bar();
    printf("exiting from main()..\n\n");
}