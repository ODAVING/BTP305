// Task Milestone - Task Interface
// Task.h
//Sina Lahsaee
//129948162

// Chris Szalwinski
// v1.0 - 24/10/2015
// v2.0 - 23/02/2016
#ifndef Task_H_
#define Task_H_
#include <iostream>
#include <string>

class Task {
	std::string name;          // name of the task
	std::string slots;         // number of slots
	std::string nextTask[2];   // names of the next tasks
	const Task* pNextTask[2];  // addresses of the next tasks
	static size_t field_width; // current maximum field width 
public:
	enum Quality {
		passed,
		redirect
	};
	Task(const std::string&);
	bool validate(const Task&);
	const std::string& getName() const;
	unsigned int getSlots() const;
	const Task* getNextTask(Quality) const;
	void display(std::ostream&) const;
	static size_t getFieldWidth();
};

bool operator==(const Task&, const Task&);
#endif