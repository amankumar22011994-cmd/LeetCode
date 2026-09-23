class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        // priority_queue<pair<int,int>>pq;
        // int n=arr.size();
        // for(int i=0;i<n;i++){
        //     int diff=abs(arr[i]-x);
        //     pq.push({diff,arr[i]});
        //     if(pq.size()>k)pq.pop();
        // }
        // vector<int>ans;
        // while(pq.size()>0){
        //     ans.push_back(pq.top().second);
        //     pq.pop();
        // }
        // sort(ans.begin(),ans.end());
        // return ans;
        int n = arr.size();
        int left = 0;
        int right = n - k;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (x - arr[mid] > arr[mid + k] - x) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        return vector<int>(arr.begin() + left, arr.begin() + left + k);
    }
};