if __name__ == "__main__":
    for c in range(int(input())):
        score = list(map(int, input().split()))[1:]
        avg = sum(score)/len(score)
        n = 0
        for s in score:
            if s > avg:
                n += 1
        print("%.3f"%(n/len(score)*100) + "%")
