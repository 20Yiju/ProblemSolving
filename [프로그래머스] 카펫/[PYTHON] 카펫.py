def solution(brown, yellow):
    answer = []
    w = 0
    total = brown + yellow
    
    for h in range(3, total):
        w = total // h    #total = w * s = brown + yellow
        
        if w * h == total and w >= h and brown + 4 == (2*h) + (2*w): #total = b + y = h * w, yellow = (w - 2) * (h - 2)에 대입해서 풀었음
            answer.append(w)
            answer.append(h)
            
    
    return answer
