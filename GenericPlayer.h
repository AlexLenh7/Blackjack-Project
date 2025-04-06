#include <iostream>
#include <string>
#include "Hand.h"

class GenericPlayer : public Hand
{
private:
    std::string name;

public:
    GenericPlayer(const std::string& name = "");
    virtual ~GenericPlayer();
    
    virtual bool isHitting() const = 0;
    bool isBusted() const;
    bool bust() const;

    std::string getName() const;
    void setName(const std::string& name);

    friend std::ostream& operator<<(std::ostream& os, const GenericPlayer& aGenericPlayer);
};
