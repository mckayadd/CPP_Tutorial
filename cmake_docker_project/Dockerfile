FROM alpine as builder

RUN apk add --no-cache \
    build-base cmake git \
    gtest-dev

WORKDIR /app
COPY . .
RUN mkdir -p build && cd build && cmake .. && make -j$(nproc)

FROM alpine
WORKDIR /app/build
COPY --from=builder /app/build/my_program /app/build/my_program
ENTRYPOINT ["/app/build/my_program"]
