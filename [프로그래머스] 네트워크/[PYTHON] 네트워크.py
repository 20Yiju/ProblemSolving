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
