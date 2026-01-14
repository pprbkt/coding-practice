class Solution {
public:
    void reverseString(vector<char>& s) {
        int j=s.size()-1;
        for(int i=0;i<s.size(),i<j;i++,j--){
           char temp=s[j];
            s[j]=s[i];
            s[i]=temp;
        }
    }
};