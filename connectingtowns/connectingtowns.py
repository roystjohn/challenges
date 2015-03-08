__author__ = 'roystjohn'

# HackerRank challenge:  Connecting Towns
# Multiply the number of routes between
# each town to get the total number of
# possible routes from T1 to Tend.
# Modulo result as required by the challenge.

T = int(input())
for x in range(0, T):
    N = int(input())
    total = 1
    int_list = input()
    int_list = [int(i) for i in int_list.split(' ')]
    for y in int_list:
        total = (total * y) % 1234567
    print(total)