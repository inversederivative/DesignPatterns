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

std::unique_ptr<Soda> SodaFactory::build(SodaType sodaType) {
    switch (sodaType)
    {
        case ST_CocaCola:
        {
            std::unique_ptr<Soda> coke = std::make_unique<CocaCola>();
            coke->setSodaName("CocaCola");
            return coke;
        }
        case ST_Sprite:
        {
            std::unique_ptr<Soda> sprite = std::make_unique<Sprite>();
            sprite->setSodaName("Sprite");
            return sprite;
        }
        case ST_Fanta:
        {
            std::unique_ptr<Soda> fanta = std::make_unique<Fanta>();
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
    auto sf = new SodaFactory();
    ptrSoda = sf->build(sodaType);

    delete sf;
}

Client::~Client() {

    if (ptrSoda)
    {
        ptrSoda = nullptr;
    }
}

std::unique_ptr<Soda> Client::getSoda() {
    return std::move(ptrSoda);
}
