rm Oberon*.py
sleep 5

antlr4 -Dlanguage=Python3 Oberon.g4 -visitor

