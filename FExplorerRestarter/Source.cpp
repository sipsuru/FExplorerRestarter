#include <windows.h>
#include <iostream>

// Function declarations
void RestartExplorer();
bool IsKeyComboPressed();
void StartKeyDetection();

// Function to restart File Explorer
void RestartExplorer() {
    system("taskkill /f /im explorer.exe");
    system("start explorer.exe");
}

// Function to check if the key combination Ctrl + Alt + R is pressed
bool IsKeyComboPressed() {
    return (GetAsyncKeyState(VK_CONTROL) & 0x8000) &&
        (GetAsyncKeyState(VK_MENU) & 0x8000) &&
        (GetAsyncKeyState(0x52) & 0x8000); // 0x52 for 'R'
}

// Function that runs in the background to detect the key combo
void StartKeyDetection() {
    while (true) {
        if (IsKeyComboPressed()) {
            RestartExplorer();
            Sleep(1000); // Delay to avoid multiple triggers
        }
        Sleep(100); // Prevent high CPU usage
    }
}

int main() {

    FreeConsole();

    while (true) {
        if (IsKeyComboPressed()) {
            RestartExplorer();
            std::cout << "Explorer restarted!" << std::endl;
            Sleep(1000); // Delay to avoid multiple triggers
        }
        Sleep(100); // Prevent high CPU usage
    }
}
