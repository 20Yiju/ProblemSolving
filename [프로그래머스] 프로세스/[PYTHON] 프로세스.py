def solution(priorities, location):
    answer = 0
    queue = [(i,p) for i,p in enumerate(priorities)]
    
    while True:
        curr = queue.pop(0)
        
        if any(curr[1] < q[1] for q in queue):  #any(): 반복가능한 자료형 중 단 하나라도 True가 있으면 True를 반환
            queue.append(curr)
        else:
            answer += 1
            if curr[0] == location:
                break
    
    return answer
            
        
