#pragma once
#include <iostream>
#include <string>
#include <array>

namespace kindergarten_garden {

    enum class Plants{
        clover, grass, violets, radishes
    };

    std::array<Plants, 4> plants(const std::string& plantRows,const std::string& name);
    std::array<Plants, 2> processRow(const std::string& row, const std::string& name);

}  // namespace kindergarten_garden
