#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <queue>
#include "NodeC.h"

std::string serialize(NodeC tree){

    std::string result = tree.Self;

    if(tree.Left){
        result.append(serialize(*tree.Left));
    }
    else{
        result.append("X");
    }
    if(tree.Right){
        result.append(serialize(*tree.Right));
    }
    else{
        result.append("X");
    }
    
    return result;
}



NodeC *helper(std::queue<char> &tree){
    char val = tree.front();
    if(val == 'X'){
        NodeC *c = nullptr;
        tree.pop();
        return c;
    }

    NodeC *result = new NodeC(std::string(1, val));
    tree.pop();

    NodeC *left = helper(tree);
    result->Left = left;
    
    NodeC *right = helper(tree);
    result->Right = right;

    return result;
}

NodeC deserialize(std::string tree){

    std::queue<char> queue;
    for(auto str : tree)
    {
        queue.push(str);
    }
    
    return *helper(queue);
}

int main()
{
    NodeC first("1",new NodeC("2"),new NodeC("3", new NodeC("4"), new NodeC("5")));
    std::string thisstring = "12XX34XX5XX";
    std::cout << serialize(first) << '\n';
    NodeC second = deserialize(thisstring);

    std::cout << serialize(second) << '\n';

    return 0;
}