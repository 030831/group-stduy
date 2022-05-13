def main():
    n, *v, m = map(int, open(0).read().split())
    v.sort()

    l, r = 0, v[-1]

    while l <= r:
        mid = (l + r) // 2
        
        if sum(min(mid, x) for x in v) <= m:
            l = mid + 1
        else:
            r = mid - 1
            
    print(r)

    
if __name__ == '__main__':
    main()
