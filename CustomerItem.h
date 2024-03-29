//Sina Lahsaee
//129948162

#pragma once
// CustomerOrder Milestone - CustomerItem Interface
// CustomerItem.h
// Chris Szalwinski
// v1.0 - 9/11/2015
// v2.0 - 23/02/2016
#include <iostream>
#include <string>

class Item;

class CustomerItem {
	std::string name;  // name of the requested component 
	bool filled;       // status of the request
	unsigned int code; // unique shipping label
public:
	CustomerItem(const std::string& = std::string());
	bool asksFor(const Item&) const;
	bool isFilled() const;
	void fill(const unsigned int);
	void clear();
	const std::string& getName() const;
	void display(std::ostream&) const;
};