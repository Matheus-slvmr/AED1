# AED1

Ambiente inicial para estudar C com GCC, GDB e VS Code.

## Como usar

- Compilar no terminal: `make`
- Compilar e executar: `make run`
- Limpar os arquivos gerados: `make clean`
- Compilar no VS Code: `Ctrl+Shift+B`
- Depurar no VS Code: abra `main.c`, marque um breakpoint e pressione `F5`

O compilador usa C17 e os avisos `-Wall -Wextra -Wpedantic` para ajudar a
encontrar erros cedo. O executavel e criado em `build/programa.exe`.
