class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        int n = nums.size();

        sort(nums.begin(), nums.end());

        // Initialize with first triplet
        int closestSum = nums[0] + nums[1] + nums[2];

        for (int k = 0; k < n - 2; k++) {

            // Skip duplicate first elements
            if (k > 0 && nums[k] == nums[k - 1])
                continue;

            int i = k + 1;
            int j = n - 1;

            while (i < j) {

                int sum = nums[k] + nums[i] + nums[j];

                if (abs(target - sum) < abs(target - closestSum))
                    closestSum = sum;

                if (sum < target)
                    i++;
                else if (sum > target)
                    j--;
                else
                    return sum;   // Exact answer found
            }
        }

        return closestSum;
    }
};