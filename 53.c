#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX(a, b) ({ \
    __typeof(a) __a = (a); \
    __typeof(b) __b = (b); \
    __a > __b ? __a : __b; \
})

int maxSubArray(int* nums, int numsSize)
{
    int ans;
    int last;
    int val;

    last = nums[0];
    ans = last;
    for (int idx = 1; idx < numsSize; idx++) {
        val = nums[idx];
        last = MAX(last + val, val);
        ans = MAX(ans, last);
    }

    return ans;
}