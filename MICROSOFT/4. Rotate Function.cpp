class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        if(nums.size() == 0)
        return 0;

        int sum = 0, s = 0;
        int ans = 0;

        for(int i = 0; i<nums.size(); i++)
        {
            sum += i*nums[i];
            s += nums[i];    
        }

        ans = sum;

        int n = nums.size();
        for(int i = 1; i<n; i++)
        {
            sum = sum + s - (n*nums[n-i]);
            ans = max(ans, sum);
            //cout<<sum<<endl;
        }

        return ans;
    }
};
