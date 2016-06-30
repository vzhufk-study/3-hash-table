#include <iostream>

#include <hash.h>
#include <road.h>

using namespace std;

unsigned hashF(std::string key){
    unsigned h = 0;
    for (unsigned i = 0; i < key.length(); ++i){
        h = 33 * h ^ key[i];
    }
    return h;
}

unsigned hashN(unsigned N){
    unsigned h = 0;
    h = 33 * h ^ N;
    return h;
}

unsigned hashF(unsigned key){
    unsigned h = 0;
    h = 33 * h ^ key;
    return h;
}

unsigned hash_by_start_point(Road *X){
    return hashF(X->getA());
}

unsigned hash_by_num(Road *X){
    return 2;
}

bool compare_by_number(Road *X, Road *Y){
    return X->getN() == Y->getN();
}

int main()
{
    hashTable<Road> Ukraine(20);
    Ukraine.add(new Road(1, std::string("Chernivtci"), std::string("Lviv")), hash_by_num);
    Ukraine.add(new Road(2, std::string("Lviv"), std::string("Ternopil")), hash_by_num);
    Ukraine.add(new Road(3, std::string("Ternopil"), std::string("Ivano-Frankivsk")), hash_by_num);
    Ukraine.add(new Road(4, std::string("Ivano-Frankivsk"), std::string("Khmelnutskyy")), hash_by_num);
    Ukraine.add(new Road(5, std::string("Khmelnutskyy"), std::string("Vinnutsa")), hash_by_num);
    Ukraine.add(new Road(6, std::string("Vinnutsa"), std::string("Zytomur")), hash_by_num);
    Ukraine.add(new Road(7, std::string("Zytomur"), std::string("Rivne")), hash_by_num);
    Ukraine.add(new Road(8, std::string("Rivne"), std::string("Kiev")), hash_by_num);
    Ukraine.add(new Road(9, std::string("Kiev"), std::string("Chernigiv")), hash_by_num);
    Ukraine.add(new Road(10, std::string("Chernigiv"), std::string("Sumy")), hash_by_num);
    Ukraine.add(new Road(11, std::string("Sumy"), std::string("Cherkasu")), hash_by_num);
    Ukraine.add(new Road(12, std::string("Cherkasu"), std::string("Poltava")), hash_by_num);
    Ukraine.add(new Road(13, std::string("Poltava"), std::string("Kirovograd")), hash_by_num);
    Ukraine.add(new Road(14, std::string("Kirovograd"), std::string("Dnipropetrovsk")), hash_by_num);
    Ukraine.add(new Road(15, std::string("Dnipropetrovsk"), std::string("Zaporija")), hash_by_num);
    Ukraine.add(new Road(16, std::string("Zaporija"), std::string("Kherson")), hash_by_num);
    Ukraine.add(new Road(17, std::string("Kherson"), std::string("Mukolayiv")), hash_by_num);
    Ukraine.add(new Road(18, std::string("Mukolayiv"), std::string("Odesa")), hash_by_num);
    Ukraine.add(new Road(19, std::string("Kharkiv"), std::string("Rivne")), hash_by_num);
    Ukraine.add(new Road(20, std::string("Rivne"), std::string("Lutsk")), hash_by_num);

/*
    unsigned N;
    bool hasBreak = false;
    std::cout<<"Set N...";
    std::cin>>N;

    unsigned way;
    std::cin>>way;
    Road *W;

    if (way != 0){
        W = Ukraine.find(new Road(way, std::string(""), std::string("")), hash_by_num, compare_by_number);
    }
    Road *start = W;
    Road *Prev;

    unsigned count = 1;

    for (unsigned i = 1; i < N; ++i){
        ++count;
        std::cin>>way;
        if (!hasBreak){
            Prev = W;
            W = Ukraine.find(new Road(way, std::string(""), std::string("")), hash_by_num, compare_by_number);
            if (!Prev->isNeighborDirectly(*W)){
                hasBreak = true;
            }
        }
    }
    if (count == N){
        std::cout<<"NO!";
    }else{
        std::cout<<start->getA()<<" to "<<Prev->getB();
    }*/
    Ukraine.del(new Road(2, "", ""), hash_by_num, compare_by_number);
    return 0;
}
