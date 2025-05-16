#pragma once
class ITrainable {
    //abstraktni trida pro trenovatelne objekty
public:
    virtual void Train() = 0;
    virtual void Speak() = 0;
    virtual ~ITrainable() {}
};