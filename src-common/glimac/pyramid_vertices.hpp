#pragma once
#include <vector>
#include "common.hpp"

namespace glimac {

// Représente un cube discrétisée centrée en (0, 0, 0) (dans son repère local)
// Son axe vertical est (0, 1, 0) et ses axes transversaux sont (1, 0, 0) et (0, 0, 1)
std::vector<ShapeVertex> pyramid_vertices(float sizeX, float sizeY, float sizeZ);

} // namespace glimac