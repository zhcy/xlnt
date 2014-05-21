#include "custom_exceptions.h"

namespace xlnt {

bad_sheet_title::bad_sheet_title(const std::string &title)
    : std::runtime_error(std::string("bad worksheet title: ") + title)
{

}

bad_cell_coordinates::bad_cell_coordinates(int row, int column)
    : std::runtime_error(std::string("bad cell coordinates: (") + std::to_string(row) + "," + std::to_string(column) + ")")
{

}

bad_cell_coordinates::bad_cell_coordinates(const std::string &coord_string)
    : std::runtime_error(std::string("bad cell coordinates: (") + coord_string + ")")
{

}

} // namespace xlnt