#include <stdio.h>
#include <stdlib.h>

void foo()
{
    int nums1[1000];
    int *nums2;
    nums2 = malloc(1000 * sizeof(int));

    printf("nums1 reserves 4000 bytes in stack");
    printf("nums2 reserves 4000 bytes in heap");

    // as a good practice to avoid memory leak, we should free up the reserved memory
    free(nums2);
}

int main()
{
    foo();
    // lots of things to be executed forever
}