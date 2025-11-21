#include <iostream>
#include "str_manager.hpp"
#include <vector>

int main() {
    std::string line = "ls -l -a | dmenu -l | echo";
    std::vector<std::string> instructions = getInstructions(line);
    for (int i=0; i<instructions.size(); i++) {
        std::vector<std::string> args = cutInstructions(instructions[i]);
        std::cout << "COMMANDE : " << args[0] << std::endl;
        for (int j=1; j<args.size(); j++) {
            std::cout << j << " : " << args[j] << std::endl;
        }
    }
    return 0;
}
