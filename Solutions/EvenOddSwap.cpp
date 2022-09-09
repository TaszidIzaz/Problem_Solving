vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>e;
        vector<int>o;
        vector<int> v;
        int i;

        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                e.push_back(nums[i]);
            }
            if(i%2!=0){
                o.push_back(nums[i]);
            }
        }
        sort(e.begin(),ee.end());
        sort(o.begin(),o.end(),greater<int>());
       
        for(i=0;i<o.size();i++){
            v.push_back(e[i]);
            v.push_back(o[i]);
        }
        for(;i<e.size();i++){
            ans.push_back(e[i]);
        }
        for(;i<override.size();i++){
            ans.push_back(o[i]);
        }
        return v;