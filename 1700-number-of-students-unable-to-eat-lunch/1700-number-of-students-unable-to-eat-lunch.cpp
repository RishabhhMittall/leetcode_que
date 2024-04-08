class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n = students.size();
        int s = sandwiches.size();
        int ans = n;
        int sre = 0, cir = 0;

        for (int i = 0; i < n; i++) {
            if (students[i] == 0) {
                cir++;
            } 
            else {
                sre++;
            }
        }
        for (int i = 0; i < s; i++) {
            if (sandwiches[i] == 0) {
                if (cir > 0) {
                    ans--;
                    cir--;
                } else {
                    return ans;
                }
            } else {

                if (sre > 0) {
                    ans--;
                    sre--;
                } else {
                    return ans;
                }
            }
        }
        return ans;
    }
};