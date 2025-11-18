#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include "Task.h"
#include <string>
#include <vector>

class TaskManager {
private:
  std::vector<Task> tasks;
  int nextId;

public:
  void addTask(const std::string &description);
  void listTask();
  bool maskTaskDone(int id);
  bool deleteTask();
  void saveToFile(const std::string &filename);
  void loadFromFile(const std::string &filename);
};

#endif
