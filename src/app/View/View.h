#ifndef VIEW_H
#define VIEW_H

#include <string>
#include "Led.h"

enum {LIGHT_OFF, LIGHT1_ON,LIGHT2_ON,LIGHT3_ON,LIGHT4_ON,LIGHT5_ON};

class View
{
private:
    int lightState;
    Led *light1;
    Led *light2;
    Led *light3;
    Led *light4;
    Led *light5;

public:
    View(Led *led1,Led *led2,Led *led3,Led *led4,Led *led5);
    virtual ~View();
    void lightView();
    void updateState(std::string strState);
    void lightOff();
    void light1On();
    void light2On();
    void light3On();
    void light4On();
    void light5On();
};

#endif