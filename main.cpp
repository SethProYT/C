#include <iostream>
#include "themind.hpp"

int main() {
    cout << "Hey there, it's me fedora :)" << std::endl;
    cout << "soo what do you wanna ask?" << std::endl;
    cout << "Answer here: ";
    string ans;

    getline(std::cin, ans);
    string moddedanswer = capitalizer(ans);
    cout << moddedanswer << std::endl;

    if (moddedanswer.find("WHAT'S YOUR AGE?") != string::npos) {
        cout << "I am 13, as of November 7, 2024!" << std::endl;
    } // wait are you gonna think im gonna become yandere dev or something? lol
    else if (moddedanswer.find("WHAT'S YOUR NAME?") != string::npos) {
        cout << "My name is Fedora!" << std::endl;
    }
    else if (moddedanswer.find("HELP") != string::npos) {
        cout << "Current commands: " << std::endl;
        cout << "What's your age?" << std::endl;
        cout << "What's your name?" << std::endl;
        cout << "Help - this command" << std::endl;
        cout << "END" << std::endl;
    }

    return 0;
}