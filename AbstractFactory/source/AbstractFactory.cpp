//
// Created by John on 10/3/2023.
//
#include <AbstractFactory.hpp>


void CarEngine::manufacture() {
    std::cout << "Car Engine made!" << std::endl;
}

void CarFrame::manufacture() {
    std::cout << "Car Frame made!" << std::endl;
}

void CarWheel::manufacture() {
    std::cout << "Car Wheel made!" << std::endl;
}


void MotorcycleEngine::manufacture() {
    std::cout << "Motorcycle Engine made!" << std::endl;
}

void MotorcycleFrame::manufacture() {
    std::cout << "Motorcycle Frame made!" << std::endl;
}

void MotorcycleWheel::manufacture() {
    std::cout << "Motorcycle Wheel made!" << std::endl;
}

void BicycleEngine::manufacture() {
    std::cout << "The rider is the engine!" << std::endl;
}

void BicycleFrame::manufacture() {
    std::cout << "Bicycle Frame made!" << std::endl;
}

void BicycleWheel::manufacture() {
    std::cout << "Bicycle Wheel made!" << std::endl;
}

VehiclePart *CarFactory::createEngine() {
    return new CarEngine;
}

VehiclePart *CarFactory::createWheel() {
    return new CarWheel;
}

VehiclePart *CarFactory::createFrame() {
    return new CarFrame;
}

VehiclePart *MotorcycleFactory::createEngine() {
    return new MotorcycleEngine;
}

VehiclePart *MotorcycleFactory::createWheel() {
    return new MotorcycleWheel;
}

VehiclePart *MotorcycleFactory::createFrame() {
    return new MotorcycleFrame;
}

VehiclePart *BicycleFactory::createEngine() {
    return new BicycleEngine;
}

VehiclePart *BicycleFactory::createWheel() {
    return new BicycleWheel;
}

VehiclePart *BicycleFactory::createFrame() {
    return new BicycleFrame;
}

Client::Client(AbstractFactory* myAbstractFactory) {
    abstractFactory = myAbstractFactory;
}

void Client::manufacture() {
    VehiclePart* vpa[] =
    {
      abstractFactory->createEngine(),
      abstractFactory->createFrame(),
      abstractFactory->createWheel()
    };

    vpa[0]->manufacture();
    vpa[1]->manufacture();
    vpa[2]->manufacture();
}
