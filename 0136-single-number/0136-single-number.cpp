class Solution {
public:
    int singleNumber(vector<int>& nums) {

        // Store the size of the array
        int n = nums.size();

        // Initialize answer with 0
        int a = 0;

        // Traverse every element in the array
        for(int i = 0; i < n; i++) {

            // XOR the current element with 'a'
            // Duplicate numbers become 0
            // Only the unique number remains
            a = a ^ nums[i];
        }

        // Return the single number
        return a;
    }
};