class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        // If the array is empty, there are no unique elements.
        if(nums.size() == 0)
            return 0;

        // i points to the last unique element.
        int i = 0;

        // Initially, there is at least one unique element.
        int unique = 1;

        // j is used to traverse the array from the second element.
        int j = 1;

        // Continue until j reaches the end of the array.
        while(j < nums.size()) {

            // If the current element is the same as the previous one,
            // then it is a duplicate.
            if(nums[j] == nums[j - 1]) {

                // Ignore the duplicate and move to the next element.
                j++;
            }
            else {

                // A new unique element is found.

                // Move i to the next position.
                i++;

                // Place the unique element at the next position.
                nums[i] = nums[j];

                // Increase the count of unique elements.
                unique++;

                // Move j to check the next element.
                j++;
            }
        }

        // Return the total number of unique elements.
        return unique;
    }
};