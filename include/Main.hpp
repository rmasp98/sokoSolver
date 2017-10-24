#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
#include <vector>

// For graphics variable types
#include <glm/glm.hpp>
#include <GL/gl.h>

std::vector< glm::tvec2<GLint> > bPos;
std::vector<GLuint> boxPos, boxGoal;
GLuint playerPos;

void buildLevel();






#endif  // MAIN_HPP
