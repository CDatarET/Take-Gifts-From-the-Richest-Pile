public class Solution {
    public long PickGifts(int[] gifts, int k) {
        for(int i = 0; i < k; i++){
            int[] max = {0, 0};
            for(int j = 0; j < gifts.Length; j++){
                if(gifts[j] > max[0]){
                    max[0] = gifts[j];
                    max[1] = j;
                }
            }
            gifts[max[1]] = (int)Math.Sqrt(gifts[max[1]]);
        }
        long sum = 0;
        for(int i = 0; i < gifts.Length; i++) sum += gifts[i];
        return(sum);
    }
}
