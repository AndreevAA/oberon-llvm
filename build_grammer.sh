# curl -o ~/antlr4/antlr-4.7-complete.jar https://www.antlr.org/download/antlr-4.7-complete.jar
# export CLASSPATH=".:~/antlr4/antlr-4.7-complete.jar:$CLASSPATH"
# source ~/.bashrc
# alias antlr4='java -Xmx500M -cp "~/antlr4/antlr-4.7-complete.jar:$CLASSPATH" org.antlr.v4.Tool'
# alias grun='java -Xmx500M -cp "~/antlr4/antlr-4.7-complete.jar:$CLASSPATH" org.antlr.v4.runtime.misc.TestRig'
# source ~/.bashrc 

rm Oberon*.py
sleep 5

antlr4 -Dlanguage=Cpp Oberon.g4 -visitor

