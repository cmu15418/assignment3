defule:
	g++ -std=c++11 -fopenmp -O3 -g -o bfs main.cpp bfs.cpp ../common/graph.cpp ref_bfs.o
test:
	./bfs graphs/tiny.graph
clean:
	rm -rf bfs  *~ *.*~
