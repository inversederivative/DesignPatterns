//
// Created by John on 10/2/2023.
//
#include <gtest/gtest.h>
#include <Singleton.hpp>
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
    Singleton* instance = Singleton::getInstance();
    EXPECT_EQ(instance != nullptr, true);
    EXPECT_EQ(dynamic_cast<Singleton*>(instance) != nullptr, true);
}

//// Test 3: Test that multiple calls to Singleton::getInstance() return the same instance
TEST(SingletonTest, SameInstanceForMultipleCallsToGetInstance) {
    // Call Singleton::getInstance() multiple times and store the returned instances
    // Verify that all instances are the same (point to the same memory address)
    Singleton* instance1 = Singleton::getInstance();
    Singleton* instance2 = Singleton::getInstance();
    EXPECT_EQ(instance1, instance2);
}
//
//// Test 4: Test setting and getting data in the Singleton instance
//TEST(SingletonTest, SetAndGetInSingletonInstance) {
//    // Create a Singleton instance and set some data in it
//    // Retrieve the data using the Singleton instance and verify that it's correct
//    Singleton* instance = Singleton::getInstance();
//    instance->setData(42); // Replace with your actual method to set data
//    int data = instance->getData(); // Replace with your actual method to get data
//    ASSERT_EQ(data, 42);
//}
//
//// Test 5: Test thread-safety of the Singleton pattern
//TEST(SingletonTest, SingletonIsThreadSafe) {
//    // Create multiple threads that simultaneously call Singleton::getInstance()
//    // Verify that all threads obtain the same instance and do not crash
//    // Implement this test using a testing framework that supports multithreading
//}
//
//// Test 6: Test serialization and deserialization of the Singleton instance
//TEST(SingletonTest, SingletonCanBeSerializedAndDeserialized) {
//    // Create a Singleton instance, serialize it, and then deserialize it
//    // Verify that the deserialized instance is the same as the original one
//    Singleton* instance = Singleton::getInstance();
//    // Implement the serialization and deserialization logic here
//    // Serialize the instance and then deserialize it
//    Singleton* deserializedInstance = /* Deserialize logic */;
//    ASSERT_TRUE(instance == deserializedInstance);
//}
//
//// Test 7: Test the Enum Singleton pattern (if you decide to implement it)
//TEST(SingletonTest, EnumSingletonWorksCorrectly) {
//    // Test the Enum Singleton implementation (if applicable)
//    // Verify that it behaves the same as the traditional Singleton
//    SingletonEnum* enumInstance1 = SingletonEnum::getInstance();
//    SingletonEnum* enumInstance2 = SingletonEnum::getInstance();
//    ASSERT_TRUE(enumInstance1 == enumInstance2);
//}
