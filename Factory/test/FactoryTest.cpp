//
// Created by John on 10/2/2023.
//
#include <gtest/gtest.h>
#include "../source/Factory.cpp"

// Test 1: Test the creation of a CocaCola object using the factory
TEST(SodaFactoryTest, CreateCocaCola) {
    SodaFactory sodaFactory;
    auto cocaCola = sodaFactory.build(ST_CocaCola);
    EXPECT_NE(cocaCola, nullptr);
    EXPECT_EQ(cocaCola->getSodaName(), "CocaCola");
}

// Test 2: Test the creation of a Sprite object using the factory
TEST(SodaFactoryTest, CreateSprite) {
    SodaFactory sodaFactory;
    auto sprite = sodaFactory.build(ST_Sprite);
    EXPECT_NE(sprite, nullptr);
    EXPECT_EQ(sprite->getSodaName(), "Sprite");
}

// Test 3: Test the creation of a Fanta object using the factory
TEST(SodaFactoryTest, CreateFanta) {
    SodaFactory sodaFactory;
    auto fanta = sodaFactory.build(ST_Fanta);
    EXPECT_NE(fanta, nullptr);
    EXPECT_EQ(fanta->getSodaName(), "Fanta");
}

// Test 4: Test that the factory returns nullptr for an unknown soda type
TEST(SodaFactoryTest, CreateUnknownSoda) {
    SodaFactory sodaFactory;
    auto unknownSoda = sodaFactory.build(ST_Unknown);
    EXPECT_EQ(unknownSoda, nullptr);
}

// Test 5: Test building a CocaCola soda with the Client
TEST(ClientTest, BuildCocaColaSoda) {
    Client client;
    client.BuildSoda(ST_CocaCola);
    auto soda = client.getSoda();
    EXPECT_NE(soda, nullptr);
    EXPECT_EQ(soda->getSodaName(), "CocaCola");
}

// Test 6: Test building a Sprite soda with the Client
TEST(ClientTest, BuildSpriteSoda) {
    Client client;
    client.BuildSoda(ST_Sprite);
    auto soda = client.getSoda();
    EXPECT_NE(soda, nullptr);
    EXPECT_EQ(soda->getSodaName(), "Sprite");
}

// Test 7: Test building a Fanta soda with the Client
TEST(ClientTest, BuildFantaSoda) {
    Client client;
    client.BuildSoda(ST_Fanta);
    auto soda = client.getSoda();
    EXPECT_NE(soda, nullptr);
    EXPECT_EQ(soda->getSodaName(), "Fanta");
}

// Test 8: Test building an unknown soda with the Client
TEST(ClientTest, BuildUnknownSoda) {
    Client client;
    client.BuildSoda(ST_Unknown);
    auto soda = client.getSoda();
    EXPECT_EQ(soda, nullptr); // Expect nullptr for unknown soda
}