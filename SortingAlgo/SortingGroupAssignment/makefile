SHELL = /bin/bash

compile: bubble selection insertion data

selection: main_selection.cpp
	g++ main_selection.cpp -o selection

bubble: main_bubble.cpp
	g++ main_bubble.cpp -o bubble

insertion: main_insertion.cpp
	g++ main_insertion.cpp -o insertion

data: dataGenerator.cpp
	g++ dataGenerator.cpp -o dataGenerator
	./dataGenerator

all: bubble insertion selection

time: bubble_time insertion_time selection_time

bubble_time:
	time ./bubble

insertion_time:
	time ./insertion

selection_time:
	time ./selection
