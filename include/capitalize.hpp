#ifndef _CAPITALIZE_HPP
#define _CAPITALIZE_HPP

#include "str.hpp"

class Capitalize : public Str
{
public:
    Capitalize(std::string);
private:
    void convertion();
};


#endif // _CAPITALIZE_HPP