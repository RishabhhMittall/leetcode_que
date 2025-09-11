class Solution {
public:
    int numberOfRounds(string loginTime, string logoutTime) {
        int loginHrs = stoi(loginTime.substr(0, 2));
        int loginMins =stoi(loginTime.substr(3, 5));

        int logoutHrs = stoi(logoutTime.substr(0, 2));
        int logoutMins =stoi(logoutTime.substr(3, 5));

        int start = 60 * loginHrs + loginMins;
        int end = 60 * logoutHrs + logoutMins;

        if(start > end) {
            end += 24 * 60;
        }

        int res = end/15 - (start + 14)/15;

        if(res < 0) {
            res = 0;
        }
        return res;
    }
};