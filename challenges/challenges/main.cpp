//
//  main.cpp
//  challenges
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


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int V, n;
    cin >> V >> n;
    int _array[n];
    int i = 0;
    for (i = 0; i < n; i++) {
        cin >> _array[i];
        if (_array[i] == V) {
            cout << "found it";
            return i;
        }
    }
    return 0;
}
