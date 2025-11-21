/**
 * A wilrak0v creation
 * .-.-.-..-.,-.
 * | | | || . <
 * `-----'`-'`-'
 *
 * str_manager.cpp
 * It manage the str and return the different instructions in a pipeline
 * and also the args of the instructions.
 **/

#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> getInstructions(const std::string& str)
{
    std::vector<std::string> instructions;
    std::string content;
    int index = 0;

    while (index < str.length()) {
        content.clear();
        while (index < str.length() && str[index] != '|') {
            content += str[index];
            index++;
        }

        if (!content.empty())
            instructions.push_back(content);

        if (index < str.length() && str[index] == '|')
            index++;
    }
    return instructions;
}


std::vector<std::string> cutInstructions(const std::string& str)
{
    std::vector<std::string> content;
    std::string commande;
    int index = 0;
    while (index < str.length()) {
        while (index < str.length() && str[index] == ' ')
            index++;

        commande.clear();
        while (index < str.length() && str[index] != ' ') {
            commande += str[index];
            index++;
        }
        if (!commande.empty())
            content.push_back(commande);
    }
    return content;
}

/*
int main()
{
    std::vector<std::string> instructions = getInstructions("ls -l -a | tout ta bouche babouche");
    for (int i=0; i<instructions.size(); i++) {
        std::vector<std::string> args = cutInstructions(instructions[i]);
        std::cout << "Commande: " << args[0] << std::endl;
        std::cout << "Args: ";
        for (int j=1; j<args.size(); j++)
            std::cout << args[j] << " ";
        std::cout << "\n";
    }
    return 0;
}*/
