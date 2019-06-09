/*
 * Node.hpp
 *
 *  Created on: Jun 5, 2019
 *      Author: Tsatsu Kofi Amable
 */

#ifndef NODE_HPP_
#define NODE_HPP_
#include <vector>
#include <string>
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>
#include "boost/date_time/gregorian/gregorian.hpp"

class Node {

public:

	typedef boost::gregorian::date boostDate;
	enum NodeState {
		INITIALISING,
		STARTUP_SEQUENCE,
		OPTIMAL,
		DEGRADED,
		SHUTDOWN_SEQUENCE,
		OFFLINE
	};

	enum SyncType {
		UNDEFINED, TWO_WAY, THREE_WAY, FOUR_WAY
	};

	Node();
	virtual ~Node();

	void setNodeId(int nodeId);
	int getNodeId();

	std::vector<std::vector<int> > getLocation();

	void setLocation(const std::vector<std::vector<int> > location);

	std::vector<std::string> getNeighbourNodes();

	void setNeighbourNodes(const std::vector<std::string> neighbourNodes);

	std::string getNodeName();

	void setNodeName(const std::string& nodeName);

	NodeState getState();

	void setState(NodeState state);

	Node::SyncType getSyncType();

	void setSyncType(SyncType syncType);
	void setLastPoweredOn(boost::gregorian::date today);
	boostDate getLastPoweredOn();

private:
	static Node* _instance;

	int nodeId;
	NodeState state;
	std::string nodeName;
	std::vector<std::vector<int>> location; // Change to geometry type for use in postgres
	std::vector<std::string> neighbourNodes;
	SyncType syncType;
	int daysAlive;
	boostDate lastPowerOnDate;
	//Date lastMaintenanceDate;
	//Create an object

};

#endif /* NODE_HPP_ */
