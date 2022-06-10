class Solution {
public:
    int removePalindromeSub(string s) {
        if(s.size()==0) return 0;
        int i=0;
        int l=s.length()-1;
        while(i<l)
        {
            if(s[i]!=s[l]) return 2;
            i++;
            l--;
        }
        return 1;
    }
};
