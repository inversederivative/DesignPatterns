//
// Created by John on 10/2/2023.
//
#include <iostream>

#ifndef DESIGNPATTERNS_FACTORY_H
#define DESIGNPATTERNS_FACTORY_H

enum SodaType {
    ST_CocaCola,
    ST_Sprite,
    ST_Fanta,
    ST_Unknown
};

class Soda
{

protected:
    std::string name;
public:
    virtual void setSodaName(std::string name) = 0;
    virtual std::string getSodaName() = 0;
    virtual void printSodaInfo() = 0;
    virtual ~Soda() = default;
};

class CocaCola : public Soda
{
public:
    void setSodaName(std::string myName) override;
    std::string getSodaName() override;
    void printSodaInfo() override;
};

class Sprite : public Soda
{
    void setSodaName(std::string myName) override;
    std::string getSodaName() override;
    void printSodaInfo() override;
};

class Fanta : public Soda
{
    void setSodaName(std::string myName) override;
    std::string getSodaName() override;
    void printSodaInfo() override;
};


class SodaFactory
{
public:
    Soda* build(SodaType sodaType);


};

class Client
{

private:

    Soda* ptrSoda;

public:
    Client();

    void BuildSoda(SodaType sodaType);

    ~Client();

    Soda* getSoda();


};

#endif //DESIGNPATTERNS_FACTORY_H
