/*
 * HINTS:
 * The answer can be determined by counting the number of unique
 * processes. The getpid() system call can be used to get the
 * current process id (pid).
 * For example the C statement:
 * printf("%d\n",getpid()); will print the current pid.
 */

#include <stdio.h>

int main() // Process 1
{
	fork(); // Double the number of processes to 2
	fork(); // Double the number of processes to 4
	fork(); // Double the number of processes to 8

	printf("%d\n", getpid()); // Print the current pid 8 times because 8 processes were created

	// 2^n processes are created where n is the number of fork() calls
	// this will include the original process
	// So 2^3 = 8 processes are created

	return 0;
}
