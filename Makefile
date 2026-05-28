CC ?= gcc
CFLAGS ?= -Wall -Wextra -O2
TARGET = iot_gateway_client

all: $(TARGET)

$(TARGET): src/main.c
	$(CC) $(CFLAGS) -o $(TARGET) src/main.c

clean:
	rm -f $(TARGET)
