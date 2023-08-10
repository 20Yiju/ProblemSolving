def solution(n, costs):
    answer = 0
    costs.sort(key = lambda x : x[2]) # 다리 건설 비용 오름차순 정렬
    path = set([costs[0][0]]) # 정렬 된 상태 이므로 가장 light-edge 선택
    
    # 크루스칼 알고리즘 사용: 그리디
    while len(path) != n:
        for cost in costs:        
            if cost[0] in path and cost[1] in path: # 선택한 노드 둘다 path에 존재한다는 것은 새로 추가하면 사이클 발생 
                continue
            if cost[0] in path or cost[1] in path: # 둘 중 하나라도 없으면 사이클 X 추가
                path.update([cost[0], cost[1]])
                answer += cost[2]
                break

    return answer
