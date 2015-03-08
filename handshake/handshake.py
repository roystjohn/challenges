__author__ = 'roystjohn'
T = int(input())
for x in range(0, T):
    N = int(input())
    if N == 1:
        print("0")
    else:
        print(int((N*(N-1))/2))