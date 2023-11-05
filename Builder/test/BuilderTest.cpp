#include <gtest/gtest.h>
#include "../source/Builder.cpp"

TEST(BuilderClientTest, AssembleDesktopComputer) {
    DesktopComputerBuilder desktopBuilder;

    // Redirect standard output to a stringstream for testing
    std::stringstream output;
    std::streambuf* old_cout = std::cout.rdbuf(output.rdbuf());

    // Assemble a desktop computer with specific configuration
    Client::assembleDesktopComputer(&desktopBuilder);

    // Get the result (DesktopComputer)
    Computer* desktopComputer = desktopBuilder.getResult();

    // Display the result
    Client::displayComputerDetails(desktopComputer);

    // Restore standard output
    std::cout.rdbuf(old_cout);

    // Verify the output matches the expected result
    std::string expectedOutput = "Desktop Computer Details:\nCPU: Intel Core i7\nRAM: 16 GB\nStorage: 512 GB\nPeripherals: Keyboard, Mouse, Monitor\n";
    EXPECT_EQ(output.str(), expectedOutput);

    // Clean up
    delete desktopComputer;
}

TEST(BuilderClientTest, AssembleLaptopComputer) {
    LaptopComputerBuilder laptopBuilder;

    // Redirect standard output to a stringstream for testing
    std::stringstream output;
    std::streambuf* old_cout = std::cout.rdbuf(output.rdbuf());

    // Assemble a laptop computer with specific configuration
    Client::assembleLaptopComputer(&laptopBuilder);

    // Get the result (DesktopComputer)
    Computer* laptopComputer = laptopBuilder.getResult();

    // Display the result
    Client::displayComputerDetails(laptopComputer);

    // Restore standard output
    std::cout.rdbuf(old_cout);

    // Verify the output matches the expected result
    std::string expectedOutput = "Laptop Computer Details:\nCPU: Intel Core i5\nRAM: 8 GB\nStorage: 256 GB\nPeripherals: Keyboard, Mouse, Built-in Webcam\nBattery Life: 8 hours\nScreen Size: 13.3 inches\n";
    EXPECT_EQ(output.str(), expectedOutput);

    // Clean up
    delete laptopComputer;
}

TEST(BuilderClientTest, CustomLaptopComputer) {
    LaptopComputerBuilder laptopBuilder;

    // Redirect standard output to a stringstream for testing
    std::stringstream output;
    std::streambuf* old_cout = std::cout.rdbuf(output.rdbuf());

    // Custom Laptop initialization.
    laptopBuilder.setCPU("AMD Ryzen 7");
    laptopBuilder.setRAM(64);
    laptopBuilder.setStorage(2048);
    laptopBuilder.setPeripherals({"Keyboard, Mouse, Built-in Webcam, Bluetooth, Wifi"});
    laptopBuilder.setScreenSize(17.1);
    laptopBuilder.setBatteryLife("6 hours");

    // Get the result (DesktopComputer)
    Computer* laptopComputer = laptopBuilder.getResult();

    // Display the result
    Client::displayComputerDetails(laptopComputer);

    // Restore standard output
    std::cout.rdbuf(old_cout);

    // Verify the output matches the expected result
    std::string expectedOutput = "Laptop Computer Details:\nCPU: AMD Ryzen 7\nRAM: 64 GB\nStorage: 2048 GB\nPeripherals: Keyboard, Mouse, Built-in Webcam, Bluetooth, Wifi\nBattery Life: 6 hours\nScreen Size: 17.1 inches\n";
    EXPECT_EQ(output.str(), expectedOutput);

    // Clean up
    delete laptopComputer;
}

TEST(BuilderClientTest, AssembleMicrocontroller) {
    MicrocontrollerBuilder microcontrollerBuilder;

    // Redirect standard output to a stringstream for testing
    std::stringstream output;
    std::streambuf* old_cout = std::cout.rdbuf(output.rdbuf());

    // Assemble a desktop computer with specific configuration
    Client::assembleMicrocontroller(&microcontrollerBuilder);

    // Get the result (DesktopComputer)
    Computer* microcontroller = microcontrollerBuilder.getResult();

    // Display the result
    Client::displayComputerDetails(microcontroller);

    // Restore standard output
    std::cout.rdbuf(old_cout);

    // Verify the output matches the expected result
    std::string expectedOutput = "Microcontroller Details:\nCPU: ARM Cortex M4\nRAM: 512 MB\nStorage: 128 MB\nPeripherals: GPIO, Debug-Port, InputButton, OutputLED\n";
    EXPECT_EQ(output.str(), expectedOutput);

    // Clean up
    delete microcontroller;
}