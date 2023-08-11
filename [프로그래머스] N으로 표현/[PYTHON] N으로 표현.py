# dp문제
# 5를 4번 사용해서 만들 수 있는 수 :
# 5555 U (1번 SET 과 3번 SET 사칙연산한 결과 값들) U (2번 SET 과 2번 SET 사칙연산한 결과 값들) U (3번 SET 과 1번 SET 사칙연산한 결과 값들)

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
