class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
         unordered_map<int,int> m;
        for(auto i:nums1){
            m[i]++;
        }
        for(auto i:nums2){
            m[i]++;
        }
        int ans=INT_MAX;
        for(auto i:m){
            if(i.second==2){
                if(i.first<ans){
                    ans=i.first;
                }
            }
        }
        if(ans!=INT_MAX){
            return ans;
        }
        int a=*min_element(nums1.begin(),nums1.end());
        int b=*min_element(nums2.begin(),nums2.end());
        cout << a << " " << b << endl;
        if(a<b){
            ans=a*10+b;
        }
        else{
        ans=b*10+a;
        }
        return ans;
    }
};
