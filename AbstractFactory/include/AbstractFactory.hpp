//
// Created by John on 10/3/2023.
//
#include <iostream>

#ifndef DESIGNPATTERNS_ABSTRACTFACTORY_HPP
#define DESIGNPATTERNS_ABSTRACTFACTORY_HPP

class VehiclePart
{
public:
    virtual void manufacture() = 0;
};

class CarEngine : public VehiclePart
{
    void manufacture() override;
};

class CarFrame : public VehiclePart
{
public:
    void manufacture() override;
};

class CarWheel : public VehiclePart
{
    void manufacture() override;
};

class MotorcycleEngine : public VehiclePart
{
    void manufacture() override;
};

class MotorcycleFrame : public VehiclePart
{
public:
    void manufacture() override;
};

class MotorcycleWheel : public VehiclePart
{
    void manufacture() override;
};

class BicycleEngine : public VehiclePart
{
    void manufacture() override;
};

class BicycleFrame : public VehiclePart
{
public:
    void manufacture() override;
};

class BicycleWheel : public VehiclePart
{
    void manufacture() override;
};

class AbstractFactory
{
public:

    virtual VehiclePart* createEngine() = 0;
    virtual VehiclePart* createWheel() = 0;
    virtual VehiclePart* createFrame() = 0;

};

class CarFactory : public AbstractFactory
{
    VehiclePart* createEngine() override;
    VehiclePart* createWheel() override;
    VehiclePart* createFrame() override;
};

class MotorcycleFactory : public AbstractFactory
{
    VehiclePart* createEngine() override;
    VehiclePart* createWheel() override;
    VehiclePart* createFrame() override;
};

class BicycleFactory : public AbstractFactory
{
    VehiclePart* createEngine() override;
    VehiclePart* createWheel() override;
    VehiclePart* createFrame() override;
};

class Client
{
private:
    AbstractFactory* abstractFactory;

public:
    Client(AbstractFactory* myAbstractFactory);

    void manufacture();
};


#endif //DESIGNPATTERNS_ABSTRACTFACTORY_HPP
