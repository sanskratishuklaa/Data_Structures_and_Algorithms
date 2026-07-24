class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {

        unordered_set<int> pairXor;

        int n = nums.size();

        // All possible pair XORs
        for(int i = 0; i < n; i++)
        {
            for(int j = i; j < n; j++)
            {
                pairXor.insert(nums[i] ^ nums[j]);
            }
        }

        unordered_set<int> ans;

        // Pair XOR ^ third element
        for(int x : pairXor)
        {
            for(int num : nums)
            {
                ans.insert(x ^ num);
            }
        }

        return ans.size();
    }
};