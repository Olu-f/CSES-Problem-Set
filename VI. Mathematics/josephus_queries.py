
def josephus(n, k):
    
    return n


def main():
    q = int(input())
    queries = [list(map(int, input().split())) for _ in range(q)]
    for query in queries:
        print(josephus(query[0], query[1]))

if __name__ == '__main__':
    main()