#ifndef TASK_H
#define TASK_H

#include <string>

class Task {
private:
  int id;
  std::string description;
  bool isDone;

public:
  Task(int id, std::string description);
  int getId();
  std::string getDescription();
  bool getIsDone();
};

#endif
