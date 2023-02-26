#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

static void cmp(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

bool containsDuplicate(int* nums, int numsSize)
{
    qsort(nums, numsSize, sizeof(int), cmp);

    for (int idx = 1; idx < numsSize; idx++) {
        if (nums[idx - 1] == nums[idx]) {
            return true;
        }
    }

    return false;
}