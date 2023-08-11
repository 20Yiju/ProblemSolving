# dp문제
# N을 n번 사용해서 만들 수 있는 수 : 
# N을 n번 연달아서 사용할 수 있는 수 U N을 1번 사용했을 때 SET 과 n-1번 사용했을 때 SET을 사칙연산한 수들의 집합 U ...

def solution(N, number):
    answer = -1
    dp = []
    
    for i in range (1, 9):
        numbers = set()
        numbers.add( int(str(N) * i))
        
        for j in range(0, i - 1):
            for x in dp[j]:
                for y in dp[-j-1]:
                    numbers.add(x + y)
                    numbers.add(x - y)
                    numbers.add(x * y)
                    
                    if y != 0:
                        numbers.add(x / y)
                        
        if number in numbers:
            answer =  i
            break
                
        dp.append(numbers)
                
            
    return answer
