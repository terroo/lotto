# Lotto Rust Version(LoteRusr)

---

## Clonar, construir e instalar
```bash
git clone --depth=1 https://github.com/terroo/lotto
cd lotto/loterust
cargo build --release
cargo install --path .
```

---

## Testando:
```bash
loterust help
# Exemplo para Mega-Sena:
loterust megasena
```

Se o comando não foi encontrado, certifique-se que o Cargo foi instalado corretamente no seu sistema:
```bash
mkdir -p ~/.cargo/bin
echo 'export PATH="${PATH}:${HOME}/.cargo/bin"' >> ~/.bashrc
source ~/.bashrc
loterust help
loterust megasena
```
