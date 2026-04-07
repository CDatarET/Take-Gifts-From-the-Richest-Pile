class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        for(int i = 0; i < k; i++) {
            int max[2] = {0, 0};
            for(int j = 0; j < gifts.size(); j++) {
                if(gifts[j] > max[0]) {
                    max[0] = gifts[j];
                    max[1] = j;
                }
            }
            gifts[max[1]] = static_cast<int>(sqrt(gifts[max[1]]));
        }
        long long sum = 0;
        for(int i = 0; i < gifts.size(); i++) sum += gifts[i];
        return sum;
    }
};
