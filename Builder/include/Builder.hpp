//
// Created by physiker on 11/5/23.
//
#include <iostream>
#include <vector>

#ifndef DESIGNPATTERNS_BUILDER_HPP
#define DESIGNPATTERNS_BUILDER_HPP

class Computer
{
public:
    virtual void setCPU(const std::string& cpu) = 0;
    virtual void setRAM(int ram) = 0;
    virtual void setStorage(int storage) = 0;
    virtual void setPeripherals(const std::vector<std::string>& peripherals) = 0;
    virtual void showDetails() = 0;
};

class DesktopComputer : public Computer
{
private:
    std::string cpu;
    int ram;
    int storage;
    std::vector<std::string> peripherals;


public:
    void setCPU(const std::string& myCpu) override;

    void setRAM(int myRam) override;

    void setStorage(int myStorage) override;

    void setPeripherals(const std::vector<std::string>& myPeripherals) override;

    void showDetails() override;
};

class LaptopComputer : public Computer {
private:
    std::string cpu;
    int ram;
    int storage;
    std::vector<std::string> peripherals;
    std::string batteryLife;
    double screenSize;

public:
    void setCPU(const std::string& cpu) override;

    void setRAM(int myRam) override;

    void setStorage(int myStorage) override;

    void setPeripherals(const std::vector<std::string>& myPeripherals) override;

    void setBatteryLife(const std::string& myBatteryLife);

    void setScreenSize(double myScreenSize);

    void showDetails() override;
};

class Microcontroller : public Computer {
private:
    std::string cpu;
    int ram;
    int storage;
    std::vector<std::string> peripherals;

public:
    void setCPU(const std::string& cpu) override;

    void setRAM(int myRam) override;

    void setStorage(int myStorage) override;

    void setPeripherals(const std::vector<std::string>& myPeripherals) override;

    void showDetails() override;
};


class ComputerBuilder {
public:
    virtual void setCPU(const std::string& cpu) = 0;
    virtual void setRAM(int ram) = 0;
    virtual void setStorage(int storage) = 0;
    virtual void setPeripherals(const std::vector<std::string>& peripherals) = 0;
    virtual Computer* getResult() = 0;


    virtual void setBatteryLife(const std::string& batteryLife) {};
    virtual void setScreenSize(double screenSize) {};

};

class DesktopComputerBuilder : public ComputerBuilder
{
private:
    DesktopComputer* desktopComputer;

public:
    DesktopComputerBuilder();

    void setCPU(const std::string& cpu) override;

    void setRAM(int ram) override;

    void setStorage(int storage) override;

    void setPeripherals(const std::vector<std::string>& peripherals) override;

    Computer* getResult() override;
};

class LaptopComputerBuilder : public ComputerBuilder
{
private:
    LaptopComputer* laptopComputer;

public:
    LaptopComputerBuilder();

    void setCPU(const std::string& cpu) override;

    void setRAM(int ram) override;

    void setStorage(int storage) override;

    void setPeripherals(const std::vector<std::string>& peripherals) override;

    void setBatteryLife(const std::string& batteryLife) override;

    void setScreenSize(double screenSize) override;

    Computer* getResult() override;
};

class MicrocontrollerBuilder : public ComputerBuilder
{
private:
    Microcontroller* microcontroller;

public:
    MicrocontrollerBuilder();

    void setCPU(const std::string& cpu) override;

    void setRAM(int ram) override;

    void setStorage(int storage) override;

    void setPeripherals(const std::vector<std::string>& peripherals) override;

    Computer* getResult() override;
};

class ComputerDirector {
private:
    ComputerBuilder* builder;

public:
    explicit ComputerDirector(ComputerBuilder* builder) : builder(builder)
    {

    }

    void buildDefaultDesktopComputer();
    void buildDefaultLaptopComputer();
    void buildDefaultMicrocontroller();
};

class Client
{
public:
    static void assembleDesktopComputer(ComputerBuilder* builder);

    static void assembleLaptopComputer(ComputerBuilder* builder);

    static void assembleMicrocontroller(ComputerBuilder* builder);

    static void displayComputerDetails(Computer* computer);
};


#endif //DESIGNPATTERNS_BUILDER_HPP
