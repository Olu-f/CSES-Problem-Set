import sys
input = sys.stdin.buffer.readline

def solve(n, k):
    if n % 2 == 1:
        if n == 1 and k == 1: 
            return 1 
        elif 2*k <= n+1:
            return 2*k % n
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
    for _ in range(int(input())):
        n, k = map(int, input().split())
        print(solve(n,k))

if __name__ == '__main__':
    main()