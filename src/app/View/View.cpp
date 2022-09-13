#include "View.h"
#include <wiringPi.h>

View::View(Led *led1,Led *led2,Led *led3,Led *led4,Led *led5)
{
    light1 = led1;
    light2 = led2;
    light3 = led3;
    light4 = led4;
    light5 = led5;
    lightState = LIGHT_OFF;
}

View::~View()
{

}

void View::updateState(std::string strState)
{
    switch (lightState)
    {
        case LIGHT_OFF:
            if (strState == "State1On")
            {
                lightState = LIGHT1_ON;
            }
        break;

        case LIGHT1_ON:
            if (strState == "State2On")
            {
                lightState = LIGHT2_ON;
            }
        break;

        case LIGHT2_ON:
            if (strState == "State3On")
            {
                lightState = LIGHT3_ON;
            }
        break;
        case LIGHT3_ON:
            if (strState == "State4On")
            {
                lightState = LIGHT4_ON;
            }
        break;
        case LIGHT4_ON:
            if (strState == "State5On")
            {
                lightState = LIGHT5_ON;
            }
        break;
        case LIGHT5_ON:
            if (strState == "StateOff")
            {
                lightState = LIGHT_OFF;
            }
        break;
    }
}


void View::lightView()
{
    switch (lightState)
    {
        case LIGHT_OFF:
            lightOff();
        break;

        case LIGHT1_ON:
            light1On();
        break;

        case LIGHT2_ON:
            light2On();
        break;

        case LIGHT3_ON:
            light3On();
        break;

        case LIGHT4_ON:
            light4On();
        break;

        case LIGHT5_ON:
            light5On();
        break;
    }
}

//상태 변경
//  void View::lightOn()
//  {
//     // static unsigned int prevTime = 0;
//     // if (millis() - prevTime < 300) return;
//     // prevTime = millis();
//     // light -> Toggle();

//     // light -> On();
//  }

  void View::lightOff()
  {
    light1 -> Off();
    light2 -> Off();
    light3 -> Off();
    light4 -> Off();
    light5 -> Off();
  }

   void View::light1On()
 {
    light1 -> On();
    light2 -> Off();
    light3 -> Off();
    light4 -> Off();
    light5 -> Off();
 }

    void View::light2On()
 {
    light1 -> On();
    light2 -> On();
    light3 -> Off();
    light4 -> Off();
    light5 -> Off();
 }

    void View::light3On()
 {
    light1 -> On();
    light2 -> On();
    light3 -> On();
    light4 -> Off();
    light5 -> Off();
 }

    void View::light4On()
 {
    light1 -> On();
    light2 -> On();
    light3 -> On();
    light4 -> On();
    light5 -> Off();
 }

    void View::light5On()
 {
    light1 -> On();
    light2 -> On();
    light3 -> On();
    light4 -> On();
    light5 -> On();
 }