#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <chrono>
#include <ctime>  
#include <cmath>  
#include "../common.h"

bool addUpToKBruteForce(int number, std::vector<int> list){
    
    for(int i = 0; i < list.size(); i++){
        for(int j = 0; j < list.size(); j++){
            if(list[i]+list[j] == number){
                return true;
            }
        }
    }

    return false;
}

bool addUpToKOptimal(int number, std::vector<int> list){
    
    std::unordered_set<int> set;

    for(int i = 0; i < list.size(); i++){
        int temp = number - list[i];

        if(set.find(std::abs(temp)) != set.end()){
            return true;
        }

        set.insert(list[i]);
    }

    return false;
}

int main()
{   
    //listLong one takes a while with brute force method
    //it is here for testing purposes
    
    // std::vector<int> listLong;
    // for(int i = 0; i < 100000; i++){
    //     listLong.push_back(i);
    // }

    std::cout << addUpToKBruteForce(19999, listMedium) << '\n';
    std::cout << addUpToKOptimal(19999, listMedium) << '\n';
}