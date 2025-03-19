#!/bin/bash

# Navigate to the script's directory (ensure relative paths work correctly)
cd "$(dirname "$0")"
cd ..

# Check if an argument (number) is provided
if [ $# -eq 0 ]; then
    echo "❌ Error: Please provide a number."
    echo "Usage: ./scripts/build.sh <number>"
    exit 1
fi

NUMBER=$1  # Store the argument (number)

# Remove old build directory if it exists
if [ -d "build" ]; then
    echo "🧹 Cleaning old build..."
    rm -rf build
fi

# Create and enter the build directory
mkdir build && cd build

# Run CMake from the correct directory
echo "🔨 Running CMake..."
cmake ..

# Detect number of CPU cores (compatible with both Linux and macOS)
if command -v nproc &> /dev/null; then
    CORES=$(nproc)  # Linux
else
    CORES=$(sysctl -n hw.ncpu)  # macOS
fi

echo "🚀 Building project using $CORES cores..."
make -j$CORES  # Build using detected cores

echo "✅ Build complete!"

# Run unit tests
echo "🧪 Running tests..."
ctest --output-on-failure

# Run the program with the provided number
echo "🔢 Checking if $NUMBER is prime..."
./my_program $NUMBER
