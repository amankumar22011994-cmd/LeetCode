class Solution {
public:

    bool isFreqSame(int freq1[], int freq2[]) {
        for(int i = 0; i < 26; i++) {
            if(freq1[i] != freq2[i]) {
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {

        if(s1.size() > s2.size()) {
            return false;
        }

        int freq[26] = {0};

        for(int i = 0; i < s1.size(); i++) {
            freq[s1[i] - 'a']++;
        }

        int windSize = s1.size();

        for(int i = 0; i <= s2.size() - windSize; i++) {

            int windFreq[26] = {0};

            for(int j = i; j < i + windSize; j++) {
                windFreq[s2[j] - 'a']++;
            }

            if(isFreqSame(freq, windFreq)) {
                return true;
            }
        }

        return false;
    }
};