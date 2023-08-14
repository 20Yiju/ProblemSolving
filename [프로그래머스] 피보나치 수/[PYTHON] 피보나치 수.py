def solution(n):
    answer = 0
    fib = []
    fib.append(0)
    fib.append(1)
    
    for i in range (2, n+1):
        val = fib[i-1] + fib[i-2]
        fib.append(val)
    
    answer = fib[n] % 1234567 #리턴 하는 값에만 1234567의 몫으로 나눠야 하는데 append 할 때 해버리면 테스트케이스fail & 런타임 에러 뜸 : 얼탱방구리
    
    return answer
