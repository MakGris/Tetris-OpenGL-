//
//  figures.cpp
//  Tetris(OpenGL)
//
//  Created by Maksim Grischenko on 04.04.2024.
//

#include <GL/glew.h>
#include <GLFW/glfw3.h>

void makeHero(GLfloat centerX, GLfloat centerY)
{
    glBegin(GL_TRIANGLES);
    glColor3f(0, 1, 1);
    
    //front
    glVertex3f(centerX - 2, centerY - 1, 1);
    glVertex3f(centerX + 2, centerY, 1);
    glVertex3f(centerX + 2, centerY - 1, 1);
    glVertex3f(centerX - 2, centerY - 1, 1);
    glVertex3f(centerX + 2, centerY, 1);
    glVertex3f(centerX - 2, centerY, 1);
    
    //back
    glVertex3f(centerX - 2, centerY - 1, 0);
    glVertex3f(centerX + 2, centerY, 0);
    glVertex3f(centerX + 2, centerY - 1, 0);
    glVertex3f(centerX - 2, centerY - 1, 0);
    glVertex3f(centerX + 2, centerY, 0);
    glVertex3f(centerX - 2, centerY, 0);
    
    //top
    glVertex3f(centerX - 2, centerY, 1);
    glVertex3f(centerX + 2, centerY, 0);
    glVertex3f(centerX + 2, centerY, 1);
    glVertex3f(centerX - 2, centerY, 1);
    glVertex3f(centerX + 2, centerY, 0);
    glVertex3f(centerX - 2, centerY, 0);

    //bottom
    glVertex3f(centerX - 2, centerY - 1, 1);
    glVertex3f(centerX + 2, centerY - 1, 0);
    glVertex3f(centerX + 2, centerY - 1, 1);
    glVertex3f(centerX - 2, centerY - 1, 1);
    glVertex3f(centerX + 2, centerY - 1, 0);
    glVertex3f(centerX - 2, centerY - 1, 0);

    
    //left side
    glColor3f(0, 1, 1);
    
    glVertex3f(centerX - 2, centerY - 1, 0);
    glVertex3f(centerX - 2, centerY, 1);
    glVertex3f(centerX - 2, centerY, 0);
    glVertex3f(centerX - 2, centerY - 1, 0);
    glVertex3f(centerX - 2, centerY, 1);
    glVertex3f(centerX - 2, centerY - 1, 1);
    
    //right side
    glVertex3f(centerX + 2, centerY - 1, 0);
    glVertex3f(centerX + 2, centerY, 1);
    glVertex3f(centerX + 2, centerY, 0);
    glVertex3f(centerX + 2, centerY - 1, 0);
    glVertex3f(centerX + 2, centerY, 1);
    glVertex3f(centerX + 2, centerY - 1, 1);
    
    glEnd();
    
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    //front lines
    glVertex3f(centerX - 2, centerY, 1);
    glVertex3f(centerX + 2, centerY, 1);
    
    glVertex3f(centerX - 2, centerY - 1, 1);
    glVertex3f(centerX + 2, centerY - 1, 1);
    
    glVertex3f(centerX - 2, centerY, 1);
    glVertex3f(centerX - 2, centerY - 1, 1);
    glVertex3f(centerX - 1, centerY, 1);
    glVertex3f(centerX - 1, centerY - 1, 1);
    glVertex3f(centerX, centerY, 1);
    glVertex3f(centerX, centerY - 1, 1);
    glVertex3f(centerX + 1, centerY, 1);
    glVertex3f(centerX + 1, centerY - 1, 1);
    glVertex3f(centerX + 2, centerY, 1);
    glVertex3f(centerX + 2, centerY - 1, 1);
    
    glEnd();
    
}

void makeTeeWee(GLfloat centerX, GLfloat centerY)
{
    glBegin(GL_TRIANGLES);
    glColor3f(0, 1, 1);
    
    //front
    glVertex3f(centerX - 2, centerY - 1, 1);
    glVertex3f(centerX + 1, centerY, 1);
    glVertex3f(centerX + 1, centerY - 1, 1);
    glVertex3f(centerX - 2, centerY - 1, 1);
    glVertex3f(centerX + 1, centerY, 1);
    glVertex3f(centerX - 2, centerY, 1);
    
    glVertex3f(centerX - 1, centerY, 1);
    glVertex3f(centerX, centerY + 1, 1);
    glVertex3f(centerX - 1, centerY + 1, 1);
    glVertex3f(centerX - 1, centerY, 1);
    glVertex3f(centerX, centerY + 1, 1);
    glVertex3f(centerX, centerY, 1);
    
    //back
    glVertex3f(centerX - 2, centerY - 1, 0);
    glVertex3f(centerX + 1, centerY, 0);
    glVertex3f(centerX + 1, centerY - 1, 0);
    glVertex3f(centerX - 2, centerY - 1, 0);
    glVertex3f(centerX + 1, centerY, 0);
    glVertex3f(centerX - 2, centerY, 0);
    
    glVertex3f(centerX - 1, centerY, 0);
    glVertex3f(centerX, centerY + 1, 0);
    glVertex3f(centerX - 1, centerY + 1, 0);
    glVertex3f(centerX - 1, centerY, 0);
    glVertex3f(centerX, centerY + 1, 0);
    glVertex3f(centerX, centerY, 0);
    
    //top
    glVertex3f(centerX - 2, centerY, 1);
    glVertex3f(centerX - 1, centerY, 0);
    glVertex3f(centerX - 1, centerY, 1);
    glVertex3f(centerX - 2, centerY, 1);
    glVertex3f(centerX - 1, centerY, 0);
    glVertex3f(centerX - 2, centerY, 0);
    
    glVertex3f(centerX - 1, centerY + 1, 1);
    glVertex3f(centerX, centerY + 1, 0);
    glVertex3f(centerX, centerY + 1, 1);
    glVertex3f(centerX - 1, centerY + 1, 1);
    glVertex3f(centerX, centerY + 1, 0);
    glVertex3f(centerX - 1, centerY + 1, 0);
    
    glVertex3f(centerX, centerY, 1);
    glVertex3f(centerX + 1, centerY, 0);
    glVertex3f(centerX + 1, centerY, 1);
    glVertex3f(centerX, centerY, 1);
    glVertex3f(centerX + 1, centerY, 0);
    glVertex3f(centerX, centerY, 0);
    
    //bottom
    glVertex3f(centerX - 2, centerY - 1, 0);
    glVertex3f(centerX + 1, centerY - 1, 1);
    glVertex3f(centerX - 2, centerY - 1, 1);
    glVertex3f(centerX - 2, centerY - 1, 0);
    glVertex3f(centerX + 1, centerY - 1, 1);
    glVertex3f(centerX + 1, centerY - 1, 0);
    
    //left side
    glVertex3f(centerX - 2, centerY - 1, 0);
    glVertex3f(centerX - 2, centerY, 1);
    glVertex3f(centerX - 2, centerY, 0);
    glVertex3f(centerX - 2, centerY - 1, 0);
    glVertex3f(centerX - 2, centerY, 1);
    glVertex3f(centerX - 2, centerY - 1, 1);
    
    glVertex3f(centerX - 1, centerY, 0);
    glVertex3f(centerX - 1, centerY + 1, 1);
    glVertex3f(centerX - 1, centerY + 1, 0);
    glVertex3f(centerX - 1, centerY, 0);
    glVertex3f(centerX - 1, centerY + 1, 1);
    glVertex3f(centerX - 1, centerY, 1);
    
    //right side
    glVertex3f(centerX + 1, centerY - 1, 0);
    glVertex3f(centerX + 1, centerY, 1);
    glVertex3f(centerX + 1, centerY, 0);
    glVertex3f(centerX + 1, centerY - 1, 0);
    glVertex3f(centerX + 1, centerY, 1);
    glVertex3f(centerX + 1, centerY - 1, 1);
    
    glVertex3f(centerX, centerY, 0);
    glVertex3f(centerX, centerY + 1, 1);
    glVertex3f(centerX, centerY + 1, 0);
    glVertex3f(centerX, centerY, 0);
    glVertex3f(centerX, centerY + 1, 1);
    glVertex3f(centerX, centerY, 1);
    glEnd();
    
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    //front lines
    glVertex3f(centerX - 2, centerY, 1);
    glVertex3f(centerX + 1, centerY, 1);
    
    glVertex3f(centerX - 2, centerY - 1, 1);
    glVertex3f(centerX + 1, centerY - 1, 1);

    glVertex3f(centerX - 2, centerY, 1);
    glVertex3f(centerX - 2, centerY - 1, 1);
    
    glVertex3f(centerX - 1, centerY + 1, 1);
    glVertex3f(centerX - 1, centerY - 1, 1);
    
    glVertex3f(centerX, centerY + 1, 1);
    glVertex3f(centerX, centerY - 1, 1);
    
    glVertex3f(centerX - 1, centerY + 1, 1);
    glVertex3f(centerX, centerY + 1, 1);
    
    glVertex3f(centerX + 1, centerY, 1);
    glVertex3f(centerX + 1, centerY - 1, 1);
    
    glEnd();
}

void makeOrangeRicky(GLfloat centerX, GLfloat centerY) {
    glBegin(GL_TRIANGLES);
    glColor3f(0, 1, 1);
    //front
    glVertex3f(centerX - 2, centerY - 1, 1);
    glVertex3f(centerX + 1, centerY, 1);
    glVertex3f(centerX + 1, centerY - 1, 1);
    glVertex3f(centerX - 2, centerY - 1, 1);
    glVertex3f(centerX + 1, centerY, 1);
    glVertex3f(centerX - 2, centerY, 1);
    
    glVertex3f(centerX, centerY, 1);
    glVertex3f(centerX + 1, centerY + 1, 1);
    glVertex3f(centerX, centerY + 1, 1);
    glVertex3f(centerX, centerY, 1);
    glVertex3f(centerX + 1, centerY + 1, 1);
    glVertex3f(centerX + 1, centerY, 1);
    
    //back
    glVertex3f(centerX - 2, centerY - 1, 0);
    glVertex3f(centerX + 1, centerY, 0);
    glVertex3f(centerX + 1, centerY - 1, 0);
    glVertex3f(centerX - 2, centerY - 1, 0);
    glVertex3f(centerX + 1, centerY, 0);
    glVertex3f(centerX - 2, centerY, 0);
    
    glVertex3f(centerX, centerY, 0);
    glVertex3f(centerX + 1, centerY + 1, 0);
    glVertex3f(centerX, centerY + 1, 0);
    glVertex3f(centerX, centerY, 0);
    glVertex3f(centerX + 1, centerY + 1, 0);
    glVertex3f(centerX + 1, centerY, 0);
    
    //top
    glVertex3f(centerX - 2, centerY, 0);
    glVertex3f(centerX, centerY, 1);
    glVertex3f(centerX - 2, centerY, 1);
    glVertex3f(centerX - 2, centerY, 0);
    glVertex3f(centerX, centerY, 1);
    glVertex3f(centerX, centerY, 0);
    
    glVertex3f(centerX, centerY + 1, 0);
    glVertex3f(centerX + 1, centerY + 1, 1);
    glVertex3f(centerX, centerY + 1, 1);
    glVertex3f(centerX, centerY + 1, 0);
    glVertex3f(centerX + 1, centerY + 1, 1);
    glVertex3f(centerX + 1, centerY + 1, 0);
    
    //bottom
    glVertex3f(centerX - 2, centerY - 1, 0);
    glVertex3f(centerX + 1, centerY - 1, 1);
    glVertex3f(centerX - 2, centerY - 1, 1);
    glVertex3f(centerX - 2, centerY - 1, 0);
    glVertex3f(centerX + 1, centerY - 1, 1);
    glVertex3f(centerX + 1, centerY - 1, 0);
    
    //left side
    glVertex3f(centerX - 2, centerY - 1, 0);
    glVertex3f(centerX - 2, centerY, 1);
    glVertex3f(centerX - 2, centerY, 0);
    glVertex3f(centerX - 2, centerY - 1, 0);
    glVertex3f(centerX - 2, centerY, 1);
    glVertex3f(centerX - 2, centerY - 1, 1);
    
    glVertex3f(centerX, centerY, 0);
    glVertex3f(centerX, centerY + 1, 1);
    glVertex3f(centerX, centerY + 1, 0);
    glVertex3f(centerX, centerY, 0);
    glVertex3f(centerX, centerY + 1, 1);
    glVertex3f(centerX, centerY, 1);
    
    //right side
    glVertex3f(centerX + 1, centerY - 1, 0);
    glVertex3f(centerX + 1, centerY + 1, 1);
    glVertex3f(centerX + 1, centerY - 1, 1);
    glVertex3f(centerX + 1, centerY - 1, 0);
    glVertex3f(centerX + 1, centerY + 1, 1);
    glVertex3f(centerX + 1, centerY + 1, 0);
    glEnd();
    
    //front lines
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    
    glVertex3f(centerX - 2, centerY - 1, 1);
    glVertex3f(centerX + 1, centerY - 1, 1);
   
    glVertex3f(centerX + 1, centerY - 1, 1);
    glVertex3f(centerX + 1, centerY + 1, 1);
    
    glVertex3f(centerX + 1, centerY + 1, 1);
    glVertex3f(centerX, centerY + 1, 1);
    
    glVertex3f(centerX, centerY + 1, 1);
    glVertex3f(centerX, centerY - 1, 1);
    
    glVertex3f(centerX - 2, centerY - 1, 1);
    glVertex3f(centerX - 2, centerY, 1);
    
    glVertex3f(centerX - 2, centerY, 1);
    glVertex3f(centerX + 1, centerY, 1);
    
    glVertex3f(centerX - 1, centerY, 1);
    glVertex3f(centerX - 1, centerY - 1, 1);
    
    glEnd();
    
}

void makeBlueRicky(GLfloat centerX, GLfloat centerY) {
    glBegin(GL_TRIANGLES);
    glColor3f(0, 1, 1);
    //front
    glVertex3f(centerX - 2, centerY - 1, 1);
    glVertex3f(centerX + 1, centerY, 1);
    glVertex3f(centerX + 1, centerY - 1, 1);
    glVertex3f(centerX - 2, centerY - 1, 1);
    glVertex3f(centerX + 1, centerY, 1);
    glVertex3f(centerX - 2, centerY, 1);
    
    glVertex3f(centerX - 1, centerY, 1);
    glVertex3f(centerX - 2, centerY + 1, 1);
    glVertex3f(centerX - 1, centerY + 1, 1);
    glVertex3f(centerX - 1, centerY, 1);
    glVertex3f(centerX - 2, centerY + 1, 1);
    glVertex3f(centerX - 2, centerY, 1);
    
    //back
    glVertex3f(centerX - 2, centerY - 1, 0);
    glVertex3f(centerX + 1, centerY, 0);
    glVertex3f(centerX + 1, centerY - 1, 0);
    glVertex3f(centerX - 2, centerY - 1, 0);
    glVertex3f(centerX + 1, centerY, 0);
    glVertex3f(centerX - 2, centerY, 0);
    
    glVertex3f(centerX - 1, centerY, 0);
    glVertex3f(centerX - 2, centerY + 1, 0);
    glVertex3f(centerX - 1, centerY + 1, 0);
    glVertex3f(centerX - 1, centerY, 0);
    glVertex3f(centerX - 2, centerY + 1, 0);
    glVertex3f(centerX - 2, centerY, 0);
    
    //top
    glVertex3f(centerX - 1, centerY, 0);
    glVertex3f(centerX + 1, centerY, 1);
    glVertex3f(centerX - 1, centerY, 1);
    glVertex3f(centerX - 1, centerY, 0);
    glVertex3f(centerX + 1, centerY, 1);
    glVertex3f(centerX + 1, centerY, 0);
    
    glVertex3f(centerX - 2, centerY + 1, 0);
    glVertex3f(centerX - 1, centerY + 1, 1);
    glVertex3f(centerX - 2, centerY + 1, 1);
    glVertex3f(centerX - 2, centerY + 1, 0);
    glVertex3f(centerX - 1, centerY + 1, 1);
    glVertex3f(centerX - 1, centerY + 1, 0);
    
    //left side
    glVertex3f(centerX - 2, centerY - 1, 0);
    glVertex3f(centerX - 2, centerY + 1, 1);
    glVertex3f(centerX - 2, centerY - 1, 1);
    glVertex3f(centerX - 2, centerY - 1, 0);
    glVertex3f(centerX - 2, centerY + 1, 1);
    glVertex3f(centerX - 2, centerY + 1, 0);
    
    //right side
    glVertex3f(centerX + 1, centerY - 1, 0);
    glVertex3f(centerX + 1, centerY, 1);
    glVertex3f(centerX + 1, centerY, 0);
    glVertex3f(centerX + 1, centerY - 1, 0);
    glVertex3f(centerX + 1, centerY, 1);
    glVertex3f(centerX + 1, centerY - 1, 1);
    
    glVertex3f(centerX - 1, centerY, 0);
    glVertex3f(centerX - 1, centerY + 1, 1);
    glVertex3f(centerX - 1, centerY + 1, 0);
    glVertex3f(centerX - 1, centerY, 0);
    glVertex3f(centerX - 1, centerY + 1, 1);
    glVertex3f(centerX - 1, centerY, 1);
    
    
    glEnd();
}
