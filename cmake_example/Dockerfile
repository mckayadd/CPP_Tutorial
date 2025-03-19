# Use Ubuntu as base image
FROM ubuntu:latest

# Install dependencies
RUN apt update && apt install -y \
    build-essential cmake git \
    libgtest-dev && \ 
    rm -rf /var/lib/apt/lists/*

# Set working directory
WORKDIR /app

# Copy the project files into the container
COPY . .

# Create build directory
RUN mkdir -p build && cd build && \ 
    cmake .. && \
    make -j$(nproc)

# Run unit tests
RUN cd build && ctest --output-on-failure

# Set executable and allow arguments to be passed
ENTRYPOINT ["./build/my_program"]