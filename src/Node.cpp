/*
 * Node.cpp
 *
 *  Created on: Jun 5, 2019
 *      Author: yoda
 */

#include "Node.hpp"

Node::Node() :
		nodeId(2343), nodeName("iTRAMS Node - UnInitialised"), state(
				STARTUP_SEQUENCE), syncType(UNDEFINED) {
}

Node::~Node() {
}

int Node::getNodeId() {
	return this->nodeId;
}

void Node::setNodeId(int nodeId) {
	this->nodeId = nodeId;
}

std::string Node::getNodeName() {
	return nodeName;
}

void Node::setNodeName(const std::string& nodeName) {
	this->nodeName = nodeName;
}

std::vector<std::vector<int> > Node::getLocation() {
	return location;
}

void Node::setLocation(const std::vector<std::vector<int> > location) {
	this->location = location;
}

std::vector<std::string> Node::getNeighbourNodes() {
	return neighbourNodes;
}

void Node::setNeighbourNodes(const std::vector<std::string> neighbourNodes) {
	this->neighbourNodes = neighbourNodes;
}

Node::NodeState Node::getState() {
	return state;
}

void Node::setState(NodeState state) {
	this->state = state;
}

Node::SyncType Node::getSyncType() {
	return syncType;
}

void Node::setSyncType(SyncType syncType) {
	this->syncType = syncType;
}

void Node::setLastPoweredOn(boostDate today){
	lastPowerOnDate = boost::gregorian::day_clock::local_day();
	// should write to some persistent data store
}

Node::boostDate Node::getLastPoweredOn(){
	return this->lastPowerOnDate;
}
