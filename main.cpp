#include "Task.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

// Biblioteca para lidar melhor com JSON em C++
#include "include/nlohmann/json.hpp"

using json = nlohmann::json;

void add(std::string description) {
  std::vector<Task> taskList;
  int lastId = 0;

  taskList.push_back(Task(lastId + 1, description));

  // Criando Json
  json j;
  j["tasks"] = json::array();

  // Colocando cada item da task list em um formato de json
  for (Task t : taskList) {
    json task_json;
    task_json["id"] = t.getId();
    task_json["description"] = t.getDescription();
    task_json["isDone"] = t.getIsDone();

    j["tasks"].push_back(task_json);
  }

  // Salvando Arquivo
  std::ofstream db("db.json");
  db << j.dump(4);
  db.close();

  std::cout << "A tarefa passada foi: " << taskList[0].getDescription()
            << std::endl;
  std::cout << "A tarefa foi salva com ID: " << taskList[0].getId()
            << std::endl;
}

int main(int argc, char *argv[]) {
  if (argc > 1) {
    std::string command = argv[1];
    std::cout << "O comando passado foi: " << command << std::endl;

    if (command == "add") {
      if (argc > 2) {
        std::string description = argv[2];
        add(description);
      } else {
        std::cout
            << "Faltam argumento para o comando add, tente hello add <tarefa>"
            << std::endl;
        return 1;
      }
    }
  } else {
    std::cout << "Faltam argumentos tente <command> <args..>" << std::endl;
    return 1;
  }
  return 0;
}
