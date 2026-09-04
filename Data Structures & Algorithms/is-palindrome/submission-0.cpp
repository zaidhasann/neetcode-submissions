class Solution {
public:
    bool isPalindrome(string s) {
       string str ="";

       for(char ch:s){
        if(isalpha(ch)){
            
            str+=tolower(ch);
        }
        if(isdigit(ch)){
            str+=ch;
        }
       } 
        string rev = str;
        reverse(rev.begin(), rev.end());

        if(str == rev) return true;
        else return false;
    }
};
