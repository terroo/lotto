# lotto
Gere números para jogar na Loteria. Feito com C++!
> Jogos como: Mega-sena ou Mega Millions(USA), Quina, Lotofácil, Lotomania, Timemania e Dupla-sena.

---

![Lotto++](./lotto.jpg) 

---

# Dependências
+ [GNU GCC/g++](https://gcc.gnu.org/)
+ [GNU Make](https://www.gnu.org/software/make/)
+ [CMake](https://github.com/Kitware/CMake)

---

# Construir e instalar
```bash
git clone https://github.com/terroo/lotto
cd lotto
cmake -B build .
cd build && make
sudo make install
```
> Após instaçao já pode remover o repositório: `cd ../.. && rm -rf lotto`

Toda vez que você iniciar sessão no seu computador o *auto-complete* já estará disponível, mas caso que também esteja imediatamente após instalar, rode também:
```bash
exec $SHELL
```

---

# Usabilidade
```bash
lotto --mega # ou somente com '-m'
lotto --facil
```

Para detalhes de todos os jogos e parâmetros use a ajuda:
```bash
lotto --help
```

---

Licença [GNU GPLv3](./LICENSE). Para desintalar use o mesmo processo da instalação, mas depois rode também: `sudo make uninstall`.
