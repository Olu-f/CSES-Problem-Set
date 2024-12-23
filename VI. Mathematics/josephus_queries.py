def solve(n, k):
    if n % 2 == 1:
        if n == 1 and k == 1: 
            return 1 
        elif 2*k <= n+1:
            return 2*k 
        else:
            return 2*solve((n-1)//2, k - (n+1)//2) + 1
    else:
        if n == 2 and k == 2: 
            return 1
        elif k <= n/2: 
            return 2*k
        else: 
            return 2*solve(n//2, k - n//2) - 1 

def main():
    q = int(input())
    queries = [list(map(int, input().split())) for _ in range(q)]
    for query in queries:
        print(solve(query[0], query[1]))

if __name__ == '__main__':
    main()