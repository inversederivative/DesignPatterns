//
// Created by John on 10/3/2023.
//
#include <gtest/gtest.h>
#include "../source/AbstractFactory.cpp"

// Test 1: Test manufacturing a car using the CarFactory
TEST(AbstractFactoryTest, ManufactureCar) {
    CarFactory carFactory;
    Client client(&carFactory);

    // Redirect standard output to a stringstream for testing
    std::stringstream output;
    std::streambuf* old_cout = std::cout.rdbuf(output.rdbuf());

    client.manufacture();

    // Restore standard output
    std::cout.rdbuf(old_cout);

    // Verify the output matches the expected result
    EXPECT_EQ(output.str(), "Car Engine made!\nCar Frame made!\nCar Wheel made!\n");
}

// Test 2: Test manufacturing a motorcycle using the MotorcycleFactory
TEST(AbstractFactoryTest, ManufactureMotorcycle) {
    MotorcycleFactory motorcycleFactory;
    Client client(&motorcycleFactory);

    // Redirect standard output to a stringstream for testing
    std::stringstream output;
    std::streambuf* old_cout = std::cout.rdbuf(output.rdbuf());

    client.manufacture();

    // Restore standard output
    std::cout.rdbuf(old_cout);

    // Verify the output matches the expected result
    EXPECT_EQ(output.str(), "Motorcycle Engine made!\nMotorcycle Frame made!\nMotorcycle Wheel made!\n");
}

// Test 3: Test manufacturing a bicycle using the BicycleFactory
TEST(AbstractFactoryTest, ManufactureBicycle) {
    BicycleFactory bicycleFactory;
    Client client(&bicycleFactory);

    // Redirect standard output to a stringstream for testing
    std::stringstream output;
    std::streambuf* old_cout = std::cout.rdbuf(output.rdbuf());

    client.manufacture();

    // Restore standard output
    std::cout.rdbuf(old_cout);

    // Verify the output matches the expected result
    EXPECT_EQ(output.str(), "The rider is the engine!\nBicycle Frame made!\nBicycle Wheel made!\n");
}