#!/bin/zsh

if [ -z "$1" ]; then
	echo Use: $0 nameOfCFile.c
	exit m
fi
while true; do
	clear
	gcc -o output "$1" && ./output
	sleep 1
done
