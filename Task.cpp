#include "Task.h"

Task::Task(int i, std::string desc) {
  id = i;
  description = desc;
  isDone = false;
};

int Task::getId() { return id; }
std::string Task::getDescription() { return description; }
bool Task::getIsDone() { return isDone; }
