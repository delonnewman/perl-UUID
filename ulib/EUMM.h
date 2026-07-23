#ifndef ULIB__EUMM_H
#define ULIB__EUMM_H
#undef USE_WIN32_NATIVE
#undef USE_WIN32_ALIEN
#undef USE_WIN32_CYGWIN
#undef HAVE_WINSOCK2_H
#undef HAVE_WINDOWS_H
#undef HAVE_IPHLPAPI_H
#undef HAVE_BCRYPT_H
#define HAVE_CTYPE_H 1
#include <ctype.h>
#define HAVE_DISPATCH_DISPATCH_H 1
#include <dispatch/dispatch.h>
#define HAVE_ERR_H 1
#include <err.h>
#define HAVE_ERRNO_H 1
#include <errno.h>
#define HAVE_FCNTL_H 1
#include <fcntl.h>
#define HAVE_INTTYPES_H 1
#include <inttypes.h>
#undef HAVE_IO_H
#undef HAVE_MEMORYAPI_H
#define HAVE_NETINET_IN_H 1
#include <netinet/in.h>
#define HAVE_NET_IF_DL_H 1
#include <net/if_dl.h>
#define HAVE_NET_IF_H 1
#include <net/if.h>
#undef HAVE_PROCESS_H
#define HAVE_SEMAPHORE_H 1
#include <semaphore.h>
#define HAVE_STDINT_H 1
#include <stdint.h>
#define HAVE_STDIO_H 1
#include <stdio.h>
#define HAVE_STDLIB_H 1
#include <stdlib.h>
#define HAVE_STRING_H 1
#include <string.h>
#define HAVE_SYS_FILE_H 1
#include <sys/file.h>
#undef HAVE_SYS_FUTEX_H
#define HAVE_SYS_IOCTL_H 1
#include <sys/ioctl.h>
#define HAVE_SYS_MMAN_H 1
#include <sys/mman.h>
#define HAVE_SYS_RANDOM_H 1
#include <sys/random.h>
#define HAVE_SYS_RESOURCE_H 1
#include <sys/resource.h>
#define HAVE_SYS_SOCKET_H 1
#include <sys/socket.h>
#define HAVE_SYS_SOCKIO_H 1
#include <sys/sockio.h>
#define HAVE_SYS_STAT_H 1
#include <sys/stat.h>
#define HAVE_SYS_TIME_H 1
#include <sys/time.h>
#define HAVE_SYS_TYPES_H 1
#include <sys/types.h>
#define HAVE_SYS_WAIT_H 1
#include <sys/wait.h>
#define HAVE_TIME_H 1
#include <time.h>
#define HAVE_UNISTD_H 1
#include <unistd.h>
#undef HAVE_WINCRYPT_H
#define HAVE_ARC4RANDOM 1
#undef HAVE_BCRYPTGENRANDOM
#undef HAVE_CRYPTGENRANDOM
#undef HAVE_GETENTROPY
#undef HAVE_GETRANDOM
#define HAVE_LSTAT 1
#define HAVE_SA_LEN 1
#undef HAVE_SRWLOCK
#define HAVE_SYMLINK 1
#endif
