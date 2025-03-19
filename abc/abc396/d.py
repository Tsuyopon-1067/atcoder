INF = 10**19
def main():
    n, m = map(int, input().split())
    graph = [[INF]*(n+1) for _ in range(n+1)]
    for _ in range(m):
        u, v, w = map(int, input().split())
        graph[u][v] = w
        graph[v][u] = w

    seen = [False for _ in range(n+1)]
    cost = 0
    start = 1
    ans = dfs(graph, seen, start, cost)
    print(ans)

def dfs(graph, seen, v, cost):
    seen[v] = True
    if v == len(graph) - 1:
        seen[v] = False
        return cost

    res = INF
    for next_v in range(1, len(graph)):
        if not seen[next_v] and graph[v][next_v] != INF:
            new_cost = cost ^ graph[v][next_v]
            ret = dfs(graph, seen, next_v, new_cost)
            res = min(res, ret)
    seen[v] = False
    return res

def print_matrix(g):
    for row in g:
        print(' '.join(map(str, row)))

if __name__ == "__main__":
    main()

