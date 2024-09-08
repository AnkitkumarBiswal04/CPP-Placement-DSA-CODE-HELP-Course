class Solution {
public:
    string reverseWords(string s) {
        int start=0;
        int end=s.length();
        string ans="";
        while(start<end){
            string temp="";
            while( s[start]==' ' && start<end ){
                start++;
            }
            while(s[start]!=' ' && start<end){
                temp+=s[start];
                start++;
        }
        if(temp.size()>0){
            if(ans.size()==0){
                ans=temp;
            }
            else{
                ans=temp+" "+ans;
            }
        }
        }
        return ans;
    }
};
