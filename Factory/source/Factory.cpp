//
// Created by John on 10/2/2023.
//
#include <Factory.hpp>



void CocaCola::setSodaName(std::string myName) {
    name = myName;
}

std::string CocaCola::getSodaName() {
    return name;
}

void CocaCola::printSodaInfo() {
    std::cout << "This soda is: " << name << std::endl;
}

void Sprite::setSodaName(std::string myName) {
    name = myName;
}

std::string Sprite::getSodaName() {
    return name;
}

void Sprite::printSodaInfo() {
    std::cout << "This soda is: " << name << std::endl;
}

void Fanta::setSodaName(std::string myName) {
    name = myName;
}

std::string Fanta::getSodaName() {
    return name;
}

void Fanta::printSodaInfo() {
    std::cout << "This soda is: " << name << std::endl;
}

Soda* SodaFactory::build(SodaType sodaType) {
    switch (sodaType)
    {
        case ST_CocaCola:
        {
            Soda* coke = new CocaCola();
            coke->setSodaName("CocaCola");
            return coke;
        }
        case ST_Sprite:
        {
            Soda* sprite = new Sprite();
            sprite->setSodaName("Sprite");
            return sprite;
        }
        case ST_Fanta:
        {
            Soda* fanta = new Fanta();
            fanta->setSodaName("Fanta");
            return fanta;
        }
        default:
        {
            return nullptr;
        }
    }
}

Client::Client() {
    ptrSoda = nullptr;
}

void Client::BuildSoda(SodaType sodaType) {
    SodaFactory* sf = new SodaFactory();
    ptrSoda = sf->build(sodaType);

    delete sf;
}

Client::~Client() {

    if (ptrSoda)
    {
        delete ptrSoda;
        ptrSoda = NULL;
    }
}

Soda* Client::getSoda() {
    return ptrSoda;
}
