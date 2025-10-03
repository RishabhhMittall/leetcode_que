class Solution {
public:
    double isPossible(vector<int>& dist, int mid) {
        int n = dist.size();

        double time = 0;
        for (int i = 0; i < n - 1; i++) {
            time += ceil((double)dist[i] / mid);
        }
        time += ((double)dist[n - 1] / mid);
        return time;
    }

    int minSpeedOnTime(vector<int>& dist, double hour) {

        int n = dist.size();
        int l = 1;
        int r = pow(10, 7);
        double ans = -1;

        while (l <= r) {

            int mid = l + (r - l) / 2;
            double res = isPossible(dist, mid);

            if (res <= hour) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        return ans;
    }
};