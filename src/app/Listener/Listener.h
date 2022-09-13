#ifndef LISTENER_H
#define LISTENER_H

#include "Button.h"
#include "Led.h"

class Listener
{
private:    //객체를 갖고 있다.
    Button *powerButton;
    Led *light;
public:
    Listener(Button *button, Led *led);
    ~Listener();
    void checkEvent();
};

#endif