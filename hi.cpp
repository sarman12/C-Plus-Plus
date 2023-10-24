#include <iostream>
#include <string>

std::string generateResponse(const std::string& message) {
    
    return "Bot: I'm a simple chatbot. How can I help you?";
}

int main() {
    std::string userInput;

    std::cout << "Bot: Hello! How can I assist you?" << std::endl;

    while (true) {
    
        std::cout << "User: ";
        std::getline(std::cin, userInput);

        std::string botResponse = generateResponse(userInput);
        std::cout << botResponse << std::endl;

        if (userInput == "exit") {
            break;
        }
    }

    std::cout << "Bot: Goodbye! Have a nice day!" << std::endl;

    return 0;
}