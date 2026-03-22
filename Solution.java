class Solution {
    public long pickGifts(int[] gifts, int k) {
        for(int i = 0; i < k; i++){
            int[] max = {0, 0};
            for(int j = 0; j < gifts.length; j++){
                if(gifts[j] > max[0]){
                    max[0] = gifts[j];
                    max[1] = j;
                }
            }

            gifts[max[1]] = (int)Math.sqrt(gifts[max[1]]);
        }

        long sum = 0;
        for(int i = 0; i < gifts.length; i++){
            sum += gifts[i];
        }

        return(sum);
    }
}
