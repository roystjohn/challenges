__author__ = 'roystjohn'

'''
HackerRank:  Knapsack.
Does not currently pass all test cases (and the
reason is obvious to me), but I was in a
hurry to get a 20 point submission in Dynamic
Programming in an effort to get my first badge.
'''

T = int(input())
for x in range(0, T):
    found = -1
    n, k = map(int, input().split())
    a = input().split()
    a = [int(b) for b in a]
    if 1 in a:
        print(k)
    else:
        for y in a:
            if k % y == 0 or found == 0:
                found = 0
                break
            elif k % y == 1:
                if found != 0:
                    found = 1
            if found != 0:
                remainder = k % y
                for z in a:
                    if remainder + z == k:
                        found = 0
                        break

    if found == 0:
        print(k)
    elif found == 1:
        print(k - 1)