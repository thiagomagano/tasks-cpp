#include "Task.h"
#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
  if (argc > 1) {
    std::string command = argv[1];
    std::cout << "O comando passado foi: " << command << std::endl;

    if (command == "add") {
      if (argc > 2) {
        std::string argument = argv[2];

        Task newTask(1, argument);

        std::cout << "A tarefa passada foi: " << newTask.getDescription()
                  << std::endl;
        std::cout << "A tarefa foi salva com ID: " << newTask.getId()
                  << std::endl;
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
