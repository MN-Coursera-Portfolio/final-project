#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    printf("Final Project IoT Gateway Client Running...\n");
    printf("Connecting to MQTT Broker on localhost...\n");
    // Mock connecting and sending sensor data
    int counter = 0;
    while(counter < 5) {
        printf("Sending telemetry: temp=24.5C, humidity=40%%\n");
        sleep(1);
        counter++;
    }
    printf("Client finished execution successfully.\n");
    return 0;
}
