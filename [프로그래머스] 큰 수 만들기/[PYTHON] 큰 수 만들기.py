def solution(number, k):
    answer = []
        
    for num in number:
        
        if len(answer) == 0:
            answer.append(num)
            continue
        
        if k > 0:
            
            while num > answer[-1]:
                answer.pop()
                k -= 1
                if k <= 0 or len(answer) == 0:
                    break
            
        answer.append(num)
    
    # number = 10000, k = 2 같은 경우는 계속해서 들어오는 0이 answer[-1]와 같기 때문에 아무 숫자도 지워지지 않음
    # 하지만 숫자를 지워야 하는 횟수가 남아 있기 때문에 뒤에서 지워줌
    if k > 0:
        answer = answer[:-k] 
    else:
        answer
        
    number = list(map(str,answer))
    answer = ''.join(number)
    
    return answer
