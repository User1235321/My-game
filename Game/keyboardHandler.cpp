#include "keyboardHandler.hpp"

#include <Windows.h>

void cameraKeys(camera & currentCamera, hero & mainCharter)
{
    if (GetAsyncKeyState('W'))
    {
        currentCamera.changeParam(0, 60, 0);
        mainCharter.move(0, -60);
        while (GetAsyncKeyState('W'));
    }
    else if (GetAsyncKeyState('S'))
    {
        currentCamera.changeParam(0, -60, 0);
        mainCharter.move(0, 60);
        while (GetAsyncKeyState('S'));
    }
    else if (GetAsyncKeyState('A'))
    {
        currentCamera.changeParam(60, 0, 0);
        mainCharter.move(-60, 0);
        while (GetAsyncKeyState('A'));
    }
    else if (GetAsyncKeyState('D'))
    {
        currentCamera.changeParam(-60, 0, 0);
        mainCharter.move(60, 0);
        while (GetAsyncKeyState('D'));
    }
    else if (GetAsyncKeyState('M'))
    {
        //currentCamera.changeParam(0, 0, 0.0001);
    }
    else if (GetAsyncKeyState('L'))
    {
        //currentCamera.changeParam(0, 0, -0.0001);
    }
}