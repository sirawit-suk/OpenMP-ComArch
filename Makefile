# type make or make all to run the first command
all: run

run:
	sudo perf stat -r 5 -e cpu-cycles,instructions,cache-references,cache-misses,dTLB-loads,dTLB-load-misses,dTLB-stores,dTLB-store-misses,iTLB-loads,iTLB-load-misses,branch-loads,branch-load-misses ./COUNT 

# -fopenmp mean running in parallel
build:
	g++ counting.cpp -lgomp -fopenmp -o ./COUNT

# change thread type "make thread t=number"
thread:
	export OMP_NUM_THREADS=$(t)

clean:
	rm ./COUNT
