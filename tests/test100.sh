#!/bin/sh
ARG=`ruby -e "puts (-50..49).to_a.shuffle.join(' ')"`
echo Ordenar 100 elementos
echo valores testados $ARG
steps=`./push_swap $ARG | wc -l`
echo  numero de passos $steps
STATUS=`./push_swap $ARG | ./checker_linux $ARG`
echo status $STATUS