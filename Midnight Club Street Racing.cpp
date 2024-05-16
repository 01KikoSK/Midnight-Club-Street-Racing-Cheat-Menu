#include <Windows.h>
#include <iostream>

// Define the cheats
struct Cheat {
    std::string name;
    uintptr_t address;
    BYTE value;
};

Cheat cheats[] = {
    {"Infinite Nitro", 0x00400000, 100}, // Replace with the actual address and value
    {"Unlimited Money", 0x00400004, 999999}, // Replace with the actual address and value
    // Add more cheats here
};

// Function to write to memory
void writeMemory(uintptr_t address, BYTE value) {
    HANDLE hProcess = GetCurrentProcess();
    WriteProcessMemory(hProcess, (LPVOID)address, &value, sizeof(value), nullptr);
}

// Function to toggle cheats
void toggleCheats(Cheat cheat) {
    if (GetAsyncKeyState(VK_F1) & 1) { // Replace with the desired hotkey
        writeMemory(cheat.address, cheat.value);
    }
}

int main() {
    while (true) {
        for (Cheat cheat : cheats) {
            toggleCheats(cheat);
        }
        Sleep(10); // Adjust the sleep time as needed
    }
    return 0;
}