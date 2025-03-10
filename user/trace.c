#include "../kernel/types.h"
#include "user.h"

int main(int argc, char *argv[]) {
    if (argc < 3) {
        fprintf(2, "Usage: trace mask command [args...]\n");
        exit(1);
    }

    int mask = atoi(argv[1]);  // Convert the trace mask from string to int

    if (trace(mask) < 0) {
        fprintf(2, "trace: failed to set trace mask\n");
        exit(1);
    }

    // Execute the command with arguments
    exec(argv[2], &argv[2]);

    // If exec fails, print an error and exit
    fprintf(2, "trace: exec %s failed\n", argv[2]);
    exit(1);
}


