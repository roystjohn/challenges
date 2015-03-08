__author__ = 'roystjohn'
n, m = map(int, input().split())
s = []
for x in range(0, n):
    s.append(int(input(), 2))

max_cases = 0
for a in range(0, n-1):
    if s[a] > 0:
        for b in range(a, n):
            if s[b] > 0:
                count = 0
                test = bin(s[a] | s[b])
                for x in range(0, len(test)):
                    if test[x] == '1':
                        count = count + 1
                if count > max_cases:
                    max_cases = count
                    num_occurrences = 1
                elif count == max_cases and count != 0:
                    num_occurrences = num_occurrences + 1


print(max_cases)
print(num_occurrences)