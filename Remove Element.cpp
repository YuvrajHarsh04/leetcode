class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int rv=0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] != val ){
                nums[rv++]= nums[i];
            }
        }
        return rv;

    }
};
