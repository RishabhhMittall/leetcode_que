class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n = details.size();
        int count = 0;

        for(int i = 0; i< n ; i++ ) {
            string old = details[i].substr(11,2);
            int age = stoi(old);
            if(age > 60) { 
                count ++;
            }
        }
        return count;
    }
};