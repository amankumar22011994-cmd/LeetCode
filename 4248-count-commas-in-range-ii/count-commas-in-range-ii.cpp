class Solution {
public:
    long long countCommas(long long n) {
        long long commas = 0;
        long long hold = 1000;

        while (n >= hold) {
            commas += (n - hold + 1);
            if (hold > LLONG_MAX / 1000) break; 
            hold *= 1000;
        }

        return commas;
    }
};