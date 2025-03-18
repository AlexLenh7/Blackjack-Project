#include <iostream>

class GenericPlayer
{
private:
    std::string name;

public:
    GenericPlayer();
    virtual ~GenericPlayer();
    virtual bool isHitting();
    bool isBusted();
    bool bust();
    std::string getName();
    void setName();
};
