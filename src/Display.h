#ifndef A_STAR_DISPLAY_H
#define A_STAR_DISPLAY_H

#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <GLFW/glfw3.h>

class Display {
private:
    GLFWwindow *window;

    int width;
    int height;
    std::string title;

    void init();

public:
    Display(int width, int height, std::string title);

    ~Display();
};

#endif