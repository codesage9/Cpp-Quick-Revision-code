class Solution {
public:
    vector<bool> camelMatch(vector<string>& queries, string pattern) 
    {
        vector<bool> ans;
        int n = queries.size();

        for(int i=0; i<n; i++)
        {
            int pp = 0;
            for(int j=0; j<=queries[i].size(); j++)
            {
                if(pp == pattern.size() && j == queries[i].size())
                {
                    ans.push_back(true);
                    break;
                }
                // if(j == queries.size() && pp != pattern.size())
                // {
                //     ans.push_back(false);
                //     break;
                // }
                if(j < queries[i].size() && queries[i][j] == pattern[pp])
                {
                    pp++;
                }
            }
            if(pp != pattern.size())
            {
                ans.push_back(false);
            }
        }
        return ans;
    }
};