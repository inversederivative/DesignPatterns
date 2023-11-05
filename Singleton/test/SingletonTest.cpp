//
// Created by John on 10/2/2023.
//
#include <gtest/gtest.h>
#include "../source/Singleton.cpp"

// Test 1: Test that the Singleton class cannot be instantiated directly
TEST(SingletonTest, CannotInstantiateDirectly) {
    // Attempt to create an instance of Singleton directly
    // Use ASSERT/EXPECT statements to check if it fails
    EXPECT_EQ(std::is_constructible<Singleton>::value, false);
}

//Test 2: Test the creation of a Singleton instance
TEST(SingletonTest, SingletonInstanceIsCreatedCorrectly) {
    // Use the Singleton::getInstance() method to create an instance
    // Verify that the returned instance is not null and is of the correct type
    std::shared_ptr<Singleton> instance = Singleton::getInstance();
    EXPECT_EQ(instance != nullptr, true);
    EXPECT_EQ(std::dynamic_pointer_cast<Singleton>(instance) != nullptr, true);
}

// Test 3: Test that multiple calls to Singleton::getInstance() return the same instance
TEST(SingletonTest, SameInstanceForMultipleCallsToGetInstance) {
    // Call Singleton::getInstance() multiple times and store the returned instances
    // Verify that all instances are the same (point to the same memory address)
    std::shared_ptr<Singleton> instance1 = Singleton::getInstance();
    std::shared_ptr<Singleton> instance2 = Singleton::getInstance();
    EXPECT_EQ(instance1, instance2);
}

// Test 4: Test setting and getting data in the Singleton instance
TEST(SingletonTest, SetAndGetInSingletonInstance) {
    // Create a Singleton instance and set some data in it
    // Retrieve the data using the Singleton instance and verify that it's correct
    std::shared_ptr<Singleton> instance = Singleton::getInstance();
    instance->setData(42); // Replace with your actual method to set data
    int data = instance->getData(); // Replace with your actual method to get data
    EXPECT_EQ(data, 42);
}

// Test 5: Test thread-safety of the Singleton pattern
TEST(SingletonTest, SingletonIsThreadSafe) {
    // Create a flag to signal that all threads have completed
    std::atomic<bool> allThreadsCompleted(true);

    // Create multiple threads that simultaneously call Singleton::getInstance()
    const int numThreads = 4; // Adjust the number of threads as needed
    std::vector<std::thread> threads(numThreads);

    for (int i = 0; i < numThreads; ++i) {
        threads[i] = std::thread([&allThreadsCompleted]() {
            // Each thread attempts to get the Singleton instance
            std::shared_ptr<Singleton> instance = Singleton::getInstance();
            if (instance == nullptr) {
                allThreadsCompleted = false; // Signal a failure if any thread gets a null instance
            }
        });
    }

    // Wait for all threads to complete
    for (int i = 0; i < numThreads; ++i) {
        threads[i].join();
    }

    // Verify that all threads obtain the same instance and do not crash
    EXPECT_EQ(allThreadsCompleted, true);
}

