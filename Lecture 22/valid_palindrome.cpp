class Solution {
private:
bool check(char ch){
    if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')||(ch>='0' && ch<='9')){
        return true;
    }
    return false;
}
    char tolowercase(char ch){
        if((ch>='a' && ch<='z')||(ch>='0' && ch<='9')){
            return ch;
        }
        else{
            char temp=ch-'A'+'a';
            return temp;
        }
    }
    bool checkPalindrome(string s){
        int start=0;
        int end=s.length()-1;
        while(start<end){
            if(s[start]!=s[end]){
                return 0;
            }
            else{
                start++;
                end--;
            }
        }
        return 1;
    }
public:
    bool isPalindrome(string s) {
        string temp="";
        for(int j=0;j<s.length();j++){
            if(check(s[j])){
                temp.push_back(s[j]);
            }
        }
        for(int j=0;j<temp.length();j++){
            temp[j]=tolowercase(temp[j]);
        }
        return checkPalindrome(temp);
    }
};
