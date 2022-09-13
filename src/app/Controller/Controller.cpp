#include "Controller.h"

Controller::Controller(View *viewer)
{
    view = viewer;
    lightState = LIGHT_OFF; //초기화
}

Controller::~Controller()
{
}

void Controller::updateEvent(std::string strBtn)
{
    switch (lightState)
    {
    case LIGHT_OFF:
        if (strBtn == "powerButton")
        {
            lightState = LIGHT1_ON;
            view -> updateState("State1On");
        }
        break;

    case LIGHT1_ON:
        if (strBtn == "powerButton")
        {
            lightState = LIGHT2_ON;
            view -> updateState("State2On");
        }
        break;
    
    case LIGHT2_ON:
        if (strBtn == "powerButton")
        {
            lightState = LIGHT3_ON;
            view -> updateState("State3On");
        }
        break;

        case LIGHT3_ON:
        if (strBtn == "powerButton")
        {
            lightState = LIGHT4_ON;
            view -> updateState("State4On");
        }
        break;

        case LIGHT4_ON:
        if (strBtn == "powerButton")
        {
            lightState = LIGHT5_ON;
            view -> updateState("State5On");
        }
        break;


    case LIGHT5_ON:
        if (strBtn == "powerButton")
        {
            lightState = LIGHT_OFF;
            view -> updateState("StateOff");
        }
        break;
    }
}