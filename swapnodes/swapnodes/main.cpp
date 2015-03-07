//
//  main.cpp
//  swapnodes
//
//  Created by Roy St. John on 3/5/15.
//  Copyright (c) 2015 Roy St. John. All rights reserved.
//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct btree {
    int data;
    btree *parent;
    btree *left_child;
    btree *right_child;
};


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    int a, b;
    int T;
    int K;
    
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> a >> b;
    }
    cin >> T;
    
    
    return 0;
}