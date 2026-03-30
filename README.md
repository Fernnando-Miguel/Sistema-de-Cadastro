# 📋 Sistema de Cadastro em C

Projeto simples de cadastro de usuários desenvolvido em linguagem C, utilizando menu interativo no terminal.

---

## 🚀 Funcionalidades

* Cadastro de usuário (ID, nome, idade e e-mail)
* Exibição dos dados cadastrados
* Menu interativo com opções
* Validação para impedir entrada inválida (não numérica)
* Limpeza de buffer para evitar erros de leitura
* Suporte a acentuação no terminal (UTF-8)

---

## 🧠 Conceitos utilizados

* Structs
* Funções
* Laços de repetição (`while`)
* Estrutura de decisão (`switch`)
* Entrada de dados com `scanf` e `fgets`
* Manipulação de strings (`strcspn`)
* Controle de buffer (`getchar`)
* Controle de estado (variável booleana)
* Uso de locale (`setlocale`)
* Configuração de encoding no Windows (`SetConsoleOutputCP`)

---

## ⚙️ Melhorias implementadas

* Correção de bugs de entrada com `getchar()`
* Validação de entrada para evitar caracteres inválidos no menu
* Correção de leitura duplicada com `scanf`
* Remoção de problemas de buffer (inputs “fantasmas”)
* Suporte a acentuação (UTF-8) no terminal
* Melhor organização do menu e mensagens
* Código mais limpo e padronizado

---

## 💻 Como executar o projeto

### 1. Compilar o código:

```bash
gcc main.c -o output/programa
```

### 2. Executar:

No Windows:

```bash
output\programa.exe
```

No Linux/Mac:

```bash
./output/programa
```

---

## 📌 Versão

**v1.2** – Validação de entrada, correção de buffer e suporte a UTF-8

---

## 🔮 Próximas melhorias

* [ ] Suporte a múltiplos usuários
* [ ] Busca de usuário por ID
* [ ] Edição de dados do usuário
* [ ] Remoção de usuário
* [ ] Armazenamento em arquivo
* [ ] Separação do código em múltiplos arquivos (.c e .h)

---

## 👨‍💻 Autor

Fernando Miguel

---

## 📖 Observação

Este projeto foi desenvolvido com fins de aprendizado, focando nos conceitos fundamentais da linguagem C, manipulação de entrada de dados e organização de código.

---

## ⭐ Objetivo

Este projeto faz parte da minha evolução como programador, com foco em boas práticas, tratamento de erros e construção de sistemas mais robustos.
