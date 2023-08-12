def solution(brown, yellow):
    answer = []
    w = 0
    total = brown + yellow
    
    for h in range(3, total):
        w = total // h
        
        if w * h == total and w >= h and brown + 4 == (2*h) + (2*w):
            answer.append(w)
            answer.append(h)
            
    
    return answer
