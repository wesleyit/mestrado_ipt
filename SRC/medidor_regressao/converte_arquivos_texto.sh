#!/bin/bash

echo 'Comando;Tempo' > regressao.log
for n in $(seq 1 100); do
	filename="texto_${n}0_paragrafos.txt"
	echo Convertendo $filename...
	./Medidor \
		"./TransformaTexto $filename" \
		2>> regressao.log
done
