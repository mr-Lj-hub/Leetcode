class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int n=tasks.size();
        int count=0;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            m[tasks[i]]++;
        }
        for(auto freq : m)
        {
            if(freq.second==1){
                return -1;
            }
            if(freq.second%3==0){
                count += freq.second/3;
            }
            else{
                count += freq.second/3 +1;
            }
        }
        return count;
    }
};
