//
//  main.cpp
//  unfairness
//
//  Created by Roy St. John on 3/7/15.
//  Copyright (c) 2015 Roy St. John. All rights reserved.
//

//  From an entry of N integers, group K integers in a
//  way that minimizes unfairness, where unfairness is
//  the max of the group of integers minus the minimum
//  of the group of integers.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int minMax(int *candies, int N, int K) {
    int minimum_value;
    
    minimum_value = candies[K-1] - candies[0];
    for(int x = K; x < N; x++) {
        if(minimum_value > candies[x] - candies[x-K+1]) {
            minimum_value = candies[x] - candies[x-K+1];
        }
    }
    
    return minimum_value;
}
// It is NOT mandatory to use the provided template. You can handle the IO section differently.

int main() {
    /* The code required to enter n,k, candies is provided*/
    
    int N, K, unfairness;
    cin >> N >> K;
    int candies[N];
    for (int i=0; i<N; i++) {
        cin >> candies[i];
        
        for(int z = i; z > 0 && candies[z - 1] > candies[z]; z--) {
            int temp = candies[z];
            candies[z] = candies[z - 1];
            candies[z - 1] = temp;
        }
    }
    
    /** Write the solution code here. Compute the result, store in  the variable unfairness --
     and output it**/
    unfairness = minMax(candies, N, K);
    
    cout << unfairness << "\n";
    return 0;
}