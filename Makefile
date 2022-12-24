all: build run

.PHONY: build
build:
	mkdir -p build
	cd build && cmake .. && make

.PHONY: run
run:
	./build/final_task
