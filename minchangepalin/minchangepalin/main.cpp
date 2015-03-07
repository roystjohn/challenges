//
//  main.cpp
//  minchangepalin
//
//  Created by Roy St. John on 3/7/15.
//  Copyright (c) 2015 Roy St. John. All rights reserved.
//

//  Hackerrank challenge:  The Love-Letter Mystery.
//  Given a string, determine the minimum amount of changes
//  needed to be made to change the string to a palindrome.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    string s;
    int count = 0;
    stack <char>char_stack;
    cin >> T;
    for(int i = 0; i < T; i++) {
        count = 0;
        cin >> s;
        // s.length() returns an unsigned long, but the constraints
        // of the challenge ensure the conversion to an int will
        // not cause an issue.
        for(int x = s.length() - 1; x >= 0; x--) {
            char_stack.push(s[x]);
        }
        for(int y = s.length() - 1; y >= 0; y--) {
            if (char_stack.top() < s[y]) {
                count = count + s[y] - char_stack.top();
            }
            char_stack.pop();
        }
        cout << count << endl;
    }
    
    return 0;
}
