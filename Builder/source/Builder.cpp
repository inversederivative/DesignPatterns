#include <Builder.hpp>
#include "Builder.hpp"


///// Desktop Computer Methods

void DesktopComputer::setCPU(const std::string &myCpu) {
    this->cpu = myCpu;
}

void DesktopComputer::setRAM(int myRam) {
    this->ram = myRam;
}

void DesktopComputer::setStorage(int myStorage) {
    this->storage = myStorage;
}

void DesktopComputer::setPeripherals(const std::vector <std::string> &myPeripherals) {
    this->peripherals = myPeripherals;
}

void DesktopComputer::showDetails() {
    std::cout << "Desktop Computer Details:" << std::endl;
    std::cout << "CPU: " << cpu << std::endl;
    std::cout << "RAM: " << ram << " GB" << std::endl;
    std::cout << "Storage: " << storage << " GB" << std::endl;
    std::cout << "Peripherals: ";
    for (int i = 0; i < peripherals.size()-1; i++) {
        std::cout << peripherals[i] << ", ";
    }
    std::cout << peripherals[peripherals.size()-1] << std::endl;
}

///// Desktop Computer Builder Methods

DesktopComputerBuilder::DesktopComputerBuilder() {
    desktopComputer = new DesktopComputer();
}

void DesktopComputerBuilder::setCPU(const std::string& cpu) {
    desktopComputer->setCPU(cpu);
}

void DesktopComputerBuilder::setRAM(int ram) {
    desktopComputer->setRAM(ram);
}

void DesktopComputerBuilder::setStorage(int storage) {
    desktopComputer->setStorage(storage);
}

void DesktopComputerBuilder::setPeripherals(const std::vector<std::string>& peripherals) {
    desktopComputer->setPeripherals(peripherals);
}

Computer* DesktopComputerBuilder::getResult() {
    return desktopComputer;
}

///// Computer Director Methods

void ComputerDirector::buildDefaultDesktopComputer() {
    builder->setCPU("Intel Core i7");
    builder->setRAM(16);
    builder->setStorage(512);
    std::vector<std::string> peripherals = {"Keyboard", "Mouse", "Monitor"};
    builder->setPeripherals(peripherals);
}

void ComputerDirector::buildDefaultLaptopComputer() {
    builder->setCPU("Intel Core i5");
    builder->setRAM(8);
    builder->setStorage(256);
    std::vector<std::string> peripherals = {"Keyboard", "Mouse", "Built-in Webcam"};
    builder->setPeripherals(peripherals);
    builder->setScreenSize(13.3);
    builder->setBatteryLife("8 hours");
}

void ComputerDirector::buildDefaultMicrocontroller() {
    builder->setCPU("ARM Cortex M4");
    builder->setRAM(512);
    builder->setStorage(128);
    builder->setPeripherals({"GPIO", "Debug-Port", "InputButton", "OutputLED"});
}

///// Laptop Computer Methods

void LaptopComputer::setCPU(const std::string &myCpu) {
    this->cpu = myCpu;
}

void LaptopComputer::setRAM(int myRam) {
    this->ram = myRam;
}

void LaptopComputer::setStorage(int myStorage) {
    this->storage = myStorage;
}

void LaptopComputer::setPeripherals(const std::vector<std::string> &myPeripherals) {
    this->peripherals = myPeripherals;
}

void LaptopComputer::setBatteryLife(const std::string &myBatteryLife) {
    this->batteryLife = myBatteryLife;
}

void LaptopComputer::setScreenSize(double myScreenSize) {
    this->screenSize = myScreenSize;
}

void LaptopComputer::showDetails() {
    std::cout << "Laptop Computer Details:" << std::endl;
    std::cout << "CPU: " << cpu << std::endl;
    std::cout << "RAM: " << ram << " GB" << std::endl;
    std::cout << "Storage: " << storage << " GB" << std::endl;
    std::cout << "Peripherals: ";
    for (int i = 0; i < peripherals.size()-1; i++) {
        std::cout << peripherals[i] << ", ";
    }
    std::cout << peripherals[peripherals.size()-1] << std::endl;
    std::cout << "Battery Life: " << batteryLife << std::endl;
    std::cout << "Screen Size: " << screenSize << " inches" << std::endl;
}

///// Laptop Computer Builder Methods

LaptopComputerBuilder::LaptopComputerBuilder() {
    laptopComputer = new LaptopComputer();
}

void LaptopComputerBuilder::setCPU(const std::string& cpu) {
    laptopComputer->setCPU(cpu);
}

void LaptopComputerBuilder::setRAM(int ram) {
    laptopComputer->setRAM(ram);
}

void LaptopComputerBuilder::setStorage(int storage) {
    laptopComputer->setStorage(storage);
}

void LaptopComputerBuilder::setPeripherals(const std::vector<std::string>& peripherals) {
    laptopComputer->setPeripherals(peripherals);
}

void LaptopComputerBuilder::setBatteryLife(const std::string& batteryLife) {
    laptopComputer->setBatteryLife(batteryLife);
}

void LaptopComputerBuilder::setScreenSize(double screenSize) {
    laptopComputer->setScreenSize(screenSize);
}

Computer *LaptopComputerBuilder::getResult() {
    return laptopComputer;
}

void Client::assembleDesktopComputer(ComputerBuilder *builder) {
    ComputerDirector director(builder);
    director.buildDefaultDesktopComputer();
}

void Client::assembleLaptopComputer(ComputerBuilder *builder) {
    ComputerDirector director(builder);
    director.buildDefaultLaptopComputer();
}

void Client::assembleMicrocontroller(ComputerBuilder *builder) {
    ComputerDirector director(builder);
    director.buildDefaultMicrocontroller();
}

void Client::displayComputerDetails(Computer *computer) {
    computer->showDetails();
}



///// Microcontroller Methods

void Microcontroller::setCPU(const std::string &myCpu) {
    this->cpu = myCpu;
}

void Microcontroller::setRAM(int myRam) {
    this->ram = myRam;
}

void Microcontroller::setStorage(int myStorage) {
    this->storage = myStorage;
}

void Microcontroller::setPeripherals(const std::vector<std::string> &myPeripherals) {
    this->peripherals = myPeripherals;
}

void Microcontroller::showDetails() {
    std::cout << "Microcontroller Details:" << std::endl;
    std::cout << "CPU: " << cpu << std::endl;
    std::cout << "RAM: " << ram << " MB" << std::endl;
    std::cout << "Storage: " << storage << " MB" << std::endl;
    std::cout << "Peripherals: ";
    for (int i = 0; i < peripherals.size()-1; i++) {
        std::cout << peripherals[i] << ", ";
    }
    std::cout << peripherals[peripherals.size()-1] << std::endl;
}

///// Microcontroller Builder Methods

MicrocontrollerBuilder::MicrocontrollerBuilder() {
    microcontroller = new Microcontroller();
}

void MicrocontrollerBuilder::setCPU(const std::string &cpu) {
    microcontroller->setCPU(cpu);
}

void MicrocontrollerBuilder::setRAM(int ram) {
    microcontroller->setRAM(ram);
}

void MicrocontrollerBuilder::setStorage(int storage) {
    microcontroller->setStorage(storage);
}

void MicrocontrollerBuilder::setPeripherals(const std::vector<std::string> &peripherals) {
    microcontroller->setPeripherals(peripherals);
}

Computer *MicrocontrollerBuilder::getResult() {
    return microcontroller;
}


