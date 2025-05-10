#include <iostream>
#include <vector>
using namespace std;

int maxSubArraySum(vector<int>& nums) {
    int maxSoFar = nums[0];
    int currentMax = nums[0];

    for (size_t i = 1; i < nums.size(); ++i) {
        currentMax = max(nums[i], currentMax + nums[i]);
        maxSoFar = max(maxSoFar, currentMax);
    }

    return maxSoFar;
}

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int maxSum = maxSubArraySum(nums);

    cout << "Maximum subarray sum is: " << maxSum << endl;

    return 0;
}
