def DFS(n, computers, visited, node):
    visited[node] = True
    
    for i in range(n):
        if visited[i] == False and computers[node][i] == 1:
            visited = DFS(n, computers, visited, i)
    
    return visited
    

def solution(n, computers):
    answer = 0
    visited = [False] * n
    # print(visited) n = 3: [False, False, False]
    
    for i in range(n):
        if visited[i] == False:
            DFS(n, computers, visited, i)
            answer += 1
               
    return answer


# BFS 풀이
#def BFS(n, computers, visited, node):
#    visited[node] = True
#    queue = [] #방문한 노드들을 큐에 저장
#    queue.append(node)
    
#    while len(queue) != 0:
#        node = queue.pop(0) # 노드 하나 꺼냄
#        visited[node] = True

#        for i in range(n): # 인접 노드 탐색
#            if connect != node and computers[node][i] == 1:
#                if visited[i] == False:
#                    queue.append(i)

