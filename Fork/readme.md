# Fork System call

1. **Understanding Fork System Call**: The `fork()` system call is used to create a new process by duplicating the existing process. The new process is called the child process, and the existing process is the parent process.

2. **Process Identification**: After a fork, both the parent and child processes continue executing from the point where the fork was called. The `fork()` system call returns a process ID (PID). In the parent process, the PID of the child process is returned, while in the child process, 0 is returned.

3. **Process Execution**: The child process is an exact copy of the parent process, except for the returned value of `fork()`. Both processes have their own memory space and can execute independently.

4. **Use Cases**: Forking is commonly used in scenarios where a process needs to perform tasks concurrently, such as handling multiple client requests in a server application.

5. **Error Handling**: If the `fork()` system call fails, it returns -1. This can happen if the system is unable to allocate resources for the new process.

6. **Zombie Processes**: When a child process terminates, it becomes a zombie process until the parent process reads its exit status. Proper handling of child processes is necessary to avoid resource leaks.

7. **Code**: See the file `fork.c` for an example of using the `fork()` system call to create a child process.

8. **wait()**: The `wait()` system call is used to wait for the one of the child processes to terminate. It suspends the parent process until one of the child processes exits.