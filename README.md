# Algorítmos de Warshall e Floyd Warshall



> Programa responsável por executar os algotímos de Warshall e Floyd Warshall

## ✨ Funcionalidades

- 📥 Leitura de um arquivo matriz.txt
- 🖫 Visualização via terminal da matriz de Warshall ou Floyd Warshall 
- 🧩 Arquitetura MVC

## 🚀 Instalação & Uso

```bash
# Clonar
git clone <repo-url> && cd algoritmo_floyd-warshall

# Executar
make run
```

## 📂 Estrutura

```bash
├── main.c           # Responsável por executar a aplicação
├── controller/      # Orquestração do fluxo
├── matriz/          # Estruct com os dados da matriz, juntamente com os algorítmos de Warshall e Floyd Warshall
├── views/           # Impressão das principais informações via terminal
├── matriz_reader/   # Leitura do arquivo matrix.txt
```

## ⚙️ Como alterar a matriz

Como padrão eu encaminhei um arquivo matriz.txt visando testar a aplicação. Portanto caso queria testar uma matriz diferente, basta seguir o mesmo formato do arquivo exemplo. Onde **a primeira linha terá que ter o tamanho de linhas e colunas da matriz (sempre vamos considerar que será uma matriz quadrada)** e abaixo dessa linha conterá a sua matriz.

## 🤝 Contribuir

1 - Faça um Fork do projeto

2 - Crie uma branch (git checkout -b feat/nova-funcionalidade)

3 - Commit suas mudanças (git commit -m 'feat: adiciona suporte X')

4 - Push e abra um Pull Request

## 📧 Contato

email: pedropiva9@gmail.com
