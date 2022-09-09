class Solution {
public:
    int romanToInt(string s) {
        
    unordered_map<char , int> mp;
        mp.insert({'I',1});
        mp.insert({'V',5});
        mp.insert({'X',10});
        mp.insert({'L',50});
        mp.insert({'C',100});
        mp.insert({'D',500});
        mp.insert({'M',1000});
        
        int len = s.length(), num ,sum=0 ;
        
        for (int i=0; i<len; ){
            if(i == (len-1) || (mp[s[i]] >= mp[s[i+1]])){
                num =mp[s[i]];
                i++;
            }
            else{
                num=mp[s[i+1]]-mp[s[i]];
                i=i+2;
            }
            sum=sum+num;
        }
        return sum;
    }
};