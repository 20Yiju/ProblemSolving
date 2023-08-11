# 전체 논문중 많이 인용된 순으로 정렬한 후, 피인용수가 논문수와 같아지거나 피인용수가 논문수보다 작아지기 시작하는 숫자가 바로 h-index

def solution(citations):
    answer = len(citations)
    citations.sort(reverse=True)
    
    for index, citation in enumerate(citations):
        if index >= citation:
            answer = index
            return answer

    return answer
