# OpenMP-ComArch

### This is CountingSort algorithm use OpenMP (For running in parallel for optimization)

[Original reference (Nickson Joram)](
https://medium.com/geekculture/implementation-and-performance-analysis-of-parallel-and-serial-counting-sort-algorithm-using-openmp-56016f9ccb5c)

[can-you-do-a-parallel-counting-sort-in-on-p-time](
https://stackoverflow.com/questions/39903181/can-you-do-a-parallel-counting-sort-in-on-p-time)

How to use:
- Run file "make" or "make all"

Makefile
- all: build, run all executable program
- run: execute perf and program
- build: compile new file
- clean: remove .elf file (.elf is the .exe(window) in linux)(Doesn't necessary)
- (Obsolete) thread: change software OPEN-MP thread type "make thread t=1" (Not use because can't change threads -> use function omp_set_thread_num(num x);)

