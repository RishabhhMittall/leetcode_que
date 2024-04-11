class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.length();
        if(num.size() == k) {
            return "0";

        }

        for(int i = 0; i < n-1 && k > 0;){
            if(num[i] > num[i + 1]){
                k--;
                num.erase(num.begin() + i);
                if(i > 0) i--;
            } else {
                i++;
            }
        }

        num.erase(num.length() - k, k);
        int str=0;
        while(str < num.length() && num[str] == '0') {
            str++;
        }
        num.erase(0, str);

        if(num != "0") {
            return num;
        }

        return "0";
    }
};