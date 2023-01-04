class Solution {
public:
    string getHint(string secret, string guess) {
        unordered_map<char, int> umap;
        for(int i = 0; i<secret.length(); i++)
        {
            umap[secret[i]]++;
        }

        //cout<<umap.size();
        string ans = "";
        int c = 0, b = 0;
        for(int i = 0; i<guess.length(); i++)
        {
            if(guess[i] == secret[i])
           { b++;
            if(umap.find(guess[i]) != umap.end())
                {
                    //cout<<guess[i]<<" "<<i<<endl;
                    //c++;
                    umap[secret[i]]--;
                    if(umap[secret[i]] == 0)
                    umap.erase(secret[i]);
                }}
        }
        for(int i = 0; i<guess.length(); i++)
        {
            if(guess[i] != secret[i])
            {if(umap.find(guess[i]) != umap.end())
                {
                    //cout<<guess[i]<<" "<<i<<endl;
                    c++;
                    umap[guess[i]]--;
                    if(umap[guess[i]] == 0)
                    umap.erase(guess[i]);
                }
            }
        }
        ans += to_string(b) + "A" + to_string(c) + "B";
        return ans;
    }
};
