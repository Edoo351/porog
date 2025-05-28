#include <iostream>
#include <cstring>

void removeSubstring(char* mainStr, const char* substr) {
    size_t len = strlen(substr);
    char* ptr;

    while ((ptr = strstr(mainStr, substr)) != nullptr) {
        memmove(ptr, ptr + len, strlen(ptr + len) + 1);
    }
}

int main() {
    char mainStr[1000];
    char substr[100];

    std::cout << "Enter the main string: ";
    std::cin.getline(mainStr, sizeof(mainStr));

    std::cout << "Enter the substring to be removed: ";
    std::cin.getline(substr, sizeof(substr));

    removeSubstring(mainStr, substr);

    std::cout << "Result: " << mainStr << std::endl;

    return 0;
}
