#include <stdio.h>
#include <stdlib.h>

void two_sum(int *nums, int low, int high, int target, int **results, int *count)
{
    while (low < high)
    {
        int sum = nums[low] + nums[high];
        if (sum < target)
        {
            low++;
        }
        else if (sum > target)
        {
            high--;
        }
        else
        {
            results[*count] = malloc(3 * sizeof(int));
            results[*count][0] = -target;
            results[*count][1] = nums[low];
            results[*count][2] = nums[high];
            (*count)++;
            while (++low < high && nums[low] == nums[low - 1]) {}
            while (--high > low && nums[high] == nums[high + 1]) {}
        }
    }
}

int main(void)
{
    int nums[] = {-2, 0, 0, 2, 2};
    int count = 0;
    int** tuple = malloc(100 * sizeof(int *));
    two_sum(nums, 0, 4, 0, tuple, &count);
    for (int i = 0; i < count; i++)
    {
        printf("%d %d\n", tuple[i][0], tuple[i][1]);
    }
    return 0;
}
