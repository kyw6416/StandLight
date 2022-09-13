#ifndef LISTENER_H
#define LISTENER_H

#include "Button.h"
#include "Controller.h"

class Listener
{
private:    //객체를 갖고 있다.
    Button *powerButton;
    Controller *controller;
public:
    Listener(Button *button, Controller *control);
    ~Listener();
    void checkEvent();
};

#endif