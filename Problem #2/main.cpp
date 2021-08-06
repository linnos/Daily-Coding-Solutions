#include <iostream>
#include <vector>

std::vector<int> productAllNum(std::vector<int> list){
    std::vector<int> result;

    for(int i = 0; i < list.size(); i++){
        int currentValue = 1;
        for(int j = 0; j < list.size(); j++){
            if(j == i){
                continue;
            }
            currentValue *= list[j];
        }
        
        result.push_back(currentValue);
    }

    return result;
}

std::vector<int> productAllNumOptimized(std::vector<int> list){
    std::vector<int> result;
    long int currentValue = 1;

    for(int i = 0; i < list.size(); i++){
        currentValue *= list[i];
    }

    result.push_back(currentValue);

    for(int i = 1; i < list.size(); i++){
        result.push_back(result.at(i-1) / list[i] * list[i-1]);
    }

    return result;
}

int main()
{   
    std::vector<int> list = {1, 2, 3, 4, 5};

    std::vector<int> result = productAllNum(list);

    for(auto var : result)
    {
        std::cout << var << ", ";
    }

    std::cout << '\n';
    result = productAllNumOptimized(list);

    for(auto var : result)
    {
        std::cout << var << ", ";
    }
}