class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        int arr[3] = {0, 0, 0};

        for (int i = 0; i < stones.size(); i++) {
            arr[stones[i] % 3]++;
        }

        if (arr[0] % 2 == 0) {
            return arr[1] >= 1 && arr[2] >= 1;
        }

        return abs(arr[1] - arr[2]) > 2;
    }
};