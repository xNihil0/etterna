/* InputHandler_X11 - X-based keyboard input handler. */

#ifndef INPUT_HANDLER_X11_H
#define INPUT_HANDLER_X11_H

#include "InputHandler.h"

class InputHandler_X11 : public InputHandler
{
  public:
	InputHandler_X11();
	~InputHandler_X11();
	void Update();
	void GetDevicesAndDescriptions(std::vector<InputDeviceInfo>& vDevicesOut);
};

#endif
