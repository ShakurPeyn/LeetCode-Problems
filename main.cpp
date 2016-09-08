//
//  main.cpp
//  1. Two Sum
//
//  Created by Shakur Peynado on 9/6/16.
//  Copyright © 2016 Shakur Peynado. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    class Solution {
    public:
        vector<int> twoSum(vector<int> &numbers, int target) {
            
            vector<int> res;
            for (int i=0;i<numbers.size()-1;i++){
                for (int j=i+1;j<numbers.size();j++){
                    if (numbers[i]+numbers[j]==target){
                        res.push_back(i);
                        res.push_back(j);
                        return res;
                    }
                }
            }
            return res;
        }
    };
}
