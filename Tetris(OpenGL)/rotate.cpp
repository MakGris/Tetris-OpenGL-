//
//  rotate.cpp
//  Tetris(OpenGL)
//
//  Created by Maksim Grischenko on 04.04.2024.
//
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "displayGrid.h"
void rotate(GLFWwindow* window) {
    
    int state1 = glfwGetKey(window, GLFW_KEY_LEFT);
    if (state1 == GLFW_PRESS)
    {
        glRotatef(-1, 0, 1, 0);
    }
    int state2 = glfwGetKey(window, GLFW_KEY_RIGHT);
    if (state2 == GLFW_PRESS)
    {
        glRotatef(1, 0, 1, 0);
    }
    int state3 = glfwGetKey(window, GLFW_KEY_DOWN);
    if (state3 == GLFW_PRESS)
    {
        glRotatef(-1, 1, 0, 0);
    }
    int state4 = glfwGetKey(window, GLFW_KEY_UP);
    if (state4 == GLFW_PRESS)
    {
        glRotatef(1, 1, 0, 0);
    }
}
