class Solution {
public:
    bool check(int n, int base){
        string str="";
        while(n>=1){
            str+=to_string(n%base);
            n/=base;

        }
        int i=0, j=str.length()-1;
        while(i<=j){
            if(str[i]!=str[j])return false;
            i++;
            j--;
        }
        return true;
    }

    bool isStrictlyPalindromic(int n) {
        bool res=check(n,2);
        for(int i=3;i<=n-2;i++){
            res=res && check(n,i);
        }
        return res;
        
    }
};