def solution(numbers):
    answer = ''
    toStr = list(map(str, numbers))
    
    toStr.sort(key=lambda num: num*3, reverse=True)
    #각 문자를 3번 반복하면 3자리까지 사전순 비교가 가능하기 떄문에 x3을 해준값을 기준으로 내림차순 정렬(reverse=True)
    
    answer = str(int(''.join(toStr)))
    return answer
