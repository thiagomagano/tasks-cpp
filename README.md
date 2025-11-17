# Task CLI em C++

Treinando um pouco uma linguagem orientada a objetos e de baixo nivel, o temido C++.

A ideia é criar uma CLI que faça um CRUD (básico) de uma lista de tarefas em um arquivo Json.
O programa não é principal aqui, somente treinar a sintaxe da linguagem e como escrever C++ de uma forma idiomatica.
Por isso o programa mais simples possível (TODO HELL).

## Compila e Builda

Compilando:
```console
$ c++ main.cpp Task.cpp -o bin/task
```

Usando:
```console
$ ./bin/task <command> <args..>
```

## Organizando a bagaça

- [x] Compilar a primeiro output.
- [x] Ler o primeiro argumento ao programa (command).
- [x] Armazenar argumento em uma variavel e exibila na tela.
- [x] Fazer uma condicional para a lista de argumentos passados.
- [ ] Criar uma lista de tarefas.
- [ ] Salvar lista em um arquivo "db".
