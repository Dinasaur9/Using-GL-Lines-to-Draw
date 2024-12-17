#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <iostream>
#include <GL/freeglut.h>
#include "AppController.h"

class Controller : public AppController {

public:
    Controller(){
        // Initialize your state variables
    }

    void render() {

        glLineWidth(3.0f);
        glColor3f(1.0f, 0.0f, 1.0f);
        glBegin(GL_LINES);
            glVertex2f(-0.5f, 0.5f);
            glVertex2f(0.5f, 0.5f);
        glEnd();
       
        glLineWidth(3.0f);
        glColor3f(1.0f, 0.0f, 1.0f);
        glBegin(GL_LINES);
            glVertex2f(-0.5f, -0.5f);
            glVertex2f(0.5f, -0.5f);
        glEnd();

        glLineWidth(3.0f);
        glColor3f(1.0f, 0.0f, 1.0f);
        glBegin(GL_LINES);
            glVertex2f(-0.5f, 0.5f);
            glVertex2f(-0.5f, -0.5f);
        glEnd();

        glLineWidth(3.0f);
        glColor3f(1.0f, 0.0f, 1.0f);
        glBegin(GL_LINES);
            glVertex2f(0.5f, 0.5f);
            glVertex2f(0.5f, -0.5f);
        glEnd();

         glLineWidth(3.0f);
        glColor3f(1.0f, 0.0f, 1.0f);
        glBegin(GL_LINES);
            glVertex2f(-0.4f, 0.4f);
            glVertex2f(-0.4f, -0.4f);
        glEnd();

         glLineWidth(3.0f);
        glColor3f(1.0f, 0.0f, 1.0f);
        glBegin(GL_LINES);
            glVertex2f(-0.4f, 0.4f);
            glVertex2f(0.0f, 0.0f);
        glEnd();

        glLineWidth(3.0f);
        glColor3f(1.0f, 0.0f, 1.0f);
        glBegin(GL_LINES);
            glVertex2f(0.0f, 0.0f);
            glVertex2f(-0.4f, -0.4f);
        glEnd();

        glLineWidth(3.0f);
        glColor3f(1.0f, 0.0f, 1.0f);
        glBegin(GL_LINES);
            glVertex2f(0.4f, 0.4f);
            glVertex2f(0.1f, 0.4f);
        glEnd();

        glLineWidth(3.0f);
        glColor3f(1.0f, 0.0f, 1.0f);
        glBegin(GL_LINES);
            glVertex2f(0.1f, 0.4f);
            glVertex2f(0.1f, 0.0f);
        glEnd();

        glLineWidth(3.0f);
        glColor3f(1.0f, 0.0f, 1.0f);
        glBegin(GL_LINES);
            glVertex2f(0.1f, 0.0f);
            glVertex2f(0.4f, 0.0f);
        glEnd();

        glLineWidth(3.0f);
        glColor3f(1.0f, 0.0f, 1.0f);
        glBegin(GL_LINES);
            glVertex2f(0.4f, 0.0f);
            glVertex2f(0.4f, -0.4f);
        glEnd();

        glLineWidth(3.0f);
        glColor3f(1.0f, 0.0f, 1.0f);
        glBegin(GL_LINES);
            glVertex2f(0.4f, -0.4f);
            glVertex2f(0.1f, -0.4f);
        glEnd();
    }

    ~Controller(){
        // Release memory
    }
};

#endif