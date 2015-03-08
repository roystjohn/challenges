//
//  main.cpp
//  acmicpcteam
//
//  Created by Roy St. John on 3/8/15.
//  Copyright (c) 2015 Roy St. John. All rights reserved.
//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//  HackerRank challenge:  ACM ICPC Team
//  Took me longer than it should have; I tried inputting
//  a string, then converting to a two-dimensional array
//  of integers (holding 0s and 1s), then bitwise or'ing
//  these values, but I finally realized I could just
//  run through the string, checking for '1' chars and
//  acting as a bitwise or.

//  Xcode does not like the string person[N] line, but
//  the compiler on HackerRank compiled successfully.

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int M, N;
    int max_topics = 0;
    int num_occurrences = 0;
    cin >> N >> M;
    string person[N];
    for(int i = 0; i < N; i++) {
        cin >> person[i];
    }
    for(int i = 0; i < N-1; i++) {
        for(int x = i+1; x < N; x++) {
            int temp = 0;
            for(int y = 0; y < M; y++) {
                if(person[i][y] == '1' or person[x][y] == '1') {
                    temp++;
                }
            }
            if(temp > max_topics) {
                max_topics = temp;
                num_occurrences = 1;
            }
            else if (temp == max_topics) {
                num_occurrences++;
            }
        }
    }
    cout << max_topics << endl;
    cout << num_occurrences;
    
    return 0;
}