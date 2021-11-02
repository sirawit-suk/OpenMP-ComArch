# OpenMP-ComArch

### This is CountingSort algorithm use OpenMP (For running in parallel for optimization)

Source Code: [Original reference (Nickson Joram)](
https://medium.com/geekculture/implementation-and-performance-analysis-of-parallel-and-serial-counting-sort-algorithm-using-openmp-56016f9ccb5c)

Confirmation: [can-you-do-a-parallel-counting-sort-in-on-p-time](
https://stackoverflow.com/questions/39903181/can-you-do-a-parallel-counting-sort-in-on-p-time)

Installation:
- update: sudo apt-get update
- install: sudo apt-get install
- g++: sudo apt-get install g++ [How to install g++ in Ubuntu](https://askubuntu.com/questions/481807/how-to-install-g-in-ubuntu-14-04)
- omp lib: sudo apt-get install libomp-dev [OpenMP on Ubuntu](https://medium.com/swlh/openmp-on-ubuntu-1145355eeb2)
- makefile: sudo apt install make
- perf: sudo apt install linux-oem-5.6-tools-common [How to install "perf" monitoring tool?](https://askubuntu.com/questions/50145/how-to-install-perf-monitoring-tool)
- perf(2): sudo apt-get install linux-tools
- perf(3): sudo apt-get install linux-tools-5.11.0-38-generic


How to use:
- Run file "make t=4 n=10000" or "make all t=4 n=10000" (t=num threads and n=number)

Makefile:
- all: build, run all executable program
- run: execute perf and program
- build: compile new file
- clean: remove .elf file (.elf is the .exe(window) in linux)(Doesn't necessary)
- (Obsolete) thread: change software OPEN-MP thread type "make thread t=1" (Not use because can't change threads -> use function omp_set_thread_num(num x);)

Command:
- compile: -lgomp -fopenmp ["Specify OpenMP to GCC"](https://stackoverflow.com/questions/6351961/specify-openmp-to-gcc/6353399)

Others:
- SSH: [Git for Everybody: Creating and adding your SSH Key (Windows, Mac and Linux)](https://www.youtube.com/watch?v=Z3ELWci34cM&ab_channel=CodingForEverybody)

If you have a problem, feel free to ask me :) 

