class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        // k will store position of valid elements
        int k = 0;

        // Traverse whole array
        for(int i = 0; i < nums.size(); i++) {

            // If current element is NOT equal to val
            if(nums[i] != val) {

                // Place valid element at index k
                nums[k] = nums[i];

                // Move k forward
                k++;
            }
        }

        // k = total valid elements
        return k;
    }
};