/*
 * Signal.h
 *
 *  Created on: Jun 5, 2019
 *      Author: yoda
 */

#ifndef SIGNALCONTROLLER_HPP_
#define SIGNALCONTROLLER_HPP_
#include "SignalTimer.hpp"

class SignalController {

public:
	enum SignalColour {
		RED, AMBER, GREEN
	};
	SignalController(SignalColour signalColour);
	virtual ~SignalController();

	int getSignalColour();

	void setSignalColour(SignalColour signalColour);

	int startStandbyMode();

	int endStandbyMode();

	int executeAutoSignalChange(int timeToNextSignal);	//Pass signal timer function to this one

	SignalColour getRed();
	SignalColour getAmber();
	SignalColour getGreen();

private:
	SignalColour currentColour;
	SignalColour standbyMode;
	int currentSysTime;

	SignalTimer timer;
};

#endif /* SIGNALCONTROLLER_HPP_ */
