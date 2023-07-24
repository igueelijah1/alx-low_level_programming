#include <unistd.h>

int main() {
    const char* message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(STDERR_FILENO, message, 59); // 59 is the length of the message

    return 1;
}

