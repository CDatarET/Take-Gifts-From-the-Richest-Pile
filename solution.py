class Solution:
    def pickGifts(self, gifts, k):
        for i in range(k):
            m = [0, 0]
            for j in range(len(gifts)):
                if gifts[j] > m[0]:
                    m[0] = gifts[j]
                    m[1] = j
            
            gifts[m[1]] = int(gifts[m[1]] ** 0.5)
        
        return(sum(gifts))
