# first sol
def solution(operations):
    answer = []
    data = []
    
    for i in operations:
        
        if i[0] == 'I':
            data.append(int(i[2:]))
            
        if i[0] == 'D':
            if len(data) == 0:
                continue
            else:
                
                if len(i) == 3:
                    data.remove(max(data))
                    
                else:
                    data.remove(min(data))
                    
    if len(data) == 0:
        answer.append(0)
        answer.append(0)
        
    else:
        answer.append(max(data))
        answer.append(min(data))
    
    return answer

#second sol: 파이썬은 문자열 전체 비교 가능
def solution(operations):
    answer = []
    data = []
    
    for i in operations:
        
        if i == "D 1":
            if len(data) == 0:
                continue
            else:
              data.remove(max(data))
                if len(i) == 3:
       
        if i == "D -1":
          data.remove(min(data))
           
        else:
           data.append(int(i[2:]))
                    
    if len(data) == 0:
        answer.append(0)
        answer.append(0)
        
    else:
        answer.append(max(data))
        answer.append(min(data))
    
    return answer
