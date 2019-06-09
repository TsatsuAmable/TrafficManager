//============================================================================
// Name        : Main.cpp
// Author      : Tsatsu Kofi Amable
// Version     :
// Copyright   : MIT
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include "Node.hpp"

//#include <boost/log/support/date_time.hpp>
//#include <boost/log/support/exception.hpp>
//#include <boost/log/support/regex.hpp>
//#include <boost/log/support/spirit_classic.hpp>
//#include <boost/log/support/spirit_qi.hpp>
//#include <boost/log/support/std_regex.hpp>
//#include <boost/log/support/xpressive.hpp>
//#include <boost/log/trivial.hpp>


int main() {
	std::vector<int> coordinate;

	std::cout << "Node for iTRAMS" << std::endl;

	Node node;

	std::cout << "NodeId: " << node.getNodeId() << std::endl;
	std::cout << "Node Name: " << node.getNodeName() << std::endl;
	return 0;
}
