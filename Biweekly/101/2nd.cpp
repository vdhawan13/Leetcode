class Solution {
public:
    int maximumCostSubstring(string s, string chars, vector<int>& vals) {
        unordered_map<char,int> mpp;
        string al="abcdefghijklmnopqrstuvwxyz";
        for(int i=1;i<=26;i++){
            mpp[al[i-1]]=i;
        }
        
        int x=0;
        for(int i=0;i<chars.length();i++){
            mpp[chars[i]]=vals[i];
        }
    int maxsum = 0, cursum = 0;
 
    for (int i = 0; i < s.size(); i++) {
        cursum = cursum + mpp[s[i]];

        if (maxsum < cursum)
            maxsum = cursum;
 
        if (cursum < 0)
            cursum = 0;
    }
    return maxsum;
      
    }
};
