class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        set<vector<int>>ans ;
        vector<int>big;
        int iy = 0;
        
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i + 1; j < nums.size(); j++) {
                for(int k = j + 1; k < nums.size(); k++) {
                    if((nums[i] + nums[j] + nums[k]) == 0) {
                        big.emplace_back(i,j,k);
                        ans.insert(big));
                        
                        big.clear();
                        iy++;
                    }
                }
            }
        }

        // Resize the vector to contain only the valid triplets
        ans.resize(iy);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
