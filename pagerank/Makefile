defule:
	g++ -std=c++11 -fopenmp -g -O3 -o pr main.cpp page_rank.cpp ../common/graph.cpp ref_pr.a
test:
	./pr graphs/tiny.graph
clean:
	rm -rf pr *~ *.*~
