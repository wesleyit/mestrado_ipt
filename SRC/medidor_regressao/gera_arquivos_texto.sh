#!/bin/bash

# Este script utiliza um arquivo base com 10 parágrafos e gera
# arquivos com 10, 20, 30, até 1000 parágrafos. Para isso, ele
# copia o texto do arquivo inicial n vezes, onde n == {1..100}

for n in $(seq 1 100); do
	filename="texto_${n}0_paragrafos.txt"
	echo Gerando $filename...
	let "i=n"
	while ((i>0)); do
		cat "base.txt" >> "$filename"
		let "i--"
	done
done
