class Solution
{
  public:
    string reverseWords (string s)
    {
        int start=0;
        int end=s.length();
        string ans="";
        while(start<end){
            string temp="";
            while(start<end && s[start]!='.'){
                temp.push_back(s[start]);
                start++;
            }
            reverse(temp.begin(),temp.end());
            ans=ans+temp;
            if(start<end && s[start]=='.'){
                ans.push_back('.');
            }
            
            if(start==end){
                break;
            }
            start++;

        }
        return ans;
    }
};
