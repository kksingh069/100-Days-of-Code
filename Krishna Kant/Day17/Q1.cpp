class Solution {
public:
    int firstUniqChar(string s) {
        //put everything in a map
        map<char,int>mp;
        int ans = -1;
        
        for(auto it: s){
            map<char,int>::iterator iter = mp.find(it);
            if(iter == mp.end()){
                //add to map
                mp.emplace(it,0);
            }
            else{
                mp[it]++;
                //increment by 1 at map location
            }
        }
        int index = 0;
        for(auto it: s){
            map<char,int>::iterator iter = mp.find(it);
            if(iter->second == 0) return index;
            index++;
        }
        return -1;
    }
};