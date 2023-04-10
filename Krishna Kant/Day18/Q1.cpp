class Solution {
public:
    int trap(vector<int>& v) {
     stack<int>s;
     s.push(v[0]);
     int mx=v[0];
     int ans=0;
     for(int i=1;i<v.size();i++){
         if(v[i]>mx){
              while(s.size()){
                  int f=s.top();
                  s.pop();
                 ans+=mx-f;
              } 
              mx=v[i];
         }
         s.push(v[i]);
     }
     mx=s.top();
     while(s.size()){
         int t=s.top();
         s.pop();
         if(t>mx)mx=t;
         else ans+=mx-t;
     }
     return ans;
    }
};