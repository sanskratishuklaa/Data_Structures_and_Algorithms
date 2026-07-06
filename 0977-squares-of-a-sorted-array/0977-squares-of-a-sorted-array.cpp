class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        // Left pointer starts from the beginning
        int i = 0;

        // Right pointer starts from the end
        int j = nums.size() - 1;

        // Create answer array of same size
        vector<int> ans(nums.size());

        // Index where we will store the largest square
        int index = nums.size() - 1;

        // Continue until both pointers meet
        while (i <= j) {

            // Square of left element
            int leftSquare = nums[i] * nums[i];

            // Square of right element
            int rightSquare = nums[j] * nums[j];

            // Compare both squares
            if (leftSquare > rightSquare) {

                // Store larger square
                ans[index] = leftSquare;

                // Move left pointer
                i++;
            }
            else {

                // Store larger square
                ans[index] = rightSquare;

                // Move right pointer
                j--;
            }

            // Move answer index backwards
            index--;
        }

        // Return final sorted squares array
        return ans;
    }
};