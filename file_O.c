/**
 *A file descriptor is a process-unique identifier for a file or other input/output resource 
 * File descriptors have positive integer values
 * 0 - Standard input
 * 1 - Standard output
 * 2 - Standard Error
 * The set of file descriptors open in a process can be accessed under the path
 * /proc/PID/fd/0 - stdin(Standard input)
 * /proc/PID/fd/1 - stdout(Standard output)
 * /proc/PID/fd/2 - stderr(Standard error)
 *  To perform input or output, the process passes the file descriptor to the kernel through a system call, 
 *  and the kernel will access the file on behalf of the process
 * 
 * Creating file descriptors
 *    open()
 *    creat()[5]
 *    socket()
 *    accept()
 *    socketpair()
 *    pipe()
 *    epoll_create() (Linux)
 *    signalfd() (Linux)
 *    eventfd() (Linux)
 *    timerfd_create() (Linux)
 *    memfd_create() (Linux)
 *    userfaultfd() (Linux)
 *    fanotify_init() (Linux)
 *   inotify_init() (Linux)
 *    clone() (with flag CLONE_PIDFD, Linux)
 *    pidfd_open() (Linux)
 *    open_by_handle_at() (Linux)
 *    kqueue() (BSD)
 *    pdfork() (kFreeBSD)
 *
 *Deriving file descriptors[edit]
  *dirfd()
  *fileno()
 *
 * 
 * 
 *Operations on a single file descriptor[edit]
read(), write()
readv(), writev()
pread(), pwrite()
recv(), send()
recvfrom(), sendto()
recvmsg(), sendmsg() (also used for sending FDs to other processes over a Unix domain socket)
recvmmsg(), sendmmsg()
lseek(), llseek()
fstat()
fstatvfs()
fchmod()
fchown()
ftruncate()
fsync()
fdatasync()
fdopendir()
fgetxattr(), fsetxattr() (Linux)
flistxattr(), fremovexattr() (Linux)
statx (Linux)
setns (Linux)
vmsplice() (Linux)
pidfd_send_signal() (Linux)
waitid() (with P_PIDFD ID type, Linux)
fdopen() (stdio function:converts file descriptor to FILE*)
dprintf() (stdio function: prints to file descriptor)
 *
 *
 * 
 * 
 *Operations on multiple file descriptors[edit]
select(), pselect()
poll(), ppoll()
epoll_wait(), epoll_pwait(), epoll_pwait2() (Linux, takes a single epoll filedescriptor to wait on many other file descriptors)
epoll_ctl() (for Linux)
kqueue() (for BSD-based systems).
sendfile()
splice(), tee() (for Linux)
copy_file_range() (for Linux)
close_range() (for Linux)[6]

*
*
*
*Examples of Kernel Routines
* File System Operations:
* open: Opens a file or device.
* read: Reads data from a file or device.
* write: Writes data to a file or device.
* close: Closes a file or device.
* mkdir: Creates a new directory.
* rmdir: Removes a directory.
* stat: Retrieves file or directory information.

* *Process and Thread Management:
* fork: Creates a new process (on Unix-like systems).
* exec: Replaces the current process image with a new one.
* exit: Terminates the current process.
* wait: Waits for a child process to terminate.
* pthread_create: Creates a new thread (on systems with POSIX threads).

* * Memory Management:
* malloc: Allocates memory in the heap.
* free: Releases previously allocated memory.
* mmap: Maps files or devices into memory.
* brk: Adjusts the program's data space (on older Unix systems).

* * Interprocess Communication (IPC):
* pipe: Creates a unidirectional pipe for communication.
* socket: Creates a network socket for communication.
* send, recv: Sends and receives data through sockets.
* msgget, msgsnd, msgrcv: Provides message queues for IPC (on some systems).

* *Hardware Interaction:
* ioctl: Performs I/O control operations on devices.
* read/write to device files like /dev/tty, /dev/null, etc.
* reboot: Restarts or shuts down the system.

* *Synchronization and Semaphores:
* sem_init, sem_wait, sem_post: Implements semaphores for process synchronization.

* * Timer and Clock Functions:
* gettimeofday: Retrieves the current time and date.
* alarm: Sets an alarm signal to be sent to a process after a specified time.
*
*
*LIBRARY CALLS
* *Standard C Library (libc):
* printf, scanf: Input and output functions.
* malloc, free: Memory allocation and deallocation functions.
* strcmp, strlen: String manipulation functions.
* fopen, fclose, fread, fwrite: File I/O functions.
* rand, srand: Random number generation functions.

* *Standard C++ Library (STL):
* std::vector, std::list, std::map: Data structure containers.
* std::string: String manipulation.
* std::ifstream, std::ofstream: File I/O in C++.
* std::sort, std::find: Algorithms for sorting and searching.

* *Standard Template Library (STL) in C++:
* std::vector, std::map, std::set: Data structure templates.
* std::sort, std::find, std::transform: Algorithm templates.
* std::thread, std::mutex: Concurrency support.

* *POSIX Threads (pthread) Library:
* pthread_create, pthread_join: Thread creation and synchronization.
* pthread_mutex_init, pthread_mutex_lock: Mutex operations.

* *Socket Programming Libraries:
* socket, bind, listen: Network socket creation and setup.
* send, recv, connect: Sending and receiving data over a network.

* *Graphics Libraries:
* OpenGL: 3D graphics rendering functions.
* SDL (Simple DirectMedia Layer): Cross-platform multimedia library.

* *GUI Libraries:
* Qt: C++ framework for developing cross-platform applications with a GUI.
* GTK (GIMP Toolkit): Used for creating graphical user interfaces.

* *Database Access Libraries:
* ODBC (Open Database Connectivity): API for database access.
* JDBC (Java Database Connectivity): Database access in Java.

* *Math Libraries:
* Math.h (C): Mathematical functions like sin, cos, sqrt.
* NumPy (Python): Numerical computing library.

* *Web APIs:
* RESTful API calls: Using libraries like requests in Python to interact with web services.

* *Operating System-Specific Libraries:
* Windows API functions for Windows-specific operations.
* POSIX functions for Unix-like system interactions
*/