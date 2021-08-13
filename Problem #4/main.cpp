#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_set>
#include "../common.h"

int findMissingPositiveBruteForce(std::vector<int> input){
    int result = 1;

    std::sort(std::begin(input),std::end(input));

    for(int i = 0; i < input.size(); i++){
        if(input[i] > 0){
            if(input[i] == result - 1){
                continue;
            }
            if(input[i] != result ){
                return result;
            }
            result++;
        }
    }
    return result;
}

int findMissingPositiveHashSet(std::vector<int> input){
    std::unordered_set<int> result;
    
    for(auto var: input){
        result.insert(var);
    }

    for(int i = 1; i <= input.size()+1; i++){
        // std::cout << i;
        if(result.find(i) == result.end()){
            return i;
        }
    }
}

//TODO: still not optimal. Need to come back to this one
int findMissingPositiveOptimal(std::vector<int> input){
    int currNum = 1;
    std::unordered_set<int> result;

    for(auto var: input){
        if(var > 0){
            result.insert(var);
            if(result.find(currNum) != result.end()){
                currNum++;
            }
        }
    }

    return currNum;
}

int main()
{
    std::vector<int> input = listMedium;

    std::cout << findMissingPositiveBruteForce(input) << '\n';
    std::cout << findMissingPositiveHashSet(input) << '\n';
    std::cout << findMissingPositiveOptimal(input) << '\n';

    return 0;
}