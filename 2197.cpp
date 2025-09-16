class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<int>ans;
        for(int x : nums){
            while(!ans.empty() && gcd(ans.back(),x)>1){
                int g= gcd(ans.back(),x);
                x = (long long)ans.back() / g * x;
                ans.pop_back();
            }
            ans.push_back(x);
        }
        return ans;
    }
};