class Solution {
public:
    vector<vector<int>> ans;
    void func(int k, int n, vector<int> &v, int num)
    {
        if(k == 0 && n == 0)
        {
            ans.push_back(v);
        }

        else if(k == 0 || n == 0)
        return;

        else
        {
            for(int i = num; i<=9; i++)
            {
                v.push_back(i);
                func(k-1, n-i, v, i+1);
                v.pop_back();
            }
        }
        
    }
    vector<vector<int>> combinationSum3(int k, int n) 
    {
        if(k>n)
        return ans;
        vector<int> temp;
        func(k, n, temp, 1);
        return ans;      
    }
};
