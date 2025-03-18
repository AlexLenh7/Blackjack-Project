#include <iostream>

class House
{
public:
    House(const std::string& name = "Dealer");
    virtual ~House();
    virtual bool isHitting();
    void firstFirstCard();
};