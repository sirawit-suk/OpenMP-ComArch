#include<omp.h>
#include<stdio.h>

int main(){
	
	int test[10] = {1,2,3};
	
	omp_set_num_threads( 6 );
	
	printf("%d",omp_get_num_threads());

	
	#pragma omp parallel default(none)
	{
	printf( "Hello, World, from thread #%d ! \n" , omp_get_thread_num( ) );
	}
	
	
	return 0;
	

}
