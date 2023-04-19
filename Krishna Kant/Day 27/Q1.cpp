class Solution {
public:
    bool hasAlternatingBits(int n) {
        vector<int>ans;
        int temp=0;
        while(n>0){
            if(n==1){
                ans.push_back(1);
                break;
            }
           temp=n%2;
           ans.push_back(temp);
           n=n/2;
        }
        for(int i=1;i<ans.size();i++){
            if(ans[i]==ans[i-1]){
                return false;
            }
        }
     return true; }
};