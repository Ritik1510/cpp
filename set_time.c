#include <stdio.h>
#include <unistd.h>

int main() {
    int timeout_seconds = 10;  // Set the desired timeout duration

    printf("This program will automatically stop after %d seconds.\n", timeout_seconds);

    // Loop until the timeout is reached
    for (int i = 0; i < timeout_seconds; i++) {
        printf("Time remaining: %d seconds\n", timeout_seconds - i);
        sleep(2);  // Pause for 1 second
    }

    // Code to be executed after the timeout
    printf("Timeout reached. Exiting the program.\n");

    return 0;
}
