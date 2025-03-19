
#include <gtest/gtest.h>
#include "helper.h"

// Test cases for prime function

TEST(PrimeTest, HandlesPrimes) {
    EXPECT_TRUE(isPrime(2));
    EXPECT_TRUE(isPrime(3));
    EXPECT_TRUE(isPrime(5));
    EXPECT_TRUE(isPrime(7));
    EXPECT_TRUE(isPrime(11));
    EXPECT_TRUE(isPrime(13));
    EXPECT_TRUE(isPrime(17));
}

TEST(PrimeTest, HandlesNonPrimes) {
    EXPECT_FALSE(isPrime(1));
    EXPECT_FALSE(isPrime(4));
    EXPECT_FALSE(isPrime(10));
    EXPECT_FALSE(isPrime(20));
    EXPECT_FALSE(isPrime(91));
    EXPECT_FALSE(isPrime(49));
    EXPECT_FALSE(isPrime(100));
    EXPECT_FALSE(isPrime(15));
}

// Test large prime number
TEST(PrimeTest, HandleLargePrime) {
    EXPECT_TRUE(isPrime(7919)); 
}

// Test large non-prime number
TEST(PrimeTest, HandlesLargeNonPrime){
    EXPECT_FALSE(isPrime(7920));
}

// Run all tests

int main(int argc, char **argv){
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}