def Hanoi(n, start, mid, dest, answer):
    if n == 1:
        answer.append([start, dest])
        return 
    Hanoi(n - 1, start, dest, mid, answer)
    Hanoi(1, start, mid, dest, answer)
    Hanoi(n - 1, mid, start, dest, answer)
    return answer
    
def solution(n):
    answer = []
    answer = Hanoi(n, 1, 2, 3, answer)
    return answer

# 코드 해석
# n =  3인 경우, 
# 1 -> 2 이동  & 1 -> 3 이동 & 2 -> 3 이동 : 1은 시작지점, 2는 경유지점, 3은 도착지점
# 위의 풀이를 n을 사용하여 생각해보면,
# n - 1 개의 원판을 경유지점으로 이동: 1은 시작지점, 경유지점이 도착지점이 되고 도착지점은 이경우에 경유지점이 됨
# 1번째 원판을 도착지점으로 이동 (하노이 탑의 가장 아래쪽에 있던 가장 큰 원판)
# 마지막으로 n - 1개의 원판을 경유 지점에서 도착지점으로 이동: 경유 지점이 시작지점이 되고 시작지점이 경유지점이 됨
