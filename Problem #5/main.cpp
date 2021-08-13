#include <iostream>
#include <utility>

std::pair<int,int> cons(int one, int two){
    std::pair<int,int> result = {one, two};
    return result;
}

int car(std::pair<int, int> pair){
    return pair.first;
}
int cdr(std::pair<int, int> pair){
    return pair.second;
}

//This one seems trivial? Confused about why it seems so easy.
int main()
{
    std::cout << car(cons(1,2)) << '\n';
    std::cout << cdr(cons(1,2)) << '\n';
    return 0;
}
