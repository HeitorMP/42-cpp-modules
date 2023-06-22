#!/bin/bash
exec=$(./rep $1 $2 $3)
output=$?
result1=$(cat $1 | grep -o $2 | wc -l) # check original file
result2=$(cat $1.replace | grep -o $3 | wc -l) # check replace file 
result3=$(cat $1.replace | grep -o $2 | wc -l) # check replace file for old string
echo "String $2 in file $1: $result1"
echo "String $3 in file $1.replace: $result2"
echo "Total replacements: $output"
echo "String $2 in file $1.replace: $result3"