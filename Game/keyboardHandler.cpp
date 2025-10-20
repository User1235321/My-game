#include "keyboardHandler.hpp"

#include <Windows.h>

void cameraKeys(camera & currentCamera)
{
    if (GetAsyncKeyState('W'))
    {
        currentCamera.changeParam(0, 0.01, 0);
    }
    else if (GetAsyncKeyState('S'))
    {
        currentCamera.changeParam(0, -0.01, 0);
    }
    else if (GetAsyncKeyState('A'))
    {
        currentCamera.changeParam(0.01, 0, 0);
    }
    else if (GetAsyncKeyState('D'))
    {
        currentCamera.changeParam(-0.01, 0, 0);
    }
    else if (GetAsyncKeyState('M'))
    {
        currentCamera.changeParam(0, 0, 0.0001);
    }
    else if (GetAsyncKeyState('L'))
    {
        currentCamera.changeParam(0, 0, -0.0001);
    }
}