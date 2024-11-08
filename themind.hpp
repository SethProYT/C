#pragma once

#include <iostream>
#include <random>
#include <vector>
#include <string>
#include <cctype>

using string = std::string;
using vectorstr = std::vector<string>; // maybe ill use this if this hasnt been used;
using namespace std;


string capitalizer(const string word) {
    string to_convert;
    
    for (int i = 0; i <= word.length(); i++) {
        to_convert += toupper(word[i]);
    }
    
    return to_convert;
}

// void thebrain() {
//     cout << "Hey there, it's me fedora :)" << std::endl;
//     cout << "soo what do you wanna ask?" << std::endl;
//     cout << "Answer here: ";
//     string ans;

//     getline(std::cin, ans);
//     string moddedanswer = capitalizer(ans);
//     cout << moddedanswer << std::endl;

//     if (moddedanswer.find("WHAT'S YOUR AGE?") != string::npos) {
//         cout << "I am 13, as of November 7, 2024!" << std::endl;
//     } // wait are you gonna think im gonna become yandere dev or something? lol
//     else if (moddedanswer.find("WHAT'S YOUR NAME?") != string::npos) {
//         cout << "My name is Fedora!" << std::endl;
//     }
//     else if (moddedanswer.find("help") != string::npos) {
//         cout << "Current commands: " << std::endl;
//         cout << "What's your age?" << std::endl;
//         cout << "What's your name?" << std::endl;
//         cout << "Help - this command" << std::endl;
//         cout << "END" << std::endl;
//     }
// }