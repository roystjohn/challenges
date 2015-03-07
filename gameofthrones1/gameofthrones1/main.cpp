//
//  main.cpp
//  gameofthrones1
//
//  Created by Roy St. John on 3/7/15.
//  Copyright (c) 2015 Roy St. John. All rights reserved.
//

//  HackerRank:  Game of Thrones I
//  Given a string, check to see if the string may be
//  converted to a palindrome.  For my solution, I check
//  if any characters occur an odd amount of times.
//  A palindrome may only contain one odd occurrence
//  of any character.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    
    string s;
    cin>>s;
    int char_count[26];
    int odd_count = 0;
    for(int x = 0; x < 26; x++) {
        char_count[x] = 0;
    }
    
    int flag = 1;
    // Assign Flag a value of 0 or 1 depending on whether or not you find what you are looking for, in the given string
    for(int i = 0; i < s.length(); i++) {
        char_count[s[i] % 32 - 1]++;
    }
    for(int x = 0; x < 26; x++) {
        if(char_count[x] % 2 != 0) {
            odd_count++;
        }
    }
    if(odd_count>1) flag = 0;
    
    if(flag==0)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}
