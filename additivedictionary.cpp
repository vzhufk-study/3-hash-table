#include "additivedictionary.h"

#include <fstream>

AdditiveDictionary::AdditiveDictionary()
{

}


bool AdditiveDictionary::compare(std::string A, std::string B){
    return A.length() > B.length();
}

bool comp(ADWord A,ADWord B){
    return A.getAmount() > B.getAmount();
}

unsigned hash_function(ADWord *X){
    return 1;
}

bool equ(ADWord *A,   ADWord *B){
    return (A->getValue().compare(B->getValue()) == 0);
}


bool  AdditiveDictionary::addValue(std::string value, unsigned amount){
   ADWord V(value, amount);
   ADWord *in = hashTable::find(new ADWord(value, amount), hash_function, equ);
   if (in){
       in->setAmount(in->getAmount() + amount);
   }else{
        hashTable::add(&V, hash_function);
   }
   return true;
}

bool  AdditiveDictionary::addValueFromFile(std::string file_name){
    std::ifstream file;
    file.open(file_name);

    std::string word;
    while (file>>word) {
        addValue(word, 1);
    }
    return true;
}
