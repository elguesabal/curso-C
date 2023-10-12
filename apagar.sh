#!/bin/bash

# Diretório no qual você deseja excluir os arquivos .exe
diretorio_alvo="/nfs/homes/joseanto/curso-C"

# Use o comando 'find' para localizar todos os arquivos .exe e excluí-los
find "$diretorio_alvo" -type f -name "*.exe" -exec rm -f {} \;

echo "Arquivos .exe foram excluídos em $diretorio_alvo e subdiretórios."

