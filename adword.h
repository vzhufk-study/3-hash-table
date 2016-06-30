#ifndef ADWORD_H
#define ADWORD_H

#include <string>

class ADWord
{
    std::string value;
    unsigned amount;
public:
    ADWord(){
        this->value = "";
        this->amount = 0;
    }

    ADWord(std::string value, unsigned amount){
        this->value = value;
        this->amount = amount;
    }
    std::string getValue(){
        return value;
    }

    void setAmount(unsigned amount){
        this->amount = amount;
    }

    unsigned getAmount(){
        return amount;
    }

    bool operator>(ADWord B){
        return value.compare(B.value) > 0;
    }

    bool operator==(ADWord B){
        return value.compare(B.value) == 0;
    }

};

#endif // ADWORD_H
