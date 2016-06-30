#ifndef ROAD_H
#define ROAD_H

#include <string>

class Road
{
    unsigned N;
    std::string A, B;

public:
    Road();
    Road(unsigned N, std::string A, std::string B){
        this->A = A;
        this->B = B;
        this->N = N;
    }

    Road(const Road& X){
        this->A = X.A;
        this->B = X.B;
        this->N = X.N;
    }

    inline bool isRoad(std::string X){
        return (X == A) || (X == B);
    }

    inline bool isNeighbor(Road X){
        return (A == X.A) || (A == X.B) || (B == X.A) || (B == X.B);
    }

    inline bool isNeighborDirectly(Road X){
        return (B == X.A);
    }

    inline bool isRoad(unsigned X){
        return X==N;
    }

    inline std::string getA(){
        return A;
    }

    inline std::string getB(){
        return B;
    }

    inline unsigned getN(){
        return N;
    }

};

#endif // ROAD_H
