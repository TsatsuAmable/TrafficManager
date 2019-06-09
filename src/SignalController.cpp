/*
 * Signal.cpp
 *
 *  Created on: Jun 5, 2019
 *      Author: yoda
 */

#include "SignalController.hpp"

SignalController::SignalController(SignalColour signalController) {
	this->currentColour = signalController;
	this->standbyMode = AMBER;
}

SignalController::~SignalController() {

}

int SignalController::getSignalColour() {
//	return 1;
	return currentColour;
}

int SignalController::startStandbyMode() {
	return this->currentColour = standbyMode;
}

int SignalController::endStandbyMode() {
	this->executeAutoSignalChange(2300);  //will actually call signal Timer here
	return this->currentColour = RED;

}

void SignalController::setSignalColour(SignalColour signalColour) {
	currentColour = signalColour;
}

int SignalController::executeAutoSignalChange(int timeToNextSignal) {

	if(currentColour == GREEN){
			currentColour = getRed();
	}
	if(currentColour == AMBER){
			currentColour = getGreen();
	}
	if(currentColour == RED){
			currentColour = getAmber();
	}
	return currentColour;
}

SignalController::SignalColour SignalController::getRed(){
	this->setSignalColour(RED);
	return this->currentColour;
}

SignalController::SignalColour SignalController::getAmber(){
	this->setSignalColour(AMBER);
	return this->currentColour;
}

SignalController::SignalColour SignalController::getGreen(){
	this->setSignalColour(GREEN);
	return this->currentColour;
}
