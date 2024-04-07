//
//  displayEdges.cpp
//  Tetris(OpenGL)
//
//  Created by Maksim Grischenko on 04.04.2024.
//
#include <GL/glew.h>
#include <GLFW/glfw3.h>

void displayGrid()
{
    //X-axis
    glBegin(GL_LINES);
    glColor3f(0, 0, 1);
    glVertex3f(0, 0, 0); glVertex3f(10, 0, 0);
    
    //Y-axis
    glColor3f(1, 0, 0);
    glVertex3f(10, 0, 0); glVertex3f(10, 20, 0);
    
    //Z-axis
    glColor3f(0, 1, 0);
    glVertex3f(10, 0, 0); glVertex3f(10, 0, 10);
    glEnd();
    
    //X-axis grid
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 1.0);
    for (GLfloat i = -5; i <= 5; i += 1) {
        glVertex3f(i, 0, 5); glVertex3f(i, 0, 0);
    }
    for (GLfloat i = 0; i <= 5; i += 1) {
        glVertex3f(5, 0, i); glVertex3f(-5, 0, i);
    }
    
    //Y-axis grid
    glColor3f(1.0, 0.0, 0.0);
    for (GLfloat i = 0; i <= 20; i += 1) {
        glVertex3f(5, i, 0); glVertex3f(-5, i, 0);
    }
    for (GLfloat i = -5; i <= 5; i += 1) {
        glVertex3f(i, 0, 0); glVertex3f(i, 20, 0);
    }
    
    //Z-axis grid
//    glColor3f(0.0, 1.0, 0.0);
//    for (GLfloat i = 0; i <= 3; i += 1) {
//        glVertex3f(0, i, -3); glVertex3f(0, i, 3);
//    }
//    for (GLfloat i = -3; i <= 3; i += 1) {
//        glVertex3f(0, 0, i); glVertex3f(0, 3, i);
//    }
   
    glEnd();
}
