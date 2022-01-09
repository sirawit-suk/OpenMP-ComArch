#include <iostream>
#include <string>
#include <stdio.h>
#include <omp.h>
#include <cstdlib>
#include <windows.h>
using namespace std;

/* note the commented out printf statements are C's output form corresponding to a cout<< statement
*/
int main()
{
   int threadID;
   int totalThreads;
   int maxThreads = 7;
   int start;
 /* Open MP pragma specifies that the following block is
   going to be parallel and the threadID variable is
   private in this openmp block.  Default num_threads=2
   */
   cout<<"Input number of threads: ";
   cin>>maxThreads;

   start = GetTickCount();
#pragma omp parallel num_threads (maxThreads) private(threadID)
  {
   
   threadID = omp_get_thread_num();
#pragma omp critical
   cout <<" \nHello World is from thread " << threadID << endl;
   //printf("\nHello World is from thread %d\n", (int)threadID);
   //master thread has threadID = 0
   if(threadID == 0) {
   //#pragma omp barrier  //if want to do this last
   //#pragma omp master  //alternative to above if

#pragma omp critical
      cout<<"\nMaster thread being called" << endl;
      //printf("\nMaster thread being called\n");
      totalThreads = omp_get_num_threads();
#pragma omp critical
      cout<<"Total number of threads are "<<totalThreads<<endl;
      //printf("Total number of threads are %d\n", totalThreads);
    }
  }
  cout << "Program ran in "<< GetTickCount()-start << " TickCounts"<< endl;
  
  return 0;
}
 
