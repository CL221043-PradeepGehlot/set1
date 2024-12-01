#include <iostream>
using namespace std;

int maxSubArraySum(int nums[], int n) {
    int maxSum = nums[0];
    int currentSum = nums[0];

    for (int i = 1; i < n; i++) {
        currentSum = (nums[i] > currentSum + nums[i]) ? nums[i] : currentSum + nums[i];
        maxSum = (maxSum > currentSum) ? maxSum : currentSum;
    }

    return maxSum;
}

int main() {
    int nums[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(nums) / sizeof(nums[0]);

    cout << "Maximum Subarray Sum: " << maxSubArraySum(nums, n) << endl;
    return 0;
}
