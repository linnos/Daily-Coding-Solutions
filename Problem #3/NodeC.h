#include <string>

class NodeC{
public:
    std::string Self;
    NodeC* Left;
    NodeC* Right;

    NodeC(std::string toShow = "", NodeC* left = nullptr, NodeC* right = nullptr)
    :   Self(toShow),
        Left(left),
        Right(right)
        {};
};