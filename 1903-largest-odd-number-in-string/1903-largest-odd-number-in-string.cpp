class Solution {
public:
    string largestOddNumber(string num) {
        string ans="";
        int size;
        for(int i=num.size()-1;i>=0;i--){
            int n=num[i]-'0';
            if(n%2==1){
                size=i;
                break;
            }
        }
        for(int i=0;i<=size;i++){
            ans+=num[i];
        }
        return ans;
    }
};