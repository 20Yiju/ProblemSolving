def solution(n):
    answer = 0
    dp = []
    dp.append(1)
    dp.append(2)
    
    for i in range(2, n):
        val = dp[i-1] + dp[i-2]
        dp.append( val % 1234567)
        
    answer = dp[n-1]
        
    return answer
