#ifndef _SPLIT_HPP
#define _SPLIT_HPP

#include <vector>
#include "str.hpp"

class Split : public Str
{
public:
    Split(std::string, char);
private:
    void convertion();
    char delimiter;
};


#endif // _SPLIT_HPP