class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        int maxlen=0;
        for(int it:st){
            if(st.find(it-1)==st.end()){
               int x=it;
               int count=1;
                while(st.find(x+1)!=st.end()){
                    x++;
                    count++;
                }
                maxlen=max(count,maxlen);
            }
            
        }
        return maxlen;
        
    }
};
