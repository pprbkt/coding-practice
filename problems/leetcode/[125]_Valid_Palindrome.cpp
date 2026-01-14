class Solution {
public:
    bool isPalindrome(string s) {
        string result;
        for(char c:s){
            if(isalnum(c)){
                result+=tolower(c);
            }
        }
        string rev_str=result;
        reverse(result.begin(), result.end());
        if(result==rev_str){
            return true;
        }
        else{
            return false;
        }
    }
};