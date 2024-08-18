/*
 * @lc app=leetcode id=1482 lang=cpp
 *
 * [1482] Minimum Number of Days to Make m Bouquets
 */

// @lc code=start
class Solution
{
public:
    bool checkBloom(vector<int> &bloomDay, int mid, int m, int k)
    {
        int countm = 0, countk = 0;
        for (int j = 0; j < bloomDay.size(); j++)
        {
            if (bloomDay[j] <= mid)
            {
                countk++;
                if (countk == k)
                {
                    countm++;
                    countk = 0;
                    if (countm == m)
                    {
                        return true;
                    }
                }
            }
            else
            {
                countk = 0;
            }
        }
        return false;
    }
    int minDays(vector<int> &bloomDay, int m, int k)
    {
        int countm = 0;
        int countk = 0;
        int low = 0;
        vector<int> vr;

        int high = *max_element(bloomDay.begin(), bloomDay.end());
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (checkBloom(bloomDay, mid, m, k))
            {
                high = mid - 1;
                vr.push_back(mid);

            }
            else if (checkBloom(bloomDay, mid, m, k) == false)
            {
                low = mid + 1;
            }
            else
            {
                return mid;
            }

            
        }
        if(vr.size()==0){return -1;}
        int mini = *min_element(vr.begin(),vr.end());
        return mini;
    }   
};
    // @lc code=end
