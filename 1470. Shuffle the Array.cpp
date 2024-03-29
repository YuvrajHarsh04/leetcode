class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> a1;
    vector<int> a2;
    vector<int> res;
        for(int i =0; i<n;i++){
            a1.push_back(nums[i]);
        }
        for(int i =n; i<2*n;i++){
            a2.push_back(nums[i]);
        }
        for(int i =0; i<n;i++){
            res.push_back(a1[i]);
            res.push_back(a2[i]);
        }

        return res;
    }
 
};
