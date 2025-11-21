/**
 * A wilrak0v creation
 * .-.-.-..-.,-.
 * | | | || . <
 * `-----'`-'`-'
 *
 * str_manager.hpp
 * It manage the str and return the different instructions in a pipeline
 * and also the args of the instructions.
 **/

#pragma once
#include <vector>
#include <string>

std::vector<std::string> getInstructions (const std::string& str);
std::vector<std::string> cutInstructions (const std::string& str);
