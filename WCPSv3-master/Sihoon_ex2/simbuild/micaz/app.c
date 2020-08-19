#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 147 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3
typedef long int ptrdiff_t;
#line 212
typedef long unsigned int size_t;
#line 324
typedef int wchar_t;
# 8 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
#line 8
  int dummy;
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
#line 13
  int dummy;
}  ;
#line 14
struct __nesc_attr_one_nok {
#line 14
  int dummy;
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
#line 17
  int dummy;
}  ;
# 36 "/usr/include/stdint.h" 3
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;

typedef long int int64_t;







typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;



typedef unsigned long int uint64_t;









typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;









typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;








typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
#line 119
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
#line 134
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
# 34 "/usr/include/inttypes.h" 3
typedef int __gwchar_t;
#line 275
#line 271
typedef struct __nesc_unnamed4242 {

  long int quot;
  long int rem;
} imaxdiv_t;
# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;
#line 303
static __inline int8_t __nesc_hton_int8(void * target, int8_t value)  ;






static __inline uint16_t __nesc_ntoh_uint16(const void * source)  ;




static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;
#line 340
static __inline uint32_t __nesc_ntoh_uint32(const void * source)  ;






static __inline uint32_t __nesc_hton_uint32(void * target, uint32_t value)  ;
#line 431
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 46 "/usr/include/string.h" 3
extern void *memcpy(void *__restrict __dest, const void *__restrict __src, 
size_t __n) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__nonnull__(1, 2))) ;
#line 66
extern void *memset(void *__s, int __c, size_t __n) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;


extern int memcmp(const void *__s1, const void *__s2, size_t __n) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1, 2))) ;
#line 129
extern char *strcpy(char *__restrict __dest, const char *__restrict __src) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__nonnull__(1, 2))) ;
#line 144
extern int strcmp(const char *__s1, const char *__s2) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1, 2))) ;
# 39 "/usr/include/xlocale.h" 3
#line 27
typedef struct __locale_struct {


  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 263 "/usr/include/string.h"
extern char *strrchr(const char *__s, int __c) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1))) ;
#line 399
extern size_t strlen(const char *__s) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1))) ;
# 55 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3
#line 50
typedef enum __nesc_unnamed4243 {

  P_ALL, 
  P_PID, 
  P_PGID
} idtype_t;
# 30 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
#line 124
typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct __nesc_unnamed4244 {
#line 134
  int __val[2];
} 
#line 134
__fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void *__timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 66 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
union wait {

  int w_status;
  struct __nesc_unnamed4245 {


    unsigned int __w_termsig : 7;
    unsigned int __w_coredump : 1;
    unsigned int __w_retcode : 8;
    unsigned int  : 16;
  } 






  __wait_terminated;
  struct __nesc_unnamed4246 {


    unsigned int __w_stopval : 8;
    unsigned int __w_stopsig : 8;
    unsigned int  : 16;
  } 





  __wait_stopped;
};
# 71 "/usr/include/stdlib.h" 3
#line 67
typedef union __nesc_unnamed4247 {

  union wait *__uptr;
  int *__iptr;
} __WAIT_STATUS __attribute((__transparent_union__)) ;
#line 101
#line 97
typedef struct __nesc_unnamed4248 {

  int quot;
  int rem;
} div_t;







#line 105
typedef struct __nesc_unnamed4249 {

  long int quot;
  long int rem;
} ldiv_t;







__extension__ 



#line 117
typedef struct __nesc_unnamed4250 {

  long long int quot;
  long long int rem;
} lldiv_t;
#line 157
__extension__ 
#line 194
__extension__ 




__extension__ 








__extension__ 




__extension__ 
# 33 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
#line 60
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
#line 98
typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 59 "/usr/include/time.h" 3
typedef __clock_t clock_t;
#line 75
typedef __time_t time_t;
#line 91
typedef __clockid_t clockid_t;
#line 103
typedef __timer_t timer_t;
# 150 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
#line 200
typedef unsigned int u_int8_t __attribute((__mode__(__QI__))) ;
typedef unsigned int u_int16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int u_int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int u_int64_t __attribute((__mode__(__DI__))) ;

typedef int register_t __attribute((__mode__(__word__))) ;
# 22 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3
typedef int __sig_atomic_t;







#line 27
typedef struct __nesc_unnamed4251 {

  unsigned long int __val[1024 / (8 * sizeof(unsigned long int ))];
} __sigset_t;
# 37 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
typedef __sigset_t sigset_t;
# 120 "/usr/include/time.h" 3
struct timespec {

  __time_t tv_sec;
  __syscall_slong_t tv_nsec;
};
# 30 "/usr/include/x86_64-linux-gnu/bits/time.h" 3
struct timeval {

  __time_t tv_sec;
  __suseconds_t tv_usec;
};
# 48 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
#line 75
#line 64
typedef struct __nesc_unnamed4252 {







  __fd_mask __fds_bits[1024 / (8 * (int )sizeof(__fd_mask ))];
} 

fd_set;






typedef __fd_mask fd_mask;
# 26 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3
__extension__ 


__extension__ 


__extension__ 
# 228 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 60 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
typedef unsigned long int pthread_t;


union pthread_attr_t {

  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;









#line 75
typedef struct __pthread_internal_list {

  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
#line 127
#line 90
typedef union __nesc_unnamed4253 {

  struct __pthread_mutex_s {

    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    short __spins;
    short __elision;
    __pthread_list_t __list;
  } 
#line 124
  __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;





#line 129
typedef union __nesc_unnamed4254 {

  char __size[4];
  int __align;
} pthread_mutexattr_t;
#line 153
#line 138
typedef union __nesc_unnamed4255 {

  struct __nesc_unnamed4256 {

    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;





#line 155
typedef union __nesc_unnamed4257 {

  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;
#line 213
#line 173
typedef union __nesc_unnamed4258 {


  struct __nesc_unnamed4259 {

    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    unsigned long int __pad1;
    unsigned long int __pad2;


    unsigned int __flags;
  } 
  __data;
#line 211
  char __size[56];
  long int __align;
} pthread_rwlock_t;





#line 215
typedef union __nesc_unnamed4260 {

  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;








#line 230
typedef union __nesc_unnamed4261 {

  char __size[32];
  long int __align;
} pthread_barrier_t;





#line 236
typedef union __nesc_unnamed4262 {

  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 343 "/usr/include/stdlib.h" 3
struct random_data {

  int32_t *fptr;
  int32_t *rptr;
  int32_t *state;
  int rand_type;
  int rand_deg;
  int rand_sep;
  int32_t *end_ptr;
};
#line 412
struct drand48_data {

  unsigned short int __x[3];
  unsigned short int __old_x[3];
  unsigned short int __c;
  unsigned short int __init;
  __extension__ unsigned long long int __a;
};
#line 466
extern void *malloc(size_t __size) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__malloc__)) ;
#line 483
extern void free(void *__ptr) __attribute((__leaf__)) __attribute((__nothrow__)) ;
#line 742
typedef int (*__compar_fn_t)(const void *arg_0x2baa93891cf8, const void *arg_0x2baa93890020);
#line 780
__extension__ 
#line 797
__extension__ 
# 28 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3
typedef float float_t;
typedef double double_t;
# 109 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern double log(double __x) __attribute((__leaf__)) __attribute((__nothrow__)) ;
#line 153
extern double pow(double __x, double __y) __attribute((__leaf__)) __attribute((__nothrow__)) ;


extern double sqrt(double __x) __attribute((__leaf__)) __attribute((__nothrow__)) ;
#line 181
extern double fabs(double __x) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((const)) ;


extern double floor(double __x) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((const)) ;
#line 250
extern double erfc(double arg_0x2baa93914618) __attribute((__leaf__)) __attribute((__nothrow__)) ;
#line 326
__extension__ 





__extension__ 
#line 326
__extension__ 





__extension__ 
#line 326
__extension__ 





__extension__ 
# 189 "/usr/include/math.h" 3
enum __nesc_unnamed4263 {

  FP_NAN = 

  0, 
  FP_INFINITE = 

  1, 
  FP_ZERO = 

  2, 
  FP_SUBNORMAL = 

  3, 
  FP_NORMAL = 

  4
};
#line 308
#line 301
typedef enum __nesc_unnamed4264 {

  _IEEE_ = -1, 
  _SVID_, 
  _XOPEN_, 
  _POSIX_, 
  _ISOC_
} _LIB_VERSION_TYPE;
#line 326
struct exception {


  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
};
# 46 "/usr/include/ctype.h" 3
enum __nesc_unnamed4265 {

  _ISupper = 0 < 8 ? (1 << 0) << 8 : (1 << 0) >> 8, 
  _ISlower = 1 < 8 ? (1 << 1) << 8 : (1 << 1) >> 8, 
  _ISalpha = 2 < 8 ? (1 << 2) << 8 : (1 << 2) >> 8, 
  _ISdigit = 3 < 8 ? (1 << 3) << 8 : (1 << 3) >> 8, 
  _ISxdigit = 4 < 8 ? (1 << 4) << 8 : (1 << 4) >> 8, 
  _ISspace = 5 < 8 ? (1 << 5) << 8 : (1 << 5) >> 8, 
  _ISprint = 6 < 8 ? (1 << 6) << 8 : (1 << 6) >> 8, 
  _ISgraph = 7 < 8 ? (1 << 7) << 8 : (1 << 7) >> 8, 
  _ISblank = 8 < 8 ? (1 << 8) << 8 : (1 << 8) >> 8, 
  _IScntrl = 9 < 8 ? (1 << 9) << 8 : (1 << 9) >> 8, 
  _ISpunct = 10 < 8 ? (1 << 10) << 8 : (1 << 10) >> 8, 
  _ISalnum = 11 < 8 ? (1 << 11) << 8 : (1 << 11) >> 8
};
# 44 "/usr/include/stdio.h" 3
struct _IO_FILE;



typedef struct _IO_FILE FILE;
#line 64
typedef struct _IO_FILE __FILE;
# 94 "/usr/include/wchar.h" 3
#line 82
typedef struct __nesc_unnamed4266 {

  int __count;
  union __nesc_unnamed4267 {


    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 25 "/usr/include/_G_config.h" 3
#line 21
typedef struct __nesc_unnamed4268 {

  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;




#line 26
typedef struct __nesc_unnamed4269 {

  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 40 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h" 3
typedef __builtin_va_list __gnuc_va_list;
# 144 "/usr/include/libio.h" 3
struct _IO_jump_t;
#line 144
struct _IO_FILE;









typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
};
#line 180
enum __codecvt_result {

  __codecvt_ok, 
  __codecvt_partial, 
  __codecvt_error, 
  __codecvt_noconv
};
#line 245
struct _IO_FILE {
  int _flags;




  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;








  __off64_t _offset;








  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof(int ) - 4 * sizeof(void *) - sizeof(size_t )];
};



typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

struct _IO_FILE_plus;
struct _IO_FILE_plus;
struct _IO_FILE_plus;
#line 338
typedef __ssize_t __io_read_fn(void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn(void *__cookie, const char *__buf, 
size_t __n);







typedef int __io_seek_fn(void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn(void *__cookie);
# 79 "/usr/include/stdio.h" 3
typedef __gnuc_va_list va_list;
#line 110
typedef _G_fpos_t fpos_t;
#line 168
struct _IO_FILE;
struct _IO_FILE;
struct _IO_FILE;
#line 242
extern int fflush(FILE *__stream);
#line 306
extern FILE *fdopen(int __fd, const char *__modes) __attribute((__leaf__)) __attribute((__nothrow__)) ;
#line 356
extern int fprintf(FILE *__restrict __stream, 
const char *__restrict __format, ...);




extern int printf(const char *__restrict __format, ...);








extern int vfprintf(FILE *__restrict __s, const char *__restrict __format, 
__gnuc_va_list __arg);
#line 386
extern int snprintf(char *__restrict __s, size_t __maxlen, 
const char *__restrict __format, ...) 
__attribute((__nothrow__)) __attribute((__format__(__printf__, 3, 4))) ;
#line 858
extern int fileno(FILE *__stream) __attribute((__leaf__)) __attribute((__nothrow__)) ;
# 57 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/tos.h"
typedef uint8_t bool;










enum __nesc_unnamed4270 {
#line 68
  FALSE = 0, TRUE = 1
};
extern uint16_t TOS_NODE_ID;
# 43 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_tossim.h"
typedef long long int sim_time_t;

void sim_init();

void sim_end();

void sim_random_seed(int seed);
int sim_random();

sim_time_t sim_time();
void sim_set_time(sim_time_t time);
sim_time_t sim_ticks_per_sec();

unsigned long sim_node();
void sim_set_node(unsigned long node);

int sim_print_time(char *buf, int bufLen, sim_time_t time);
int sim_print_now(char *buf, int bufLen);
char *sim_time_string();

void sim_add_channel(char *channel, FILE *file);
bool sim_remove_channel(char *channel, FILE *file);


int sim_run_next_event();


void sim_send_VirtualSchedule(int nodeid, int TxOffset, int dummy1, int dummy2);
int *sim_get_VirtualSchedule();
void sim_send_TaskPeriods(int Task1_T, int Task2_T, int Task3_T, int Task4_T);
int *sim_get_TaskPeriods();
void sim_send_NumTx(int Task1_Tx, int Task2_Tx, int Task3_Tx, int Task4_Tx);
int *sim_get_TaskTx();
# 42 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_event_queue.h"
struct sim_event;
typedef struct sim_event sim_event_t;

struct sim_event {
  sim_time_t time;
  unsigned long mote;
  bool force;

  bool cancelled;
  void *data;

  void (*handle)(sim_event_t *e);
  void (*cleanup)(sim_event_t *e);
};

static sim_event_t *sim_queue_allocate_event();

void sim_queue_init();
void sim_queue_insert(sim_event_t *event);
bool sim_queue_is_empty();
long long int sim_queue_peek_time();
sim_event_t *sim_queue_pop();

void sim_queue_cleanup_none(sim_event_t *e);
void sim_queue_cleanup_event(sim_event_t *e);
void sim_queue_cleanup_data(sim_event_t *e);
void sim_queue_cleanup_total(sim_event_t *e);
# 46 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_mote.h"
long long int sim_mote_euid(int mote);
void sim_mote_set_euid(int mote, long long int euid);
long long int sim_mote_start_time(int mote);
void sim_mote_set_start_time(int mote, long long int t);

bool sim_mote_is_on(int mote);
void sim_mote_turn_on(int mote);
void sim_mote_turn_off(int mote);

int sim_mote_get_variable_info(int mote, char *name, void **addr, size_t *len);
void sim_mote_enqueue_boot_event(int mote);

bool sim_mote_set_radio_channel(int mote, uint8_t newRadioChannel);
uint8_t sim_mote_get_radio_channel(int mote);




int *sim_mote_getTcpMsg(int mote);
void sim_mote_setTcpMsg(int mote, int flow_id, int slot_id, int source_id, int node_id, int channel_id);


bool sim_mote_is_idle(int mote);
void sim_mote_enable_idle(int mote);
void sim_mote_disable_idle(int mote);


uint8_t sim_mote_getPower(int mote);
bool sim_mote_setPower(int mote, uint8_t power);
# 57 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_log.h"
static inline void sim_log_init();
static inline void sim_log_add_channel(char *output, FILE *file);
static inline bool sim_log_remove_channel(char *output, FILE *file);
static void sim_log_commit_change();

static void sim_log_debug(uint16_t id, char *string, const char *format, ...);
static void sim_log_error(uint16_t id, char *string, const char *format, ...);
static void sim_log_debug_clear(uint16_t id, char *string, const char *format, ...);
# 89 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/tos.h"
struct __nesc_attr_atmostonce {
};
#line 90
struct __nesc_attr_atleastonce {
};
#line 91
struct __nesc_attr_exactlyonce {
};
# 9 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/hashtable.h"
struct hashtable;
typedef struct hashtable hashtable_t;
#line 78
struct hashtable *
create_hashtable(unsigned int minsize, 
unsigned int (*hashfunction)(void *arg_0x2baa93b5fca8), 
int (*key_eq_fn)(void *arg_0x2baa93b764e8, void *arg_0x2baa93b76788));
#line 103
#line 102
int 
hashtable_insert(struct hashtable *h, void *k, void *v);
#line 120
void *
hashtable_search(struct hashtable *h, void *k);
# 39 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_log.c"
enum __nesc_unnamed4271 {
  DEFAULT_CHANNEL_SIZE = 8
};




#line 43
typedef struct sim_log_output {
  int num;
  FILE **files;
} sim_log_output_t;






#line 48
typedef struct sim_log_channel {
  const char *name;
  int numOutputs;
  int size;
  FILE **outputs;
} sim_log_channel_t;

enum __nesc_unnamed4272 {
  SIM_LOG_OUTPUT_COUNT = 225U
};

sim_log_output_t outputs[SIM_LOG_OUTPUT_COUNT];
struct hashtable *channelTable = (void *)0;


inline static unsigned int sim_log_hash(void *key);
inline static int sim_log_eq(void *key1, void *key2);
#line 76
static void fillInOutput(int id, char *name);
#line 151
static inline void sim_log_init();
#line 164
static inline void sim_log_add_channel(char *name, FILE *file);
#line 204
static inline bool sim_log_remove_channel(char *output, FILE *file);
#line 226
static void sim_log_commit_change();
#line 238
static void sim_log_debug(uint16_t id, char *string, const char *format, ...);
#line 253
static void sim_log_error(uint16_t id, char *string, const char *format, ...);
#line 268
static void sim_log_debug_clear(uint16_t id, char *string, const char *format, ...);
#line 298
inline static unsigned int sim_log_hash(void *key);










inline static int sim_log_eq(void *key1, void *key2);
# 54 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/heap.h"
#line 50
typedef struct heap {
  int size;
  void *data;
  int private_size;
} heap_t;

static inline void init_heap(heap_t *heap);

static inline int heap_is_empty(heap_t *heap);

static inline long long int heap_get_min_key(heap_t *heap);

static void *heap_pop_min_data(heap_t *heap, long long int *key);
static inline void heap_insert(heap_t *heap, void *data, long long int key);
# 47 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/heap.c"
const int STARTING_SIZE = 511;






#line 51
typedef struct node {
  void *data;
  long long int key;
} node_t;

static void down_heap(heap_t *heap, int findex);
static void up_heap(heap_t *heap, int findex);
static void swap(node_t *first, node_t *second);








static inline void init_heap(heap_t *heap);









static inline int is_empty(heap_t *heap);



static inline int heap_is_empty(heap_t *heap);



static inline long long int heap_get_min_key(heap_t *heap);
#line 103
static void *heap_pop_min_data(heap_t *heap, long long int *key);
#line 119
static inline void expand_heap(heap_t *heap);
#line 133
static inline void heap_insert(heap_t *heap, void *data, long long int key);
#line 147
static void swap(node_t *first, node_t *second);
#line 160
static void down_heap(heap_t *heap, int findex);
#line 186
static void up_heap(heap_t *heap, int findex);
# 36 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_event_queue.c"
static heap_t eventHeap;

void sim_queue_init()   ;



void sim_queue_insert(sim_event_t *event)   ;




sim_event_t *sim_queue_pop()   ;




bool sim_queue_is_empty()   ;



long long int sim_queue_peek_time()   ;









void sim_queue_cleanup_none(sim_event_t *event)   ;




void sim_queue_cleanup_event(sim_event_t *event)   ;




void sim_queue_cleanup_data(sim_event_t *event)   ;





void sim_queue_cleanup_total(sim_event_t *event)   ;






static sim_event_t *sim_queue_allocate_event();
# 55 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
struct timezone {

  int tz_minuteswest;
  int tz_dsttime;
};

typedef struct timezone *__restrict __timezone_ptr_t;









extern int gettimeofday(struct timeval *__restrict __tv, 
__timezone_ptr_t __tz) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;
#line 91
enum __itimer_which {


  ITIMER_REAL = 0, 


  ITIMER_VIRTUAL = 1, 



  ITIMER_PROF = 2
};




struct itimerval {


  struct timeval it_interval;

  struct timeval it_value;
};






typedef int __itimer_which_t;
# 43 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_noise.h"
enum __nesc_unnamed4273 {
  NOISE_MIN = -115, 
  NOISE_MAX = -5, 
  NOISE_MIN_QUANTIZE = -115, 
  NOISE_QUANTIZE_INTERVAL = 5, 
  NOISE_BIN_SIZE = (NOISE_MAX - NOISE_MIN) / NOISE_QUANTIZE_INTERVAL + 1, 
  NOISE_HISTORY = 20, 
  NOISE_DEFAULT_ELEMENT_SIZE = 8, 
  NOISE_HASHTABLE_SIZE = 128, 
  NOISE_MIN_TRACE = 128, 
  NOISE_NUM_VALUES = NOISE_MAX - NOISE_MIN + 1
};








#line 56
typedef struct sim_noise_hash_t {
  char key[NOISE_HISTORY];
  int numElements;
  int size;
  char *elements;
  char flag;
  float dist[NOISE_NUM_VALUES];
} sim_noise_hash_t;
#line 75
#line 65
typedef struct sim_noise_node_t {
  char key[NOISE_HISTORY];
  char freqKey[NOISE_HISTORY];
  char lastNoiseVal;
  uint32_t noiseGenTime;
  struct hashtable *noiseTable;
  char *noiseTrace;
  uint32_t noiseTraceLen;
  uint32_t noiseTraceIndex;
  bool generated;
} sim_noise_node_t;

void sim_noise_init();

char sim_noise_generate(uint16_t node_id, uint32_t cur_t, uint8_t channel_id);
void sim_noise_trace_add(uint16_t node_id, char val, uint8_t channel_id);
void sim_noise_create_model(uint16_t node_id, uint8_t channel_id);
# 6 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4274 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4275 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 5 "/home/sihoon/WCPSv3-master/Sihoon_ex2/TestNetworkC.h"
enum __nesc_unnamed4276 {
  AM_TESTNETWORKMSG = 0x05, 
  AM_TESTNETWORKMSGG = 0x06, 
  SAMPLE_RATE_KEY = 0x1, 
  CL_TEST = 0xee, 
  TEST_NETWORK_QUEUE_SIZE = 8
};
# 173 "/home/sihoon/WCPSv3-master/Sihoon_ex2/TestNetwork.h"
#line 15
typedef nx_struct TestNetworkMsg {
  nx_am_addr_t source;
  nx_uint16_t seqno;
  nx_am_addr_t parent;
  nx_uint16_t metric;

  nx_uint8_t flowid;
  nx_uint8_t hopcount;


  nx_uint8_t txopper[5];


  nx_uint8_t txdelay[5];


  nx_uint16_t job_idx;



  nx_uint8_t data1;
  nx_uint8_t data2;
  nx_uint8_t data3;
  nx_uint8_t data4;
  nx_uint8_t data5;

  nx_uint8_t data6;
  nx_uint8_t data7;
  nx_uint8_t data8;
  nx_uint8_t data9;
  nx_uint8_t data10;

  nx_uint8_t data11;
  nx_uint8_t data12;
  nx_uint8_t data13;
  nx_uint8_t data14;
  nx_uint8_t data15;

  nx_uint8_t data16;
  nx_uint8_t data17;
  nx_uint8_t data18;
  nx_uint8_t data19;
  nx_uint8_t data20;
#line 171
  nx_uint16_t sendCount;
  nx_uint16_t sendSuccessCount;
} __attribute__((packed)) TestNetworkMsg;
# 42 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_tossim.c"
static sim_time_t sim_ticks;
static unsigned long current_node;
static int sim_seed;

static int __nesc_nido_resolve(int mote, char *varname, uintptr_t *addr, size_t *size);

void sim_init()   ;
#line 71
void sim_end()   ;





int sim_random()   ;
#line 93
void sim_random_seed(int seed)   ;







sim_time_t sim_time()   ;


void sim_set_time(sim_time_t t)   ;



sim_time_t sim_ticks_per_sec()   ;



unsigned long sim_node()   ;


void sim_set_node(unsigned long node)   ;
#line 151
int sim_run_next_event()   ;
#line 195
int sim_print_time(char *buf, int len, sim_time_t ftime)   ;
#line 218
int sim_print_now(char *buf, int len)   ;



char simTimeBuf[128];
char *sim_time_string()   ;




void sim_add_channel(char *channel, FILE *file)   ;



bool sim_remove_channel(char *channel, FILE *file)   ;





int simScheduleBuf[9][1];

void sim_send_VirtualSchedule(int nodeid, int TxOffset, int dummy1, int dummy2)   ;






int *sim_get_VirtualSchedule()   ;




int simTaskPeriodBuf[4];
void sim_send_TaskPeriods(int Task1_T, int Task2_T, int Task3_T, int Task4_T)   ;
#line 279
int *sim_get_TaskPeriods()   ;




int simTaskTx[4];
void sim_send_NumTx(int Task1_Tx, int Task2_Tx, int Task3_Tx, int Task4_Tx)   ;
#line 311
int *sim_get_TaskTx()   ;
# 91 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_csma.h"
int sim_csma_init_high();
int sim_csma_init_low();
int sim_csma_high();
int sim_csma_low();
int sim_csma_symbols_per_sec();
int sim_csma_bits_per_symbol();
int sim_csma_preamble_length();
int sim_csma_exponent_base();
int sim_csma_max_iterations();
int sim_csma_min_free_samples();
int sim_csma_rxtx_delay();
int sim_csma_ack_time();

void sim_csma_set_init_high(int val);
void sim_csma_set_init_low(int val);
void sim_csma_set_high(int val);
void sim_csma_set_low(int val);
void sim_csma_set_symbols_per_sec(int val);
void sim_csma_set_bits_per_symbol(int val);
void sim_csma_set_preamble_length(int val);
void sim_csma_set_exponent_base(int val);
void sim_csma_set_max_iterations(int val);
void sim_csma_set_min_free_samples(int val);
void sim_csma_set_rxtx_delay(int val);
void sim_csma_set_ack_time(int val);
# 36 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_csma.c"
int csmaInitHigh = 640;
int csmaInitLow = 20;
int csmaHigh = 160;
int csmaLow = 20;
int csmaSymbolsPerSec = 65536;
int csmaBitsPerSymbol = 4;
int csmaPreambleLength = 12;
int csmaExponentBase = 1;
int csmaMaxIterations = 0;
int csmaMinFreeSamples = 1;
int csmaRxTxDelay = 11;
int csmaAckTime = 34;

int sim_csma_init_high()   ;


int sim_csma_init_low()   ;


int sim_csma_high()   ;


int sim_csma_low()   ;


int sim_csma_symbols_per_sec()   ;


int sim_csma_bits_per_symbol()   ;


int sim_csma_preamble_length()   ;


int sim_csma_exponent_base()   ;


int sim_csma_max_iterations()   ;


int sim_csma_min_free_samples()   ;


int sim_csma_rxtx_delay()   ;


int sim_csma_ack_time()   ;





void sim_csma_set_init_high(int val)   ;


void sim_csma_set_init_low(int val)   ;


void sim_csma_set_high(int val)   ;


void sim_csma_set_low(int val)   ;


void sim_csma_set_symbols_per_sec(int val)   ;


void sim_csma_set_bits_per_symbol(int val)   ;


void sim_csma_set_preamble_length(int val)   ;


void sim_csma_set_exponent_base(int val)   ;


void sim_csma_set_max_iterations(int val)   ;


void sim_csma_set_min_free_samples(int val)   ;


void sim_csma_set_rxtx_delay(int val)   ;


void sim_csma_set_ack_time(int val)   ;
# 53 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_gain.h"
#line 48
typedef struct gain_entry {
  int mote;
  double gain;
  int channel;
  struct gain_entry *next;
} gain_entry_t;

void sim_gain_add(int src, int dest, double gain, int channel_id);
double sim_gain_value(int src, int dest, int channel_id);

bool sim_gain_connected(int src, int dest, int channel_id);
void sim_gain_remove(int src, int dest, int channel_id);

void sim_gain_set_noise_floor(int node, double mean, double range, int channel_id);
double sim_gain_sample_noise(int node, int channel_id);



void sim_gain_set_sensitivity(double value);
double sim_gain_sensitivity();

gain_entry_t *sim_gain_first(int src, int channnel_id);
gain_entry_t *sim_gain_next(gain_entry_t *e);
# 6 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_gain.c"
#line 3
typedef struct sim_gain_noise {
  double mean;
  double range;
} sim_gain_noise_t;

gain_entry_t *connectivity[1000 + 1][16];
sim_gain_noise_t localNoise[1000 + 1][16];

double sensitivity = 4.0;
static inline gain_entry_t *sim_gain_allocate_link(int mote, int channel_id);
void sim_gain_deallocate_link(gain_entry_t *linkToDelete);

gain_entry_t *sim_gain_first(int src, int channel_id)   ;









gain_entry_t *sim_gain_next(gain_entry_t *currentLink)   ;




void sim_gain_add(int src, int dest, double gain, int channel_id)   ;
#line 57
double sim_gain_value(int src, int dest, int channel_id)   ;
#line 76
bool sim_gain_connected(int src, int dest, int channel_id)   ;
#line 92
void sim_gain_remove(int src, int dest, int channel_id)   ;
#line 126
void sim_gain_set_noise_floor(int node, double mean, double range, int channel_id)   ;
#line 150
double sim_gain_sample_noise(int node, int channel_id)   ;
#line 163
static inline gain_entry_t *sim_gain_allocate_link(int mote, int channel_id);








void sim_gain_deallocate_link(gain_entry_t *linkToDelete)   ;



void sim_gain_set_sensitivity(double s)   ;



double sim_gain_sensitivity()   ;
# 39 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/randomlib.c"
static double randU[97];
#line 39
static double randC;
#line 39
static double randCD;
#line 39
static double randCM;
static int i97;
#line 40
static int j97;
static int test = FALSE;
#line 55
static inline void RandomInitialise(int ij, int kl);
#line 103
static double RandomUniform(void );
# 133 "/usr/include/time.h" 3
struct tm {

  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;
};
#line 161
struct itimerspec {

  struct timespec it_interval;
  struct timespec it_value;
};


struct sigevent;
# 239 "/usr/include/time.h"
struct tm;



struct tm;





struct tm;




struct tm;
# 46 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/randomlib.h"
static inline void RandomInitialise(int arg_0x2baa93da8ce0, int arg_0x2baa93da6020);
static double RandomUniform(void );
# 50 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_noise.c"
int numCase1 = 0;
int numCase2 = 0;
int numTotal = 0;


uint32_t FreqKeyNum = 0;
sim_noise_node_t noiseData[1000][16];
inline static unsigned int sim_noise_hash(void *key);
inline static int sim_noise_eq(void *key1, void *key2);
void makeNoiseModel(uint16_t node_id, uint8_t channel_id);
void makePmfDistr(uint16_t node_id, uint8_t channel_id);
uint8_t search_bin_num(char noise);

void sim_noise_init()   ;
#line 79
void sim_noise_create_model(uint16_t node_id, uint8_t channel_id)   ;
#line 93
void sim_noise_trace_add(uint16_t node_id, char noiseVal, uint8_t channel_id)   ;
#line 107
uint8_t search_bin_num(char noise)   ;









char search_noise_from_bin_num(int i)   ;






inline static unsigned int sim_noise_hash(void *key);









inline static int sim_noise_eq(void *key1, void *key2);



void sim_noise_add(uint16_t node_id, char noise, uint8_t channel_id)   ;
#line 188
void sim_noise_dist(uint16_t node_id, uint8_t channel_id)   ;
#line 242
void arrangeKey(uint16_t node_id, uint8_t channel_id)   ;









void makePmfDistr(uint16_t node_id, uint8_t channel_id)   ;
#line 282
int dummy;
static inline void sim_noise_alarm();



char sim_noise_gen(uint16_t node_id, uint8_t channel_id)   ;
#line 367
char sim_noise_generate(uint16_t node_id, uint32_t cur_t, uint8_t channel_id)   ;
#line 419
void makeNoiseModel(uint16_t node_id, uint8_t channel_id)   ;
# 51 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_packet.h"
typedef struct sim_packet {
} 
#line 51
sim_packet_t;

void sim_packet_set_source(sim_packet_t *msg, uint16_t src);
uint16_t sim_packet_source(sim_packet_t *msg);

void sim_packet_set_destination(sim_packet_t *msg, uint16_t dest);
uint16_t sim_packet_destination(sim_packet_t *msg);

void sim_packet_set_length(sim_packet_t *msg, uint8_t len);
uint16_t sim_packet_length(sim_packet_t *msg);

void sim_packet_set_type(sim_packet_t *msg, uint8_t type);
uint8_t sim_packet_type(sim_packet_t *msg);

uint8_t *sim_packet_data(sim_packet_t *msg);
void sim_packet_set_strength(sim_packet_t *msg, uint16_t str);

void sim_packet_deliver(int node, sim_packet_t *msg, sim_time_t t);
uint8_t sim_packet_max_length(sim_packet_t *msg);

sim_packet_t *sim_packet_allocate();
void sim_packet_free(sim_packet_t *m);

void sim_packet_set_dsn(sim_packet_t *msg, uint8_t dsn);
uint8_t sim_packet_dsn(sim_packet_t *msg);
# 13 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/TossimRadioMsg.h"
#line 6
typedef nx_struct tossim_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_uint8_t dsn;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) tossim_header_t;



#line 15
typedef nx_struct tossim_footer {
  nxle_uint16_t crc;
} __attribute__((packed)) tossim_footer_t;
#line 29
#line 19
typedef nx_struct tossim_metadata {
  nx_int8_t strength;
  nx_uint8_t lqi;
  nx_uint8_t ack;
  nx_uint16_t time;
  nx_uint8_t destroyable;
} __attribute__((packed)) 



tossim_metadata_t;
# 72 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4277 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4278 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4279 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 110
#line 98
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 112
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 120
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;



#line 125
typedef nx_struct serial_metadata {
  nx_uint8_t ack;
} __attribute__((packed)) serial_metadata_t;
# 44 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/platform_message.h"
#line 41
typedef union message_header {
  tossim_header_t tossim;
  serial_header_t serial;
} message_header_t;



#line 46
typedef union message_footer {
  tossim_footer_t tossim;
} message_footer_t;



#line 50
typedef union message_metadata {
  tossim_metadata_t tossim;
} message_metadata_t;
# 19 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[156];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 40 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_packet.c"
void active_message_deliver(int node, message_t *m, sim_time_t t);

inline static tossim_header_t *getHeader(message_t *msg);



void sim_packet_set_source(sim_packet_t *msg, uint16_t src)   ;




uint16_t sim_packet_source(sim_packet_t *msg)   ;




void sim_packet_set_destination(sim_packet_t *msg, uint16_t dest)   ;




uint16_t sim_packet_destination(sim_packet_t *msg)   ;




void sim_packet_set_length(sim_packet_t *msg, uint8_t length)   ;



uint16_t sim_packet_length(sim_packet_t *msg)   ;




void sim_packet_set_type(sim_packet_t *msg, uint8_t type)   ;




uint8_t sim_packet_type(sim_packet_t *msg)   ;




uint8_t *sim_packet_data(sim_packet_t *p)   ;



void sim_packet_set_strength(sim_packet_t *p, uint16_t str)   ;




void sim_packet_deliver(int node, sim_packet_t *msg, sim_time_t t)   ;







uint8_t sim_packet_max_length(sim_packet_t *msg)   ;



sim_packet_t *sim_packet_allocate()   ;



void sim_packet_free(sim_packet_t *p)   ;




void sim_packet_set_dsn(sim_packet_t *msg, uint8_t dsn)   ;




uint8_t sim_packet_dsn(sim_packet_t *msg)   ;
# 40 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/types/TinyError.h"
enum __nesc_unnamed4280 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ELAST = 11
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 29 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4281 {
#line 29
  int notUsed;
} 
#line 29
TMilli;
typedef struct __nesc_unnamed4282 {
#line 30
  int notUsed;
} 
#line 30
T32khz;
typedef struct __nesc_unnamed4283 {
#line 31
  int notUsed;
} 
#line 31
TMicro;
# 25 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/atm128/sim/atm128_sim.h"
enum __nesc_unnamed4284 {

  ATM128_PINF = 0x00, 


  ATM128_PINE = 0x01, 


  ATM128_DDRE = 0x02, 


  ATM128_PORTE = 0x03, 


  ATM128_ADCW = 0x04, 

  ATM128_ADC = 0x04, 

  ATM128_ADCL = 0x04, 
  ATM128_ADCH = 0x05, 


  ATM128_ADCSR = 0x06, 
  ATM128_ADCSRA = 0x06, 


  ATM128_ADMUX = 0x07, 


  ATM128_ACSR = 0x08, 


  ATM128_UBRR0L = 0x09, 


  ATM128_UCSR0B = 0x0A, 


  ATM128_UCSR0A = 0x0B, 


  ATM128_UDR0 = 0x0C, 


  ATM128_SPCR = 0x0D, 


  ATM128_SPSR = 0x0E, 


  ATM128_SPDR = 0x0F, 


  ATM128_PIND = 0x10, 


  ATM128_DDRD = 0x11, 


  ATM128_PORTD = 0x12, 


  ATM128_PINC = 0x13, 


  ATM128_DDRC = 0x14, 


  ATM128_PORTC = 0x15, 


  ATM128_PINB = 0x16, 


  ATM128_DDRB = 0x17, 


  ATM128_PORTB = 0x18, 


  ATM128_PINA = 0x19, 


  ATM128_DDRA = 0x1A, 


  ATM128_PORTA = 0x1B, 




  ATM128_SFIOR = 0x20, 


  ATM128_WDTCR = 0x21, 


  ATM128_OCDR = 0x22, 


  ATM128_OCR2 = 0x23, 


  ATM128_TCNT2 = 0x24, 


  ATM128_TCCR2 = 0x25, 


  ATM128_ICR1 = 0x26, 
  ATM128_ICR1L = 0x26, 
  ATM128_ICR1H = 0x27, 


  ATM128_OCR1B = 0x28, 
  ATM128_OCR1BL = 0x28, 
  ATM128_OCR1BH = 0x29, 


  ATM128_OCR1A = 0x2A, 
  ATM128_OCR1AL = 0x2A, 
  ATM128_OCR1AH = 0x2B, 


  ATM128_TCNT1 = 0x2C, 
  ATM128_TCNT1L = 0x2C, 
  ATM128_TCNT1H = 0x2D, 


  ATM128_TCCR1B = 0x2E, 


  ATM128_TCCR1A = 0x2F, 


  ATM128_ASSR = 0x30, 


  ATM128_OCR0 = 0x31, 


  ATM128_TCNT0 = 0x32, 


  ATM128_TCCR0 = 0x33, 


  ATM128_MCUSR = 0x34, 
  ATM128_MCUCSR = 0x34, 


  ATM128_MCUCR = 0x35, 


  ATM128_TIFR = 0x36, 


  ATM128_TIMSK = 0x37, 


  ATM128_EIFR = 0x38, 


  ATM128_EIMSK = 0x39, 


  ATM128_EICRB = 0x3A, 


  ATM128_RAMPZ = 0x3B, 


  ATM128_XDIV = 0x3C, 




  ATM128_SREG = 0x3F, 




  ATM128_DDRF = 0x61, 


  ATM128_PORTF = 0x62, 


  ATM128_PING = 0x63, 


  ATM128_DDRG = 0x64, 


  ATM128_PORTG = 0x65, 


  ATM128_SPMCR = 0x68, 
  ATM128_SPMCSR = 0x68, 


  ATM128_EICRA = 0x6A, 


  ATM128_XMCRB = 0x6C, 


  ATM128_XMCRA = 0x6D, 


  ATM128_OSCCAL = 0x6F, 


  ATM128_TWBR = 0x70, 


  ATM128_TWSR = 0x71, 


  ATM128_TWAR = 0x72, 


  ATM128_TWDR = 0x73, 


  ATM128_TWCR = 0x74, 


  ATM128_OCR1C = 0x78, 
  ATM128_OCR1CL = 0x78, 
  ATM128_OCR1CH = 0x79, 


  ATM128_TCCR1C = 0x7A, 


  ATM128_ETIFR = 0x7C, 


  ATM128_ETIMSK = 0x7D, 


  ATM128_ICR3 = 0x80, 
  ATM128_ICR3L = 0x80, 
  ATM128_ICR3H = 0x81, 


  ATM128_OCR3C = 0x82, 
  ATM128_OCR3CL = 0x82, 
  ATM128_OCR3CH = 0x83, 


  ATM128_OCR3B = 0x84, 
  ATM128_OCR3BL = 0x84, 
  ATM128_OCR3BH = 0x85, 


  ATM128_OCR3A = 0x86, 
  ATM128_OCR3AL = 0x86, 
  ATM128_OCR3AH = 0x87, 


  ATM128_TCNT3 = 0x88, 
  ATM128_TCNT3L = 0x88, 
  ATM128_TCNT3H = 0x89, 


  ATM128_TCCR3B = 0x8A, 


  ATM128_TCCR3A = 0x8B, 


  ATM128_TCCR3C = 0x8C, 


  ATM128_UBRR0H = 0x90, 


  ATM128_UCSR0C = 0x95, 


  ATM128_UBRR1H = 0x98, 


  ATM128_UBRR1L = 0x99, 


  ATM128_UCSR1B = 0x9A, 


  ATM128_UCSR1A = 0x9B, 


  ATM128_UDR1 = 0x9C, 


  ATM128_UCSR1C = 0x9D
};
#line 673
enum __nesc_unnamed4285 {

  TWINT = 7, 
  TWEA = 6, 
  TWSTA = 5, 
  TWSTO = 4, 
  TWWC = 3, 
  TWEN = 2, 
  TWIE = 0, 


  TWA6 = 7, 
  TWA5 = 6, 
  TWA4 = 5, 
  TWA3 = 4, 
  TWA2 = 3, 
  TWA1 = 2, 
  TWA0 = 1, 
  TWGCE = 0, 


  TWS7 = 7, 
  TWS6 = 6, 
  TWS5 = 5, 
  TWS4 = 4, 
  TWS3 = 3, 
  TWPS1 = 1, 
  TWPS0 = 0, 


  SRL2 = 6, 
  SRL1 = 5, 
  SRL0 = 4, 
  SRW01 = 3, 
  SRW00 = 2, 
  SRW11 = 1, 


  XMBK = 7, 
  XMM2 = 2, 
  XMM1 = 1, 
  XMM0 = 0, 


  XDIVEN = 7, 
  XDIV6 = 6, 
  XDIV5 = 5, 
  XDIV4 = 4, 
  XDIV3 = 3, 
  XDIV2 = 2, 
  XDIV1 = 1, 
  XDIV0 = 0, 


  RAMPZ0 = 0, 


  ISC31 = 7, 
  ISC30 = 6, 
  ISC21 = 5, 
  ISC20 = 4, 
  ISC11 = 3, 
  ISC10 = 2, 
  ISC01 = 1, 
  ISC00 = 0, 


  ISC71 = 7, 
  ISC70 = 6, 
  ISC61 = 5, 
  ISC60 = 4, 
  ISC51 = 3, 
  ISC50 = 2, 
  ISC41 = 1, 
  ISC40 = 0, 


  SPMIE = 7, 
  RWWSB = 6, 
  RWWSRE = 4, 
  BLBSET = 3, 
  PGWRT = 2, 
  PGERS = 1, 
  SPMEN = 0, 


  INT7 = 7, 
  INT6 = 6, 
  INT5 = 5, 
  INT4 = 4, 
  INT3 = 3, 
  INT2 = 2, 
  INT1 = 1, 
  INT0 = 0, 


  INTF7 = 7, 
  INTF6 = 6, 
  INTF5 = 5, 
  INTF4 = 4, 
  INTF3 = 3, 
  INTF2 = 2, 
  INTF1 = 1, 
  INTF0 = 0, 


  OCIE2 = 7, 
  TOIE2 = 6, 
  TICIE1 = 5, 
  OCIE1A = 4, 
  OCIE1B = 3, 
  TOIE1 = 2, 
  OCIE0 = 1, 
  TOIE0 = 0, 


  OCF2 = 7, 
  TOV2 = 6, 
  ICF1 = 5, 
  OCF1A = 4, 
  OCF1B = 3, 
  TOV1 = 2, 
  OCF0 = 1, 
  TOV0 = 0, 


  TICIE3 = 5, 
  OCIE3A = 4, 
  OCIE3B = 3, 
  TOIE3 = 2, 
  OCIE3C = 1, 
  OCIE1C = 0, 


  ICF3 = 5, 
  OCF3A = 4, 
  OCF3B = 3, 
  TOV3 = 2, 
  OCF3C = 1, 
  OCF1C = 0, 


  SRE = 7, 
  SRW = 6, 
  SRW10 = 6, 
  SE = 5, 
  SM1 = 4, 
  SM0 = 3, 
  SM2 = 2, 
  IVSEL = 1, 
  IVCE = 0, 


  JTD = 7, 
  JTRF = 4, 
  WDRF = 3, 
  BORF = 2, 
  EXTRF = 1, 
  PORF = 0, 


  FOC = 7, 
  WGM0 = 6, 
  COM1 = 5, 
  COM0 = 4, 
  WGM1 = 3, 
  CS2 = 2, 
  CS1 = 1, 
  CS0 = 0, 


  FOC0 = 7, 
  WGM00 = 6, 
  COM01 = 5, 
  COM00 = 4, 
  WGM01 = 3, 
  CS02 = 2, 
  CS01 = 1, 
  CS00 = 0, 


  FOC2 = 7, 
  WGM20 = 6, 
  COM21 = 5, 
  COM20 = 4, 
  WGM21 = 3, 
  CS22 = 2, 
  CS21 = 1, 
  CS20 = 0, 


  AS0 = 3, 
  TCN0UB = 2, 
  OCR0UB = 1, 
  TCR0UB = 0, 


  COMA1 = 7, 
  COMA0 = 6, 
  COMB1 = 5, 
  COMB0 = 4, 
  COMC1 = 3, 
  COMC0 = 2, 
  WGMA1 = 1, 
  WGMA0 = 0, 


  COM1A1 = 7, 
  COM1A0 = 6, 
  COM1B1 = 5, 
  COM1B0 = 4, 
  COM1C1 = 3, 
  COM1C0 = 2, 
  WGM11 = 1, 
  WGM10 = 0, 


  COM3A1 = 7, 
  COM3A0 = 6, 
  COM3B1 = 5, 
  COM3B0 = 4, 
  COM3C1 = 3, 
  COM3C0 = 2, 
  WGM31 = 1, 
  WGM30 = 0, 


  ICNC = 7, 
  ICES = 6, 
  WGMB3 = 4, 
  WGMB2 = 3, 
  CSB2 = 2, 
  CSB1 = 1, 
  CSB0 = 0, 


  ICNC1 = 7, 
  ICES1 = 6, 
  WGM13 = 4, 
  WGM12 = 3, 
  CS12 = 2, 
  CS11 = 1, 
  CS10 = 0, 


  ICNC3 = 7, 
  ICES3 = 6, 
  WGM33 = 4, 
  WGM32 = 3, 
  CS32 = 2, 
  CS31 = 1, 
  CS30 = 0, 


  FOCA = 7, 
  FOCB = 6, 
  FOCC = 5, 


  FOC3A = 7, 
  FOC3B = 6, 
  FOC3C = 5, 


  FOC1A = 7, 
  FOC1B = 6, 
  FOC1C = 5, 


  IDRD = 7, 
  OCDR7 = 7, 
  OCDR6 = 6, 
  OCDR5 = 5, 
  OCDR4 = 4, 
  OCDR3 = 3, 
  OCDR2 = 2, 
  OCDR1 = 1, 
  OCDR0 = 0, 


  WDCE = 4, 
  WDE = 3, 
  WDP2 = 2, 
  WDP1 = 1, 
  WDP0 = 0, 


  TSM = 7, 
  ADHSM = 4, 
  ACME = 3, 
  PUD = 2, 
  PSR0 = 1, 
  PSR321 = 0, 


  SPIF = 7, 
  WCOL = 6, 
  SPI2X = 0, 


  SPIE = 7, 
  SPE = 6, 
  DORD = 5, 
  MSTR = 4, 
  CPOL = 3, 
  CPHA = 2, 
  SPR1 = 1, 
  SPR0 = 0, 


  UMSEL = 6, 
  UPM1 = 5, 
  UPM0 = 4, 
  USBS = 3, 
  UCSZ1 = 2, 
  UCSZ0 = 1, 
  UCPOL = 0, 


  UMSEL1 = 6, 
  UPM11 = 5, 
  UPM10 = 4, 
  USBS1 = 3, 
  UCSZ11 = 2, 
  UCSZ10 = 1, 
  UCPOL1 = 0, 


  UMSEL0 = 6, 
  UPM01 = 5, 
  UPM00 = 4, 
  USBS0 = 3, 
  UCSZ01 = 2, 
  UCSZ00 = 1, 
  UCPOL0 = 0, 


  RXC = 7, 
  TXC = 6, 
  UDRE = 5, 
  FE = 4, 
  DOR = 3, 
  UPE = 2, 
  U2X = 1, 
  MPCM = 0, 


  RXC1 = 7, 
  TXC1 = 6, 
  UDRE1 = 5, 
  FE1 = 4, 
  DOR1 = 3, 
  UPE1 = 2, 
  U2X1 = 1, 
  MPCM1 = 0, 


  RXC0 = 7, 
  TXC0 = 6, 
  UDRE0 = 5, 
  FE0 = 4, 
  DOR0 = 3, 
  UPE0 = 2, 
  U2X0 = 1, 
  MPCM0 = 0, 


  RXCIE = 7, 
  TXCIE = 6, 
  UDRIE = 5, 
  RXEN = 4, 
  TXEN = 3, 
  UCSZ = 2, 
  UCSZ2 = 2, 
  RXB8 = 1, 
  TXB8 = 0, 


  RXCIE1 = 7, 
  TXCIE1 = 6, 
  UDRIE1 = 5, 
  RXEN1 = 4, 
  TXEN1 = 3, 
  UCSZ12 = 2, 
  RXB81 = 1, 
  TXB81 = 0, 


  RXCIE0 = 7, 
  TXCIE0 = 6, 
  UDRIE0 = 5, 
  RXEN0 = 4, 
  TXEN0 = 3, 
  UCSZ02 = 2, 
  RXB80 = 1, 
  TXB80 = 0, 


  ACD = 7, 
  ACBG = 6, 
  ACO = 5, 
  ACI = 4, 
  ACIE = 3, 
  ACIC = 2, 
  ACIS1 = 1, 
  ACIS0 = 0, 


  ADEN = 7, 
  ADSC = 6, 
  ADFR = 5, 
  ADIF = 4, 
  ADIE = 3, 
  ADPS2 = 2, 
  ADPS1 = 1, 
  ADPS0 = 0, 


  REFS1 = 7, 
  REFS0 = 6, 
  ADLAR = 5, 
  MUX4 = 4, 
  MUX3 = 3, 
  MUX2 = 2, 
  MUX1 = 1, 
  MUX0 = 0, 


  PA7 = 7, 
  PA6 = 6, 
  PA5 = 5, 
  PA4 = 4, 
  PA3 = 3, 
  PA2 = 2, 
  PA1 = 1, 
  PA0 = 0, 


  DDA7 = 7, 
  DDA6 = 6, 
  DDA5 = 5, 
  DDA4 = 4, 
  DDA3 = 3, 
  DDA2 = 2, 
  DDA1 = 1, 
  DDA0 = 0, 


  PINA7 = 7, 
  PINA6 = 6, 
  PINA5 = 5, 
  PINA4 = 4, 
  PINA3 = 3, 
  PINA2 = 2, 
  PINA1 = 1, 
  PINA0 = 0, 


  PB7 = 7, 
  PB6 = 6, 
  PB5 = 5, 
  PB4 = 4, 
  PB3 = 3, 
  PB2 = 2, 
  PB1 = 1, 
  PB0 = 0, 


  DDB7 = 7, 
  DDB6 = 6, 
  DDB5 = 5, 
  DDB4 = 4, 
  DDB3 = 3, 
  DDB2 = 2, 
  DDB1 = 1, 
  DDB0 = 0, 


  PINB7 = 7, 
  PINB6 = 6, 
  PINB5 = 5, 
  PINB4 = 4, 
  PINB3 = 3, 
  PINB2 = 2, 
  PINB1 = 1, 
  PINB0 = 0, 


  PC7 = 7, 
  PC6 = 6, 
  PC5 = 5, 
  PC4 = 4, 
  PC3 = 3, 
  PC2 = 2, 
  PC1 = 1, 
  PC0 = 0, 


  DDC7 = 7, 
  DDC6 = 6, 
  DDC5 = 5, 
  DDC4 = 4, 
  DDC3 = 3, 
  DDC2 = 2, 
  DDC1 = 1, 
  DDC0 = 0, 


  PINC7 = 7, 
  PINC6 = 6, 
  PINC5 = 5, 
  PINC4 = 4, 
  PINC3 = 3, 
  PINC2 = 2, 
  PINC1 = 1, 
  PINC0 = 0, 


  PD7 = 7, 
  PD6 = 6, 
  PD5 = 5, 
  PD4 = 4, 
  PD3 = 3, 
  PD2 = 2, 
  PD1 = 1, 
  PD0 = 0, 


  DDD7 = 7, 
  DDD6 = 6, 
  DDD5 = 5, 
  DDD4 = 4, 
  DDD3 = 3, 
  DDD2 = 2, 
  DDD1 = 1, 
  DDD0 = 0, 


  PIND7 = 7, 
  PIND6 = 6, 
  PIND5 = 5, 
  PIND4 = 4, 
  PIND3 = 3, 
  PIND2 = 2, 
  PIND1 = 1, 
  PIND0 = 0, 


  PE7 = 7, 
  PE6 = 6, 
  PE5 = 5, 
  PE4 = 4, 
  PE3 = 3, 
  PE2 = 2, 
  PE1 = 1, 
  PE0 = 0, 


  DDE7 = 7, 
  DDE6 = 6, 
  DDE5 = 5, 
  DDE4 = 4, 
  DDE3 = 3, 
  DDE2 = 2, 
  DDE1 = 1, 
  DDE0 = 0, 


  PINE7 = 7, 
  PINE6 = 6, 
  PINE5 = 5, 
  PINE4 = 4, 
  PINE3 = 3, 
  PINE2 = 2, 
  PINE1 = 1, 
  PINE0 = 0, 


  PF7 = 7, 
  PF6 = 6, 
  PF5 = 5, 
  PF4 = 4, 
  PF3 = 3, 
  PF2 = 2, 
  PF1 = 1, 
  PF0 = 0, 


  DDF7 = 7, 
  DDF6 = 6, 
  DDF5 = 5, 
  DDF4 = 4, 
  DDF3 = 3, 
  DDF2 = 2, 
  DDF1 = 1, 
  DDF0 = 0, 


  PINF7 = 7, 
  PINF6 = 6, 
  PINF5 = 5, 
  PINF4 = 4, 
  PINF3 = 3, 
  PINF2 = 2, 
  PINF1 = 1, 
  PINF0 = 0, 


  PG4 = 4, 
  PG3 = 3, 
  PG2 = 2, 
  PG1 = 1, 
  PG0 = 0, 


  DDG4 = 4, 
  DDG3 = 3, 
  DDG2 = 2, 
  DDG1 = 1, 
  DDG0 = 0, 


  PING4 = 4, 
  PING3 = 3, 
  PING2 = 2, 
  PING1 = 1, 
  PING0 = 0
};
# 45 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/atm128/sim/atm128hardware.h"
uint8_t atm128RegFile[1000][0xa0];
#line 79
static __inline void __nesc_enable_interrupt();



static __inline void __nesc_disable_interrupt();




typedef uint8_t __nesc_atomic_t;



#line 91
__inline __nesc_atomic_t 
__nesc_atomic_start(void )  ;








#line 100
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)  ;
#line 114
typedef uint8_t mcu_power_t  ;





enum __nesc_unnamed4286 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};
# 34 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128Adc.h"
enum __nesc_unnamed4287 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_RSVD, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4288 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4289 {
  ATM128_ADC_SNGL_ADC0 = 0, 
  ATM128_ADC_SNGL_ADC1, 
  ATM128_ADC_SNGL_ADC2, 
  ATM128_ADC_SNGL_ADC3, 
  ATM128_ADC_SNGL_ADC4, 
  ATM128_ADC_SNGL_ADC5, 
  ATM128_ADC_SNGL_ADC6, 
  ATM128_ADC_SNGL_ADC7, 
  ATM128_ADC_DIFF_ADC00_10x, 
  ATM128_ADC_DIFF_ADC10_10x, 
  ATM128_ADC_DIFF_ADC00_200x, 
  ATM128_ADC_DIFF_ADC10_200x, 
  ATM128_ADC_DIFF_ADC22_10x, 
  ATM128_ADC_DIFF_ADC32_10x, 
  ATM128_ADC_DIFF_ADC22_200x, 
  ATM128_ADC_DIFF_ADC32_200x, 
  ATM128_ADC_DIFF_ADC01_1x, 
  ATM128_ADC_DIFF_ADC11_1x, 
  ATM128_ADC_DIFF_ADC21_1x, 
  ATM128_ADC_DIFF_ADC31_1x, 
  ATM128_ADC_DIFF_ADC41_1x, 
  ATM128_ADC_DIFF_ADC51_1x, 
  ATM128_ADC_DIFF_ADC61_1x, 
  ATM128_ADC_DIFF_ADC71_1x, 
  ATM128_ADC_DIFF_ADC02_1x, 
  ATM128_ADC_DIFF_ADC12_1x, 
  ATM128_ADC_DIFF_ADC22_1x, 
  ATM128_ADC_DIFF_ADC32_1x, 
  ATM128_ADC_DIFF_ADC42_1x, 
  ATM128_ADC_DIFF_ADC52_1x, 
  ATM128_ADC_SNGL_1_23, 
  ATM128_ADC_SNGL_GND
};







#line 85
typedef struct __nesc_unnamed4290 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4291 {
  ATM128_ADC_PRESCALE_2 = 0, 
  ATM128_ADC_PRESCALE_2b, 
  ATM128_ADC_PRESCALE_4, 
  ATM128_ADC_PRESCALE_8, 
  ATM128_ADC_PRESCALE_16, 
  ATM128_ADC_PRESCALE_32, 
  ATM128_ADC_PRESCALE_64, 
  ATM128_ADC_PRESCALE_128, 



  ATM128_ADC_PRESCALE
};


enum __nesc_unnamed4292 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4293 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4294 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4295 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4296 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 141
typedef struct __nesc_unnamed4297 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adfr : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;

typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 48 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/platforms/micaz/sim/platform_hardware.h"
enum __nesc_unnamed4298 {
  CHANNEL_RSSI = ATM128_ADC_SNGL_ADC0, 
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1, 
  CHANNEL_BATTERY = ATM128_ADC_SNGL_ADC7, 
  CHANNEL_BANDGAP = 30, 
  CHANNEL_GND = 31, 

  ATM128_TIMER0_TICKSPPS = 32768
};
# 33 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SimMainP.nc"
static void __nesc_nido_initialise(int node);
# 4 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/system/SenderDispatcher.h"
enum __nesc_unnamed4299 {
  TDMA_SLOT = 0, 
  CSMA_SLOT = 1, 
  BEACON_SLOT = 2, 
  NO_SLOT = 0xff
};
# 32 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/types/Leds.h"
enum __nesc_unnamed4300 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 31 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/BeaconSlotP.nc"
enum __nesc_unnamed4301 {
  SIMPLE_TDMA_SYNC = 123
};
# 7 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_lqi.h"
#line 4
typedef struct lqi_dist {
  uint8_t lqi;
  double cdf;
} lqi_dist_t;





#line 9
typedef struct snr_lqi {
  double snr;
  uint8_t numLqi;
  lqi_dist_t *lqi;
} snr_lqi_t;

lqi_dist_t snr24[8] = { { 108, 49.5481927711 }, { 102, 49.9397590361 }, { 103, 50.9036144578 }, { 101, 51.0542168675 }, { 106, 63.7951807229 }, { 107, 92.3192771084 }, { 104, 94.2168674699 }, { 105, 100.0 } };
lqi_dist_t snr25[10] = { { 98, 0.0320204931156 }, { 108, 48.9593339737 }, { 102, 49.1514569324 }, { 103, 49.8879282741 }, { 100, 49.9199487672 }, { 101, 49.9839897534 }, { 106, 64.3932116555 }, { 107, 93.5638808838 }, { 104, 95.58117195 }, { 105, 100.0 } };
lqi_dist_t snr26[8] = { { 108, 49.9569583931 }, { 102, 50.3586800574 }, { 103, 51.1047345768 }, { 101, 51.1334289813 }, { 106, 63.6441893831 }, { 107, 93.68723099 }, { 104, 95.4662840746 }, { 105, 100.0 } };
lqi_dist_t snr27[9] = { { 108, 51.0854243022 }, { 102, 51.2545813363 }, { 103, 51.7056667606 }, { 100, 51.7338595997 }, { 101, 51.7620524387 }, { 106, 64.223287285 }, { 107, 94.051310967 }, { 104, 96.1093882154 }, { 105, 100.0 } };
lqi_dist_t snr20[10] = { { 99, 0.0332667997339 }, { 108, 37.9906852961 }, { 102, 38.5562208916 }, { 103, 40.0864936793 }, { 100, 40.119760479 }, { 101, 40.252827678 }, { 106, 56.3872255489 }, { 107, 89.5542248836 }, { 104, 92.7811044578 }, { 105, 100.0 } };
lqi_dist_t snr21[9] = { { 108, 40.3826787513 }, { 102, 40.953340047 }, { 103, 41.9268210809 }, { 100, 42.061094327 }, { 101, 42.2289358845 }, { 106, 58.4424303458 }, { 107, 89.7616649883 }, { 104, 92.2457200403 }, { 105, 100.0 } };
lqi_dist_t snr22[9] = { { 108, 44.0018966335 }, { 102, 44.4760550024 }, { 103, 45.4243717402 }, { 100, 45.4717875771 }, { 101, 45.6377430062 }, { 106, 60.6685633001 }, { 107, 90.9198672357 }, { 104, 93.6699857752 }, { 105, 100.0 } };
lqi_dist_t snr23[9] = { { 108, 46.3674104826 }, { 102, 46.8085106383 }, { 103, 47.6647638817 }, { 100, 47.7166580176 }, { 101, 47.8204462896 }, { 106, 61.6761805916 }, { 107, 91.64504411 }, { 104, 93.8764919564 }, { 105, 100.0 } };
lqi_dist_t snr28[8] = { { 108, 51.1636636637 }, { 102, 51.4264264264 }, { 103, 51.9144144144 }, { 100, 52.027027027 }, { 106, 64.3393393393 }, { 107, 94.3318318318 }, { 104, 96.2837837838 }, { 105, 100.0 } };
lqi_dist_t snr29[8] = { { 108, 53.434225844 }, { 102, 53.7834691502 }, { 103, 54.4819557625 }, { 101, 54.5401629802 }, { 106, 65.9487776484 }, { 107, 94.3538998836 }, { 104, 95.983701979 }, { 105, 100.0 } };
lqi_dist_t snr0[25] = { { 82, 7.20720720721 }, { 63, 8.10810810811 }, { 64, 10.8108108108 }, { 66, 12.6126126126 }, { 69, 16.2162162162 }, { 68, 19.8198198198 }, { 83, 24.3243243243 }, { 80, 28.8288288288 }, { 81, 34.2342342342 }, { 86, 36.9369369369 }, { 87, 37.8378378378 }, { 84, 40.5405405405 }, { 85, 42.3423423423 }, { 77, 50.4504504505 }, { 76, 60.3603603604 }, { 75, 65.7657657658 }, { 74, 72.0720720721 }, { 73, 74.7747747748 }, { 72, 78.3783783784 }, { 71, 81.0810810811 }, { 70, 81.981981982 }, { 92, 82.8828828829 }, { 79, 90.990990991 }, { 78, 99.0990990991 }, { 52, 100.0 } };
lqi_dist_t snr3[45] = { { 62, 0.0711743772242 }, { 67, 0.391459074733 }, { 60, 0.462633451957 }, { 102, 0.569395017794 }, { 88, 5.62277580071 }, { 89, 10.3558718861 }, { 64, 10.5693950178 }, { 65, 10.7473309609 }, { 66, 10.9964412811 }, { 69, 11.5658362989 }, { 82, 17.0818505338 }, { 83, 22.8825622776 }, { 80, 27.7224199288 }, { 81, 32.4555160142 }, { 86, 37.9003558719 }, { 87, 42.9893238434 }, { 84, 47.9359430605 }, { 85, 53.4163701068 }, { 92, 56.6903914591 }, { 79, 60.7117437722 }, { 104, 60.7473309609 }, { 78, 64.9822064057 }, { 68, 65.6583629893 }, { 99, 66.4412811388 }, { 98, 67.0462633452 }, { 75, 70.0 }, { 74, 71.6370106762 }, { 73, 73.5231316726 }, { 72, 75.0177935943 }, { 71, 76.2989323843 }, { 70, 76.975088968 }, { 91, 80.462633452 }, { 90, 84.2348754448 }, { 100, 84.590747331 }, { 101, 84.6619217082 }, { 95, 86.1209964413 }, { 94, 88.3629893238 }, { 97, 89.3950177936 }, { 96, 90.8540925267 }, { 77, 94.590747331 }, { 59, 94.6263345196 }, { 76, 97.3309608541 }, { 61, 97.4021352313 }, { 93, 99.8932384342 }, { 63, 100.0 } };
lqi_dist_t snr2[42] = { { 67, 1.42984807864 }, { 60, 1.51921358356 }, { 68, 2.32350312779 }, { 88, 4.7363717605 }, { 89, 7.14924039321 }, { 64, 7.86416443253 }, { 65, 8.57908847185 }, { 66, 9.29401251117 }, { 69, 12.0643431635 }, { 82, 18.1411974978 }, { 83, 24.3967828418 }, { 80, 29.2225201072 }, { 81, 33.8695263628 }, { 93, 34.763181412 }, { 87, 38.1590705987 }, { 84, 43.4316353887 }, { 85, 48.436103664 }, { 86, 51.8319928508 }, { 97, 51.9213583557 }, { 96, 52.2788203753 }, { 77, 58.3556747096 }, { 76, 64.164432529 }, { 75, 67.7390527256 }, { 74, 72.3860589812 }, { 73, 75.6032171582 }, { 72, 78.4629133155 }, { 71, 81.8588025022 }, { 70, 83.6461126005 }, { 91, 84.8078641644 }, { 90, 86.6845397676 }, { 100, 86.7739052726 }, { 92, 88.2037533512 }, { 95, 88.5612153709 }, { 94, 88.7399463807 }, { 79, 93.3869526363 }, { 78, 98.927613941 }, { 59, 99.0169794459 }, { 98, 99.1063449508 }, { 56, 99.1957104558 }, { 61, 99.4638069705 }, { 62, 99.7319034853 }, { 63, 100.0 } };
lqi_dist_t snr5[46] = { { 67, 0.153468385513 }, { 102, 1.01289134438 }, { 88, 6.1387354205 }, { 89, 11.6942909761 }, { 64, 11.9091467158 }, { 65, 11.9398403929 }, { 66, 11.97053407 }, { 103, 12.5230202578 }, { 100, 14.4260282382 }, { 83, 18.3241252302 }, { 80, 20.9023941068 }, { 81, 23.6955187231 }, { 86, 28.2688766114 }, { 87, 32.9957028852 }, { 84, 36.4333947207 }, { 85, 40.730509515 }, { 101, 41.9582565991 }, { 63, 42.0196439533 }, { 79, 44.1375076734 }, { 106, 44.1682013505 }, { 82, 47.0841006753 }, { 104, 47.3910374463 }, { 96, 51.6574585635 }, { 68, 51.9950890117 }, { 78, 53.8060159607 }, { 99, 56.0773480663 }, { 98, 59.4536525476 }, { 75, 60.8041743401 }, { 74, 61.4487415592 }, { 73, 61.97053407 }, { 72, 62.6764886433 }, { 71, 63.2903621854 }, { 70, 63.5972989564 }, { 91, 68.9993861265 }, { 90, 74.6777163904 }, { 93, 79.8956414979 }, { 92, 85.8809085328 }, { 95, 90.0859422959 }, { 94, 94.2909760589 }, { 97, 97.6672805402 }, { 105, 97.7593615715 }, { 77, 98.9257213014 }, { 76, 99.7851442603 }, { 56, 99.8158379374 }, { 61, 99.8465316145 }, { 69, 100.0 } };
lqi_dist_t snr7[45] = { { 67, 0.0192012288786 }, { 102, 5.04992319508 }, { 88, 8.25652841782 }, { 89, 12.1927803379 }, { 64, 12.2119815668 }, { 65, 12.2311827957 }, { 66, 12.2503840246 }, { 103, 16.9162826421 }, { 100, 22.1966205837 }, { 83, 24.3855606759 }, { 80, 25.5184331797 }, { 81, 27.1505376344 }, { 86, 30.222734255 }, { 87, 33.2373271889 }, { 84, 35.4070660522 }, { 85, 37.6920122888 }, { 101, 43.1643625192 }, { 63, 43.1835637481 }, { 79, 44.2396313364 }, { 106, 44.8732718894 }, { 82, 46.1789554531 }, { 107, 46.2749615975 }, { 104, 49.5007680492 }, { 105, 51.3248847926 }, { 78, 52.380952381 }, { 99, 57.2196620584 }, { 98, 62.1543778802 }, { 75, 62.5 }, { 74, 62.7112135177 }, { 73, 62.9992319508 }, { 72, 63.2680491551 }, { 71, 63.3448540707 }, { 70, 63.4792626728 }, { 91, 67.7995391705 }, { 90, 72.1006144393 }, { 93, 76.3056835637 }, { 92, 80.2995391705 }, { 95, 84.8502304147 }, { 94, 89.1321044547 }, { 97, 93.9132104455 }, { 96, 98.732718894 }, { 77, 99.366359447 }, { 59, 99.3855606759 }, { 76, 99.9615975422 }, { 69, 100.0 } };
lqi_dist_t snr6[45] = { { 67, 0.128238009746 }, { 102, 3.35983585535 }, { 88, 6.82226211849 }, { 89, 10.0538599641 }, { 64, 10.1820979738 }, { 65, 10.3103359836 }, { 66, 10.4642215953 }, { 103, 12.8238009746 }, { 82, 15.1064375481 }, { 83, 17.5173121313 }, { 80, 19.4152346756 }, { 81, 21.9286996666 }, { 86, 24.4934598615 }, { 93, 28.5714285714 }, { 84, 30.7771223391 }, { 85, 33.7778917671 }, { 101, 37.4967940498 }, { 79, 39.2151833804 }, { 95, 44.3959989741 }, { 87, 46.8325211593 }, { 104, 47.986663247 }, { 105, 48.473967684 }, { 68, 48.6535008977 }, { 78, 50.2436522185 }, { 99, 55.5270582201 }, { 98, 60.2462169787 }, { 75, 61.2977686586 }, { 74, 62.144139523 }, { 73, 62.9905103873 }, { 72, 63.8112336497 }, { 71, 64.2472428828 }, { 70, 64.4780713003 }, { 91, 68.0430879713 }, { 90, 71.5055142344 }, { 100, 76.6093870223 }, { 92, 80.3795845088 }, { 106, 80.4821749166 }, { 94, 85.4321620928 }, { 97, 91.5106437548 }, { 96, 96.9222877661 }, { 77, 98.2816106694 }, { 76, 99.6665811747 }, { 61, 99.7178763786 }, { 62, 99.7435239805 }, { 69, 100.0 } };
lqi_dist_t snr8[34] = { { 102, 6.99633699634 }, { 88, 9.06593406593 }, { 89, 11.0073260073 }, { 103, 17.9304029304 }, { 82, 18.2783882784 }, { 83, 18.7912087912 }, { 80, 19.0476190476 }, { 81, 19.2857142857 }, { 86, 20.3663003663 }, { 87, 22.0146520147 }, { 84, 22.7106227106 }, { 85, 23.6813186813 }, { 101, 31.0805860806 }, { 79, 31.1721611722 }, { 106, 33.0769230769 }, { 107, 33.2967032967 }, { 104, 39.1941391941 }, { 105, 43.3882783883 }, { 78, 43.4615384615 }, { 100, 50.293040293 }, { 99, 57.2527472527 }, { 98, 64.0842490842 }, { 75, 64.1208791209 }, { 74, 64.1391941392 }, { 91, 67.3626373626 }, { 90, 70.4761904762 }, { 93, 74.4505494505 }, { 92, 77.9120879121 }, { 95, 83.4249084249 }, { 94, 88.3882783883 }, { 97, 94.1025641026 }, { 96, 99.8901098901 }, { 77, 99.9816849817 }, { 76, 100.0 } };
lqi_dist_t snr11[20] = { { 91, 0.0598444045482 }, { 92, 0.179533213645 }, { 108, 0.239377618193 }, { 95, 0.957510472771 }, { 93, 1.25673249551 }, { 94, 1.7354877319 }, { 99, 6.40335128665 }, { 98, 8.73728306403 }, { 96, 9.99401555955 }, { 97, 11.6696588869 }, { 88, 11.7295032914 }, { 90, 11.7594254937 }, { 102, 24.7755834829 }, { 103, 40.9634949132 }, { 100, 47.0676241771 }, { 101, 55.5954518253 }, { 106, 65.4398563734 }, { 107, 67.9533213645 }, { 104, 84.5302214243 }, { 105, 100.0 } };
lqi_dist_t snr10[26] = { { 102, 10.8441850022 }, { 88, 11.2258643916 }, { 89, 11.5401885945 }, { 103, 23.3497979344 }, { 100, 32.8244274809 }, { 83, 32.8693309385 }, { 86, 32.9591378536 }, { 87, 33.2734620566 }, { 84, 33.3857207005 }, { 85, 33.4979793444 }, { 101, 43.578805568 }, { 79, 43.6012572968 }, { 106, 47.4854063763 }, { 107, 48.1814099686 }, { 104, 57.7009429726 }, { 105, 65.626403233 }, { 99, 74.5172878312 }, { 98, 81.2079030085 }, { 91, 81.9712617872 }, { 90, 82.5774584643 }, { 93, 84.1041760216 }, { 92, 85.4737314773 }, { 95, 88.6394252357 }, { 94, 90.7498877414 }, { 97, 96.273013022 }, { 96, 100.0 } };
lqi_dist_t snr13[13] = { { 96, 0.0612745098039 }, { 99, 0.816993464052 }, { 98, 1.14379084967 }, { 108, 2.51225490196 }, { 97, 2.61437908497 }, { 102, 7.96568627451 }, { 103, 16.5645424837 }, { 100, 17.7696078431 }, { 101, 20.1593137255 }, { 106, 45.5882352941 }, { 107, 63.8684640523 }, { 104, 78.8807189542 }, { 105, 100.0 } };
lqi_dist_t snr12[16] = { { 108, 0.241911097672 }, { 95, 0.423344420925 }, { 93, 0.483822195343 }, { 94, 0.514061082552 }, { 99, 1.96552766858 }, { 98, 2.6912609616 }, { 96, 2.81221651043 }, { 97, 3.26579981857 }, { 102, 10.9767160568 }, { 103, 23.4351375869 }, { 100, 26.0659207741 }, { 101, 30.9948593892 }, { 106, 51.1944360448 }, { 107, 60.5080133051 }, { 104, 78.7420622921 }, { 105, 100.0 } };
lqi_dist_t snr15[11] = { { 99, 0.064116264159 }, { 98, 0.085488352212 }, { 108, 6.79632400085 }, { 102, 8.20688181235 }, { 103, 11.8615088694 }, { 100, 12.2462064544 }, { 101, 12.9728574482 }, { 106, 39.0468048728 }, { 107, 75.1870057705 }, { 104, 83.1160504381 }, { 105, 100.0 } };
lqi_dist_t snr14[14] = { { 96, 0.0368935620734 }, { 93, 0.0553403431101 }, { 99, 0.239808153477 }, { 98, 0.442722744881 }, { 108, 3.37576092972 }, { 97, 3.41265449179 }, { 102, 6.32724589559 }, { 103, 12.543811105 }, { 100, 13.3185759085 }, { 101, 14.7389780483 }, { 106, 41.8926397344 }, { 107, 69.9501936912 }, { 104, 81.0367090943 }, { 105, 100.0 } };
lqi_dist_t snr17[11] = { { 99, 0.0569962952408 }, { 98, 0.071245369051 }, { 108, 24.5654032488 }, { 102, 25.2208606441 }, { 103, 27.0732402394 }, { 100, 27.2014819037 }, { 101, 27.6004559704 }, { 106, 47.976631519 }, { 107, 87.1900826446 }, { 104, 91.1655742377 }, { 105, 100.0 } };
lqi_dist_t snr16[11] = { { 99, 0.0779271381259 }, { 98, 0.116890707189 }, { 108, 15.0983830119 }, { 102, 16.0335086694 }, { 103, 18.9362945646 }, { 100, 19.0726670563 }, { 101, 19.4038573933 }, { 106, 41.3987921294 }, { 107, 81.9793493084 }, { 104, 87.6680303916 }, { 105, 100.0 } };
lqi_dist_t snr19[10] = { { 99, 0.0210039907582 }, { 108, 35.1816845201 }, { 102, 35.622768326 }, { 103, 37.0930476791 }, { 100, 37.1560596513 }, { 101, 37.3871035497 }, { 106, 53.8542323041 }, { 107, 88.615837009 }, { 104, 91.8504515858 }, { 105, 100.0 } };
lqi_dist_t snr18[11] = { { 99, 0.0137080191912 }, { 98, 0.0274160383825 }, { 108, 30.4043865661 }, { 102, 31.1583276217 }, { 103, 32.7484578478 }, { 100, 32.8169979438 }, { 101, 32.9403701165 }, { 106, 50.6374228924 }, { 107, 88.2933516107 }, { 104, 91.8026045236 }, { 105, 100.0 } };
lqi_dist_t snr31[3] = { { 108, 52.9411764706 }, { 106, 70.5882352941 }, { 107, 100.0 } };
lqi_dist_t snr30[7] = { { 108, 55.9880239521 }, { 103, 56.4371257485 }, { 101, 56.5868263473 }, { 106, 69.6107784431 }, { 107, 94.4610778443 }, { 104, 96.2574850299 }, { 105, 100.0 } };

snr_lqi_t allSnr[29] = { { 24, 8, snr24 }, { 25, 10, snr25 }, { 26, 8, snr26 }, { 27, 9, snr27 }, { 20, 10, snr20 }, { 21, 9, snr21 }, { 22, 9, snr22 }, { 23, 9, snr23 }, { 28, 8, snr28 }, { 29, 8, snr29 }, { 0, 25, snr0 }, { 3, 45, snr3 }, { 2, 42, snr2 }, { 5, 46, snr5 }, { 7, 45, snr7 }, { 6, 45, snr6 }, { 8, 34, snr8 }, { 11, 20, snr11 }, { 10, 26, snr10 }, { 13, 13, snr13 }, { 12, 16, snr12 }, { 15, 11, snr15 }, { 14, 14, snr14 }, { 17, 11, snr17 }, { 16, 11, snr16 }, { 19, 10, snr19 }, { 18, 11, snr18 }, { 31, 3, snr31 }, { 30, 7, snr30 } };
uint8_t allSnr_len = 29;
# 5 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_lqi.c"
static uint8_t bi_search(lqi_dist_t *lqi, uint8_t low_i, uint8_t high_i, uint8_t coin);
#line 19
uint8_t sim_lqi_generate(double SNR)   ;
# 255 "/usr/include/unistd.h" 3
typedef __useconds_t useconds_t;
#line 274
typedef __socklen_t socklen_t;
# 24 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
enum __nesc_unnamed4302 {

  _PC_LINK_MAX, 

  _PC_MAX_CANON, 

  _PC_MAX_INPUT, 

  _PC_NAME_MAX, 

  _PC_PATH_MAX, 

  _PC_PIPE_BUF, 

  _PC_CHOWN_RESTRICTED, 

  _PC_NO_TRUNC, 

  _PC_VDISABLE, 

  _PC_SYNC_IO, 

  _PC_ASYNC_IO, 

  _PC_PRIO_IO, 

  _PC_SOCK_MAXBUF, 

  _PC_FILESIZEBITS, 

  _PC_REC_INCR_XFER_SIZE, 

  _PC_REC_MAX_XFER_SIZE, 

  _PC_REC_MIN_XFER_SIZE, 

  _PC_REC_XFER_ALIGN, 

  _PC_ALLOC_SIZE_MIN, 

  _PC_SYMLINK_MAX, 

  _PC_2_SYMLINKS
};



enum __nesc_unnamed4303 {

  _SC_ARG_MAX, 

  _SC_CHILD_MAX, 

  _SC_CLK_TCK, 

  _SC_NGROUPS_MAX, 

  _SC_OPEN_MAX, 

  _SC_STREAM_MAX, 

  _SC_TZNAME_MAX, 

  _SC_JOB_CONTROL, 

  _SC_SAVED_IDS, 

  _SC_REALTIME_SIGNALS, 

  _SC_PRIORITY_SCHEDULING, 

  _SC_TIMERS, 

  _SC_ASYNCHRONOUS_IO, 

  _SC_PRIORITIZED_IO, 

  _SC_SYNCHRONIZED_IO, 

  _SC_FSYNC, 

  _SC_MAPPED_FILES, 

  _SC_MEMLOCK, 

  _SC_MEMLOCK_RANGE, 

  _SC_MEMORY_PROTECTION, 

  _SC_MESSAGE_PASSING, 

  _SC_SEMAPHORES, 

  _SC_SHARED_MEMORY_OBJECTS, 

  _SC_AIO_LISTIO_MAX, 

  _SC_AIO_MAX, 

  _SC_AIO_PRIO_DELTA_MAX, 

  _SC_DELAYTIMER_MAX, 

  _SC_MQ_OPEN_MAX, 

  _SC_MQ_PRIO_MAX, 

  _SC_VERSION, 

  _SC_PAGESIZE, 


  _SC_RTSIG_MAX, 

  _SC_SEM_NSEMS_MAX, 

  _SC_SEM_VALUE_MAX, 

  _SC_SIGQUEUE_MAX, 

  _SC_TIMER_MAX, 




  _SC_BC_BASE_MAX, 

  _SC_BC_DIM_MAX, 

  _SC_BC_SCALE_MAX, 

  _SC_BC_STRING_MAX, 

  _SC_COLL_WEIGHTS_MAX, 

  _SC_EQUIV_CLASS_MAX, 

  _SC_EXPR_NEST_MAX, 

  _SC_LINE_MAX, 

  _SC_RE_DUP_MAX, 

  _SC_CHARCLASS_NAME_MAX, 


  _SC_2_VERSION, 

  _SC_2_C_BIND, 

  _SC_2_C_DEV, 

  _SC_2_FORT_DEV, 

  _SC_2_FORT_RUN, 

  _SC_2_SW_DEV, 

  _SC_2_LOCALEDEF, 


  _SC_PII, 

  _SC_PII_XTI, 

  _SC_PII_SOCKET, 

  _SC_PII_INTERNET, 

  _SC_PII_OSI, 

  _SC_POLL, 

  _SC_SELECT, 

  _SC_UIO_MAXIOV, 

  _SC_IOV_MAX = _SC_UIO_MAXIOV, 

  _SC_PII_INTERNET_STREAM, 

  _SC_PII_INTERNET_DGRAM, 

  _SC_PII_OSI_COTS, 

  _SC_PII_OSI_CLTS, 

  _SC_PII_OSI_M, 

  _SC_T_IOV_MAX, 



  _SC_THREADS, 

  _SC_THREAD_SAFE_FUNCTIONS, 

  _SC_GETGR_R_SIZE_MAX, 

  _SC_GETPW_R_SIZE_MAX, 

  _SC_LOGIN_NAME_MAX, 

  _SC_TTY_NAME_MAX, 

  _SC_THREAD_DESTRUCTOR_ITERATIONS, 

  _SC_THREAD_KEYS_MAX, 

  _SC_THREAD_STACK_MIN, 

  _SC_THREAD_THREADS_MAX, 

  _SC_THREAD_ATTR_STACKADDR, 

  _SC_THREAD_ATTR_STACKSIZE, 

  _SC_THREAD_PRIORITY_SCHEDULING, 

  _SC_THREAD_PRIO_INHERIT, 

  _SC_THREAD_PRIO_PROTECT, 

  _SC_THREAD_PROCESS_SHARED, 


  _SC_NPROCESSORS_CONF, 

  _SC_NPROCESSORS_ONLN, 

  _SC_PHYS_PAGES, 

  _SC_AVPHYS_PAGES, 

  _SC_ATEXIT_MAX, 

  _SC_PASS_MAX, 


  _SC_XOPEN_VERSION, 

  _SC_XOPEN_XCU_VERSION, 

  _SC_XOPEN_UNIX, 

  _SC_XOPEN_CRYPT, 

  _SC_XOPEN_ENH_I18N, 

  _SC_XOPEN_SHM, 


  _SC_2_CHAR_TERM, 

  _SC_2_C_VERSION, 

  _SC_2_UPE, 


  _SC_XOPEN_XPG2, 

  _SC_XOPEN_XPG3, 

  _SC_XOPEN_XPG4, 


  _SC_CHAR_BIT, 

  _SC_CHAR_MAX, 

  _SC_CHAR_MIN, 

  _SC_INT_MAX, 

  _SC_INT_MIN, 

  _SC_LONG_BIT, 

  _SC_WORD_BIT, 

  _SC_MB_LEN_MAX, 

  _SC_NZERO, 

  _SC_SSIZE_MAX, 

  _SC_SCHAR_MAX, 

  _SC_SCHAR_MIN, 

  _SC_SHRT_MAX, 

  _SC_SHRT_MIN, 

  _SC_UCHAR_MAX, 

  _SC_UINT_MAX, 

  _SC_ULONG_MAX, 

  _SC_USHRT_MAX, 


  _SC_NL_ARGMAX, 

  _SC_NL_LANGMAX, 

  _SC_NL_MSGMAX, 

  _SC_NL_NMAX, 

  _SC_NL_SETMAX, 

  _SC_NL_TEXTMAX, 


  _SC_XBS5_ILP32_OFF32, 

  _SC_XBS5_ILP32_OFFBIG, 

  _SC_XBS5_LP64_OFF64, 

  _SC_XBS5_LPBIG_OFFBIG, 


  _SC_XOPEN_LEGACY, 

  _SC_XOPEN_REALTIME, 

  _SC_XOPEN_REALTIME_THREADS, 


  _SC_ADVISORY_INFO, 

  _SC_BARRIERS, 

  _SC_BASE, 

  _SC_C_LANG_SUPPORT, 

  _SC_C_LANG_SUPPORT_R, 

  _SC_CLOCK_SELECTION, 

  _SC_CPUTIME, 

  _SC_THREAD_CPUTIME, 

  _SC_DEVICE_IO, 

  _SC_DEVICE_SPECIFIC, 

  _SC_DEVICE_SPECIFIC_R, 

  _SC_FD_MGMT, 

  _SC_FIFO, 

  _SC_PIPE, 

  _SC_FILE_ATTRIBUTES, 

  _SC_FILE_LOCKING, 

  _SC_FILE_SYSTEM, 

  _SC_MONOTONIC_CLOCK, 

  _SC_MULTI_PROCESS, 

  _SC_SINGLE_PROCESS, 

  _SC_NETWORKING, 

  _SC_READER_WRITER_LOCKS, 

  _SC_SPIN_LOCKS, 

  _SC_REGEXP, 

  _SC_REGEX_VERSION, 

  _SC_SHELL, 

  _SC_SIGNALS, 

  _SC_SPAWN, 

  _SC_SPORADIC_SERVER, 

  _SC_THREAD_SPORADIC_SERVER, 

  _SC_SYSTEM_DATABASE, 

  _SC_SYSTEM_DATABASE_R, 

  _SC_TIMEOUTS, 

  _SC_TYPED_MEMORY_OBJECTS, 

  _SC_USER_GROUPS, 

  _SC_USER_GROUPS_R, 

  _SC_2_PBS, 

  _SC_2_PBS_ACCOUNTING, 

  _SC_2_PBS_LOCATE, 

  _SC_2_PBS_MESSAGE, 

  _SC_2_PBS_TRACK, 

  _SC_SYMLOOP_MAX, 

  _SC_STREAMS, 

  _SC_2_PBS_CHECKPOINT, 


  _SC_V6_ILP32_OFF32, 

  _SC_V6_ILP32_OFFBIG, 

  _SC_V6_LP64_OFF64, 

  _SC_V6_LPBIG_OFFBIG, 


  _SC_HOST_NAME_MAX, 

  _SC_TRACE, 

  _SC_TRACE_EVENT_FILTER, 

  _SC_TRACE_INHERIT, 

  _SC_TRACE_LOG, 


  _SC_LEVEL1_ICACHE_SIZE, 

  _SC_LEVEL1_ICACHE_ASSOC, 

  _SC_LEVEL1_ICACHE_LINESIZE, 

  _SC_LEVEL1_DCACHE_SIZE, 

  _SC_LEVEL1_DCACHE_ASSOC, 

  _SC_LEVEL1_DCACHE_LINESIZE, 

  _SC_LEVEL2_CACHE_SIZE, 

  _SC_LEVEL2_CACHE_ASSOC, 

  _SC_LEVEL2_CACHE_LINESIZE, 

  _SC_LEVEL3_CACHE_SIZE, 

  _SC_LEVEL3_CACHE_ASSOC, 

  _SC_LEVEL3_CACHE_LINESIZE, 

  _SC_LEVEL4_CACHE_SIZE, 

  _SC_LEVEL4_CACHE_ASSOC, 

  _SC_LEVEL4_CACHE_LINESIZE, 



  _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50, 

  _SC_RAW_SOCKETS, 


  _SC_V7_ILP32_OFF32, 

  _SC_V7_ILP32_OFFBIG, 

  _SC_V7_LP64_OFF64, 

  _SC_V7_LPBIG_OFFBIG, 


  _SC_SS_REPL_MAX, 


  _SC_TRACE_EVENT_NAME_MAX, 

  _SC_TRACE_NAME_MAX, 

  _SC_TRACE_SYS_MAX, 

  _SC_TRACE_USER_EVENT_MAX, 


  _SC_XOPEN_STREAMS, 


  _SC_THREAD_ROBUST_PRIO_INHERIT, 

  _SC_THREAD_ROBUST_PRIO_PROTECT
};



enum __nesc_unnamed4304 {

  _CS_PATH, 


  _CS_V6_WIDTH_RESTRICTED_ENVS, 



  _CS_GNU_LIBC_VERSION, 

  _CS_GNU_LIBPTHREAD_VERSION, 


  _CS_V5_WIDTH_RESTRICTED_ENVS, 



  _CS_V7_WIDTH_RESTRICTED_ENVS, 



  _CS_LFS_CFLAGS = 1000, 

  _CS_LFS_LDFLAGS, 

  _CS_LFS_LIBS, 

  _CS_LFS_LINTFLAGS, 

  _CS_LFS64_CFLAGS, 

  _CS_LFS64_LDFLAGS, 

  _CS_LFS64_LIBS, 

  _CS_LFS64_LINTFLAGS, 


  _CS_XBS5_ILP32_OFF32_CFLAGS = 1100, 

  _CS_XBS5_ILP32_OFF32_LDFLAGS, 

  _CS_XBS5_ILP32_OFF32_LIBS, 

  _CS_XBS5_ILP32_OFF32_LINTFLAGS, 

  _CS_XBS5_ILP32_OFFBIG_CFLAGS, 

  _CS_XBS5_ILP32_OFFBIG_LDFLAGS, 

  _CS_XBS5_ILP32_OFFBIG_LIBS, 

  _CS_XBS5_ILP32_OFFBIG_LINTFLAGS, 

  _CS_XBS5_LP64_OFF64_CFLAGS, 

  _CS_XBS5_LP64_OFF64_LDFLAGS, 

  _CS_XBS5_LP64_OFF64_LIBS, 

  _CS_XBS5_LP64_OFF64_LINTFLAGS, 

  _CS_XBS5_LPBIG_OFFBIG_CFLAGS, 

  _CS_XBS5_LPBIG_OFFBIG_LDFLAGS, 

  _CS_XBS5_LPBIG_OFFBIG_LIBS, 

  _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS, 


  _CS_POSIX_V6_ILP32_OFF32_CFLAGS, 

  _CS_POSIX_V6_ILP32_OFF32_LDFLAGS, 

  _CS_POSIX_V6_ILP32_OFF32_LIBS, 

  _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS, 

  _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS, 

  _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS, 

  _CS_POSIX_V6_ILP32_OFFBIG_LIBS, 

  _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS, 

  _CS_POSIX_V6_LP64_OFF64_CFLAGS, 

  _CS_POSIX_V6_LP64_OFF64_LDFLAGS, 

  _CS_POSIX_V6_LP64_OFF64_LIBS, 

  _CS_POSIX_V6_LP64_OFF64_LINTFLAGS, 

  _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS, 

  _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS, 

  _CS_POSIX_V6_LPBIG_OFFBIG_LIBS, 

  _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS, 


  _CS_POSIX_V7_ILP32_OFF32_CFLAGS, 

  _CS_POSIX_V7_ILP32_OFF32_LDFLAGS, 

  _CS_POSIX_V7_ILP32_OFF32_LIBS, 

  _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS, 

  _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS, 

  _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS, 

  _CS_POSIX_V7_ILP32_OFFBIG_LIBS, 

  _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS, 

  _CS_POSIX_V7_LP64_OFF64_CFLAGS, 

  _CS_POSIX_V7_LP64_OFF64_LDFLAGS, 

  _CS_POSIX_V7_LP64_OFF64_LIBS, 

  _CS_POSIX_V7_LP64_OFF64_LINTFLAGS, 

  _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS, 

  _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS, 

  _CS_POSIX_V7_LPBIG_OFFBIG_LIBS, 

  _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS, 


  _CS_V6_ENV, 

  _CS_V7_ENV
};
typedef T32khz TestNetworkC__Alarm__precision_tag;
typedef uint32_t TestNetworkC__Alarm__size_type;
typedef uint16_t PureTDMASchedulerP__ReadRssi__val_t;
typedef TestNetworkMsg *PureTDMASchedulerP__HIforwardQ__t;
typedef TestNetworkMsg *PureTDMASchedulerP__LOforwardQ__t;
typedef T32khz PureTDMASchedulerP__Txdelay__precision_tag;
typedef uint16_t PureTDMASchedulerP__Txdelay__size_type;
typedef T32khz PureTDMASchedulerP__CCATxdelay__precision_tag;
typedef uint16_t PureTDMASchedulerP__CCATxdelay__size_type;
typedef T32khz /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__Alarm__precision_tag;
typedef uint16_t /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__Alarm__size_type;
typedef TMicro /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__Alarm__precision_tag;
typedef uint16_t /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__Alarm__size_type;
typedef TMicro /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__Counter__precision_tag;
typedef uint16_t /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__Counter__size_type;
typedef TMicro CounterMicro16P__Counter__precision_tag;
typedef uint16_t CounterMicro16P__Counter__size_type;
typedef T32khz /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__to_precision_tag;
typedef uint16_t /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__to_size_type;
typedef TMicro /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__from_precision_tag;
typedef uint16_t /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__from_size_type;
typedef /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__to_precision_tag /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__Alarm__precision_tag;
typedef /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__to_size_type /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__Alarm__size_type;
typedef /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__from_precision_tag /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__precision_tag;
typedef /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__from_size_type /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__size_type;
typedef /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__to_precision_tag /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__Counter__precision_tag;
typedef /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__to_size_type /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__Counter__size_type;
typedef T32khz /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__to_precision_tag;
typedef uint16_t /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__to_size_type;
typedef TMicro /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__from_precision_tag;
typedef uint16_t /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__from_size_type;
typedef uint8_t /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__upper_count_type;
typedef /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__from_precision_tag /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__CounterFrom__precision_tag;
typedef /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__from_size_type /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__CounterFrom__size_type;
typedef /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__to_precision_tag /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__Counter__precision_tag;
typedef /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__to_size_type /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__Counter__size_type;
typedef T32khz GenericSlotterP__Alarm__precision_tag;
typedef uint32_t GenericSlotterP__Alarm__size_type;
typedef TMicro /*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__Alarm__precision_tag;
typedef uint16_t /*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__Alarm__size_type;
typedef TMicro /*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__Counter__precision_tag;
typedef uint16_t /*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__Counter__size_type;
typedef T32khz /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__to_precision_tag;
typedef uint32_t /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__to_size_type;
typedef TMicro /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__from_precision_tag;
typedef uint16_t /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__from_size_type;
typedef /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__to_precision_tag /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__Alarm__precision_tag;
typedef /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__to_size_type /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__Alarm__size_type;
typedef /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__from_precision_tag /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__AlarmFrom__precision_tag;
typedef /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__from_size_type /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__AlarmFrom__size_type;
typedef /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__to_precision_tag /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__Counter__precision_tag;
typedef /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__to_size_type /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__Counter__size_type;
typedef T32khz /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__to_precision_tag;
typedef uint32_t /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__to_size_type;
typedef TMicro /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__from_precision_tag;
typedef uint16_t /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__from_size_type;
typedef uint16_t /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__upper_count_type;
typedef /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__from_precision_tag /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__CounterFrom__precision_tag;
typedef /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__from_size_type /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__CounterFrom__size_type;
typedef /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__to_precision_tag /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__Counter__precision_tag;
typedef /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__to_size_type /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__Counter__size_type;
typedef T32khz BeaconSlotP__SyncAlarm__precision_tag;
typedef uint32_t BeaconSlotP__SyncAlarm__size_type;
typedef TMicro /*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__Alarm__precision_tag;
typedef uint16_t /*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__Alarm__size_type;
typedef TMicro /*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__Counter__precision_tag;
typedef uint16_t /*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__Counter__size_type;
typedef T32khz /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__to_precision_tag;
typedef uint32_t /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__to_size_type;
typedef TMicro /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__from_precision_tag;
typedef uint16_t /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__from_size_type;
typedef /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__to_precision_tag /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__Alarm__precision_tag;
typedef /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__to_size_type /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__Alarm__size_type;
typedef /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__from_precision_tag /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__AlarmFrom__precision_tag;
typedef /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__from_size_type /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__AlarmFrom__size_type;
typedef /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__to_precision_tag /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__Counter__precision_tag;
typedef /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__to_size_type /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__Counter__size_type;
typedef TMicro /*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__Alarm__precision_tag;
typedef uint16_t /*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__Alarm__size_type;
typedef TMicro /*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__Counter__precision_tag;
typedef uint16_t /*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__Counter__size_type;
typedef T32khz /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__to_precision_tag;
typedef uint16_t /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__to_size_type;
typedef TMicro /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__from_precision_tag;
typedef uint16_t /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__from_size_type;
typedef /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__to_precision_tag /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__Alarm__precision_tag;
typedef /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__to_size_type /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__Alarm__size_type;
typedef /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__from_precision_tag /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__AlarmFrom__precision_tag;
typedef /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__from_size_type /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__AlarmFrom__size_type;
typedef /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__to_precision_tag /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__Counter__precision_tag;
typedef /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__to_size_type /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__Counter__size_type;
typedef TMicro /*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__Alarm__precision_tag;
typedef uint16_t /*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__Alarm__size_type;
typedef TMicro /*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__Counter__precision_tag;
typedef uint16_t /*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__Counter__size_type;
typedef T32khz /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__to_precision_tag;
typedef uint16_t /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__to_size_type;
typedef TMicro /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__from_precision_tag;
typedef uint16_t /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__from_size_type;
typedef /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__to_precision_tag /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__Alarm__precision_tag;
typedef /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__to_size_type /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__Alarm__size_type;
typedef /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__from_precision_tag /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__AlarmFrom__precision_tag;
typedef /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__from_size_type /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__AlarmFrom__size_type;
typedef /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__to_precision_tag /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__Counter__precision_tag;
typedef /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__to_size_type /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__Counter__size_type;
typedef uint16_t CpmModelC__ReadRssi__val_t;
typedef TestNetworkMsg */*PureTDMASchedulerC.HIQueueC*/QueueC__0__queue_t;
typedef /*PureTDMASchedulerC.HIQueueC*/QueueC__0__queue_t /*PureTDMASchedulerC.HIQueueC*/QueueC__0__Queue__t;
typedef TestNetworkMsg */*PureTDMASchedulerC.LOQueueC*/QueueC__1__queue_t;
typedef /*PureTDMASchedulerC.LOQueueC*/QueueC__1__queue_t /*PureTDMASchedulerC.LOQueueC*/QueueC__1__Queue__t;
enum AMQueueP____nesc_unnamed4305 {
  AMQueueP__NUM_CLIENTS = 1U
};
typedef TMicro /*TestNetworkAppC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__5__Alarm__precision_tag;
typedef uint16_t /*TestNetworkAppC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__5__Alarm__size_type;
typedef TMicro /*TestNetworkAppC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__5__Counter__precision_tag;
typedef uint16_t /*TestNetworkAppC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__5__Counter__size_type;
typedef T32khz /*TestNetworkAppC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__5__to_precision_tag;
typedef uint32_t /*TestNetworkAppC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__5__to_size_type;
typedef TMicro /*TestNetworkAppC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__5__from_precision_tag;
typedef uint16_t /*TestNetworkAppC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__5__from_size_type;
typedef /*TestNetworkAppC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__5__to_precision_tag /*TestNetworkAppC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__5__Alarm__precision_tag;
typedef /*TestNetworkAppC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__5__to_size_type /*TestNetworkAppC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__5__Alarm__size_type;
typedef /*TestNetworkAppC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__5__from_precision_tag /*TestNetworkAppC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__5__AlarmFrom__precision_tag;
typedef /*TestNetworkAppC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__5__from_size_type /*TestNetworkAppC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__5__AlarmFrom__size_type;
typedef /*TestNetworkAppC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__5__to_precision_tag /*TestNetworkAppC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__5__Counter__precision_tag;
typedef /*TestNetworkAppC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__5__to_size_type /*TestNetworkAppC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__5__Counter__size_type;
typedef T32khz /*TestNetworkAppC.SSTdmaSlotSenderC.SSTdmaSlotSenderP*/SSTdmaSlotSenderP__0__Alarm__precision_tag;
typedef uint32_t /*TestNetworkAppC.SSTdmaSlotSenderC.SSTdmaSlotSenderP*/SSTdmaSlotSenderP__0__Alarm__size_type;
typedef TMicro /*TestNetworkAppC.SSTdmaSlotSenderC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__6__Alarm__precision_tag;
typedef uint16_t /*TestNetworkAppC.SSTdmaSlotSenderC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__6__Alarm__size_type;
typedef TMicro /*TestNetworkAppC.SSTdmaSlotSenderC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__6__Counter__precision_tag;
typedef uint16_t /*TestNetworkAppC.SSTdmaSlotSenderC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__6__Counter__size_type;
typedef T32khz /*TestNetworkAppC.SSTdmaSlotSenderC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__6__to_precision_tag;
typedef uint32_t /*TestNetworkAppC.SSTdmaSlotSenderC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__6__to_size_type;
typedef TMicro /*TestNetworkAppC.SSTdmaSlotSenderC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__6__from_precision_tag;
typedef uint16_t /*TestNetworkAppC.SSTdmaSlotSenderC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__6__from_size_type;
typedef /*TestNetworkAppC.SSTdmaSlotSenderC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__6__to_precision_tag /*TestNetworkAppC.SSTdmaSlotSenderC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__6__Alarm__precision_tag;
typedef /*TestNetworkAppC.SSTdmaSlotSenderC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__6__to_size_type /*TestNetworkAppC.SSTdmaSlotSenderC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__6__Alarm__size_type;
typedef /*TestNetworkAppC.SSTdmaSlotSenderC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__6__from_precision_tag /*TestNetworkAppC.SSTdmaSlotSenderC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__6__AlarmFrom__precision_tag;
typedef /*TestNetworkAppC.SSTdmaSlotSenderC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__6__from_size_type /*TestNetworkAppC.SSTdmaSlotSenderC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__6__AlarmFrom__size_type;
typedef /*TestNetworkAppC.SSTdmaSlotSenderC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__6__to_precision_tag /*TestNetworkAppC.SSTdmaSlotSenderC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__6__Counter__precision_tag;
typedef /*TestNetworkAppC.SSTdmaSlotSenderC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__6__to_size_type /*TestNetworkAppC.SSTdmaSlotSenderC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__6__Counter__size_type;
typedef uint16_t RandomMlcgC__SeedInit__parameter;
# 53 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static void TestNetworkC__CC2420Config__syncDone(error_t error);
# 49 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static void TestNetworkC__Boot__booted(void );
# 67 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



TestNetworkC__AMReceive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 92 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void TestNetworkC__RadioControl__startDone(error_t error);
#line 117
static void TestNetworkC__RadioControl__stopDone(error_t error);
# 99 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void TestNetworkC__Send__sendDone(
#line 92
message_t * msg, 






error_t error);
# 67 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void TestNetworkC__Alarm__fired(void );
# 67 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



TestNetworkC__Receive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 51 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
#line 51
static error_t MotePlatformP__PlatformInit__init(void );
# 35 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );





static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );





static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );



static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void );
#line 30
static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void );
# 51 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t MeasureClockC__Init__init(void );
# 56 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SimSchedulerBasicP__TaskBasic__postTask(
# 41 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
uint8_t arg_0x2baa93ec9328);
# 64 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SimSchedulerBasicP__TaskBasic__default__runTask(
# 41 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
uint8_t arg_0x2baa93ec9328);
# 46 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
static void SimSchedulerBasicP__Scheduler__init(void );







static bool SimSchedulerBasicP__Scheduler__runNextTask(void );
# 36 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SimMote.nc"
static void SimMoteP__SimMote__setEuid(long long int euid);
#line 54
static void SimMoteP__SimMote__enableIdle(void );
#line 39
static int SimMoteP__SimMote__getVariableInfo(char *name, void **ptr, size_t *len);









static void SimMoteP__SimMote__setTcpMsg(int flow_id, int slot_id, int source_id, int node_id, int channel_id);
#line 41
static void SimMoteP__SimMote__turnOff(void );
#line 40
static void SimMoteP__SimMote__turnOn(void );
#line 57
static error_t SimMoteP__SimMote__set_power(uint8_t power);
#line 35
static long long int SimMoteP__SimMote__getEuid(void );
#line 48
static int *SimMoteP__SimMote__getTcpMsg(void );
#line 44
static error_t SimMoteP__SimMote__setRadioChannel(uint8_t newRadioChannel);
#line 38
static bool SimMoteP__SimMote__isOn(void );






static uint8_t SimMoteP__SimMote__getRadioChannel(void );






static bool SimMoteP__SimMote__isIdle(void );
static void SimMoteP__SimMote__disableIdle(void );
#line 37
static long long int SimMoteP__SimMote__getStartTime(void );
#line 58
static uint8_t SimMoteP__SimMote__get_power(void );
# 64 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void AsyncReceiveAdapterP__receiveDone_task__runTask(void );
# 67 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



AsyncReceiveAdapterP__Receive__default__receive(
# 31 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AsyncReceiveAdapterP.nc"
am_id_t arg_0x2baa942f4a78, 
# 60 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 41 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncReceive.nc"
static void AsyncReceiveAdapterP__AsyncReceive__receive(
#line 37
message_t * msg, 
void * payload, 


uint8_t len);
# 69 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t AsyncSendAdapterP__AMSend__send(
# 31 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AsyncSendAdapterP.nc"
am_id_t arg_0x2baa942e0a00, 
# 69 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

AsyncSendAdapterP__AMSend__getPayload(
# 31 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AsyncSendAdapterP.nc"
am_id_t arg_0x2baa942e0a00, 
# 121 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 


uint8_t len);
# 48 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncSend.nc"
static void AsyncSendAdapterP__AsyncSend__sendDone(
#line 44
message_t * msg, 



error_t error);
# 64 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void AsyncSendAdapterP__sendDone_task__runTask(void );
# 32 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/Slotter.nc"
static void PureTDMASchedulerP__Slotter__slot(uint32_t num);
# 83 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t PureTDMASchedulerP__SplitControl__start(void );
# 48 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncSend.nc"
static void PureTDMASchedulerP__SubSend__sendDone(
#line 44
message_t * msg, 



error_t error);
# 41 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncReceive.nc"
static void PureTDMASchedulerP__SubReceive__receive(
#line 37
message_t * msg, 
void * payload, 


uint8_t len);
# 53 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static void PureTDMASchedulerP__CC2420Config__syncDone(error_t error);
# 63 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Read.nc"
static void PureTDMASchedulerP__ReadRssi__readDone(error_t result, PureTDMASchedulerP__ReadRssi__val_t val);
# 36 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/RadioPowerControl.nc"
static void PureTDMASchedulerP__RadioPowerControl__startDone(error_t error);





static void PureTDMASchedulerP__RadioPowerControl__stopDone(error_t error);
# 40 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncSend.nc"
static error_t PureTDMASchedulerP__Send__send(
#line 34
message_t * msg, 





uint8_t len);
#line 71
static 
#line 69
void * 

PureTDMASchedulerP__Send__getPayload(
#line 68
message_t * msg, 


uint8_t len);
# 51 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t PureTDMASchedulerP__Init__init(void );
# 48 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncSend.nc"
static void PureTDMASchedulerP__BeaconSend__sendDone(
#line 44
message_t * msg, 



error_t error);
# 52 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncReceive.nc"
static void PureTDMASchedulerP__Receive__updateBuffer(
#line 49
message_t * msg);
# 42 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/GainRadioModel2.nc"
static void PureTDMASchedulerP__CCAevent__anypktreceive(void );
# 67 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void PureTDMASchedulerP__Txdelay__fired(void );
# 79 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/TossimPacketModel.nc"
static void PureTDMASchedulerP__TossimPacketModel__receive(message_t *msg);
#line 71
static void PureTDMASchedulerP__TossimPacketModel__sendDone(message_t *msg, error_t error);








static bool PureTDMASchedulerP__TossimPacketModel__shouldAck(message_t *msg);
# 67 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void PureTDMASchedulerP__CCATxdelay__fired(void );
# 51 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 48 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncSend.nc"
static void /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__SubSend__sendDone(
#line 44
message_t * msg, 



error_t error);
# 49 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static void /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__Boot__booted(void );
# 40 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncSend.nc"
static error_t /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__Send__send(
#line 34
message_t * msg, 





uint8_t len);
#line 71
static 
#line 69
void * 

/*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__Send__getPayload(
#line 68
message_t * msg, 


uint8_t len);
# 67 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__Alarm__fired(void );
# 51 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__Init__init(void );
# 79 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/TossimPacketModel.nc"
static void /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__SignalSend__receive(message_t *msg);
#line 71
static void /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__SignalSend__sendDone(message_t *msg, error_t error);








static bool /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__SignalSend__shouldAck(message_t *msg);
# 92 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__Alarm__startAt(/*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__Alarm__size_type t0, /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__Alarm__size_type dt);
#line 77
static bool /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__Alarm__isRunning(void );
#line 62
static void /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__Alarm__stop(void );
# 51 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__Init__init(void );
# 71 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__Counter__overflow(void );
# 51 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t CounterMicro16P__Init__init(void );
# 53 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static CounterMicro16P__Counter__size_type CounterMicro16P__Counter__get(void );






static bool CounterMicro16P__Counter__isOverflowPending(void );
# 98 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__Alarm__size_type /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__Alarm__getNow(void );
#line 92
static void /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__Alarm__startAt(/*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__Alarm__size_type t0, /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__Alarm__size_type dt);
#line 55
static void /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__Alarm__start(/*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__Alarm__size_type dt);
#line 67
static void /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__fired(void );
# 71 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__Counter__overflow(void );
#line 71
static void /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow(void );
#line 53
static /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__Counter__size_type /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__Counter__get(void );
# 64 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void TossimPacketModelC__stopDoneTask__runTask(void );
# 52 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/TossimPacketModel.nc"
static error_t TossimPacketModelC__Packet__send(int node, message_t *msg, uint8_t len);
# 64 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void TossimPacketModelC__sendDoneTask__runTask(void );
# 51 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t TossimPacketModelC__Init__init(void );
# 64 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void TossimPacketModelC__startDoneTask__runTask(void );
# 83 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t TossimPacketModelC__Control__start(void );
# 48 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
static error_t TossimPacketModelC__PacketAcknowledgements__requestAck(
#line 42
message_t * msg);
#line 74
static bool TossimPacketModelC__PacketAcknowledgements__wasAcked(
#line 69
message_t * msg);
# 52 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/GainRadioModel.nc"
static void TossimPacketModelC__GainRadioModel__receive(message_t *msg);
#line 51
static void TossimPacketModelC__GainRadioModel__acked(message_t *msg);

static bool TossimPacketModelC__GainRadioModel__shouldAck(message_t *msg);
# 49 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static void GenericSlotterP__Boot__booted(void );
# 67 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void GenericSlotterP__Alarm__fired(void );
# 51 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t GenericSlotterP__Init__init(void );
# 74 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AsyncStdControl.nc"
static error_t GenericSlotterP__AsyncStdControl__start(void );
# 38 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/FrameConfiguration.nc"
static void GenericSlotterP__FrameConfiguration__setFrameLength(uint32_t numSlots);
#line 32
static void GenericSlotterP__FrameConfiguration__setSlotLength(uint32_t slotTimeBms);
# 39 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/SlotterControl.nc"
static uint32_t GenericSlotterP__SlotterControl__getSlot(void );
#line 31
static error_t GenericSlotterP__SlotterControl__synchronize(uint8_t toSlot);




static uint32_t GenericSlotterP__SlotterControl__getRemaining(void );
static void GenericSlotterP__SlotterControl__stop(void );
# 92 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__Alarm__startAt(/*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__Alarm__size_type t0, /*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__Alarm__size_type dt);
#line 77
static bool /*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__Alarm__isRunning(void );
#line 62
static void /*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__Alarm__stop(void );
# 51 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__Init__init(void );
# 71 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__Counter__overflow(void );
# 98 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__Alarm__size_type /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__Alarm__getNow(void );
#line 92
static void /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__Alarm__startAt(/*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__Alarm__size_type t0, /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__Alarm__size_type dt);
#line 55
static void /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__Alarm__start(/*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__Alarm__size_type dt);






static void /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__Alarm__stop(void );




static void /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__AlarmFrom__fired(void );
# 71 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__Counter__overflow(void );
#line 71
static void /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__CounterFrom__overflow(void );
#line 53
static /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__Counter__size_type /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__Counter__get(void );
# 48 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncSend.nc"
static void SenderDispatcherP__SubSend__sendDone(
#line 44
message_t * msg, 



error_t error);
#line 40
static error_t SenderDispatcherP__Send__send(
# 39 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/system/SenderDispatcherP.nc"
uint8_t arg_0x2baa9476d6d8, 
# 34 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncSend.nc"
message_t * msg, 





uint8_t len);
#line 71
static 
#line 69
void * 

SenderDispatcherP__Send__getPayload(
# 39 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/system/SenderDispatcherP.nc"
uint8_t arg_0x2baa9476d6d8, 
# 68 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncSend.nc"
message_t * msg, 


uint8_t len);
#line 48
static void SenderDispatcherP__Send__default__sendDone(
# 39 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/system/SenderDispatcherP.nc"
uint8_t arg_0x2baa9476d6d8, 
# 44 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncSend.nc"
message_t * msg, 



error_t error);
# 51 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t SenderDispatcherP__Init__init(void );
# 48 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncSend.nc"
static void BeaconSlotP__SubSend__sendDone(
#line 44
message_t * msg, 



error_t error);
# 41 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncReceive.nc"
static void BeaconSlotP__SubReceive__receive(
#line 37
message_t * msg, 
void * payload, 


uint8_t len);
# 67 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void BeaconSlotP__SyncAlarm__fired(void );
# 40 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncSend.nc"
static error_t BeaconSlotP__Send__send(
#line 34
message_t * msg, 





uint8_t len);
# 51 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t BeaconSlotP__Init__init(void );
# 52 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncReceive.nc"
static void BeaconSlotP__Receive__updateBuffer(
#line 49
message_t * msg);
# 92 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__Alarm__startAt(/*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__Alarm__size_type t0, /*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__Alarm__size_type dt);
#line 77
static bool /*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__Alarm__isRunning(void );
#line 62
static void /*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__Alarm__stop(void );
# 51 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__Init__init(void );
# 71 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__Counter__overflow(void );
# 98 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__Alarm__size_type /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__Alarm__getNow(void );
#line 92
static void /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__Alarm__startAt(/*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__Alarm__size_type t0, /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__Alarm__size_type dt);
#line 55
static void /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__Alarm__start(/*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__Alarm__size_type dt);
#line 67
static void /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__AlarmFrom__fired(void );
# 71 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__Counter__overflow(void );
# 92 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__Alarm__startAt(/*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__Alarm__size_type t0, /*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__Alarm__size_type dt);
#line 77
static bool /*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__Alarm__isRunning(void );
#line 62
static void /*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__Alarm__stop(void );
# 51 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__Init__init(void );
# 71 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__Counter__overflow(void );
# 98 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__Alarm__size_type /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__Alarm__getNow(void );
#line 92
static void /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__Alarm__startAt(/*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__Alarm__size_type t0, /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__Alarm__size_type dt);
#line 55
static void /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__Alarm__start(/*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__Alarm__size_type dt);
#line 67
static void /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__AlarmFrom__fired(void );
# 71 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__Counter__overflow(void );
# 92 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__Alarm__startAt(/*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__Alarm__size_type t0, /*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__Alarm__size_type dt);
#line 77
static bool /*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__Alarm__isRunning(void );
#line 62
static void /*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__Alarm__stop(void );
# 51 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__Init__init(void );
# 71 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__Counter__overflow(void );
# 98 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__Alarm__size_type /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__Alarm__getNow(void );
#line 92
static void /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__Alarm__startAt(/*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__Alarm__size_type t0, /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__Alarm__size_type dt);
#line 55
static void /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__Alarm__start(/*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__Alarm__size_type dt);
#line 67
static void /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__AlarmFrom__fired(void );
# 71 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__Counter__overflow(void );
# 59 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static void CC2420ControlP__CC2420Config__setChannel(uint8_t channel);
#line 116
static void CC2420ControlP__CC2420Config__setPower(uint8_t power);
#line 52
static error_t CC2420ControlP__CC2420Config__sync(void );





static uint8_t CC2420ControlP__CC2420Config__getChannel(void );
# 51 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t CC2420ControlP__Init__init(void );
# 64 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void CC2420ControlP__syncDoneTask__runTask(void );
#line 64
static void CpmModelC__read_rssi_task__runTask(void );
# 40 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/GainRadioModel.nc"
static void CpmModelC__Model__putOnAirTo(int dest, 
message_t *msg, 
bool ack, 
sim_time_t endTime, 
double gain, 
double reverseGain, 
uint8_t channel_id);


static bool CpmModelC__Model__clearChannel(void );
# 12 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/lib/macs/pure-tdma/ScheduleConfig.nc"
static bool ScheduleConfigC__ScheduleConfig__flowdestination(uint8_t nodeid);
#line 4
static uint8_t ScheduleConfigC__ScheduleConfig__primaryNode(uint8_t flowid, uint8_t nodeid);









static uint8_t ScheduleConfigC__ScheduleConfig__taskid(uint8_t flowroot);
#line 10
static bool ScheduleConfigC__ScheduleConfig__flowsource(uint8_t nodeid);
#line 6
static uint8_t ScheduleConfigC__ScheduleConfig__backupNode(uint8_t flowid, uint8_t nodeid);
# 73 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Queue.nc"
static 
#line 71
/*PureTDMASchedulerC.HIQueueC*/QueueC__0__Queue__t  

/*PureTDMASchedulerC.HIQueueC*/QueueC__0__Queue__head(void );
#line 90
static error_t /*PureTDMASchedulerC.HIQueueC*/QueueC__0__Queue__enqueue(
#line 86
/*PureTDMASchedulerC.HIQueueC*/QueueC__0__Queue__t  newVal);
#line 65
static uint8_t /*PureTDMASchedulerC.HIQueueC*/QueueC__0__Queue__maxSize(void );
#line 81
static 
#line 79
/*PureTDMASchedulerC.HIQueueC*/QueueC__0__Queue__t  

/*PureTDMASchedulerC.HIQueueC*/QueueC__0__Queue__dequeue(void );
#line 50
static bool /*PureTDMASchedulerC.HIQueueC*/QueueC__0__Queue__empty(void );







static uint8_t /*PureTDMASchedulerC.HIQueueC*/QueueC__0__Queue__size(void );
#line 73
static 
#line 71
/*PureTDMASchedulerC.LOQueueC*/QueueC__1__Queue__t  

/*PureTDMASchedulerC.LOQueueC*/QueueC__1__Queue__head(void );
#line 90
static error_t /*PureTDMASchedulerC.LOQueueC*/QueueC__1__Queue__enqueue(
#line 86
/*PureTDMASchedulerC.LOQueueC*/QueueC__1__Queue__t  newVal);
#line 65
static uint8_t /*PureTDMASchedulerC.LOQueueC*/QueueC__1__Queue__maxSize(void );
#line 81
static 
#line 79
/*PureTDMASchedulerC.LOQueueC*/QueueC__1__Queue__t  

/*PureTDMASchedulerC.LOQueueC*/QueueC__1__Queue__dequeue(void );
#line 50
static bool /*PureTDMASchedulerC.LOQueueC*/QueueC__1__Queue__empty(void );







static uint8_t /*PureTDMASchedulerC.LOQueueC*/QueueC__1__Queue__size(void );
# 67 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



SyncReceiveAdapterP__Receive__receive(
# 3 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/SyncReceiveAdapterP.nc"
am_id_t arg_0x2baa94b166c8, 
# 60 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 52 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncReceive.nc"
static void SyncReceiveAdapterP__AsyncReceive__updateBuffer(
#line 49
message_t * msg);
# 92 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void SyncSendAdapterP__SplitControl__startDone(error_t error);
#line 117
static void SyncSendAdapterP__SplitControl__stopDone(error_t error);
# 99 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void SyncSendAdapterP__AMSend__sendDone(
# 3 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/SyncSendAdapterP.nc"
am_id_t arg_0x2baa94b0d448, 
# 92 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 35 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/RadioPowerControl.nc"
static error_t SyncSendAdapterP__RadioPowerControl__start(void );
# 40 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncSend.nc"
static error_t SyncSendAdapterP__AsyncSend__send(
#line 34
message_t * msg, 





uint8_t len);
#line 71
static 
#line 69
void * 

SyncSendAdapterP__AsyncSend__getPayload(
#line 68
message_t * msg, 


uint8_t len);
# 69 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t TossimActiveMessageC__AMSend__send(
# 39 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x2baa94b47850, 
# 69 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

TossimActiveMessageC__AMSend__getPayload(
# 39 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x2baa94b47850, 
# 121 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 


uint8_t len);
# 67 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



TossimActiveMessageC__Snoop__default__receive(
# 41 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x2baa94b42670, 
# 60 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 67 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t TossimActiveMessageC__Packet__payloadLength(
#line 63
message_t * msg);
#line 115
static 
#line 112
void * 


TossimActiveMessageC__Packet__getPayload(
#line 110
message_t * msg, 




uint8_t len);
#line 95
static uint8_t TossimActiveMessageC__Packet__maxPayloadLength(void );
# 79 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/TossimPacketModel.nc"
static void TossimActiveMessageC__Model__receive(message_t *msg);
#line 71
static void TossimActiveMessageC__Model__sendDone(message_t *msg, error_t error);








static bool TossimActiveMessageC__Model__shouldAck(message_t *msg);
# 77 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AMPacket.nc"
static am_addr_t TossimActiveMessageC__AMPacket__source(
#line 73
message_t * amsg);
#line 57
static am_addr_t TossimActiveMessageC__AMPacket__address(void );









static am_addr_t TossimActiveMessageC__AMPacket__destination(
#line 63
message_t * amsg);
#line 110
static void TossimActiveMessageC__AMPacket__setSource(
#line 106
message_t * amsg, 



am_addr_t addr);
#line 92
static void TossimActiveMessageC__AMPacket__setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 136
static am_id_t TossimActiveMessageC__AMPacket__type(
#line 132
message_t * amsg);
#line 151
static void TossimActiveMessageC__AMPacket__setType(
#line 147
message_t * amsg, 



am_id_t t);
#line 125
static bool TossimActiveMessageC__AMPacket__isForMe(
#line 122
message_t * amsg);
# 46 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__amAddress(void );
# 124 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static 
#line 122
void * 

/*TestNetworkAppC.Sender.AMQueueEntryP*/AMQueueEntryP__0__AMSend__getPayload(
#line 121
message_t * msg, 


uint8_t len);
# 89 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void /*TestNetworkAppC.Sender.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(
#line 85
message_t * msg, 



error_t error);
# 99 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(
# 40 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x2baa94bfa1a0, 
# 92 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 114 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Send.nc"
static 
#line 112
void * 

/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__getPayload(
# 38 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x2baa94bfb020, 
# 111 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 


uint8_t len);
#line 89
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(
# 38 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x2baa94bfb020, 
# 85 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 64 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void );
#line 64
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void );
# 77 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static bool /*TestNetworkAppC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__5__Alarm__isRunning(void );
#line 62
static void /*TestNetworkAppC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__5__Alarm__stop(void );
# 51 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*TestNetworkAppC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__5__Init__init(void );
# 71 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*TestNetworkAppC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__5__Counter__overflow(void );
# 62 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*TestNetworkAppC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__5__Alarm__stop(void );
# 71 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*TestNetworkAppC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__5__Counter__overflow(void );
# 51 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*TestNetworkAppC.SSTdmaSlotSenderC.SSTdmaSlotSenderP*/SSTdmaSlotSenderP__0__Init__init(void );
#line 51
static error_t /*TestNetworkAppC.SSTdmaSlotSenderC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__6__Init__init(void );
# 71 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*TestNetworkAppC.SSTdmaSlotSenderC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__6__Counter__overflow(void );
#line 71
static void /*TestNetworkAppC.SSTdmaSlotSenderC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__6__Counter__overflow(void );
# 51 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RandomMlcgC__Init__init(void );
# 59 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static void TestNetworkC__CC2420Config__setChannel(uint8_t channel);
#line 52
static error_t TestNetworkC__CC2420Config__sync(void );
# 83 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t TestNetworkC__RadioControl__start(void );
# 124 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static 
#line 122
void * 

TestNetworkC__Send__getPayload(
#line 121
message_t * msg, 


uint8_t len);
# 62 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void TestNetworkC__Alarm__stop(void );
# 77 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AMPacket.nc"
static am_addr_t TestNetworkC__AMPacket__source(
#line 73
message_t * amsg);
#line 67
static am_addr_t TestNetworkC__AMPacket__destination(
#line 63
message_t * amsg);
# 27 "TestNetworkC.nc"
message_t TestNetworkC__packet[1000];

TestNetworkMsg *TestNetworkC__rcm[1000];
TestNetworkMsg *TestNetworkC__rcmr[1000];
TestNetworkMsg *TestNetworkC__msgamr[1000];

TestNetworkMsg TestNetworkC__tnmsg_in_transit[1000];


bool TestNetworkC__sendBusy[1000];

enum TestNetworkC____nesc_unnamed4306 {
  TestNetworkC__RECEIVER = 0
};

static inline void TestNetworkC__Boot__booted(void );





static void TestNetworkC__RadioControl__startDone(error_t err);










static inline void TestNetworkC__Send__sendDone(message_t *m, error_t err);






static inline message_t *

TestNetworkC__Receive__receive(message_t *msg, void *payload, uint8_t len);






static inline message_t *TestNetworkC__AMReceive__receive(message_t *bufPtr, void *payload, uint8_t len);
#line 89
static inline void TestNetworkC__RadioControl__stopDone(error_t err);

static inline void TestNetworkC__CC2420Config__syncDone(error_t error);






static inline void TestNetworkC__Alarm__fired(void );
# 51 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t PlatformP__MoteInit__init(void );
#line 51
static error_t PlatformP__MeasureClock__init(void );
# 42 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP__power_init(void );






static inline error_t PlatformP__Init__init(void );
# 51 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t MotePlatformP__SubInit__init(void );
# 33 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void MotePlatformP__SerialIdPin__makeInput(void );
#line 30
static void MotePlatformP__SerialIdPin__clr(void );
# 26 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void );
# 46 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );







static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );







static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );







static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 50
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void );
# 21 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/platforms/mica/sim/MeasureClockC.nc"
static inline error_t MeasureClockC__Init__init(void );
# 51 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t SimMainP__SoftwareInit__init(void );
# 49 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static void SimMainP__Boot__booted(void );
# 51 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t SimMainP__PlatformInit__init(void );
# 46 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
static void SimMainP__Scheduler__init(void );







static bool SimMainP__Scheduler__runNextTask(void );
# 43 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SimMainP.nc"
int sim_main_start_mote(void )   ;
# 64 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SimSchedulerBasicP__TaskBasic__runTask(
# 41 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
uint8_t arg_0x2baa93ec9328);



enum SimSchedulerBasicP____nesc_unnamed4307 {

  SimSchedulerBasicP__NUM_TASKS = 9U, 
  SimSchedulerBasicP__NO_TASK = 255
};

uint8_t SimSchedulerBasicP__m_head[1000];
uint8_t SimSchedulerBasicP__m_tail[1000];
uint8_t SimSchedulerBasicP__m_next[1000][SimSchedulerBasicP__NUM_TASKS];




bool SimSchedulerBasicP__sim_scheduler_event_pending[1000];
sim_event_t SimSchedulerBasicP__sim_scheduler_event[1000];

static inline int SimSchedulerBasicP__sim_config_task_latency(void );







static void SimSchedulerBasicP__sim_scheduler_submit_event(void );







static inline void SimSchedulerBasicP__sim_scheduler_event_handle(sim_event_t *e);
#line 95
static inline void SimSchedulerBasicP__sim_scheduler_event_init(sim_event_t *e);
#line 112
static inline uint8_t SimSchedulerBasicP__popTask(void );
#line 131
static inline bool SimSchedulerBasicP__isWaiting(uint8_t id);




static inline bool SimSchedulerBasicP__pushTask(uint8_t id);
#line 158
static inline void SimSchedulerBasicP__Scheduler__init(void );
#line 172
static bool SimSchedulerBasicP__Scheduler__runNextTask(void );
#line 197
static error_t SimSchedulerBasicP__TaskBasic__postTask(uint8_t id);
#line 213
static inline void SimSchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
# 46 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SimMoteP.nc"
long long int SimMoteP__euid[1000];
long long int SimMoteP__startTime[1000];
bool SimMoteP__isOn[1000];

bool SimMoteP__isIdle[1000];

sim_event_t *SimMoteP__bootEvent[1000];




uint8_t SimMoteP__radioChannel[1000];
int SimMoteP__tcp_msg[1000][5];

int SimMoteP__radio_power[1000];




static inline error_t SimMoteP__SimMote__setRadioChannel(uint8_t newRadioChannel);
#line 79
static inline uint8_t SimMoteP__SimMote__getRadioChannel(void );
#line 91
error_t sim_mote_set_radio_channel(int mote, uint8_t newRadioChannel)   ;
#line 103
uint8_t sim_mote_get_radio_channel(int mote)   ;








static inline long long int SimMoteP__SimMote__getEuid(void );


static inline void SimMoteP__SimMote__setEuid(long long int e);


static inline long long int SimMoteP__SimMote__getStartTime(void );


static inline bool SimMoteP__SimMote__isOn(void );



static inline int SimMoteP__SimMote__getVariableInfo(char *name, void **addr, size_t *size);



static void SimMoteP__SimMote__turnOn(void );
#line 142
static inline void SimMoteP__SimMote__turnOff(void );




long long int sim_mote_euid(int mote)   ;








void sim_mote_set_euid(int mote, long long int id)   ;






long long int sim_mote_start_time(int mote)   ;








int sim_mote_get_variable_info(int mote, char *name, void **ptr, size_t *len)   ;









void sim_mote_set_start_time(int mote, long long int t)   ;








bool sim_mote_is_on(int mote)   ;









void sim_mote_turn_on(int mote)   ;






void sim_mote_turn_off(int mote)   ;







static inline void SimMoteP__sim_mote_boot_handle(sim_event_t *e);








void sim_mote_enqueue_boot_event(int mote)   ;
#line 255
int *sim_mote_getTcpMsg(int mote)   ;








void sim_mote_setTcpMsg(int mote, int flow_id, int slot_id, int source_id, int node_id, int channel_id)   ;










static inline int *SimMoteP__SimMote__getTcpMsg(void );



static void SimMoteP__SimMote__setTcpMsg(int flow_id, int slot_id, int source_id, int node_id, int channel_id);









static inline bool SimMoteP__SimMote__isIdle(void );



static inline void SimMoteP__SimMote__disableIdle(void );



static inline void SimMoteP__SimMote__enableIdle(void );



bool sim_mote_is_idle(int mote)   ;








void sim_mote_enable_idle(int mote)   ;






void sim_mote_disable_idle(int mote)   ;









static inline error_t SimMoteP__SimMote__set_power(uint8_t power);
#line 348
static inline uint8_t SimMoteP__SimMote__get_power(void );







uint8_t sim_mote_getPower(int mote)   ;








error_t sim_mote_setPower(int mote, uint8_t power)   ;
# 20 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/csma/sim/CC2420CsmaP.nc"
message_t CC2420CsmaP__buffer[1000];
# 56 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t AsyncReceiveAdapterP__receiveDone_task__postTask(void );
# 67 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



AsyncReceiveAdapterP__Receive__receive(
# 31 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AsyncReceiveAdapterP.nc"
am_id_t arg_0x2baa942f4a78, 
# 60 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 52 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncReceive.nc"
static void AsyncReceiveAdapterP__AsyncReceive__updateBuffer(
#line 49
message_t * msg);
# 45 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AsyncReceiveAdapterP.nc"
enum AsyncReceiveAdapterP____nesc_unnamed4308 {
#line 45
  AsyncReceiveAdapterP__receiveDone_task = 0U
};
#line 45
typedef int AsyncReceiveAdapterP____nesc_sillytask_receiveDone_task[AsyncReceiveAdapterP__receiveDone_task];
#line 36
message_t * AsyncReceiveAdapterP__msg_[1000];
void * AsyncReceiveAdapterP__payload_[1000];
uint8_t AsyncReceiveAdapterP__len_[1000];

static inline tossim_header_t *AsyncReceiveAdapterP__getHeader(message_t *msg);






static inline void AsyncReceiveAdapterP__AsyncReceive__receive(message_t *msg, void *payload, uint8_t len);
#line 59
static inline void AsyncReceiveAdapterP__receiveDone_task__runTask(void );
#line 77
static inline message_t *AsyncReceiveAdapterP__Receive__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);
# 99 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void AsyncSendAdapterP__AMSend__sendDone(
# 31 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AsyncSendAdapterP.nc"
am_id_t arg_0x2baa942e0a00, 
# 92 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 40 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncSend.nc"
static error_t AsyncSendAdapterP__AsyncSend__send(
#line 34
message_t * msg, 





uint8_t len);
#line 71
static 
#line 69
void * 

AsyncSendAdapterP__AsyncSend__getPayload(
#line 68
message_t * msg, 


uint8_t len);
# 56 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t AsyncSendAdapterP__sendDone_task__postTask(void );
# 44 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AsyncSendAdapterP.nc"
enum AsyncSendAdapterP____nesc_unnamed4309 {
#line 44
  AsyncSendAdapterP__sendDone_task = 1U
};
#line 44
typedef int AsyncSendAdapterP____nesc_sillytask_sendDone_task[AsyncSendAdapterP__sendDone_task];
#line 36
message_t * AsyncSendAdapterP__msg_[1000];
uint8_t AsyncSendAdapterP__len_[1000];

static inline tossim_header_t *AsyncSendAdapterP__getHeader(message_t *msg);






static inline error_t AsyncSendAdapterP__AMSend__send(am_id_t id, am_addr_t addr, message_t *msg, uint8_t len);
#line 58
static inline void AsyncSendAdapterP__AsyncSend__sendDone(message_t *msg, uint8_t len);










static inline void AsyncSendAdapterP__sendDone_task__runTask(void );
#line 89
static inline void *AsyncSendAdapterP__AMSend__getPayload(am_id_t id, message_t *msg, uint8_t len);
# 92 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void PureTDMASchedulerP__SplitControl__startDone(error_t error);
#line 117
static void PureTDMASchedulerP__SplitControl__stopDone(error_t error);
# 40 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncSend.nc"
static error_t PureTDMASchedulerP__SubSend__send(
#line 34
message_t * msg, 





uint8_t len);
#line 71
static 
#line 69
void * 

PureTDMASchedulerP__SubSend__getPayload(
#line 68
message_t * msg, 


uint8_t len);
# 52 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncReceive.nc"
static void PureTDMASchedulerP__SubReceive__updateBuffer(
#line 49
message_t * msg);
# 59 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static void PureTDMASchedulerP__CC2420Config__setChannel(uint8_t channel);
#line 116
static void PureTDMASchedulerP__CC2420Config__setPower(uint8_t power);
#line 52
static error_t PureTDMASchedulerP__CC2420Config__sync(void );





static uint8_t PureTDMASchedulerP__CC2420Config__getChannel(void );
# 12 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/lib/macs/pure-tdma/ScheduleConfig.nc"
static bool PureTDMASchedulerP__ScheduleConfig__flowdestination(uint8_t nodeid);
#line 4
static uint8_t PureTDMASchedulerP__ScheduleConfig__primaryNode(uint8_t flowid, uint8_t nodeid);









static uint8_t PureTDMASchedulerP__ScheduleConfig__taskid(uint8_t flowroot);
#line 10
static bool PureTDMASchedulerP__ScheduleConfig__flowsource(uint8_t nodeid);
#line 6
static uint8_t PureTDMASchedulerP__ScheduleConfig__backupNode(uint8_t flowid, uint8_t nodeid);
# 73 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Queue.nc"
static 
#line 71
PureTDMASchedulerP__HIforwardQ__t  

PureTDMASchedulerP__HIforwardQ__head(void );
#line 90
static error_t PureTDMASchedulerP__HIforwardQ__enqueue(
#line 86
PureTDMASchedulerP__HIforwardQ__t  newVal);
#line 81
static 
#line 79
PureTDMASchedulerP__HIforwardQ__t  

PureTDMASchedulerP__HIforwardQ__dequeue(void );
#line 50
static bool PureTDMASchedulerP__HIforwardQ__empty(void );







static uint8_t PureTDMASchedulerP__HIforwardQ__size(void );
# 35 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/RadioPowerControl.nc"
static error_t PureTDMASchedulerP__RadioPowerControl__start(void );
# 73 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Queue.nc"
static 
#line 71
PureTDMASchedulerP__LOforwardQ__t  

PureTDMASchedulerP__LOforwardQ__head(void );
#line 90
static error_t PureTDMASchedulerP__LOforwardQ__enqueue(
#line 86
PureTDMASchedulerP__LOforwardQ__t  newVal);
#line 81
static 
#line 79
PureTDMASchedulerP__LOforwardQ__t  

PureTDMASchedulerP__LOforwardQ__dequeue(void );
#line 50
static bool PureTDMASchedulerP__LOforwardQ__empty(void );







static uint8_t PureTDMASchedulerP__LOforwardQ__size(void );
# 48 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncSend.nc"
static void PureTDMASchedulerP__Send__sendDone(
#line 44
message_t * msg, 



error_t error);
# 74 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AsyncStdControl.nc"
static error_t PureTDMASchedulerP__GenericSlotter__start(void );
# 40 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncSend.nc"
static error_t PureTDMASchedulerP__BeaconSend__send(
#line 34
message_t * msg, 





uint8_t len);
# 41 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncReceive.nc"
static void PureTDMASchedulerP__Receive__receive(
#line 37
message_t * msg, 
void * payload, 


uint8_t len);
# 49 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SimMote.nc"
static void PureTDMASchedulerP__SimMote__setTcpMsg(int flow_id, int slot_id, int source_id, int node_id, int channel_id);
# 48 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
static error_t PureTDMASchedulerP__PacketAcknowledgements__requestAck(
#line 42
message_t * msg);
#line 74
static bool PureTDMASchedulerP__PacketAcknowledgements__wasAcked(
#line 69
message_t * msg);
# 55 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void PureTDMASchedulerP__Txdelay__start(PureTDMASchedulerP__Txdelay__size_type dt);
# 38 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/FrameConfiguration.nc"
static void PureTDMASchedulerP__FrameConfiguration__setFrameLength(uint32_t numSlots);
#line 32
static void PureTDMASchedulerP__FrameConfiguration__setSlotLength(uint32_t slotTimeBms);
# 77 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AMPacket.nc"
static am_addr_t PureTDMASchedulerP__AMPacket__source(
#line 73
message_t * amsg);
#line 92
static void PureTDMASchedulerP__AMPacket__setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 136
static am_id_t PureTDMASchedulerP__AMPacket__type(
#line 132
message_t * amsg);
# 39 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/SlotterControl.nc"
static uint32_t PureTDMASchedulerP__SlotterControl__getSlot(void );
#line 31
static error_t PureTDMASchedulerP__SlotterControl__synchronize(uint8_t toSlot);
# 55 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void PureTDMASchedulerP__CCATxdelay__start(PureTDMASchedulerP__CCATxdelay__size_type dt);
# 48 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/lib/macs/pure-tdma/PureTDMASchedulerP.nc"
enum PureTDMASchedulerP____nesc_unnamed4310 {
  PureTDMASchedulerP__SIMPLE_TDMA_SYNC = 123, 
  PureTDMASchedulerP__FRAME_LENGTH = 3, 
  PureTDMASchedulerP__RADIO_DEF_POWER = 0, 
  PureTDMASchedulerP__RADIO_MAX_POWER = 31, 
  PureTDMASchedulerP__CHANNEL_DEF = 22, 
  PureTDMASchedulerP__MAC_Q = 2
};
bool PureTDMASchedulerP__init[1000];
uint32_t PureTDMASchedulerP__slotSize[1000];
uint32_t PureTDMASchedulerP__bi[1000];
#line 58
uint32_t PureTDMASchedulerP__sd[1000];
#line 58
uint32_t PureTDMASchedulerP__cap[1000];
uint8_t PureTDMASchedulerP__coordinatorId[1000];

message_t *PureTDMASchedulerP__toSend[1000];
uint8_t PureTDMASchedulerP__toSendLen[1000];


message_t PureTDMASchedulerP__packet[1000];



message_t PureTDMASchedulerP__HIforwardPktBuffer[1000][PureTDMASchedulerP__MAC_Q];
message_t PureTDMASchedulerP__LOforwardPktBuffer[1000][PureTDMASchedulerP__MAC_Q];
uint8_t PureTDMASchedulerP__HIqueueSize[1000];
uint8_t PureTDMASchedulerP__LOqueueSize[1000];


uint32_t PureTDMASchedulerP__slot_[1000];
uint16_t PureTDMASchedulerP__rcv_count[1000][4];
uint16_t PureTDMASchedulerP__Tx_count[1000][4];
uint16_t PureTDMASchedulerP__Total_tx_count[1000][4];

uint8_t PureTDMASchedulerP__TxOffset[1000];



static inline void PureTDMASchedulerP__set_current_hop_status(uint32_t slot_t, uint8_t sender, uint8_t receiver);

static inline void PureTDMASchedulerP__set_send(uint32_t slot_t);
static inline uint32_t PureTDMASchedulerP__SuperframeLength(uint32_t Task_set[][3]);
static uint32_t PureTDMASchedulerP__getGCD(uint32_t num1, uint32_t num2);
static inline uint32_t PureTDMASchedulerP__getLCD(uint32_t num1, uint32_t num2);



static void PureTDMASchedulerP__transmission(uint8_t Txing_flowid);


uint8_t PureTDMASchedulerP__schedule[1000][4][3];






uint32_t PureTDMASchedulerP__superframe_length[1000];






uint8_t PureTDMASchedulerP__NUM_TASK[1000];
uint8_t PureTDMASchedulerP__HI_TASK[1000];
uint8_t PureTDMASchedulerP__LO_TASK[1000];
uint32_t PureTDMASchedulerP__Task_character[1000][4][3];




uint8_t PureTDMASchedulerP__TASK_PERIOD[1000];
uint8_t PureTDMASchedulerP__TASK_DEAD[1000];
uint8_t PureTDMASchedulerP__TASK_MAXTX[1000];





uint8_t PureTDMASchedulerP__Path[1000][4][2];
uint8_t PureTDMASchedulerP__PRIMARYPATH[1000];
uint8_t PureTDMASchedulerP__BACKUPPATH[1000];


uint32_t PureTDMASchedulerP__rcv_slot[1000][4];
bool PureTDMASchedulerP__receive_lock[1000][4];


bool PureTDMASchedulerP__isFlowroot[1000];
bool PureTDMASchedulerP__isFlowdest[1000];
uint8_t PureTDMASchedulerP__Task_rels[1000];


uint32_t PureTDMASchedulerP__e2e_delay_buffer[1000][4][10000];


bool PureTDMASchedulerP__send_status[1000][4];
bool PureTDMASchedulerP__Rcv_check_mode[1000];
uint8_t PureTDMASchedulerP__taskid[1000];
uint8_t PureTDMASchedulerP__Transmitting_flowid[1000];
uint8_t PureTDMASchedulerP__My_max_txopper[1000][4];
uint8_t PureTDMASchedulerP__check_link_quality_1[1000];

bool PureTDMASchedulerP__sync[1000];
bool PureTDMASchedulerP__requestStop[1000];



uint16_t PureTDMASchedulerP__crt_frame[1000][4];
uint32_t PureTDMASchedulerP__Total_frame_count[1000][4];
uint16_t PureTDMASchedulerP__Receiving_flag[1000][4];
uint8_t PureTDMASchedulerP__Receiving_flow_id[1000];
uint16_t PureTDMASchedulerP__kth_job[1000];
uint16_t PureTDMASchedulerP__prev_job_idx[1000][4];
uint16_t PureTDMASchedulerP__Loss_count[1000][4];
uint16_t PureTDMASchedulerP__Miss_count[1000][4];





uint32_t PureTDMASchedulerP__temp_interf[1000];
uint32_t PureTDMASchedulerP__temp_dist[1000];







static inline error_t PureTDMASchedulerP__Init__init(void );
#line 281
static error_t PureTDMASchedulerP__SplitControl__start(void );
#line 300
static inline void PureTDMASchedulerP__RadioPowerControl__startDone(error_t error);
#line 317
static inline void PureTDMASchedulerP__RadioPowerControl__stopDone(error_t error);










static inline void PureTDMASchedulerP__Slotter__slot(uint32_t slot);
#line 474
static inline void PureTDMASchedulerP__TossimPacketModel__sendDone(message_t *msg, error_t error);




static inline void PureTDMASchedulerP__TossimPacketModel__receive(message_t *msg);


static inline bool PureTDMASchedulerP__TossimPacketModel__shouldAck(message_t *msg);

static inline error_t PureTDMASchedulerP__Send__send(message_t *msg, uint8_t len);










static inline void PureTDMASchedulerP__SubSend__sendDone(message_t *msg, error_t error);
#line 583
static inline void PureTDMASchedulerP__SubReceive__receive(message_t *msg, void *payload, uint8_t len);
#line 692
static inline void PureTDMASchedulerP__CCAevent__anypktreceive(void );







static inline void PureTDMASchedulerP__ReadRssi__readDone(error_t result, uint16_t val);
#line 727
static inline void *PureTDMASchedulerP__Send__getPayload(message_t *msg, uint8_t len);








static inline void PureTDMASchedulerP__Receive__updateBuffer(message_t *msg);
#line 750
static inline void PureTDMASchedulerP__CC2420Config__syncDone(error_t error);
static inline void PureTDMASchedulerP__BeaconSend__sendDone(message_t *msg, error_t error);

static inline void PureTDMASchedulerP__set_current_hop_status(uint32_t slot_t, uint8_t sender, uint8_t receiver);









static inline void PureTDMASchedulerP__set_send(uint32_t slot_t);
#line 872
static void PureTDMASchedulerP__transmission(uint8_t Txing_flowid);
#line 906
static inline void PureTDMASchedulerP__Txdelay__fired(void );
#line 923
static inline void PureTDMASchedulerP__CCATxdelay__fired(void );
#line 938
static inline uint32_t PureTDMASchedulerP__SuperframeLength(uint32_t Task_set[][3]);
#line 950
static uint32_t PureTDMASchedulerP__getGCD(uint32_t num1, uint32_t num2);
#line 967
static inline uint32_t PureTDMASchedulerP__getLCD(uint32_t num1, uint32_t num2);
# 35 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__makeOutput(void );
#line 29
static void LedsP__Led0__set(void );





static void LedsP__Led1__makeOutput(void );
#line 29
static void LedsP__Led1__set(void );





static void LedsP__Led2__makeOutput(void );
#line 29
static void LedsP__Led2__set(void );
# 45 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void );
# 40 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncSend.nc"
static error_t /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__SubSend__send(
#line 34
message_t * msg, 





uint8_t len);
#line 71
static 
#line 69
void * 

/*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__SubSend__getPayload(
#line 68
message_t * msg, 


uint8_t len);
#line 48
static void /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__Send__sendDone(
#line 44
message_t * msg, 



error_t error);
# 55 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__Alarm__start(/*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__Alarm__size_type dt);
# 54 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/system/GenericSlotSenderP.nc"
enum /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0____nesc_unnamed4311 {
  GenericSlotSenderP__0__S_START = 0, 
  GenericSlotSenderP__0__S_OFFSET = 1, 
  GenericSlotSenderP__0__S_SENT = 2, 
  GenericSlotSenderP__0__S_END = 3
};

message_t */*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__toSend[1000];
uint8_t /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__toSendLen[1000];
uint8_t /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__state[1000];



static inline void /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__Boot__booted(void );




static inline void /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__alarm(uint8_t at);


static inline error_t /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__Init__init(void );






static error_t /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__Send__send(message_t *msg, uint8_t len);
#line 142
static inline void /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__Alarm__fired(void );
#line 159
static inline void /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__SubSend__sendDone(message_t *msg, error_t error);
#line 171
static inline void */*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__Send__getPayload(message_t *msg, uint8_t len);
#line 192
static inline void /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__SignalSend__sendDone(message_t *msg, error_t error);




static inline void /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__SignalSend__receive(message_t *msg);

static inline bool /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__SignalSend__shouldAck(message_t *msg);
# 67 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__Alarm__fired(void );
# 9 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AlarmMicro16P.nc"
uint16_t /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__alarm[1000];
sim_time_t /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__zero[1000];
sim_event_t */*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__evt[1000];

static inline error_t /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__Init__init(void );





static inline void /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__handle_timer_fired(sim_event_t *e);
#line 37
static inline bool /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__Alarm__isRunning(void );




static inline void /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__Alarm__stop(void );
#line 58
static inline void /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__Alarm__startAt(uint16_t t0, uint16_t dt);
#line 80
static inline void /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__Counter__overflow(void );
# 71 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void CounterMicro16P__Counter__overflow(void );
# 25 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/CounterMicro16P.nc"
sim_time_t CounterMicro16P__t0[1000];

static void CounterMicro16P__scheduleOverflow(void );
static inline void CounterMicro16P__handleOverflow(sim_event_t *evt);

static inline error_t CounterMicro16P__Init__init(void );






static void CounterMicro16P__scheduleOverflow(void );










static inline void CounterMicro16P__handleOverflow(sim_event_t *evt);






static uint16_t CounterMicro16P__Counter__get(void );






static inline bool CounterMicro16P__Counter__isOverflowPending(void );
# 67 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__Alarm__fired(void );
#line 92
static void /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__startAt(/*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__size_type t0, /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__size_type dt);
# 53 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__Counter__size_type /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__Counter__get(void );
# 66 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
/*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__to_size_type /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__m_t0[1000];
/*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__to_size_type /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__m_dt[1000];

enum /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0____nesc_unnamed4312 {

  TransformAlarmC__0__MAX_DELAY_LOG2 = 8 * sizeof(/*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__from_size_type ) - 1 - 5, 
  TransformAlarmC__0__MAX_DELAY = (/*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__to_size_type )1 << /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__MAX_DELAY_LOG2
};

static inline /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__to_size_type /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__Alarm__getNow(void );
#line 96
static void /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__set_alarm(void );
#line 136
static inline void /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__Alarm__startAt(/*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__to_size_type t0, /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__to_size_type dt);









static inline void /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__Alarm__start(/*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__to_size_type dt);




static inline void /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__fired(void );
#line 166
static inline void /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__Counter__overflow(void );
# 53 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__CounterFrom__size_type /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__CounterFrom__get(void );






static bool /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__CounterFrom__isOverflowPending(void );










static void /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__Counter__overflow(void );
# 56 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
/*Counter32khz16C.TransformCounterC*/TransformCounterC__0__upper_count_type /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__m_upper[1000];

enum /*Counter32khz16C.TransformCounterC*/TransformCounterC__0____nesc_unnamed4313 {

  TransformCounterC__0__LOW_SHIFT_RIGHT = 5, 
  TransformCounterC__0__HIGH_SHIFT_LEFT = 8 * sizeof(/*Counter32khz16C.TransformCounterC*/TransformCounterC__0__from_size_type ) - /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__LOW_SHIFT_RIGHT, 
  TransformCounterC__0__NUM_UPPER_BITS = 8 * sizeof(/*Counter32khz16C.TransformCounterC*/TransformCounterC__0__to_size_type ) - 8 * sizeof(/*Counter32khz16C.TransformCounterC*/TransformCounterC__0__from_size_type ) + 5, 



  TransformCounterC__0__OVERFLOW_MASK = /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__NUM_UPPER_BITS ? ((/*Counter32khz16C.TransformCounterC*/TransformCounterC__0__upper_count_type )2 << (/*Counter32khz16C.TransformCounterC*/TransformCounterC__0__NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__to_size_type /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__Counter__get(void );
#line 122
static inline void /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow(void );
# 79 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/TossimPacketModel.nc"
static void TossimPacketModelC__Packet__receive(message_t *msg);
#line 71
static void TossimPacketModelC__Packet__sendDone(message_t *msg, error_t error);








static bool TossimPacketModelC__Packet__shouldAck(message_t *msg);
# 56 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t TossimPacketModelC__startDoneTask__postTask(void );
# 42 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/GainRadioModel2.nc"
static void TossimPacketModelC__GainRadioModel2__anypktreceive(void );
# 92 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void TossimPacketModelC__Control__startDone(error_t error);
#line 117
static void TossimPacketModelC__Control__stopDone(error_t error);
# 40 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/GainRadioModel.nc"
static void TossimPacketModelC__GainRadioModel__putOnAirTo(int dest, 
message_t *msg, 
bool ack, 
sim_time_t endTime, 
double gain, 
double reverseGain, 
uint8_t channel_id);


static bool TossimPacketModelC__GainRadioModel__clearChannel(void );
# 94 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/TossimPacketModelC.nc"
enum TossimPacketModelC____nesc_unnamed4314 {
#line 94
  TossimPacketModelC__startDoneTask = 2U
};
#line 94
typedef int TossimPacketModelC____nesc_sillytask_startDoneTask[TossimPacketModelC__startDoneTask];




enum TossimPacketModelC____nesc_unnamed4315 {
#line 99
  TossimPacketModelC__stopDoneTask = 3U
};
#line 99
typedef int TossimPacketModelC____nesc_sillytask_stopDoneTask[TossimPacketModelC__stopDoneTask];
#line 144
enum TossimPacketModelC____nesc_unnamed4316 {
#line 144
  TossimPacketModelC__sendDoneTask = 4U
};
#line 144
typedef int TossimPacketModelC____nesc_sillytask_sendDoneTask[TossimPacketModelC__sendDoneTask];
#line 66
bool TossimPacketModelC__initialized[1000];
bool TossimPacketModelC__running[1000];
uint8_t TossimPacketModelC__backoffCount[1000];
uint8_t TossimPacketModelC__neededFreeSamples[1000];
message_t *TossimPacketModelC__sending[1000];
bool TossimPacketModelC__transmitting[1000];
uint8_t TossimPacketModelC__sendingLength[1000];
int TossimPacketModelC__destNode[1000];
sim_event_t TossimPacketModelC__sendEvent[1000];

uint8_t TossimPacketModelC__cca_enable_flag[1000];



static inline tossim_metadata_t *TossimPacketModelC__getMetadata(message_t *msg);



static inline error_t TossimPacketModelC__Init__init(void );









static inline void TossimPacketModelC__startDoneTask__runTask(void );




static inline void TossimPacketModelC__stopDoneTask__runTask(void );




static inline error_t TossimPacketModelC__Control__start(void );
#line 125
static inline error_t TossimPacketModelC__PacketAcknowledgements__requestAck(message_t *msg);
#line 138
static inline error_t TossimPacketModelC__PacketAcknowledgements__wasAcked(message_t *ack);





static inline void TossimPacketModelC__sendDoneTask__runTask(void );
#line 158
static inline void TossimPacketModelC__start_csma(void );
static void TossimPacketModelC__send_transmit_with_cca(sim_event_t *evt);

static inline error_t TossimPacketModelC__Packet__send(int dest, message_t *msg, uint8_t len);
#line 186
static inline void TossimPacketModelC__send_backoff(sim_event_t *evt);
static inline void TossimPacketModelC__send_backoff_cancel_packet(sim_event_t *evt);
static inline void TossimPacketModelC__send_transmit(sim_event_t *evt);
static void TossimPacketModelC__send_transmit_done(sim_event_t *evt);

static inline void TossimPacketModelC__send_transmit_with_cca_fake(sim_event_t *evt);

static inline void TossimPacketModelC__start_csma(void );
#line 227
static inline int TossimPacketModelC__sim_packet_header_length(void );



static inline void TossimPacketModelC__send_transmit(sim_event_t *evt);
#line 254
static void TossimPacketModelC__send_transmit_with_cca(sim_event_t *evt);
#line 275
static inline void TossimPacketModelC__send_transmit_with_cca_fake(sim_event_t *evt);
#line 295
static void TossimPacketModelC__send_transmit_done(sim_event_t *evt);







static inline void TossimPacketModelC__GainRadioModel__receive(message_t *msg);








uint8_t TossimPacketModelC__error[1000];

static inline void TossimPacketModelC__GainRadioModel__acked(message_t *msg);










static bool TossimPacketModelC__GainRadioModel__shouldAck(message_t *msg);








static inline void TossimPacketModelC__send_backoff(sim_event_t *evt);
#line 373
static inline void TossimPacketModelC__send_backoff_cancel_packet(sim_event_t *evt);
# 32 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/Slotter.nc"
static void GenericSlotterP__Slotter__slot(uint32_t num);
# 98 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static GenericSlotterP__Alarm__size_type GenericSlotterP__Alarm__getNow(void );
#line 55
static void GenericSlotterP__Alarm__start(GenericSlotterP__Alarm__size_type dt);






static void GenericSlotterP__Alarm__stop(void );
# 54 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/system/GenericSlotterP.nc"
uint32_t GenericSlotterP__slot[1000];
uint32_t GenericSlotterP__slotLength[1000];
uint32_t GenericSlotterP__frameLength[1000];
bool GenericSlotterP__sync[1000];
uint32_t GenericSlotterP__nextFire[1000];

static inline error_t GenericSlotterP__Init__init(void );








static inline void GenericSlotterP__Boot__booted(void );




static inline error_t GenericSlotterP__AsyncStdControl__start(void );









static error_t GenericSlotterP__SlotterControl__synchronize(uint8_t toSlot);







static inline void GenericSlotterP__FrameConfiguration__setSlotLength(uint32_t slotTimeBms);







static inline void GenericSlotterP__FrameConfiguration__setFrameLength(uint32_t numSlots);
#line 116
static inline void GenericSlotterP__SlotterControl__stop(void );



static void GenericSlotterP__Alarm__fired(void );








static inline uint32_t GenericSlotterP__SlotterControl__getSlot(void );



static inline uint32_t GenericSlotterP__SlotterControl__getRemaining(void );
# 67 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__Alarm__fired(void );
# 9 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AlarmMicro16P.nc"
uint16_t /*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__alarm[1000];
sim_time_t /*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__zero[1000];
sim_event_t */*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__evt[1000];

static inline error_t /*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__Init__init(void );





static inline void /*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__handle_timer_fired(sim_event_t *e);
#line 37
static inline bool /*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__Alarm__isRunning(void );




static void /*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__Alarm__stop(void );
#line 58
static inline void /*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__Alarm__startAt(uint16_t t0, uint16_t dt);
#line 80
static inline void /*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__Counter__overflow(void );
# 67 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__Alarm__fired(void );
#line 92
static void /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__AlarmFrom__startAt(/*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__AlarmFrom__size_type t0, /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__AlarmFrom__size_type dt);
#line 62
static void /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__AlarmFrom__stop(void );
# 53 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__Counter__size_type /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__Counter__get(void );
# 66 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
/*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__to_size_type /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__m_t0[1000];
/*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__to_size_type /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__m_dt[1000];

enum /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1____nesc_unnamed4317 {

  TransformAlarmC__1__MAX_DELAY_LOG2 = 8 * sizeof(/*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__from_size_type ) - 1 - 5, 
  TransformAlarmC__1__MAX_DELAY = (/*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__to_size_type )1 << /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__MAX_DELAY_LOG2
};

static inline /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__to_size_type /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__Alarm__getNow(void );
#line 91
static inline void /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__Alarm__stop(void );




static void /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__set_alarm(void );
#line 136
static inline void /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__Alarm__startAt(/*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__to_size_type t0, /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__to_size_type dt);









static inline void /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__Alarm__start(/*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__to_size_type dt);




static inline void /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__AlarmFrom__fired(void );
#line 166
static inline void /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__Counter__overflow(void );
# 53 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__CounterFrom__size_type /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__CounterFrom__get(void );






static bool /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__CounterFrom__isOverflowPending(void );










static void /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__Counter__overflow(void );
# 56 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
/*Counter32khz32C.TransformCounterC*/TransformCounterC__1__upper_count_type /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__m_upper[1000];

enum /*Counter32khz32C.TransformCounterC*/TransformCounterC__1____nesc_unnamed4318 {

  TransformCounterC__1__LOW_SHIFT_RIGHT = 5, 
  TransformCounterC__1__HIGH_SHIFT_LEFT = 8 * sizeof(/*Counter32khz32C.TransformCounterC*/TransformCounterC__1__from_size_type ) - /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__LOW_SHIFT_RIGHT, 
  TransformCounterC__1__NUM_UPPER_BITS = 8 * sizeof(/*Counter32khz32C.TransformCounterC*/TransformCounterC__1__to_size_type ) - 8 * sizeof(/*Counter32khz32C.TransformCounterC*/TransformCounterC__1__from_size_type ) + 5, 



  TransformCounterC__1__OVERFLOW_MASK = /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__NUM_UPPER_BITS ? ((/*Counter32khz32C.TransformCounterC*/TransformCounterC__1__upper_count_type )2 << (/*Counter32khz32C.TransformCounterC*/TransformCounterC__1__NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__to_size_type /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__Counter__get(void );
#line 122
static inline void /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__CounterFrom__overflow(void );
# 40 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncSend.nc"
static error_t SenderDispatcherP__SubSend__send(
#line 34
message_t * msg, 





uint8_t len);
#line 71
static 
#line 69
void * 

SenderDispatcherP__SubSend__getPayload(
#line 68
message_t * msg, 


uint8_t len);
#line 48
static void SenderDispatcherP__Send__sendDone(
# 39 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/system/SenderDispatcherP.nc"
uint8_t arg_0x2baa9476d6d8, 
# 44 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncSend.nc"
message_t * msg, 



error_t error);
# 42 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/system/SenderDispatcherP.nc"
message_t *SenderDispatcherP__toSend[1000];
uint8_t SenderDispatcherP__toSendLen[1000];
uint8_t SenderDispatcherP__last_id[1000];

static inline error_t SenderDispatcherP__Init__init(void );
#line 59
static error_t SenderDispatcherP__Send__send(uint8_t slotType, message_t *msg, uint8_t len);
#line 94
static inline void *SenderDispatcherP__Send__getPayload(uint8_t slotType, message_t *msg, uint8_t len);







static void SenderDispatcherP__SubSend__sendDone(message_t *msg, error_t error);
#line 121
static inline void SenderDispatcherP__Send__default__sendDone(uint8_t type, message_t *msg, error_t error);
# 40 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncSend.nc"
static error_t BeaconSlotP__SubSend__send(
#line 34
message_t * msg, 





uint8_t len);
#line 71
static 
#line 69
void * 

BeaconSlotP__SubSend__getPayload(
#line 68
message_t * msg, 


uint8_t len);
# 52 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncReceive.nc"
static void BeaconSlotP__SubReceive__updateBuffer(
#line 49
message_t * msg);
# 55 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void BeaconSlotP__SyncAlarm__start(BeaconSlotP__SyncAlarm__size_type dt);
# 48 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncSend.nc"
static void BeaconSlotP__Send__sendDone(
#line 44
message_t * msg, 



error_t error);
# 41 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncReceive.nc"
static void BeaconSlotP__Receive__receive(
#line 37
message_t * msg, 
void * payload, 


uint8_t len);
# 110 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AMPacket.nc"
static void BeaconSlotP__AMPacket__setSource(
#line 106
message_t * amsg, 



am_addr_t addr);
#line 92
static void BeaconSlotP__AMPacket__setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 136
static am_id_t BeaconSlotP__AMPacket__type(
#line 132
message_t * amsg);
#line 151
static void BeaconSlotP__AMPacket__setType(
#line 147
message_t * amsg, 



am_id_t t);
# 31 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/SlotterControl.nc"
static error_t BeaconSlotP__SlotterControl__synchronize(uint8_t toSlot);




static uint32_t BeaconSlotP__SlotterControl__getRemaining(void );
static void BeaconSlotP__SlotterControl__stop(void );
# 51 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/BeaconSlotP.nc"
message_t BeaconSlotP__syncPkt[1000];
uint8_t BeaconSlotP__syncPktLen[1000];




static inline void BeaconSlotP__write_timestamp(uint8_t *payload, uint32_t timestamp);





static inline uint32_t BeaconSlotP__read_timestamp(uint8_t *payload);





static inline error_t BeaconSlotP__Init__init(void );








static inline error_t BeaconSlotP__Send__send(message_t *msg, uint8_t len);
#line 93
static inline void BeaconSlotP__SubSend__sendDone(message_t *msg, error_t error);
#line 113
static inline void BeaconSlotP__SubReceive__receive(message_t *msg, void *payload, uint8_t len);
#line 136
static inline void BeaconSlotP__SyncAlarm__fired(void );



static inline void BeaconSlotP__Receive__updateBuffer(message_t *msg);
# 67 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__Alarm__fired(void );
# 9 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AlarmMicro16P.nc"
uint16_t /*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__alarm[1000];
sim_time_t /*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__zero[1000];
sim_event_t */*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__evt[1000];

static inline error_t /*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__Init__init(void );





static inline void /*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__handle_timer_fired(sim_event_t *e);
#line 37
static inline bool /*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__Alarm__isRunning(void );




static inline void /*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__Alarm__stop(void );
#line 58
static inline void /*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__Alarm__startAt(uint16_t t0, uint16_t dt);
#line 80
static inline void /*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__Counter__overflow(void );
# 67 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__Alarm__fired(void );
#line 92
static void /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__AlarmFrom__startAt(/*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__AlarmFrom__size_type t0, /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__AlarmFrom__size_type dt);
# 53 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__Counter__size_type /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__Counter__get(void );
# 66 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
/*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__to_size_type /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__m_t0[1000];
/*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__to_size_type /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__m_dt[1000];

enum /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2____nesc_unnamed4319 {

  TransformAlarmC__2__MAX_DELAY_LOG2 = 8 * sizeof(/*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__from_size_type ) - 1 - 5, 
  TransformAlarmC__2__MAX_DELAY = (/*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__to_size_type )1 << /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__MAX_DELAY_LOG2
};

static inline /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__to_size_type /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__Alarm__getNow(void );
#line 96
static void /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__set_alarm(void );
#line 136
static inline void /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__Alarm__startAt(/*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__to_size_type t0, /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__to_size_type dt);









static inline void /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__Alarm__start(/*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__to_size_type dt);




static inline void /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__AlarmFrom__fired(void );
#line 166
static inline void /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__Counter__overflow(void );
# 67 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__Alarm__fired(void );
# 9 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AlarmMicro16P.nc"
uint16_t /*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__alarm[1000];
sim_time_t /*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__zero[1000];
sim_event_t */*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__evt[1000];

static inline error_t /*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__Init__init(void );





static inline void /*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__handle_timer_fired(sim_event_t *e);
#line 37
static inline bool /*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__Alarm__isRunning(void );




static inline void /*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__Alarm__stop(void );
#line 58
static inline void /*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__Alarm__startAt(uint16_t t0, uint16_t dt);
#line 80
static inline void /*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__Counter__overflow(void );
# 67 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__Alarm__fired(void );
#line 92
static void /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__AlarmFrom__startAt(/*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__AlarmFrom__size_type t0, /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__AlarmFrom__size_type dt);
# 53 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__Counter__size_type /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__Counter__get(void );
# 66 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
/*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__to_size_type /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__m_t0[1000];
/*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__to_size_type /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__m_dt[1000];

enum /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3____nesc_unnamed4320 {

  TransformAlarmC__3__MAX_DELAY_LOG2 = 8 * sizeof(/*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__from_size_type ) - 1 - 5, 
  TransformAlarmC__3__MAX_DELAY = (/*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__to_size_type )1 << /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__MAX_DELAY_LOG2
};

static inline /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__to_size_type /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__Alarm__getNow(void );
#line 96
static void /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__set_alarm(void );
#line 136
static void /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__Alarm__startAt(/*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__to_size_type t0, /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__to_size_type dt);









static inline void /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__Alarm__start(/*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__to_size_type dt);




static inline void /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__AlarmFrom__fired(void );
#line 166
static inline void /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__Counter__overflow(void );
# 67 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__Alarm__fired(void );
# 9 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AlarmMicro16P.nc"
uint16_t /*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__alarm[1000];
sim_time_t /*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__zero[1000];
sim_event_t */*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__evt[1000];

static inline error_t /*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__Init__init(void );





static inline void /*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__handle_timer_fired(sim_event_t *e);
#line 37
static inline bool /*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__Alarm__isRunning(void );




static inline void /*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__Alarm__stop(void );
#line 58
static inline void /*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__Alarm__startAt(uint16_t t0, uint16_t dt);
#line 80
static inline void /*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__Counter__overflow(void );
# 67 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__Alarm__fired(void );
#line 92
static void /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__AlarmFrom__startAt(/*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__AlarmFrom__size_type t0, /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__AlarmFrom__size_type dt);
# 53 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__Counter__size_type /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__Counter__get(void );
# 66 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
/*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__to_size_type /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__m_t0[1000];
/*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__to_size_type /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__m_dt[1000];

enum /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4____nesc_unnamed4321 {

  TransformAlarmC__4__MAX_DELAY_LOG2 = 8 * sizeof(/*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__from_size_type ) - 1 - 5, 
  TransformAlarmC__4__MAX_DELAY = (/*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__to_size_type )1 << /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__MAX_DELAY_LOG2
};

static inline /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__to_size_type /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__Alarm__getNow(void );
#line 96
static void /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__set_alarm(void );
#line 136
static void /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__Alarm__startAt(/*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__to_size_type t0, /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__to_size_type dt);









static inline void /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__Alarm__start(/*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__to_size_type dt);




static inline void /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__AlarmFrom__fired(void );
#line 166
static inline void /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__Counter__overflow(void );
# 53 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static void CC2420ControlP__CC2420Config__syncDone(error_t error);
# 56 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t CC2420ControlP__syncDoneTask__postTask(void );
# 39 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/control/sim/CC2420ControlP.nc"
enum CC2420ControlP____nesc_unnamed4322 {
#line 39
  CC2420ControlP__syncDoneTask = 5U
};
#line 39
typedef int CC2420ControlP____nesc_sillytask_syncDoneTask[CC2420ControlP__syncDoneTask];
#line 12
uint8_t CC2420ControlP__channel[1000];


uint8_t CC2420ControlP__power[1000];


bool CC2420ControlP__autoAck[1000];
bool CC2420ControlP__hwAutoAck[1000];
static inline error_t CC2420ControlP__Init__init(void );
#line 39
static inline void CC2420ControlP__syncDoneTask__runTask(void );



static error_t CC2420ControlP__CC2420Config__sync(void );







static inline uint8_t CC2420ControlP__CC2420Config__getChannel(void );
static inline void CC2420ControlP__CC2420Config__setChannel(uint8_t ch);







static inline void CC2420ControlP__CC2420Config__setPower(uint8_t pw);
# 63 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Read.nc"
static void CpmModelC__ReadRssi__readDone(error_t result, CpmModelC__ReadRssi__val_t val);
# 52 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/GainRadioModel.nc"
static void CpmModelC__Model__receive(message_t *msg);
#line 51
static void CpmModelC__Model__acked(message_t *msg);

static bool CpmModelC__Model__shouldAck(message_t *msg);
# 595 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/CpmModelC.nc"
enum CpmModelC____nesc_unnamed4323 {
#line 595
  CpmModelC__read_rssi_task = 6U
};
#line 595
typedef int CpmModelC____nesc_sillytask_read_rssi_task[CpmModelC__read_rssi_task];
#line 66
message_t *CpmModelC__outgoing[1000];
bool CpmModelC__requestAck[1000];
bool CpmModelC__receiving[1000];
bool CpmModelC__rssi[1000];
struct CpmModelC__receive_message;
typedef struct CpmModelC__receive_message CpmModelC__receive_message_t;

struct CpmModelC__receive_message {
  int source;
  sim_time_t start;
  sim_time_t end;
  double power;
  double reversePower;
  int8_t strength;
  bool lost;
  bool ack;
  message_t *msg;
  CpmModelC__receive_message_t *next;
  uint8_t channel;
  uint8_t lqi;
};

CpmModelC__receive_message_t *CpmModelC__outstandingReceptionHead[1000];

static inline CpmModelC__receive_message_t *CpmModelC__allocate_receive_message(void );
static inline void CpmModelC__free_receive_message(CpmModelC__receive_message_t *msg);
static inline sim_event_t *CpmModelC__allocate_receive_event(sim_time_t t, CpmModelC__receive_message_t *m);

static bool CpmModelC__shouldReceive(double SNR);

static double CpmModelC__packetNoise(CpmModelC__receive_message_t *msg);



static inline double CpmModelC__timeInMs(void );
#line 135
static inline double CpmModelC__noise_hash_generation(void );
#line 163
static inline double CpmModelC__arr_estimate_from_snr(double SNR);
#line 178
static inline int CpmModelC__shouldAckReceive(double snr);
#line 190
static inline void CpmModelC__sim_gain_ack_handle(sim_event_t *evt);
#line 212
double CpmModelC__clearThreshold[1000];










static bool CpmModelC__Model__clearChannel(void );






static void CpmModelC__sim_gain_schedule_ack(int source, sim_time_t t, CpmModelC__receive_message_t *r);
#line 245
static inline double CpmModelC__prr_estimate_from_snr(double SNR);
#line 261
static bool CpmModelC__shouldReceive(double SNR);
#line 307
static double CpmModelC__packetNoise(CpmModelC__receive_message_t *msg);
#line 361
static inline void CpmModelC__sim_gain_receive_handle(sim_event_t *evt);
#line 463
static inline void CpmModelC__enqueue_receive_event(int source, sim_time_t endTime, message_t *msg, bool receive, double power, double reversePower);
#line 546
static inline void CpmModelC__sim_gain_put(int dest, message_t *msg, sim_time_t endTime, bool receive, double power, double reversePower, int channel_id);







static void CpmModelC__Model__putOnAirTo(int dest, message_t *msg, bool ack, sim_time_t endTime, double power, double reversePower, uint8_t channel_id);
#line 575
static inline sim_event_t *CpmModelC__allocate_receive_event(sim_time_t endTime, CpmModelC__receive_message_t *msg);
#line 587
static inline CpmModelC__receive_message_t *CpmModelC__allocate_receive_message(void );



static inline void CpmModelC__free_receive_message(CpmModelC__receive_message_t *msg);



static inline void CpmModelC__read_rssi_task__runTask(void );
# 10 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/lib/macs/pure-tdma/ScheduleConfigC.nc"
uint8_t ScheduleConfigC__Primarypath[1000][4][9];





uint8_t ScheduleConfigC__Backuppath[1000][4][9];










uint8_t ScheduleConfigC__flow_destination[1000][4];
uint8_t ScheduleConfigC__flow_source[1000][4];
#line 45
static inline uint8_t ScheduleConfigC__ScheduleConfig__primaryNode(uint8_t flowid, uint8_t nodeid);







static inline uint8_t ScheduleConfigC__ScheduleConfig__backupNode(uint8_t flowid, uint8_t nodeid);
#line 70
static inline bool ScheduleConfigC__ScheduleConfig__flowsource(uint8_t nodeid);









static inline bool ScheduleConfigC__ScheduleConfig__flowdestination(uint8_t nodeid);









static inline uint8_t ScheduleConfigC__ScheduleConfig__taskid(uint8_t flowroot);
# 48 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/QueueC.nc"
/*PureTDMASchedulerC.HIQueueC*/QueueC__0__queue_t  /*PureTDMASchedulerC.HIQueueC*/QueueC__0__queue[1000][2];
uint8_t /*PureTDMASchedulerC.HIQueueC*/QueueC__0__head[1000];
uint8_t /*PureTDMASchedulerC.HIQueueC*/QueueC__0__tail[1000];
uint8_t /*PureTDMASchedulerC.HIQueueC*/QueueC__0__size[1000];

static inline bool /*PureTDMASchedulerC.HIQueueC*/QueueC__0__Queue__empty(void );



static inline uint8_t /*PureTDMASchedulerC.HIQueueC*/QueueC__0__Queue__size(void );



static inline uint8_t /*PureTDMASchedulerC.HIQueueC*/QueueC__0__Queue__maxSize(void );



static inline /*PureTDMASchedulerC.HIQueueC*/QueueC__0__queue_t /*PureTDMASchedulerC.HIQueueC*/QueueC__0__Queue__head(void );



static void /*PureTDMASchedulerC.HIQueueC*/QueueC__0__printQueue(void );
#line 85
static /*PureTDMASchedulerC.HIQueueC*/QueueC__0__queue_t /*PureTDMASchedulerC.HIQueueC*/QueueC__0__Queue__dequeue(void );
#line 97
static inline error_t /*PureTDMASchedulerC.HIQueueC*/QueueC__0__Queue__enqueue(/*PureTDMASchedulerC.HIQueueC*/QueueC__0__queue_t newVal);
#line 48
/*PureTDMASchedulerC.LOQueueC*/QueueC__1__queue_t  /*PureTDMASchedulerC.LOQueueC*/QueueC__1__queue[1000][2];
uint8_t /*PureTDMASchedulerC.LOQueueC*/QueueC__1__head[1000];
uint8_t /*PureTDMASchedulerC.LOQueueC*/QueueC__1__tail[1000];
uint8_t /*PureTDMASchedulerC.LOQueueC*/QueueC__1__size[1000];

static inline bool /*PureTDMASchedulerC.LOQueueC*/QueueC__1__Queue__empty(void );



static inline uint8_t /*PureTDMASchedulerC.LOQueueC*/QueueC__1__Queue__size(void );



static inline uint8_t /*PureTDMASchedulerC.LOQueueC*/QueueC__1__Queue__maxSize(void );



static inline /*PureTDMASchedulerC.LOQueueC*/QueueC__1__queue_t /*PureTDMASchedulerC.LOQueueC*/QueueC__1__Queue__head(void );



static void /*PureTDMASchedulerC.LOQueueC*/QueueC__1__printQueue(void );
#line 85
static /*PureTDMASchedulerC.LOQueueC*/QueueC__1__queue_t /*PureTDMASchedulerC.LOQueueC*/QueueC__1__Queue__dequeue(void );
#line 97
static inline error_t /*PureTDMASchedulerC.LOQueueC*/QueueC__1__Queue__enqueue(/*PureTDMASchedulerC.LOQueueC*/QueueC__1__queue_t newVal);
# 41 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncReceive.nc"
static void SyncReceiveAdapterP__AsyncReceive__receive(
#line 37
message_t * msg, 
void * payload, 


uint8_t len);
# 8 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/SyncReceiveAdapterP.nc"
static inline message_t *SyncReceiveAdapterP__Receive__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);








static inline void SyncReceiveAdapterP__AsyncReceive__updateBuffer(message_t *msg);
# 83 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t SyncSendAdapterP__SplitControl__start(void );
# 69 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t SyncSendAdapterP__AMSend__send(
# 3 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/SyncSendAdapterP.nc"
am_id_t arg_0x2baa94b0d448, 
# 69 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

SyncSendAdapterP__AMSend__getPayload(
# 3 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/SyncSendAdapterP.nc"
am_id_t arg_0x2baa94b0d448, 
# 121 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 


uint8_t len);
# 36 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/RadioPowerControl.nc"
static void SyncSendAdapterP__RadioPowerControl__startDone(error_t error);





static void SyncSendAdapterP__RadioPowerControl__stopDone(error_t error);
# 48 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncSend.nc"
static void SyncSendAdapterP__AsyncSend__sendDone(
#line 44
message_t * msg, 



error_t error);
# 10 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/SyncSendAdapterP.nc"
static inline tossim_header_t *SyncSendAdapterP__getHeader(message_t *msg);




static inline error_t SyncSendAdapterP__AsyncSend__send(message_t *msg, uint8_t len);









static inline void SyncSendAdapterP__AMSend__sendDone(am_id_t id, message_t *msg, uint8_t len);









static inline void *SyncSendAdapterP__AsyncSend__getPayload(message_t *msg, uint8_t len);




static inline error_t SyncSendAdapterP__RadioPowerControl__start(void );

static inline void SyncSendAdapterP__SplitControl__startDone(error_t err);
static inline void SyncSendAdapterP__SplitControl__stopDone(error_t err);
# 49 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageC.nc"
static am_addr_t TossimActiveMessageC__amAddress(void );
# 99 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void TossimActiveMessageC__AMSend__sendDone(
# 39 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x2baa94b47850, 
# 92 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 67 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



TossimActiveMessageC__Snoop__receive(
# 41 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x2baa94b42670, 
# 60 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 67
static 
#line 63
message_t * 



TossimActiveMessageC__Receive__receive(
# 40 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x2baa94b44a90, 
# 60 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 52 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/TossimPacketModel.nc"
static error_t TossimActiveMessageC__Model__send(int node, message_t *msg, uint8_t len);
# 54 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageC.nc"
message_t TossimActiveMessageC__buffer[1000];
message_t *TossimActiveMessageC__bufferPointer[1000];

static inline tossim_header_t *TossimActiveMessageC__getHeader(message_t *amsg);







static inline error_t TossimActiveMessageC__AMSend__send(am_id_t id, am_addr_t addr, 
message_t *amsg, 
uint8_t len);
#line 87
static void *TossimActiveMessageC__AMSend__getPayload(am_id_t id, message_t *m, uint8_t len);







static inline void TossimActiveMessageC__Model__sendDone(message_t *msg, error_t result);





static void TossimActiveMessageC__Model__receive(message_t *msg);
#line 119
static inline bool TossimActiveMessageC__Model__shouldAck(message_t *msg);








static inline am_addr_t TossimActiveMessageC__AMPacket__address(void );



static am_addr_t TossimActiveMessageC__AMPacket__destination(message_t *amsg);




static void TossimActiveMessageC__AMPacket__setDestination(message_t *amsg, am_addr_t addr);




static am_addr_t TossimActiveMessageC__AMPacket__source(message_t *amsg);




static inline void TossimActiveMessageC__AMPacket__setSource(message_t *amsg, am_addr_t addr);




static inline bool TossimActiveMessageC__AMPacket__isForMe(message_t *amsg);




static am_id_t TossimActiveMessageC__AMPacket__type(message_t *amsg);




static inline void TossimActiveMessageC__AMPacket__setType(message_t *amsg, am_id_t t);






static inline uint8_t TossimActiveMessageC__Packet__payloadLength(message_t *msg);







static inline uint8_t TossimActiveMessageC__Packet__maxPayloadLength(void );



static inline void *TossimActiveMessageC__Packet__getPayload(message_t *msg, uint8_t len);
#line 208
static inline message_t *TossimActiveMessageC__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);
#line 228
static inline void TossimActiveMessageC__active_message_deliver_handle(sim_event_t *evt);





static inline sim_event_t *TossimActiveMessageC__allocate_deliver_event(int node, message_t *msg, sim_time_t t);
#line 246
void active_message_deliver(int node, message_t *msg, sim_time_t t)   ;
# 50 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/ActiveMessageAddressC.nc"
bool ActiveMessageAddressC__set[1000];
am_addr_t ActiveMessageAddressC__addr[1000];

static am_addr_t ActiveMessageAddressC__amAddress(void );
# 99 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*TestNetworkAppC.Sender.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(
#line 92
message_t * msg, 






error_t error);
# 114 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Send.nc"
static 
#line 112
void * 

/*TestNetworkAppC.Sender.AMQueueEntryP*/AMQueueEntryP__0__Send__getPayload(
#line 111
message_t * msg, 


uint8_t len);
# 57 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline void /*TestNetworkAppC.Sender.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(message_t *m, error_t err);







static inline void */*TestNetworkAppC.Sender.AMQueueEntryP*/AMQueueEntryP__0__AMSend__getPayload(message_t *m, uint8_t len);
# 69 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(
# 40 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x2baa94bfa1a0, 
# 69 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__getPayload(
# 40 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x2baa94bfa1a0, 
# 121 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 


uint8_t len);
# 89 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(
# 38 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x2baa94bfb020, 
# 85 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 67 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(
#line 63
message_t * msg);
# 56 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask(void );
# 67 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AMPacket.nc"
static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(
#line 63
message_t * amsg);
#line 136
static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(
#line 132
message_t * amsg);
# 118 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4324 {
#line 118
  AMQueueImplP__0__CancelTask = 7U
};
#line 118
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_sillytask_CancelTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask];
#line 161
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4325 {
#line 161
  AMQueueImplP__0__errorTask = 8U
};
#line 161
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_sillytask_errorTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask];
#line 49
#line 47
typedef struct /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4326 {
  message_t * msg;
} /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue_entry_t;

uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[1000];
/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue_entry_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[1000][1];
uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[1000][1 / 8 + 1];

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void );

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket(void );
#line 118
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void );
#line 155
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(uint8_t last, message_t * msg, error_t err);





static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void );




static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void );
#line 181
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(am_id_t id, message_t *msg, error_t err);
#line 203
static inline void */*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__getPayload(uint8_t id, message_t *m, uint8_t len);



static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(uint8_t id, message_t *msg, error_t err);
# 10 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AlarmMicro16P.nc"
sim_time_t /*TestNetworkAppC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__5__zero[1000];
sim_event_t */*TestNetworkAppC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__5__evt[1000];

static inline error_t /*TestNetworkAppC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__5__Init__init(void );
#line 37
static inline bool /*TestNetworkAppC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__5__Alarm__isRunning(void );




static inline void /*TestNetworkAppC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__5__Alarm__stop(void );
#line 80
static inline void /*TestNetworkAppC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__5__Counter__overflow(void );
# 62 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*TestNetworkAppC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__5__AlarmFrom__stop(void );
# 69 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
enum /*TestNetworkAppC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__5____nesc_unnamed4327 {

  TransformAlarmC__5__MAX_DELAY_LOG2 = 8 * sizeof(/*TestNetworkAppC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__5__from_size_type ) - 1 - 5, 
  TransformAlarmC__5__MAX_DELAY = (/*TestNetworkAppC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__5__to_size_type )1 << /*TestNetworkAppC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__5__MAX_DELAY_LOG2
};
#line 91
static inline void /*TestNetworkAppC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__5__Alarm__stop(void );
#line 166
static inline void /*TestNetworkAppC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__5__Counter__overflow(void );
# 54 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/system/SSTdmaSlotSenderP.nc"
enum /*TestNetworkAppC.SSTdmaSlotSenderC.SSTdmaSlotSenderP*/SSTdmaSlotSenderP__0____nesc_unnamed4328 {
  SSTdmaSlotSenderP__0__S_START = 0, 
  SSTdmaSlotSenderP__0__S_CCA = 1, 
  SSTdmaSlotSenderP__0__S_BACKOFF = 2, 
  SSTdmaSlotSenderP__0__S_CCA2 = 3, 
  SSTdmaSlotSenderP__0__S_SEND = 4, 
  SSTdmaSlotSenderP__0__S_END = 5
};

message_t */*TestNetworkAppC.SSTdmaSlotSenderC.SSTdmaSlotSenderP*/SSTdmaSlotSenderP__0__toSend[1000];
uint8_t /*TestNetworkAppC.SSTdmaSlotSenderC.SSTdmaSlotSenderP*/SSTdmaSlotSenderP__0__toSendLen[1000];
uint8_t /*TestNetworkAppC.SSTdmaSlotSenderC.SSTdmaSlotSenderP*/SSTdmaSlotSenderP__0__state[1000];


static inline error_t /*TestNetworkAppC.SSTdmaSlotSenderC.SSTdmaSlotSenderP*/SSTdmaSlotSenderP__0__Init__init(void );
# 10 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AlarmMicro16P.nc"
sim_time_t /*TestNetworkAppC.SSTdmaSlotSenderC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__6__zero[1000];


static inline error_t /*TestNetworkAppC.SSTdmaSlotSenderC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__6__Init__init(void );
#line 80
static inline void /*TestNetworkAppC.SSTdmaSlotSenderC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__6__Counter__overflow(void );
# 69 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
enum /*TestNetworkAppC.SSTdmaSlotSenderC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__6____nesc_unnamed4329 {

  TransformAlarmC__6__MAX_DELAY_LOG2 = 8 * sizeof(/*TestNetworkAppC.SSTdmaSlotSenderC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__6__from_size_type ) - 1 - 5, 
  TransformAlarmC__6__MAX_DELAY = (/*TestNetworkAppC.SSTdmaSlotSenderC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__6__to_size_type )1 << /*TestNetworkAppC.SSTdmaSlotSenderC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__6__MAX_DELAY_LOG2
};
#line 166
static inline void /*TestNetworkAppC.SSTdmaSlotSenderC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__6__Counter__overflow(void );
# 41 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/RandomMlcgC.nc"
uint32_t RandomMlcgC__seed[1000];


static inline error_t RandomMlcgC__Init__init(void );
# 67 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/heap.c"
static inline void init_heap(heap_t *heap)
#line 67
{
  heap->size = 0;
  heap->private_size = STARTING_SIZE;
  heap->data = malloc(sizeof(node_t ) * heap->private_size);
}

#line 119
static inline void expand_heap(heap_t *heap)
#line 119
{
  int new_size = heap->private_size * 2 + 1;
  void *new_data = malloc(sizeof(node_t ) * new_size);



  memcpy(new_data, heap->data, sizeof(node_t ) * heap->private_size);
  free(heap->data);

  heap->data = new_data;
  heap->private_size = new_size;
}


static inline void heap_insert(heap_t *heap, void *data, long long int key)
#line 133
{
  int findex = heap->size;

#line 135
  if (findex == heap->private_size) {
      expand_heap(heap);
    }

  findex = heap->size;
  ((node_t *)heap->data)[findex].key = key;
  ((node_t *)heap->data)[findex].data = data;
  up_heap(heap, findex);

  heap->size++;
}

#line 77
static inline int is_empty(heap_t *heap)
#line 77
{
  return heap->size == 0;
}

static inline int heap_is_empty(heap_t *heap)
#line 81
{
  return is_empty(heap);
}

static inline long long int heap_get_min_key(heap_t *heap)
#line 85
{
  if (is_empty(heap)) {
      return -1;
    }
  else {
      return ((node_t *)heap->data)[0].key;
    }
}

# 309 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_log.c"
inline static int sim_log_eq(void *key1, void *key2)
#line 309
{
  return strcmp((char *)key1, (char *)key2) == 0;
}

#line 298
inline static unsigned int sim_log_hash(void *key)
#line 298
{
  char *str = (char *)key;
  unsigned int hashVal = 0;
  int hashChar;

  while ((hashChar = * str++)) 
    hashVal = hashChar + (hashVal << 6) + (hashVal << 16) - hashVal;

  return hashVal;
}

#line 151
static inline void sim_log_init()
#line 151
{
  int i;

  channelTable = create_hashtable(128, sim_log_hash, sim_log_eq);

  for (i = 0; i < SIM_LOG_OUTPUT_COUNT; i++) {
      outputs[i].num = 1;
      outputs[i].files = (FILE **)malloc(sizeof(FILE *));
      outputs[i].files[0] = fdopen(1, "w");
    }
}

# 124 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_noise.c"
inline static unsigned int sim_noise_hash(void *key)
#line 124
{
  char *pt = (char *)key;
  unsigned int hashVal = 0;
  int i;

#line 128
  for (i = 0; i < NOISE_HISTORY; i++) {
      hashVal = pt[i] + (hashVal << 6) + (hashVal << 16) - hashVal;
    }
  return hashVal;
}

inline static int sim_noise_eq(void *key1, void *key2)
#line 134
{
  return memcmp((void *)key1, (void *)key2, NOISE_HISTORY) == 0;
}

# 121 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SimMoteP.nc"
static inline bool SimMoteP__SimMote__isOn(void )
#line 121
{
  return SimMoteP__isOn[sim_node()];
}

#line 275
static inline int *SimMoteP__SimMote__getTcpMsg(void )
#line 275
{
  return SimMoteP__tcp_msg[sim_node()];
}

# 164 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_log.c"
static inline void sim_log_add_channel(char *name, FILE *file)
#line 164
{
  sim_log_channel_t *channel;

#line 166
  channel = (sim_log_channel_t *)hashtable_search(channelTable, name);



  if (channel == (void *)0) {
      char *newName = (char *)malloc(strlen(name) + 1);

#line 172
      strcpy(newName, name);
      newName[strlen(name)] = 0;

      channel = (sim_log_channel_t *)malloc(sizeof(sim_log_channel_t ));
      channel->name = newName;
      channel->numOutputs = 0;
      channel->size = DEFAULT_CHANNEL_SIZE;
      channel->outputs = (FILE **)malloc(sizeof(FILE *) * channel->size);
      memset(channel->outputs, 0, sizeof(FILE *) * channel->size);
      hashtable_insert(channelTable, newName, channel);
    }



  if (channel->numOutputs == channel->size) {
      FILE **newOutputs;
      int newSize = channel->size * 2;

      newOutputs = (FILE **)malloc(sizeof(FILE *) * newSize);
      memcpy(newOutputs, channel->outputs, channel->size * sizeof(FILE **));

      free(channel->outputs);

      channel->outputs = newOutputs;
      channel->size = newSize;
    }

  channel->outputs[channel->numOutputs] = file;
  channel->numOutputs++;
  sim_log_commit_change();
}

static inline bool sim_log_remove_channel(char *output, FILE *file)
#line 204
{
  sim_log_channel_t *channel;
  int i;

#line 207
  channel = (sim_log_channel_t *)hashtable_search(channelTable, output);

  if (channel == (void *)0) {
      return FALSE;
    }


  for (i = 0; i < channel->numOutputs; i++) {
      FILE *f = channel->outputs[i];

#line 216
      if (file == f) {
          memcpy(&channel->outputs[i], &channel->outputs[i + 1], channel->numOutputs - (i + 1));
          channel->outputs[channel->numOutputs - 1] = (void *)0;
          channel->numOutputs--;
        }
    }

  return TRUE;
}

# 163 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_gain.c"
static inline gain_entry_t *sim_gain_allocate_link(int mote, int channel_id)
#line 163
{
  gain_entry_t *newLink = (gain_entry_t *)malloc(sizeof(gain_entry_t ));

#line 165
  newLink->next = (void *)0;
  newLink->mote = mote;
  newLink->channel = channel_id;
  newLink->gain = -10000000.0;
  return newLink;
}

# 55 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/randomlib.c"
static inline void RandomInitialise(int ij, int kl)
{
  double s;
#line 57
  double t;
  int ii;
#line 58
  int i;
#line 58
  int j;
#line 58
  int k;
#line 58
  int l;
#line 58
  int jj;
#line 58
  int m;






  if (((ij < 0 || ij > 31328) || kl < 0) || kl > 30081) {
      ij = 1802;
      kl = 9373;
    }

  i = ij / 177 % 177 + 2;
  j = ij % 177 + 2;
  k = kl / 169 % 178 + 1;
  l = kl % 169;

  for (ii = 0; ii < 97; ii++) {
      s = 0.0;
      t = 0.5;
      for (jj = 0; jj < 24; jj++) {
          m = i * j % 179 * k % 179;
          i = j;
          j = k;
          k = m;
          l = (53 * l + 1) % 169;
          if (l * m % 64 >= 32) {
            s += t;
            }
#line 86
          t *= 0.5;
        }
      randU[ii] = s;
    }

  randC = 362436.0 / 16777216.0;
  randCD = 7654321.0 / 16777216.0;
  randCM = 16777213.0 / 16777216.0;
  i97 = 97;
  j97 = 33;
  test = TRUE;
}

# 283 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_noise.c"
static inline void sim_noise_alarm()
#line 283
{
  dummy = 5;
}

# 42 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_packet.c"
inline static tossim_header_t *getHeader(message_t *msg)
#line 42
{
  return (tossim_header_t *)(msg->data - sizeof(tossim_header_t ));
}

# 228 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageC.nc"
static inline void TossimActiveMessageC__active_message_deliver_handle(sim_event_t *evt)
#line 228
{
  message_t *m = (message_t *)evt->data;

#line 230
  sim_log_debug(219U, "Packet", "Delivering packet to %i at %s\n", (int )sim_node(), sim_time_string());
  TossimActiveMessageC__Model__receive(m);
}

static inline sim_event_t *TossimActiveMessageC__allocate_deliver_event(int node, message_t *msg, sim_time_t t)
#line 234
{
  sim_event_t *evt = (sim_event_t *)malloc(sizeof(sim_event_t ));

#line 236
  evt->mote = node;
  evt->time = t;
  evt->handle = TossimActiveMessageC__active_message_deliver_handle;
  evt->cleanup = sim_queue_cleanup_event;
  evt->cancelled = 0;
  evt->force = 0;
  evt->data = msg;
  return evt;
}

#line 181
static inline void *TossimActiveMessageC__Packet__getPayload(message_t *msg, uint8_t len)
#line 181
{
  if (len <= 156) {
      return msg->data;
    }
  else {
      return (void *)0;
    }
}

#line 177
static inline uint8_t TossimActiveMessageC__Packet__maxPayloadLength(void )
#line 177
{
  return 156;
}

#line 49
inline static am_addr_t TossimActiveMessageC__amAddress(void ){
#line 49
  unsigned short __nesc_result;
#line 49

#line 49
  __nesc_result = ActiveMessageAddressC__amAddress();
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
#line 128
static inline am_addr_t TossimActiveMessageC__AMPacket__address(void )
#line 128
{
  return TossimActiveMessageC__amAddress();
}

#line 152
static inline bool TossimActiveMessageC__AMPacket__isForMe(message_t *amsg)
#line 152
{
  return TossimActiveMessageC__AMPacket__destination(amsg) == TossimActiveMessageC__AMPacket__address() || 
  TossimActiveMessageC__AMPacket__destination(amsg) == AM_BROADCAST_ADDR;
}

# 310 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
#line 310
{
  const uint8_t *base = source;

#line 312
  return ((uint16_t )base[0] << 8) | base[1];
}

static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 315
{
  uint8_t *base = target;

#line 317
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

#line 281
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 281
{
  const uint8_t *base = source;

#line 283
  return base[0];
}

static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 286
{
  uint8_t *base = target;

#line 288
  base[0] = value;
  return value;
}

# 56 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t AsyncReceiveAdapterP__receiveDone_task__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(AsyncReceiveAdapterP__receiveDone_task);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 47 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AsyncReceiveAdapterP.nc"
static inline void AsyncReceiveAdapterP__AsyncReceive__receive(message_t *msg, void *payload, uint8_t len)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      AsyncReceiveAdapterP__msg_[sim_node()] = msg;
      AsyncReceiveAdapterP__payload_[sim_node()] = payload;
      AsyncReceiveAdapterP__len_[sim_node()] = len;
    }
#line 54
    __nesc_atomic_end(__nesc_atomic); }
  AsyncReceiveAdapterP__receiveDone_task__postTask();
}

# 41 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncReceive.nc"
inline static void PureTDMASchedulerP__Receive__receive(message_t * msg, void * payload, uint8_t len){
#line 41
  AsyncReceiveAdapterP__AsyncReceive__receive(msg, payload, len);
#line 41
}
#line 41
# 61 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/QueueC.nc"
static inline uint8_t /*PureTDMASchedulerC.LOQueueC*/QueueC__1__Queue__maxSize(void )
#line 61
{
  return 2;
}

#line 57
static inline uint8_t /*PureTDMASchedulerC.LOQueueC*/QueueC__1__Queue__size(void )
#line 57
{
  return /*PureTDMASchedulerC.LOQueueC*/QueueC__1__size[sim_node()];
}

#line 97
static inline error_t /*PureTDMASchedulerC.LOQueueC*/QueueC__1__Queue__enqueue(/*PureTDMASchedulerC.LOQueueC*/QueueC__1__queue_t newVal)
#line 97
{
  if (/*PureTDMASchedulerC.LOQueueC*/QueueC__1__Queue__size() < /*PureTDMASchedulerC.LOQueueC*/QueueC__1__Queue__maxSize()) {
      sim_log_debug(214U, "QueueC", "%s: size is %hhu\n", __FUNCTION__, /*PureTDMASchedulerC.LOQueueC*/QueueC__1__size[sim_node()]);
      /*PureTDMASchedulerC.LOQueueC*/QueueC__1__queue[sim_node()][/*PureTDMASchedulerC.LOQueueC*/QueueC__1__tail[sim_node()]] = newVal;
      /*PureTDMASchedulerC.LOQueueC*/QueueC__1__tail[sim_node()]++;
      if (/*PureTDMASchedulerC.LOQueueC*/QueueC__1__tail[sim_node()] == 2) {
#line 102
        /*PureTDMASchedulerC.LOQueueC*/QueueC__1__tail[sim_node()] = 0;
        }
#line 103
      /*PureTDMASchedulerC.LOQueueC*/QueueC__1__size[sim_node()]++;
      /*PureTDMASchedulerC.LOQueueC*/QueueC__1__printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 90 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Queue.nc"
inline static error_t PureTDMASchedulerP__LOforwardQ__enqueue(PureTDMASchedulerP__LOforwardQ__t  newVal){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*PureTDMASchedulerC.LOQueueC*/QueueC__1__Queue__enqueue(newVal);
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 171 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/system/GenericSlotSenderP.nc"
static inline void */*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__Send__getPayload(message_t *msg, uint8_t len)
#line 171
{
  return /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__SubSend__getPayload(msg, len);
}

# 71 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncSend.nc"
inline static void * PureTDMASchedulerP__SubSend__getPayload(message_t * msg, uint8_t len){
#line 71
  void *__nesc_result;
#line 71

#line 71
  __nesc_result = /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__Send__getPayload(msg, len);
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 58 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Queue.nc"
inline static uint8_t PureTDMASchedulerP__LOforwardQ__size(void ){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = /*PureTDMASchedulerC.LOQueueC*/QueueC__1__Queue__size();
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 61 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/QueueC.nc"
static inline uint8_t /*PureTDMASchedulerC.HIQueueC*/QueueC__0__Queue__maxSize(void )
#line 61
{
  return 2;
}

#line 57
static inline uint8_t /*PureTDMASchedulerC.HIQueueC*/QueueC__0__Queue__size(void )
#line 57
{
  return /*PureTDMASchedulerC.HIQueueC*/QueueC__0__size[sim_node()];
}

#line 97
static inline error_t /*PureTDMASchedulerC.HIQueueC*/QueueC__0__Queue__enqueue(/*PureTDMASchedulerC.HIQueueC*/QueueC__0__queue_t newVal)
#line 97
{
  if (/*PureTDMASchedulerC.HIQueueC*/QueueC__0__Queue__size() < /*PureTDMASchedulerC.HIQueueC*/QueueC__0__Queue__maxSize()) {
      sim_log_debug(207U, "QueueC", "%s: size is %hhu\n", __FUNCTION__, /*PureTDMASchedulerC.HIQueueC*/QueueC__0__size[sim_node()]);
      /*PureTDMASchedulerC.HIQueueC*/QueueC__0__queue[sim_node()][/*PureTDMASchedulerC.HIQueueC*/QueueC__0__tail[sim_node()]] = newVal;
      /*PureTDMASchedulerC.HIQueueC*/QueueC__0__tail[sim_node()]++;
      if (/*PureTDMASchedulerC.HIQueueC*/QueueC__0__tail[sim_node()] == 2) {
#line 102
        /*PureTDMASchedulerC.HIQueueC*/QueueC__0__tail[sim_node()] = 0;
        }
#line 103
      /*PureTDMASchedulerC.HIQueueC*/QueueC__0__size[sim_node()]++;
      /*PureTDMASchedulerC.HIQueueC*/QueueC__0__printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 90 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Queue.nc"
inline static error_t PureTDMASchedulerP__HIforwardQ__enqueue(PureTDMASchedulerP__HIforwardQ__t  newVal){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*PureTDMASchedulerC.HIQueueC*/QueueC__0__Queue__enqueue(newVal);
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
#line 58
inline static uint8_t PureTDMASchedulerP__HIforwardQ__size(void ){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = /*PureTDMASchedulerC.HIQueueC*/QueueC__0__Queue__size();
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 51 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/control/sim/CC2420ControlP.nc"
static inline uint8_t CC2420ControlP__CC2420Config__getChannel(void )
#line 51
{
#line 51
  return sim_mote_get_radio_channel(sim_node());
}

# 58 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static uint8_t PureTDMASchedulerP__CC2420Config__getChannel(void ){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = CC2420ControlP__CC2420Config__getChannel();
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 129 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/system/GenericSlotterP.nc"
static inline uint32_t GenericSlotterP__SlotterControl__getSlot(void )
#line 129
{
  return GenericSlotterP__slot[sim_node()];
}

# 39 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/SlotterControl.nc"
inline static uint32_t PureTDMASchedulerP__SlotterControl__getSlot(void ){
#line 39
  unsigned int __nesc_result;
#line 39

#line 39
  __nesc_result = GenericSlotterP__SlotterControl__getSlot();
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 49 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SimMote.nc"
inline static void PureTDMASchedulerP__SimMote__setTcpMsg(int flow_id, int slot_id, int source_id, int node_id, int channel_id){
#line 49
  SimMoteP__SimMote__setTcpMsg(flow_id, slot_id, source_id, node_id, channel_id);
#line 49
}
#line 49
# 753 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/lib/macs/pure-tdma/PureTDMASchedulerP.nc"
static inline void PureTDMASchedulerP__set_current_hop_status(uint32_t slot_t, uint8_t sender, uint8_t receiver)
#line 753
{
  uint8_t i;

}

# 77 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AMPacket.nc"
inline static am_addr_t PureTDMASchedulerP__AMPacket__source(message_t * amsg){
#line 77
  unsigned short __nesc_result;
#line 77

#line 77
  __nesc_result = TossimActiveMessageC__AMPacket__source(amsg);
#line 77

#line 77
  return __nesc_result;
#line 77
}
#line 77
# 583 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/lib/macs/pure-tdma/PureTDMASchedulerP.nc"
static inline void PureTDMASchedulerP__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 583
{
  am_addr_t src = PureTDMASchedulerP__AMPacket__source(msg);
  uint8_t i;
#line 585
  uint8_t link;
  uint8_t flow_id_rcv;
  uint32_t current_slot;
  uint8_t curr_hopcount;
  uint16_t rssi;
  TestNetworkMsg *tmp_payload;
  TestNetworkMsg *HIdataBuffer;
  TestNetworkMsg *LOdataBuffer;
  char *printfResults;



  current_slot = PureTDMASchedulerP__SlotterControl__getSlot() % PureTDMASchedulerP__superframe_length[sim_node()];
  tmp_payload = (TestNetworkMsg *)payload;
  flow_id_rcv = __nesc_ntoh_uint8(tmp_payload->flowid.nxdata);
  PureTDMASchedulerP__set_current_hop_status(PureTDMASchedulerP__SlotterControl__getSlot() % PureTDMASchedulerP__superframe_length[sim_node()], src, TOS_NODE_ID);



  if (((((TOS_NODE_ID == 3 || TOS_NODE_ID == 51) || TOS_NODE_ID == 4) || TOS_NODE_ID == 5) || TOS_NODE_ID == 6) || TOS_NODE_ID == 52) {
      if (flow_id_rcv != 0 && PureTDMASchedulerP__receive_lock[sim_node()][flow_id_rcv] == FALSE) {


          if (PureTDMASchedulerP__prev_job_idx[sim_node()][flow_id_rcv] == __nesc_ntoh_uint16(tmp_payload->job_idx.nxdata)) {
            }
          else 

            {

              PureTDMASchedulerP__prev_job_idx[sim_node()][flow_id_rcv] = __nesc_ntoh_uint16(tmp_payload->job_idx.nxdata);
              PureTDMASchedulerP__Receiving_flag[sim_node()][flow_id_rcv] = TRUE;
              PureTDMASchedulerP__Receiving_flow_id[sim_node()] = flow_id_rcv;


              PureTDMASchedulerP__rcv_slot[sim_node()][flow_id_rcv] = current_slot;
              PureTDMASchedulerP__rcv_count[sim_node()][flow_id_rcv] = PureTDMASchedulerP__rcv_count[sim_node()][flow_id_rcv] + 1;
              PureTDMASchedulerP__receive_lock[sim_node()][flow_id_rcv] = TRUE;
              curr_hopcount = __nesc_ntoh_uint8(tmp_payload->hopcount.nxdata) + 1;
              PureTDMASchedulerP__My_max_txopper[sim_node()][flow_id_rcv] = __nesc_ntoh_uint8(tmp_payload->txopper[curr_hopcount].nxdata);


              sim_log_debug(127U, "receive", "flow_id:%u, SLOT: %u, src:%u, myID:%u, channel:%u   rcv_count[%d]:%d\n\n", flow_id_rcv, PureTDMASchedulerP__rcv_slot[sim_node()][flow_id_rcv], src, TOS_NODE_ID, PureTDMASchedulerP__CC2420Config__getChannel(), flow_id_rcv, PureTDMASchedulerP__rcv_count[sim_node()][flow_id_rcv]);

              if (PureTDMASchedulerP__isFlowdest[sim_node()] == TRUE) {


                  PureTDMASchedulerP__SimMote__setTcpMsg(flow_id_rcv, PureTDMASchedulerP__SlotterControl__getSlot() % PureTDMASchedulerP__superframe_length[sim_node()], src, TOS_NODE_ID, PureTDMASchedulerP__CC2420Config__getChannel());
                }



              if (flow_id_rcv == PureTDMASchedulerP__HI_TASK[sim_node()]) {
                  PureTDMASchedulerP__HIqueueSize[sim_node()] = PureTDMASchedulerP__HIforwardQ__size();
                  HIdataBuffer = (TestNetworkMsg *)PureTDMASchedulerP__SubSend__getPayload(&PureTDMASchedulerP__HIforwardPktBuffer[sim_node()][PureTDMASchedulerP__HIqueueSize[sim_node()]], sizeof(TestNetworkMsg ));
                  __nesc_hton_uint8(HIdataBuffer->flowid.nxdata, __nesc_ntoh_uint8(tmp_payload->flowid.nxdata));
                  __nesc_hton_uint8(HIdataBuffer->hopcount.nxdata, __nesc_ntoh_uint8(tmp_payload->hopcount.nxdata));
                  for (link = 0; link < 5; link++) {
                      __nesc_hton_uint8(HIdataBuffer->txopper[link].nxdata, __nesc_ntoh_uint8(tmp_payload->txopper[link].nxdata));
                      __nesc_hton_uint8(HIdataBuffer->txdelay[link].nxdata, __nesc_ntoh_uint8(tmp_payload->txdelay[link].nxdata));
                    }
                  __nesc_hton_uint16(HIdataBuffer->job_idx.nxdata, __nesc_ntoh_uint16(tmp_payload->job_idx.nxdata));
                  if (HIdataBuffer != (void *)0) {
                      PureTDMASchedulerP__HIforwardQ__enqueue(HIdataBuffer);
                    }
                }
              else {
#line 649
                if (flow_id_rcv == PureTDMASchedulerP__LO_TASK[sim_node()]) {
                    PureTDMASchedulerP__LOqueueSize[sim_node()] = PureTDMASchedulerP__LOforwardQ__size();
                    LOdataBuffer = (TestNetworkMsg *)PureTDMASchedulerP__SubSend__getPayload(&PureTDMASchedulerP__LOforwardPktBuffer[sim_node()][PureTDMASchedulerP__LOqueueSize[sim_node()]], sizeof(TestNetworkMsg ));
                    __nesc_hton_uint8(LOdataBuffer->flowid.nxdata, __nesc_ntoh_uint8(tmp_payload->flowid.nxdata));
                    __nesc_hton_uint8(LOdataBuffer->hopcount.nxdata, __nesc_ntoh_uint8(tmp_payload->hopcount.nxdata));
                    for (link = 0; link < 5; link++) {
                        __nesc_hton_uint8(LOdataBuffer->txopper[link].nxdata, __nesc_ntoh_uint8(tmp_payload->txopper[link].nxdata));
                        __nesc_hton_uint8(LOdataBuffer->txdelay[link].nxdata, __nesc_ntoh_uint8(tmp_payload->txdelay[link].nxdata));
                      }
                    __nesc_hton_uint16(LOdataBuffer->job_idx.nxdata, __nesc_ntoh_uint16(tmp_payload->job_idx.nxdata));
                    if (LOdataBuffer != (void *)0) {
                        PureTDMASchedulerP__LOforwardQ__enqueue(LOdataBuffer);
                      }
                  }
                }


              if (PureTDMASchedulerP__isFlowdest[sim_node()] == TRUE) {

                  PureTDMASchedulerP__e2e_delay_buffer[sim_node()][flow_id_rcv][current_slot] = PureTDMASchedulerP__e2e_delay_buffer[sim_node()][flow_id_rcv][current_slot] + 1;


                  sim_log_debug_clear(128U, "E2E_delay_Log_data", "%d %d %d %d ", TOS_NODE_ID, flow_id_rcv, PureTDMASchedulerP__rcv_count[sim_node()][flow_id_rcv], PureTDMASchedulerP__Total_frame_count[sim_node()][flow_id_rcv]);
                  for (i = 0; i < PureTDMASchedulerP__superframe_length[sim_node()]; i++) {
                      sim_log_debug_clear(129U, "E2E_delay_Log_data", "%d ", PureTDMASchedulerP__e2e_delay_buffer[sim_node()][flow_id_rcv][i]);
                    }
                  sim_log_debug_clear(130U, "E2E_delay_Log_data", "\n");



                  sim_log_debug_clear(131U, "check_link_quality", "RxCount: %d\n", PureTDMASchedulerP__rcv_count[sim_node()][1]);
                }
            }
        }
    }

  PureTDMASchedulerP__Receive__receive(msg, payload, len);
}

# 41 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncReceive.nc"
inline static void BeaconSlotP__Receive__receive(message_t * msg, void * payload, uint8_t len){
#line 41
  PureTDMASchedulerP__SubReceive__receive(msg, payload, len);
#line 41
}
#line 41
# 17 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/SyncReceiveAdapterP.nc"
static inline void SyncReceiveAdapterP__AsyncReceive__updateBuffer(message_t *msg)
{
  free(msg);
}

# 52 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncReceive.nc"
inline static void BeaconSlotP__SubReceive__updateBuffer(message_t * msg){
#line 52
  SyncReceiveAdapterP__AsyncReceive__updateBuffer(msg);
#line 52
}
#line 52
# 31 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/SlotterControl.nc"
inline static error_t BeaconSlotP__SlotterControl__synchronize(uint8_t toSlot){
#line 31
  unsigned char __nesc_result;
#line 31

#line 31
  __nesc_result = GenericSlotterP__SlotterControl__synchronize(toSlot);
#line 31

#line 31
  return __nesc_result;
#line 31
}
#line 31
# 53 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__Counter__size_type /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__Counter__get(void ){
#line 53
  unsigned int __nesc_result;
#line 53

#line 53
  __nesc_result = /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__Counter__get();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 75 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__to_size_type /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__Alarm__getNow(void )
{
  return /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__Counter__get();
}

#line 136
static inline void /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__Alarm__startAt(/*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__to_size_type t0, /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__to_size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__m_t0[sim_node()] = t0;
      /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__m_dt[sim_node()] = dt;
      /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__set_alarm();
    }
#line 143
    __nesc_atomic_end(__nesc_atomic); }
}

static inline void /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__Alarm__start(/*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__to_size_type dt)
{
  /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__Alarm__startAt(/*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__Alarm__getNow(), dt);
}

# 55 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void BeaconSlotP__SyncAlarm__start(BeaconSlotP__SyncAlarm__size_type dt){
#line 55
  /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__Alarm__start(dt);
#line 55
}
#line 55
# 340 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint32_t __nesc_ntoh_uint32(const void * source)
#line 340
{
  const uint8_t *base = source;

#line 342
  return ((((uint32_t )base[0] << 24) | (
  (uint32_t )base[1] << 16)) | (
  (uint32_t )base[2] << 8)) | base[3];
}

# 63 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/BeaconSlotP.nc"
static inline uint32_t BeaconSlotP__read_timestamp(uint8_t *payload)
#line 63
{
  nx_uint32_t *ptr = (nx_uint32_t *)payload;

  return __nesc_ntoh_uint32((*ptr).nxdata);
}

# 62 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__AlarmFrom__stop(void ){
#line 62
  /*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__Alarm__stop();
#line 62
}
#line 62
# 91 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline void /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__Alarm__stop(void )
{
  /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__AlarmFrom__stop();
}

# 62 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void GenericSlotterP__Alarm__stop(void ){
#line 62
  /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__Alarm__stop();
#line 62
}
#line 62
# 116 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/system/GenericSlotterP.nc"
static inline void GenericSlotterP__SlotterControl__stop(void )
#line 116
{
  GenericSlotterP__Alarm__stop();
}

# 37 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/SlotterControl.nc"
inline static void BeaconSlotP__SlotterControl__stop(void ){
#line 37
  GenericSlotterP__SlotterControl__stop();
#line 37
}
#line 37
# 136 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AMPacket.nc"
inline static am_id_t BeaconSlotP__AMPacket__type(message_t * amsg){
#line 136
  unsigned char __nesc_result;
#line 136

#line 136
  __nesc_result = TossimActiveMessageC__AMPacket__type(amsg);
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 113 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/BeaconSlotP.nc"
static inline void BeaconSlotP__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 113
{
  uint32_t alarmTime;

  if (BeaconSlotP__AMPacket__type(msg) == SIMPLE_TDMA_SYNC) {
      BeaconSlotP__SlotterControl__stop();

      alarmTime = BeaconSlotP__read_timestamp(payload);
      if (alarmTime > 37) {
          alarmTime = alarmTime - 37;
          BeaconSlotP__SyncAlarm__start(alarmTime);
        }
      else {


          BeaconSlotP__SlotterControl__synchronize(1);
        }

      BeaconSlotP__SubReceive__updateBuffer(msg);
    }
  else 
#line 131
    {
      BeaconSlotP__Receive__receive(msg, payload, len);
    }
}

# 41 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncReceive.nc"
inline static void SyncReceiveAdapterP__AsyncReceive__receive(message_t * msg, void * payload, uint8_t len){
#line 41
  BeaconSlotP__SubReceive__receive(msg, payload, len);
#line 41
}
#line 41
# 8 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/SyncReceiveAdapterP.nc"
static inline message_t *SyncReceiveAdapterP__Receive__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
{
  message_t *duplicate = malloc(sizeof(message_t ));

#line 11
  memcpy(duplicate, msg, sizeof(message_t ));

  SyncReceiveAdapterP__AsyncReceive__receive(duplicate, payload, len);
  return msg;
}

# 67 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * TossimActiveMessageC__Receive__receive(am_id_t arg_0x2baa94b44a90, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  __nesc_result = SyncReceiveAdapterP__Receive__receive(arg_0x2baa94b44a90, msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 37 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AlarmMicro16P.nc"
static inline bool /*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__Alarm__isRunning(void )
{
  return /*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__evt[sim_node()] != (void *)0;
}

# 53 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__CounterFrom__size_type /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__CounterFrom__get(void ){
#line 53
  unsigned short __nesc_result;
#line 53

#line 53
  __nesc_result = CounterMicro16P__Counter__get();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 62 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/CounterMicro16P.nc"
static inline bool CounterMicro16P__Counter__isOverflowPending(void )
#line 62
{
#line 62
  return FALSE;
}

# 60 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static bool /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__CounterFrom__isOverflowPending(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = CounterMicro16P__Counter__isOverflowPending();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 136 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/BeaconSlotP.nc"
static inline void BeaconSlotP__SyncAlarm__fired(void )
#line 136
{
  BeaconSlotP__SlotterControl__synchronize(1);
}

# 67 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__Alarm__fired(void ){
#line 67
  BeaconSlotP__SyncAlarm__fired();
#line 67
}
#line 67
# 151 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline void /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__AlarmFrom__fired(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__m_dt[sim_node()] == 0) 
        {
          /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__Alarm__fired();
        }
      else 
        {
          /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__set_alarm();
        }
    }
#line 163
    __nesc_atomic_end(__nesc_atomic); }
}

# 67 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__Alarm__fired(void ){
#line 67
  /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__AlarmFrom__fired();
#line 67
}
#line 67
# 19 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AlarmMicro16P.nc"
static inline void /*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__handle_timer_fired(sim_event_t *e)
{
  if (e->cancelled) {
    return;
    }
  /*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__Alarm__fired();
}











static inline bool /*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__Alarm__isRunning(void )
{
  return /*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__evt[sim_node()] != (void *)0;
}

static inline void /*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__Alarm__stop(void )
{
  if (/*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__Alarm__isRunning()) 
    {
      /*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__evt[sim_node()]->cancelled = 1;
      /*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__evt[sim_node()]->cleanup = sim_queue_cleanup_total;

      /*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__evt[sim_node()] = (void *)0;
    }
}






static inline void /*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__Alarm__startAt(uint16_t t0, uint16_t dt)
{
  sim_event_t *newEvt;
  sim_time_t fireAt;

  /*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__Alarm__stop();
  /*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__alarm[sim_node()] = t0 + dt;
  fireAt = /*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__zero[sim_node()] + (t0 + dt) * sim_ticks_per_sec() / 1024UL / 1024UL;





  newEvt = sim_queue_allocate_event();
  newEvt->handle = /*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__handle_timer_fired;
  newEvt->cleanup = sim_queue_cleanup_none;
  newEvt->time = fireAt > sim_time() ? fireAt : sim_time();

  /*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__evt[sim_node()] = newEvt;
  sim_queue_insert(newEvt);
}

# 92 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__AlarmFrom__startAt(/*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__AlarmFrom__size_type t0, /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__AlarmFrom__size_type dt){
#line 92
  /*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__Alarm__startAt(t0, dt);
#line 92
}
#line 92
# 65 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/QueueC.nc"
static inline /*PureTDMASchedulerC.LOQueueC*/QueueC__1__queue_t /*PureTDMASchedulerC.LOQueueC*/QueueC__1__Queue__head(void )
#line 65
{
  return /*PureTDMASchedulerC.LOQueueC*/QueueC__1__queue[sim_node()][/*PureTDMASchedulerC.LOQueueC*/QueueC__1__head[sim_node()]];
}

# 73 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Queue.nc"
inline static PureTDMASchedulerP__LOforwardQ__t  PureTDMASchedulerP__LOforwardQ__head(void ){
#line 73
  nx_struct TestNetworkMsg *__nesc_result;
#line 73

#line 73
  __nesc_result = /*PureTDMASchedulerC.LOQueueC*/QueueC__1__Queue__head();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 53 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/QueueC.nc"
static inline bool /*PureTDMASchedulerC.LOQueueC*/QueueC__1__Queue__empty(void )
#line 53
{
  return /*PureTDMASchedulerC.LOQueueC*/QueueC__1__size[sim_node()] == 0;
}

# 50 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Queue.nc"
inline static bool PureTDMASchedulerP__LOforwardQ__empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*PureTDMASchedulerC.LOQueueC*/QueueC__1__Queue__empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 65 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/QueueC.nc"
static inline /*PureTDMASchedulerC.HIQueueC*/QueueC__0__queue_t /*PureTDMASchedulerC.HIQueueC*/QueueC__0__Queue__head(void )
#line 65
{
  return /*PureTDMASchedulerC.HIQueueC*/QueueC__0__queue[sim_node()][/*PureTDMASchedulerC.HIQueueC*/QueueC__0__head[sim_node()]];
}

# 73 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Queue.nc"
inline static PureTDMASchedulerP__HIforwardQ__t  PureTDMASchedulerP__HIforwardQ__head(void ){
#line 73
  nx_struct TestNetworkMsg *__nesc_result;
#line 73

#line 73
  __nesc_result = /*PureTDMASchedulerC.HIQueueC*/QueueC__0__Queue__head();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 53 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/QueueC.nc"
static inline bool /*PureTDMASchedulerC.HIQueueC*/QueueC__0__Queue__empty(void )
#line 53
{
  return /*PureTDMASchedulerC.HIQueueC*/QueueC__0__size[sim_node()] == 0;
}

# 50 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Queue.nc"
inline static bool PureTDMASchedulerP__HIforwardQ__empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*PureTDMASchedulerC.HIQueueC*/QueueC__0__Queue__empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 52 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static error_t PureTDMASchedulerP__CC2420Config__sync(void ){
#line 52
  unsigned char __nesc_result;
#line 52

#line 52
  __nesc_result = CC2420ControlP__CC2420Config__sync();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 52 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/control/sim/CC2420ControlP.nc"
static inline void CC2420ControlP__CC2420Config__setChannel(uint8_t ch)
#line 52
{
  CC2420ControlP__channel[sim_node()] = ch;
}

# 59 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static void PureTDMASchedulerP__CC2420Config__setChannel(uint8_t channel){
#line 59
  CC2420ControlP__CC2420Config__setChannel(channel);
#line 59
}
#line 59
# 763 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/lib/macs/pure-tdma/PureTDMASchedulerP.nc"
static inline void PureTDMASchedulerP__set_send(uint32_t slot_t)
#line 763
{
  uint8_t i;
#line 764
  uint8_t j;
#line 764
  uint8_t link;
  uint32_t slot_norm = slot_t;
  TestNetworkMsg *tmp_payload;
  TestNetworkMsg *forwardPkt;
  uint8_t flowid;
  uint8_t curr_hopcount;
  uint8_t curr_hop_max_txopper;
  uint8_t curr_hop_delay;

  PureTDMASchedulerP__CC2420Config__setChannel(PureTDMASchedulerP__CHANNEL_DEF);
  PureTDMASchedulerP__CC2420Config__sync();


  if (PureTDMASchedulerP__isFlowroot[sim_node()] == TRUE) {
      if (PureTDMASchedulerP__Tx_count[sim_node()][PureTDMASchedulerP__taskid[sim_node()]] == 0 && PureTDMASchedulerP__Task_character[sim_node()][PureTDMASchedulerP__taskid[sim_node()]][PureTDMASchedulerP__TASK_MAXTX[sim_node()]] > 0) {

          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 780
            PureTDMASchedulerP__Transmitting_flowid[sim_node()] = PureTDMASchedulerP__taskid[sim_node()];
#line 780
            __nesc_atomic_end(__nesc_atomic); }

          if (slot_norm % PureTDMASchedulerP__Task_character[sim_node()][PureTDMASchedulerP__Transmitting_flowid[sim_node()]][PureTDMASchedulerP__TASK_PERIOD[sim_node()]] == 0 + PureTDMASchedulerP__Task_rels[sim_node()]) {
              tmp_payload = PureTDMASchedulerP__SubSend__getPayload(&PureTDMASchedulerP__packet[sim_node()], sizeof(TestNetworkMsg ));
              __nesc_hton_uint8(tmp_payload->flowid.nxdata, PureTDMASchedulerP__taskid[sim_node()]);
              __nesc_hton_uint8(tmp_payload->hopcount.nxdata, 0);

              for (link = 0; link < 5; link++) {
                  __nesc_hton_uint8(tmp_payload->txopper[link].nxdata, PureTDMASchedulerP__Task_character[sim_node()][PureTDMASchedulerP__Transmitting_flowid[sim_node()]][PureTDMASchedulerP__TASK_MAXTX[sim_node()]]);
                  __nesc_hton_uint8(tmp_payload->txdelay[link].nxdata, 0);
                }
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 791
                PureTDMASchedulerP__Total_tx_count[sim_node()][PureTDMASchedulerP__Transmitting_flowid[sim_node()]] = PureTDMASchedulerP__Total_tx_count[sim_node()][PureTDMASchedulerP__Transmitting_flowid[sim_node()]] + 1;
#line 791
                __nesc_atomic_end(__nesc_atomic); }
              PureTDMASchedulerP__kth_job[sim_node()] = PureTDMASchedulerP__kth_job[sim_node()] + 1;
              __nesc_hton_uint16(tmp_payload->job_idx.nxdata, PureTDMASchedulerP__kth_job[sim_node()]);

              if (TOS_NODE_ID == 1) {
                  sim_log_debug_clear(133U, "check_link_quality", "Nodeid: %d TxCount: %d\n", TOS_NODE_ID, PureTDMASchedulerP__Total_tx_count[sim_node()][1]);
                }







              PureTDMASchedulerP__transmission(PureTDMASchedulerP__Transmitting_flowid[sim_node()]);
            }
        }
      else {
#line 807
        if (PureTDMASchedulerP__Tx_count[sim_node()][PureTDMASchedulerP__taskid[sim_node()]] != 0) {
            { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 808
              PureTDMASchedulerP__Transmitting_flowid[sim_node()] = PureTDMASchedulerP__taskid[sim_node()];
#line 808
              __nesc_atomic_end(__nesc_atomic); }
            if (slot_norm % PureTDMASchedulerP__Task_character[sim_node()][PureTDMASchedulerP__Transmitting_flowid[sim_node()]][PureTDMASchedulerP__TASK_PERIOD[sim_node()]] > 0 + PureTDMASchedulerP__Task_rels[sim_node()]) {

                if (PureTDMASchedulerP__Tx_count[sim_node()][PureTDMASchedulerP__Transmitting_flowid[sim_node()]] < PureTDMASchedulerP__Task_character[sim_node()][PureTDMASchedulerP__Transmitting_flowid[sim_node()]][PureTDMASchedulerP__TASK_MAXTX[sim_node()]]) {
                    tmp_payload = PureTDMASchedulerP__SubSend__getPayload(&PureTDMASchedulerP__packet[sim_node()], sizeof(TestNetworkMsg ));
                    __nesc_hton_uint8(tmp_payload->flowid.nxdata, PureTDMASchedulerP__Transmitting_flowid[sim_node()]);
                    __nesc_hton_uint8(tmp_payload->hopcount.nxdata, 0);

                    for (link = 0; link < 5; link++) {
                        __nesc_hton_uint8(tmp_payload->txopper[link].nxdata, PureTDMASchedulerP__Task_character[sim_node()][PureTDMASchedulerP__Transmitting_flowid[sim_node()]][PureTDMASchedulerP__TASK_MAXTX[sim_node()]]);
                        __nesc_hton_uint8(tmp_payload->txdelay[link].nxdata, 0);
                      }
                    __nesc_hton_uint16(tmp_payload->job_idx.nxdata, PureTDMASchedulerP__kth_job[sim_node()]);






                    PureTDMASchedulerP__transmission(PureTDMASchedulerP__Transmitting_flowid[sim_node()]);
                  }
              }
          }
        }
    }
  else {
#line 832
    if (PureTDMASchedulerP__isFlowroot[sim_node()] == FALSE && PureTDMASchedulerP__isFlowdest[sim_node()] == FALSE) {


        if (!PureTDMASchedulerP__HIforwardQ__empty() || !PureTDMASchedulerP__LOforwardQ__empty()) {
            if (TOS_NODE_ID == 4) {
              }


            if (!PureTDMASchedulerP__HIforwardQ__empty()) {
                forwardPkt = (TestNetworkMsg *)PureTDMASchedulerP__HIforwardQ__head();

                tmp_payload = PureTDMASchedulerP__SubSend__getPayload(&PureTDMASchedulerP__packet[sim_node()], sizeof(TestNetworkMsg ));
                { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 844
                  PureTDMASchedulerP__Transmitting_flowid[sim_node()] = __nesc_ntoh_uint8(forwardPkt->flowid.nxdata);
#line 844
                  __nesc_atomic_end(__nesc_atomic); }
              }
            else {
#line 845
              if (!PureTDMASchedulerP__LOforwardQ__empty()) {
                  forwardPkt = (TestNetworkMsg *)PureTDMASchedulerP__LOforwardQ__head();
                  tmp_payload = PureTDMASchedulerP__SubSend__getPayload(&PureTDMASchedulerP__packet[sim_node()], sizeof(TestNetworkMsg ));
                  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 848
                    PureTDMASchedulerP__Transmitting_flowid[sim_node()] = __nesc_ntoh_uint8(forwardPkt->flowid.nxdata);
#line 848
                    __nesc_atomic_end(__nesc_atomic); }
                }
              }
            curr_hopcount = __nesc_ntoh_uint8(forwardPkt->hopcount.nxdata) + 1;
            curr_hop_delay = __nesc_ntoh_uint8(forwardPkt->txdelay[curr_hopcount].nxdata);

            if (slot_norm > PureTDMASchedulerP__rcv_slot[sim_node()][PureTDMASchedulerP__Transmitting_flowid[sim_node()]] + curr_hop_delay) {
                if (PureTDMASchedulerP__Tx_count[sim_node()][PureTDMASchedulerP__Transmitting_flowid[sim_node()]] < PureTDMASchedulerP__My_max_txopper[sim_node()][PureTDMASchedulerP__Transmitting_flowid[sim_node()]]) {
                    __nesc_hton_uint8(tmp_payload->flowid.nxdata, __nesc_ntoh_uint8(forwardPkt->flowid.nxdata));
                    __nesc_hton_uint8(tmp_payload->hopcount.nxdata, curr_hopcount);
                    for (link = 0; link < 5; link++) {
                        __nesc_hton_uint8(tmp_payload->txopper[link].nxdata, __nesc_ntoh_uint8(forwardPkt->txopper[link].nxdata));
                        __nesc_hton_uint8(tmp_payload->txdelay[link].nxdata, __nesc_ntoh_uint8(forwardPkt->txdelay[link].nxdata));
                      }
                    __nesc_hton_uint16(tmp_payload->job_idx.nxdata, __nesc_ntoh_uint16(forwardPkt->job_idx.nxdata));
                    PureTDMASchedulerP__transmission(PureTDMASchedulerP__Transmitting_flowid[sim_node()]);
                  }
              }
          }
      }
    }
}

# 81 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Queue.nc"
inline static PureTDMASchedulerP__LOforwardQ__t  PureTDMASchedulerP__LOforwardQ__dequeue(void ){
#line 81
  nx_struct TestNetworkMsg *__nesc_result;
#line 81

#line 81
  __nesc_result = /*PureTDMASchedulerC.LOQueueC*/QueueC__1__Queue__dequeue();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
inline static PureTDMASchedulerP__HIforwardQ__t  PureTDMASchedulerP__HIforwardQ__dequeue(void ){
#line 81
  nx_struct TestNetworkMsg *__nesc_result;
#line 81

#line 81
  __nesc_result = /*PureTDMASchedulerC.HIQueueC*/QueueC__0__Queue__dequeue();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 40 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncSend.nc"
inline static error_t BeaconSlotP__SubSend__send(message_t * msg, uint8_t len){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = SenderDispatcherP__Send__send(BEACON_SLOT, msg, len);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 347 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint32_t __nesc_hton_uint32(void * target, uint32_t value)
#line 347
{
  uint8_t *base = target;

#line 349
  base[3] = value;
  base[2] = value >> 8;
  base[1] = value >> 16;
  base[0] = value >> 24;
  return value;
}

# 57 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/BeaconSlotP.nc"
static inline void BeaconSlotP__write_timestamp(uint8_t *payload, uint32_t timestamp)
{
  nx_uint32_t *ptr = (nx_uint32_t *)payload;

#line 60
  __nesc_hton_uint32((*ptr).nxdata, timestamp);
}

# 53 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__Counter__size_type /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__Counter__get(void ){
#line 53
  unsigned int __nesc_result;
#line 53

#line 53
  __nesc_result = /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__Counter__get();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 75 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__to_size_type /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__Alarm__getNow(void )
{
  return /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__Counter__get();
}

# 98 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static GenericSlotterP__Alarm__size_type GenericSlotterP__Alarm__getNow(void ){
#line 98
  unsigned int __nesc_result;
#line 98

#line 98
  __nesc_result = /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__Alarm__getNow();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 133 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/system/GenericSlotterP.nc"
static inline uint32_t GenericSlotterP__SlotterControl__getRemaining(void )
#line 133
{
  uint32_t now;
#line 134
  uint32_t diff;

#line 135
  now = GenericSlotterP__Alarm__getNow();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 136
    {
      if (GenericSlotterP__nextFire[sim_node()] > now) {
#line 137
        diff = GenericSlotterP__nextFire[sim_node()] - now;
        }
      else {
#line 138
        diff = 0;
        }
    }
#line 140
    __nesc_atomic_end(__nesc_atomic); }
#line 140
  return diff;
}

# 36 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/SlotterControl.nc"
inline static uint32_t BeaconSlotP__SlotterControl__getRemaining(void ){
#line 36
  unsigned int __nesc_result;
#line 36

#line 36
  __nesc_result = GenericSlotterP__SlotterControl__getRemaining();
#line 36

#line 36
  return __nesc_result;
#line 36
}
#line 36
# 10 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/SyncSendAdapterP.nc"
static inline tossim_header_t *SyncSendAdapterP__getHeader(message_t *msg)
{
  return & ((message_header_t *)msg->header)->tossim;
}

# 124 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void * SyncSendAdapterP__AMSend__getPayload(am_id_t arg_0x2baa94b0d448, message_t * msg, uint8_t len){
#line 124
  void *__nesc_result;
#line 124

#line 124
  __nesc_result = TossimActiveMessageC__AMSend__getPayload(arg_0x2baa94b0d448, msg, len);
#line 124

#line 124
  return __nesc_result;
#line 124
}
#line 124
# 35 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/SyncSendAdapterP.nc"
static inline void *SyncSendAdapterP__AsyncSend__getPayload(message_t *msg, uint8_t len)
{
  return SyncSendAdapterP__AMSend__getPayload(__nesc_ntoh_uint8(SyncSendAdapterP__getHeader(msg)->type.nxdata), msg, len);
}

# 71 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncSend.nc"
inline static void * SenderDispatcherP__SubSend__getPayload(message_t * msg, uint8_t len){
#line 71
  void *__nesc_result;
#line 71

#line 71
  __nesc_result = SyncSendAdapterP__AsyncSend__getPayload(msg, len);
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 94 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/system/SenderDispatcherP.nc"
static inline void *SenderDispatcherP__Send__getPayload(uint8_t slotType, message_t *msg, uint8_t len)
#line 94
{
  return SenderDispatcherP__SubSend__getPayload(msg, len);
}

# 71 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncSend.nc"
inline static void * BeaconSlotP__SubSend__getPayload(message_t * msg, uint8_t len){
#line 71
  void *__nesc_result;
#line 71

#line 71
  __nesc_result = SenderDispatcherP__Send__getPayload(BEACON_SLOT, msg, len);
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 78 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/BeaconSlotP.nc"
static inline error_t BeaconSlotP__Send__send(message_t *msg, uint8_t len)
#line 78
{
  uint8_t *payload;
  error_t status;
  uint32_t remaining;

  payload = BeaconSlotP__SubSend__getPayload(&BeaconSlotP__syncPkt[sim_node()], len);

  remaining = BeaconSlotP__SlotterControl__getRemaining();
  BeaconSlotP__write_timestamp(payload, remaining);

  status = BeaconSlotP__SubSend__send(&BeaconSlotP__syncPkt[sim_node()], BeaconSlotP__syncPktLen[sim_node()]);
  return status;
}

# 40 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncSend.nc"
inline static error_t PureTDMASchedulerP__BeaconSend__send(message_t * msg, uint8_t len){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = BeaconSlotP__Send__send(msg, len);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 967 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/lib/macs/pure-tdma/PureTDMASchedulerP.nc"
static inline uint32_t PureTDMASchedulerP__getLCD(uint32_t num1, uint32_t num2)
#line 967
{

  if (num1 == 0 || num2 == 0) {
      return 0;
    }

  return num1 * num2 / PureTDMASchedulerP__getGCD(num1, num2);
}

#line 938
static inline uint32_t PureTDMASchedulerP__SuperframeLength(uint32_t Task_set[][3])
#line 938
{
  uint8_t i;
  uint32_t prv_task_period;

  prv_task_period = 1;

  for (i = 1; i < PureTDMASchedulerP__NUM_TASK[sim_node()] + 1; i++) {
      prv_task_period = PureTDMASchedulerP__getLCD(Task_set[i][PureTDMASchedulerP__TASK_PERIOD[sim_node()]], prv_task_period);
    }
  return prv_task_period;
}

#line 328
static inline void PureTDMASchedulerP__Slotter__slot(uint32_t slot)
#line 328
{
  message_t *tmpToSend;
  uint8_t tmpToSendLen;
  uint8_t i;
  uint32_t *Dist_Check;
  uint32_t *Interf_Check;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 335
    PureTDMASchedulerP__slot_[sim_node()] = slot;
#line 335
    __nesc_atomic_end(__nesc_atomic); }




  Dist_Check = sim_get_TaskPeriods();
  Interf_Check = sim_get_TaskTx();

  if (Interf_Check[3] != PureTDMASchedulerP__temp_interf[sim_node()]) {
      PureTDMASchedulerP__temp_interf[sim_node()] = Interf_Check[3];
      sim_log_debug_clear(117U, "Util_Log_data", "-----Interference-----\n");
      PureTDMASchedulerP__Task_character[sim_node()][1][PureTDMASchedulerP__TASK_MAXTX[sim_node()]] = Interf_Check[0];
      PureTDMASchedulerP__My_max_txopper[sim_node()][1] = PureTDMASchedulerP__Task_character[sim_node()][1][PureTDMASchedulerP__TASK_MAXTX[sim_node()]];
      PureTDMASchedulerP__Task_character[sim_node()][2][PureTDMASchedulerP__TASK_MAXTX[sim_node()]] = Interf_Check[1];
      PureTDMASchedulerP__My_max_txopper[sim_node()][2] = PureTDMASchedulerP__Task_character[sim_node()][2][PureTDMASchedulerP__TASK_MAXTX[sim_node()]];
      sim_log_debug_clear(118U, "Util_Log_data", "Task1_maxTx:%d\n", PureTDMASchedulerP__My_max_txopper[sim_node()][1]);
    }


  if (Dist_Check[3] != PureTDMASchedulerP__temp_dist[sim_node()]) {
      PureTDMASchedulerP__temp_dist[sim_node()] = Dist_Check[3];
      sim_log_debug_clear(119U, "Util_Log_data", "-----Disturbance-----\n");
      PureTDMASchedulerP__Task_character[sim_node()][1][PureTDMASchedulerP__TASK_PERIOD[sim_node()]] = Dist_Check[0];
      PureTDMASchedulerP__Task_character[sim_node()][1][PureTDMASchedulerP__TASK_DEAD[sim_node()]] = Dist_Check[0];
      PureTDMASchedulerP__Task_character[sim_node()][2][PureTDMASchedulerP__TASK_PERIOD[sim_node()]] = Dist_Check[1];
      PureTDMASchedulerP__Task_character[sim_node()][2][PureTDMASchedulerP__TASK_DEAD[sim_node()]] = Dist_Check[1];
      PureTDMASchedulerP__superframe_length[sim_node()] = PureTDMASchedulerP__SuperframeLength(PureTDMASchedulerP__Task_character[sim_node()]);
      sim_log_debug(120U, "Task_T_Test", "T1:%d, T2:%d\n", Dist_Check[0], Dist_Check[1]);
      sim_log_debug(121U, "Task_T_Test", "Superframe:%lu\n", PureTDMASchedulerP__superframe_length[sim_node()]);
    }



  if (slot == 0) {
      if (PureTDMASchedulerP__coordinatorId[sim_node()] == TOS_NODE_ID) {
          PureTDMASchedulerP__BeaconSend__send((void *)0, 0);
          sim_log_debug(122U, "printf", "SENSOR: %u has done network synchronization in SLOT: %u at time: %s:\n", TOS_NODE_ID, slot, sim_time_string());
        }
#line 372
      ;
      return;
    }

  if (slot % PureTDMASchedulerP__superframe_length[sim_node()] == 0) {
      if (1 == TOS_NODE_ID) {
          sim_log_debug(123U, "transmission", "SF-------------\n");
        }
      ;


      PureTDMASchedulerP__crt_frame[sim_node()][PureTDMASchedulerP__HI_TASK[sim_node()]] = 0;
      PureTDMASchedulerP__crt_frame[sim_node()][PureTDMASchedulerP__LO_TASK[sim_node()]] = 0;
      PureTDMASchedulerP__kth_job[sim_node()] = 0;
      PureTDMASchedulerP__prev_job_idx[sim_node()][PureTDMASchedulerP__HI_TASK[sim_node()]] = 0;
      PureTDMASchedulerP__prev_job_idx[sim_node()][PureTDMASchedulerP__LO_TASK[sim_node()]] = 0;
    }





  if (slot % PureTDMASchedulerP__superframe_length[sim_node()] % PureTDMASchedulerP__Task_character[sim_node()][PureTDMASchedulerP__HI_TASK[sim_node()]][PureTDMASchedulerP__TASK_PERIOD[sim_node()]] == 0) {


      PureTDMASchedulerP__crt_frame[sim_node()][PureTDMASchedulerP__HI_TASK[sim_node()]] = PureTDMASchedulerP__crt_frame[sim_node()][PureTDMASchedulerP__HI_TASK[sim_node()]] + 1;
      PureTDMASchedulerP__Total_frame_count[sim_node()][PureTDMASchedulerP__HI_TASK[sim_node()]] = PureTDMASchedulerP__Total_frame_count[sim_node()][PureTDMASchedulerP__HI_TASK[sim_node()]] + 1;

      if (TOS_NODE_ID == 51) {

          if (PureTDMASchedulerP__Receiving_flag[sim_node()][PureTDMASchedulerP__HI_TASK[sim_node()]] == FALSE) {
              PureTDMASchedulerP__Loss_count[sim_node()][PureTDMASchedulerP__HI_TASK[sim_node()]] = PureTDMASchedulerP__Loss_count[sim_node()][PureTDMASchedulerP__HI_TASK[sim_node()]] + 1;
            }
          sim_log_debug_clear(124U, "Util_Log_data", "%d %d %d %d\n", TOS_NODE_ID, PureTDMASchedulerP__HI_TASK[sim_node()], PureTDMASchedulerP__Loss_count[sim_node()][PureTDMASchedulerP__HI_TASK[sim_node()]], PureTDMASchedulerP__Total_frame_count[sim_node()][PureTDMASchedulerP__HI_TASK[sim_node()]]);
          PureTDMASchedulerP__Receiving_flag[sim_node()][PureTDMASchedulerP__Receiving_flow_id[sim_node()]] = FALSE;
        }









      PureTDMASchedulerP__rcv_slot[sim_node()][PureTDMASchedulerP__HI_TASK[sim_node()]] = 0;
      PureTDMASchedulerP__receive_lock[sim_node()][PureTDMASchedulerP__HI_TASK[sim_node()]] = FALSE;
      PureTDMASchedulerP__Tx_count[sim_node()][PureTDMASchedulerP__HI_TASK[sim_node()]] = 0;



      if (!PureTDMASchedulerP__HIforwardQ__empty()) {

          PureTDMASchedulerP__HIqueueSize[sim_node()] = PureTDMASchedulerP__HIforwardQ__size();
          for (i = 0; i < PureTDMASchedulerP__HIqueueSize[sim_node()]; i++) {
              PureTDMASchedulerP__HIforwardQ__dequeue();
            }
        }
    }
  if (slot % PureTDMASchedulerP__superframe_length[sim_node()] % PureTDMASchedulerP__Task_character[sim_node()][PureTDMASchedulerP__LO_TASK[sim_node()]][PureTDMASchedulerP__TASK_PERIOD[sim_node()]] == 0) {


      PureTDMASchedulerP__crt_frame[sim_node()][PureTDMASchedulerP__LO_TASK[sim_node()]] = PureTDMASchedulerP__crt_frame[sim_node()][PureTDMASchedulerP__LO_TASK[sim_node()]] + 1;
      PureTDMASchedulerP__Total_frame_count[sim_node()][PureTDMASchedulerP__LO_TASK[sim_node()]] = PureTDMASchedulerP__Total_frame_count[sim_node()][PureTDMASchedulerP__LO_TASK[sim_node()]] + 1;

      if (TOS_NODE_ID == 52) {


          if (PureTDMASchedulerP__Receiving_flag[sim_node()][PureTDMASchedulerP__LO_TASK[sim_node()]] == FALSE) {
              PureTDMASchedulerP__Loss_count[sim_node()][PureTDMASchedulerP__LO_TASK[sim_node()]] = PureTDMASchedulerP__Loss_count[sim_node()][PureTDMASchedulerP__LO_TASK[sim_node()]] + 1;
            }
          sim_log_debug_clear(125U, "Util_Log_data", "%d %d %d %d\n", TOS_NODE_ID, PureTDMASchedulerP__LO_TASK[sim_node()], PureTDMASchedulerP__Loss_count[sim_node()][PureTDMASchedulerP__LO_TASK[sim_node()]], PureTDMASchedulerP__Total_frame_count[sim_node()][PureTDMASchedulerP__LO_TASK[sim_node()]]);
          PureTDMASchedulerP__Receiving_flag[sim_node()][PureTDMASchedulerP__Receiving_flow_id[sim_node()]] = FALSE;
        }


      PureTDMASchedulerP__rcv_slot[sim_node()][PureTDMASchedulerP__LO_TASK[sim_node()]] = 0;
      PureTDMASchedulerP__receive_lock[sim_node()][PureTDMASchedulerP__LO_TASK[sim_node()]] = FALSE;
      PureTDMASchedulerP__Tx_count[sim_node()][PureTDMASchedulerP__LO_TASK[sim_node()]] = 0;


      if (!PureTDMASchedulerP__LOforwardQ__empty()) {

          PureTDMASchedulerP__LOqueueSize[sim_node()] = PureTDMASchedulerP__LOforwardQ__size();
          for (i = 0; i < PureTDMASchedulerP__LOqueueSize[sim_node()]; i++) {
              PureTDMASchedulerP__LOforwardQ__dequeue();
            }
        }
    }



  if (slot >= PureTDMASchedulerP__sd[sim_node()] + 1) {
      return;
    }
  if (slot < PureTDMASchedulerP__cap[sim_node()]) {
    }
  else 
#line 468
    {
      PureTDMASchedulerP__set_send(slot % PureTDMASchedulerP__superframe_length[sim_node()]);
    }
}

# 32 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/Slotter.nc"
inline static void GenericSlotterP__Slotter__slot(uint32_t num){
#line 32
  PureTDMASchedulerP__Slotter__slot(num);
#line 32
}
#line 32
# 40 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/GainRadioModel.nc"
inline static void TossimPacketModelC__GainRadioModel__putOnAirTo(int dest, message_t *msg, bool ack, sim_time_t endTime, double gain, double reverseGain, uint8_t channel_id){
#line 40
  CpmModelC__Model__putOnAirTo(dest, msg, ack, endTime, gain, reverseGain, channel_id);
#line 40
}
#line 40
# 227 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/TossimPacketModelC.nc"
static inline int TossimPacketModelC__sim_packet_header_length(void )
#line 227
{
  return sizeof(tossim_header_t );
}

#line 80
static inline tossim_metadata_t *TossimPacketModelC__getMetadata(message_t *msg)
#line 80
{
  return (tossim_metadata_t *)& msg->metadata;
}

#line 275
static inline void TossimPacketModelC__send_transmit_with_cca_fake(sim_event_t *evt)
#line 275
{
  sim_time_t duration;
  tossim_metadata_t *metadata = TossimPacketModelC__getMetadata(TossimPacketModelC__sending[sim_node()]);

#line 278
  duration = 8 * (TossimPacketModelC__sendingLength[sim_node()] + TossimPacketModelC__sim_packet_header_length());
  duration /= sim_csma_bits_per_symbol();
  duration += sim_csma_preamble_length();
  if (__nesc_ntoh_uint8(metadata->ack.nxdata)) {
      duration += sim_csma_ack_time();
    }
  duration *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();
  evt->time += duration;
  evt->handle = TossimPacketModelC__send_transmit_done;

  TossimPacketModelC__GainRadioModel__putOnAirTo(66, TossimPacketModelC__sending[sim_node()], __nesc_ntoh_uint8(metadata->ack.nxdata), evt->time, 0.0, 0.0, sim_mote_get_radio_channel(sim_node()));
  __nesc_hton_uint8(metadata->ack.nxdata, 0);
  evt->time += sim_csma_rxtx_delay() * (sim_ticks_per_sec() / sim_csma_symbols_per_sec());
  sim_queue_insert(evt);
}

# 49 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/GainRadioModel.nc"
inline static bool TossimPacketModelC__GainRadioModel__clearChannel(void ){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = CpmModelC__Model__clearChannel();
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 373 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/TossimPacketModelC.nc"
static inline void TossimPacketModelC__send_backoff_cancel_packet(sim_event_t *evt)
#line 373
{

  if (TossimPacketModelC__GainRadioModel__clearChannel()) {
      sim_time_t delay;
      message_t *rval = TossimPacketModelC__sending[sim_node()];

#line 378
      delay = sim_csma_rxtx_delay();
      delay *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();
      evt->time += delay;
      TossimPacketModelC__transmitting[sim_node()] = TRUE;
      evt->handle = TossimPacketModelC__send_transmit_with_cca;
      sim_queue_insert(evt);
    }
  else {
      sim_time_t delay;
      message_t *rval = TossimPacketModelC__sending[sim_node()];

#line 388
      delay = sim_csma_rxtx_delay();
      delay *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();
      evt->time += delay;
      TossimPacketModelC__transmitting[sim_node()] = TRUE;
      sim_mote_set_radio_channel(sim_node(), 20);

      evt->handle = TossimPacketModelC__send_transmit_with_cca_fake;
      sim_queue_insert(evt);
    }
}

# 48 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncSend.nc"
inline static void SyncSendAdapterP__AsyncSend__sendDone(message_t * msg, error_t error){
#line 48
  SenderDispatcherP__SubSend__sendDone(msg, error);
#line 48
}
#line 48
# 25 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/SyncSendAdapterP.nc"
static inline void SyncSendAdapterP__AMSend__sendDone(am_id_t id, message_t *msg, uint8_t len)
{
  SyncSendAdapterP__AsyncSend__sendDone(msg, len);
}

# 99 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void TossimActiveMessageC__AMSend__sendDone(am_id_t arg_0x2baa94b47850, message_t * msg, error_t error){
#line 99
  SyncSendAdapterP__AMSend__sendDone(arg_0x2baa94b47850, msg, error);
#line 99
}
#line 99
# 95 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageC.nc"
static inline void TossimActiveMessageC__Model__sendDone(message_t *msg, error_t result)
#line 95
{
  TossimActiveMessageC__AMSend__sendDone(TossimActiveMessageC__AMPacket__type(msg), msg, result);
}

# 474 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/lib/macs/pure-tdma/PureTDMASchedulerP.nc"
static inline void PureTDMASchedulerP__TossimPacketModel__sendDone(message_t *msg, error_t error)
#line 474
{
}

# 192 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/system/GenericSlotSenderP.nc"
static inline void /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__SignalSend__sendDone(message_t *msg, error_t error)
#line 192
{
  sim_log_debug(148U, "test", "GenericSlotSenderP. sendDone\n");
}

# 71 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/TossimPacketModel.nc"
inline static void TossimPacketModelC__Packet__sendDone(message_t *msg, error_t error){
#line 71
  /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__SignalSend__sendDone(msg, error);
#line 71
  PureTDMASchedulerP__TossimPacketModel__sendDone(msg, error);
#line 71
  TossimActiveMessageC__Model__sendDone(msg, error);
#line 71
}
#line 71
# 334 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/TossimPacketModelC.nc"
static inline void TossimPacketModelC__send_backoff(sim_event_t *evt)
#line 334
{
  TossimPacketModelC__backoffCount[sim_node()]++;

  if (TossimPacketModelC__GainRadioModel__clearChannel()) {
      TossimPacketModelC__neededFreeSamples[sim_node()]--;
    }
  else {
      TossimPacketModelC__neededFreeSamples[sim_node()] = sim_csma_min_free_samples();
    }

  if (TossimPacketModelC__neededFreeSamples[sim_node()] == 0) {
      message_t *rval = TossimPacketModelC__sending[sim_node()];
      sim_time_t delay;

#line 347
      delay = sim_csma_rxtx_delay();
      delay *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();
      evt->time += delay;
      TossimPacketModelC__transmitting[sim_node()] = TRUE;
      evt->handle = TossimPacketModelC__send_transmit_with_cca;
      sim_queue_insert(evt);
    }
  else {
    if (sim_csma_max_iterations() == 0 || TossimPacketModelC__backoffCount[sim_node()] <= sim_csma_max_iterations()) {
        sim_time_t backoff = sim_random();
        sim_time_t modulo = sim_csma_high() - sim_csma_low();

#line 358
        modulo *= pow(sim_csma_exponent_base(), TossimPacketModelC__backoffCount[sim_node()]);
        backoff %= modulo;
        backoff += sim_csma_init_low();
        backoff *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();
        evt->time += backoff;
        sim_queue_insert(evt);
      }
    else {
        message_t *rval = TossimPacketModelC__sending[sim_node()];

#line 367
        TossimPacketModelC__sending[sim_node()] = (void *)0;
        sim_log_debug(163U, "TossimPacketModelC", "PACKET: Failed to send packet due to busy channel.\n");
        TossimPacketModelC__Packet__sendDone(rval, EBUSY);
      }
    }
}

#line 231
static inline void TossimPacketModelC__send_transmit(sim_event_t *evt)
#line 231
{
  sim_time_t duration;
  tossim_metadata_t *metadata = TossimPacketModelC__getMetadata(TossimPacketModelC__sending[sim_node()]);

#line 234
  duration = 8 * (TossimPacketModelC__sendingLength[sim_node()] + TossimPacketModelC__sim_packet_header_length());
  duration /= sim_csma_bits_per_symbol();
  duration += sim_csma_preamble_length();
  if (__nesc_ntoh_uint8(metadata->ack.nxdata)) {
      duration += sim_csma_ack_time();
    }
  duration *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();
  evt->time += duration;
  evt->handle = TossimPacketModelC__send_transmit_done;

  sim_log_debug(157U, "TossimPacketModelC", "PACKET: Broadcasting packet to everyone.\n");


  TossimPacketModelC__GainRadioModel__putOnAirTo(TossimPacketModelC__destNode[sim_node()], TossimPacketModelC__sending[sim_node()], __nesc_ntoh_uint8(metadata->ack.nxdata), evt->time, sim_mote_getPower(sim_node()), 0.0, sim_mote_get_radio_channel(sim_node()));
  __nesc_hton_uint8(metadata->ack.nxdata, 0);
  evt->time += sim_csma_rxtx_delay() * (sim_ticks_per_sec() / sim_csma_symbols_per_sec());
  sim_log_debug(158U, "TossimPacketModelC", "PACKET: Send done at %llu.\n", evt->time);
  sim_queue_insert(evt);
}

#line 193
static inline void TossimPacketModelC__start_csma(void )
#line 193
{
  sim_time_t delay;

#line 195
  delay = sim_csma_rxtx_delay();
  delay *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();
  TossimPacketModelC__sendEvent[sim_node()].mote = sim_node();
  TossimPacketModelC__sendEvent[sim_node()].time = sim_time() + delay;
  TossimPacketModelC__sendEvent[sim_node()].force = 0;
  TossimPacketModelC__sendEvent[sim_node()].cancelled = 0;
  if (TossimPacketModelC__cca_enable_flag[sim_node()] == 0) {
      TossimPacketModelC__sendEvent[sim_node()].handle = TossimPacketModelC__send_transmit;
    }
  else {
#line 204
    if (TossimPacketModelC__cca_enable_flag[sim_node()] == 1) {
        sim_time_t backoff_random = sim_random();
        sim_time_t backoff = backoff_random;

        backoff %= 100;

        backoff *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();

        TossimPacketModelC__sendEvent[sim_node()].time = sim_time() + backoff;
        TossimPacketModelC__sendEvent[sim_node()].handle = TossimPacketModelC__send_backoff;
      }
    else {
#line 214
      if (TossimPacketModelC__cca_enable_flag[sim_node()] == 2) {

          TossimPacketModelC__sendEvent[sim_node()].time = sim_time() + 2000000;
          TossimPacketModelC__sendEvent[sim_node()].handle = TossimPacketModelC__send_backoff_cancel_packet;
        }
      }
    }
  TossimPacketModelC__sendEvent[sim_node()].cleanup = sim_queue_cleanup_none;
  TossimPacketModelC__transmitting[sim_node()] = TRUE;

  sim_queue_insert(&TossimPacketModelC__sendEvent[sim_node()]);
}

#line 161
static inline error_t TossimPacketModelC__Packet__send(int dest, message_t *msg, uint8_t len)
#line 161
{
  if (!TossimPacketModelC__initialized[sim_node()]) {
      sim_log_error(154U, "TossimPacketModelC", "TossimPacketModelC: Send.send() called, but not initialized!\n");
      return EOFF;
    }
  if (!TossimPacketModelC__running[sim_node()]) {
      sim_log_error(155U, "TossimPacketModelC", "TossimPacketModelC: Send.send() called, but not running!\n");
      return EOFF;
    }

  if (TossimPacketModelC__sending[sim_node()] != (void *)0) {
      return EBUSY;
    }
  sim_log_debug(156U, "TossimPacketModelC", "Packet.send()\n");

  TossimPacketModelC__sendingLength[sim_node()] = len;
  TossimPacketModelC__sending[sim_node()] = msg;
  TossimPacketModelC__destNode[sim_node()] = dest;
  TossimPacketModelC__backoffCount[sim_node()] = 0;
  TossimPacketModelC__neededFreeSamples[sim_node()] = sim_csma_min_free_samples();
  TossimPacketModelC__start_csma();

  return SUCCESS;
}

# 52 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/TossimPacketModel.nc"
inline static error_t TossimActiveMessageC__Model__send(int node, message_t *msg, uint8_t len){
#line 52
  unsigned char __nesc_result;
#line 52

#line 52
  __nesc_result = TossimPacketModelC__Packet__send(node, msg, len);
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 57 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageC.nc"
static inline tossim_header_t *TossimActiveMessageC__getHeader(message_t *amsg)
#line 57
{
  return (tossim_header_t *)(amsg->data - sizeof(tossim_header_t ));
}





static inline error_t TossimActiveMessageC__AMSend__send(am_id_t id, am_addr_t addr, 
message_t *amsg, 
uint8_t len)
#line 67
{
  error_t err;
  tossim_header_t *header = TossimActiveMessageC__getHeader(amsg);

#line 70
  sim_log_debug(215U, "AM", "AM: Sending packet (id=%hhu, len=%hhu) to %hu\n", id, len, addr);
  __nesc_hton_uint8(header->type.nxdata, id);
  __nesc_hton_uint16(header->dest.nxdata, addr);
  __nesc_hton_uint16(header->src.nxdata, TossimActiveMessageC__AMPacket__address());
  __nesc_hton_uint8(header->length.nxdata, len);
  err = TossimActiveMessageC__Model__send((int )addr, amsg, len + sizeof(tossim_header_t ));
  return err;
}

# 69 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t SyncSendAdapterP__AMSend__send(am_id_t arg_0x2baa94b0d448, am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = TossimActiveMessageC__AMSend__send(arg_0x2baa94b0d448, addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 15 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/SyncSendAdapterP.nc"
static inline error_t SyncSendAdapterP__AsyncSend__send(message_t *msg, uint8_t len)
{
  return SyncSendAdapterP__AMSend__send(__nesc_ntoh_uint8(SyncSendAdapterP__getHeader(msg)->type.nxdata), __nesc_ntoh_uint16(SyncSendAdapterP__getHeader(msg)->dest.nxdata), msg, len);
}

# 40 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncSend.nc"
inline static error_t SenderDispatcherP__SubSend__send(message_t * msg, uint8_t len){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = SyncSendAdapterP__AsyncSend__send(msg, len);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 751 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/lib/macs/pure-tdma/PureTDMASchedulerP.nc"
static inline void PureTDMASchedulerP__BeaconSend__sendDone(message_t *msg, error_t error)
#line 751
{
}

# 48 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncSend.nc"
inline static void BeaconSlotP__Send__sendDone(message_t * msg, error_t error){
#line 48
  PureTDMASchedulerP__BeaconSend__sendDone(msg, error);
#line 48
}
#line 48
# 93 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/BeaconSlotP.nc"
static inline void BeaconSlotP__SubSend__sendDone(message_t *msg, error_t error)
#line 93
{
  if (msg != &BeaconSlotP__syncPkt[sim_node()]) {
#line 94
    BeaconSlotP__Send__sendDone(msg, error);
    }
}

# 56 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t AsyncSendAdapterP__sendDone_task__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(AsyncSendAdapterP__sendDone_task);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 58 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AsyncSendAdapterP.nc"
static inline void AsyncSendAdapterP__AsyncSend__sendDone(message_t *msg, uint8_t len)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      AsyncSendAdapterP__msg_[sim_node()] = msg;
      AsyncSendAdapterP__len_[sim_node()] = len;
    }
#line 64
    __nesc_atomic_end(__nesc_atomic); }
  AsyncSendAdapterP__sendDone_task__postTask();
}

# 48 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncSend.nc"
inline static void PureTDMASchedulerP__Send__sendDone(message_t * msg, error_t error){
#line 48
  AsyncSendAdapterP__AsyncSend__sendDone(msg, error);
#line 48
}
#line 48
# 136 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AMPacket.nc"
inline static am_id_t PureTDMASchedulerP__AMPacket__type(message_t * amsg){
#line 136
  unsigned char __nesc_result;
#line 136

#line 136
  __nesc_result = TossimActiveMessageC__AMPacket__type(amsg);
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 138 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/TossimPacketModelC.nc"
static inline error_t TossimPacketModelC__PacketAcknowledgements__wasAcked(message_t *ack)
#line 138
{
  tossim_metadata_t *meta = TossimPacketModelC__getMetadata(ack);

  return __nesc_ntoh_uint8(meta->ack.nxdata);
}

# 74 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
inline static bool PureTDMASchedulerP__PacketAcknowledgements__wasAcked(message_t * msg){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = TossimPacketModelC__PacketAcknowledgements__wasAcked(msg);
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 495 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/lib/macs/pure-tdma/PureTDMASchedulerP.nc"
static inline void PureTDMASchedulerP__SubSend__sendDone(message_t *msg, error_t error)
#line 495
{
  uint32_t slot_at_send_done;
  uint8_t ack_at_send_done;
  uint8_t i;

#line 499
  slot_at_send_done = PureTDMASchedulerP__SlotterControl__getSlot() % PureTDMASchedulerP__superframe_length[sim_node()];
  ack_at_send_done = PureTDMASchedulerP__PacketAcknowledgements__wasAcked(msg) ? 1 : 0;



  if (ack_at_send_done == 0) {



      if (PureTDMASchedulerP__Tx_count[sim_node()][PureTDMASchedulerP__Transmitting_flowid[sim_node()]] == PureTDMASchedulerP__My_max_txopper[sim_node()][PureTDMASchedulerP__Transmitting_flowid[sim_node()]]) {
          sim_log_debug(126U, "transmission", "NoACK:Reset Tx/Rx status -- Transmitting_flowid:%d\n", PureTDMASchedulerP__Transmitting_flowid[sim_node()]);
          PureTDMASchedulerP__Tx_count[sim_node()][PureTDMASchedulerP__Transmitting_flowid[sim_node()]] = 0;
          PureTDMASchedulerP__rcv_slot[sim_node()][PureTDMASchedulerP__Transmitting_flowid[sim_node()]] = 0;

          PureTDMASchedulerP__receive_lock[sim_node()][PureTDMASchedulerP__Transmitting_flowid[sim_node()]] = FALSE;



          if (PureTDMASchedulerP__Transmitting_flowid[sim_node()] == PureTDMASchedulerP__HI_TASK[sim_node()]) {
              if (!PureTDMASchedulerP__HIforwardQ__empty()) {
                  PureTDMASchedulerP__HIqueueSize[sim_node()] = PureTDMASchedulerP__HIforwardQ__size();
                  for (i = 0; i < PureTDMASchedulerP__HIqueueSize[sim_node()]; i++) {
                      PureTDMASchedulerP__HIforwardQ__dequeue();
                    }
                }
            }
          else {
#line 524
            if (PureTDMASchedulerP__Transmitting_flowid[sim_node()] == PureTDMASchedulerP__LO_TASK[sim_node()]) {
                if (!PureTDMASchedulerP__LOforwardQ__empty()) {
                    PureTDMASchedulerP__LOqueueSize[sim_node()] = PureTDMASchedulerP__LOforwardQ__size();
                    for (i = 0; i < PureTDMASchedulerP__LOqueueSize[sim_node()]; i++) {
                        PureTDMASchedulerP__LOforwardQ__dequeue();
                      }
                  }
              }
            }
        }
    }
  else {
#line 534
    if (ack_at_send_done == 1) {

        PureTDMASchedulerP__Tx_count[sim_node()][PureTDMASchedulerP__Transmitting_flowid[sim_node()]] = 0;
        PureTDMASchedulerP__rcv_slot[sim_node()][PureTDMASchedulerP__Transmitting_flowid[sim_node()]] = 0;






        if (PureTDMASchedulerP__Transmitting_flowid[sim_node()] == PureTDMASchedulerP__HI_TASK[sim_node()]) {

            PureTDMASchedulerP__HIqueueSize[sim_node()] = PureTDMASchedulerP__HIforwardQ__size();
            for (i = 0; i < PureTDMASchedulerP__HIqueueSize[sim_node()]; i++) {
                PureTDMASchedulerP__HIforwardQ__dequeue();
              }
          }
        else {
#line 550
          if (PureTDMASchedulerP__Transmitting_flowid[sim_node()] == PureTDMASchedulerP__LO_TASK[sim_node()]) {

              PureTDMASchedulerP__LOqueueSize[sim_node()] = PureTDMASchedulerP__LOforwardQ__size();
              for (i = 0; i < PureTDMASchedulerP__LOqueueSize[sim_node()]; i++) {
                  PureTDMASchedulerP__LOforwardQ__dequeue();
                }
            }
          }
      }
    }
  PureTDMASchedulerP__send_status[sim_node()][PureTDMASchedulerP__Transmitting_flowid[sim_node()]] = ack_at_send_done;

  PureTDMASchedulerP__Transmitting_flowid[sim_node()] = 0;

  if (msg == &PureTDMASchedulerP__packet[sim_node()]) {
      if (PureTDMASchedulerP__AMPacket__type(msg) != PureTDMASchedulerP__SIMPLE_TDMA_SYNC) {
          PureTDMASchedulerP__Send__sendDone(msg, error);
        }
      else 
#line 567
        {
        }
    }
}

# 48 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncSend.nc"
inline static void /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__Send__sendDone(message_t * msg, error_t error){
#line 48
  PureTDMASchedulerP__SubSend__sendDone(msg, error);
#line 48
}
#line 48
# 159 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/system/GenericSlotSenderP.nc"
static inline void /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__SubSend__sendDone(message_t *msg, error_t error)
#line 159
{
  if (/*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__toSend[sim_node()] == msg) {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 161
        /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__state[sim_node()] = /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__S_END;
#line 161
        __nesc_atomic_end(__nesc_atomic); }
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 162
        /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__toSend[sim_node()] = (void *)0;
#line 162
        __nesc_atomic_end(__nesc_atomic); }
      /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__Send__sendDone(msg, error);
    }
}

# 121 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/system/SenderDispatcherP.nc"
static inline void SenderDispatcherP__Send__default__sendDone(uint8_t type, message_t *msg, error_t error)
#line 121
{
}

# 48 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncSend.nc"
inline static void SenderDispatcherP__Send__sendDone(uint8_t arg_0x2baa9476d6d8, message_t * msg, error_t error){
#line 48
  switch (arg_0x2baa9476d6d8) {
#line 48
    case TDMA_SLOT:
#line 48
      /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__SubSend__sendDone(msg, error);
#line 48
      break;
#line 48
    case BEACON_SLOT:
#line 48
      BeaconSlotP__SubSend__sendDone(msg, error);
#line 48
      break;
#line 48
    default:
#line 48
      SenderDispatcherP__Send__default__sendDone(arg_0x2baa9476d6d8, msg, error);
#line 48
      break;
#line 48
    }
#line 48
}
#line 48
# 131 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline bool SimSchedulerBasicP__isWaiting(uint8_t id)
{
  return SimSchedulerBasicP__m_next[sim_node()][id] != SimSchedulerBasicP__NO_TASK || SimSchedulerBasicP__m_tail[sim_node()] == id;
}

static inline bool SimSchedulerBasicP__pushTask(uint8_t id)
{
  if (!SimSchedulerBasicP__isWaiting(id)) 
    {
      if (SimSchedulerBasicP__m_head[sim_node()] == SimSchedulerBasicP__NO_TASK) 
        {
          SimSchedulerBasicP__m_head[sim_node()] = id;
          SimSchedulerBasicP__m_tail[sim_node()] = id;
        }
      else 
        {
          SimSchedulerBasicP__m_next[sim_node()][SimSchedulerBasicP__m_tail[sim_node()]] = id;
          SimSchedulerBasicP__m_tail[sim_node()] = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

#line 61
static inline int SimSchedulerBasicP__sim_config_task_latency(void )
#line 61
{
#line 61
  return 100;
}

# 303 "/usr/lib/ncc/nesc_nx.h"
static __inline  int8_t __nesc_hton_int8(void * target, int8_t value)
#line 303
{
#line 303
  __nesc_hton_uint8(target, value);
#line 303
  return value;
}

# 591 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/CpmModelC.nc"
static inline void CpmModelC__free_receive_message(CpmModelC__receive_message_t *msg)
#line 591
{
  free(msg);
}

# 53 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/GainRadioModel.nc"
inline static bool CpmModelC__Model__shouldAck(message_t *msg){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = TossimPacketModelC__GainRadioModel__shouldAck(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 479 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/lib/macs/pure-tdma/PureTDMASchedulerP.nc"
static inline void PureTDMASchedulerP__TossimPacketModel__receive(message_t *msg)
#line 479
{
}

# 197 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/system/GenericSlotSenderP.nc"
static inline void /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__SignalSend__receive(message_t *msg)
#line 197
{
}

# 79 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/TossimPacketModel.nc"
inline static void TossimPacketModelC__Packet__receive(message_t *msg){
#line 79
  /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__SignalSend__receive(msg);
#line 79
  PureTDMASchedulerP__TossimPacketModel__receive(msg);
#line 79
  TossimActiveMessageC__Model__receive(msg);
#line 79
}
#line 79
# 692 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/lib/macs/pure-tdma/PureTDMASchedulerP.nc"
static inline void PureTDMASchedulerP__CCAevent__anypktreceive(void )
#line 692
{
  if (PureTDMASchedulerP__Rcv_check_mode[sim_node()] == TRUE) {

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 695
        PureTDMASchedulerP__Rcv_check_mode[sim_node()] = FALSE;
#line 695
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 42 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/GainRadioModel2.nc"
inline static void TossimPacketModelC__GainRadioModel2__anypktreceive(void ){
#line 42
  PureTDMASchedulerP__CCAevent__anypktreceive();
#line 42
}
#line 42
# 303 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/TossimPacketModelC.nc"
static inline void TossimPacketModelC__GainRadioModel__receive(message_t *msg)
#line 303
{
  if (TossimPacketModelC__running[sim_node()] && !TossimPacketModelC__transmitting[sim_node()]) {
      TossimPacketModelC__GainRadioModel2__anypktreceive();
      TossimPacketModelC__Packet__receive(msg);
    }
}

# 52 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/GainRadioModel.nc"
inline static void CpmModelC__Model__receive(message_t *msg){
#line 52
  TossimPacketModelC__GainRadioModel__receive(msg);
#line 52
}
#line 52
# 361 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/CpmModelC.nc"
static inline void CpmModelC__sim_gain_receive_handle(sim_event_t *evt)
#line 361
{
  CpmModelC__receive_message_t *mine = (CpmModelC__receive_message_t *)evt->data;
  CpmModelC__receive_message_t *predecessor = (void *)0;
  CpmModelC__receive_message_t *list = CpmModelC__outstandingReceptionHead[sim_node()];

  sim_log_debug(178U, "PHY_layer_check", " PHY reception---\n");



  sim_log_debug(179U, "CpmModelC", "Handling reception event @ %s.\n", sim_time_string());
  while (list != (void *)0) {
      if (list->next == mine) {
          predecessor = list;
        }
      list = list->next;
    }

  if (predecessor) {
      predecessor->next = mine->next;
    }
  else {
#line 381
    if (mine == CpmModelC__outstandingReceptionHead[sim_node()]) {
        CpmModelC__outstandingReceptionHead[sim_node()] = mine->next;
      }
    else {
        sim_log_error(180U, "CpmModelC", "Incoming packet list structure is corrupted: entry is not the head and no entry points to it.\n");
      }
    }
  sim_log_debug(181U, "CpmModelC,SNRLoss", "Packet from %i to %i\n", (int )mine->source, (int )sim_node());
  sim_log_debug(182U, "PHY_layer_check", "Packet from %i to %i ;;; mine->lost:%d\n", (int )mine->source, (int )sim_node(), mine->lost);
#line 401
  if (mine->channel != sim_mote_get_radio_channel(sim_node())) {
      sim_log_debug(183U, "PHY_layer_check", "check channel false\n ");
      CpmModelC__free_receive_message(mine);
      CpmModelC__receiving[sim_node()] = 0;
      return;
    }



  if (! mine->lost) {



      tossim_metadata_t *meta = (tossim_metadata_t *)& mine->msg->metadata;

#line 415
      __nesc_hton_int8(meta->strength.nxdata, mine->strength);
      __nesc_hton_uint8(meta->lqi.nxdata, mine->lqi);



      sim_log_debug(184U, "CpmModelC", "  -signaling reception\n");
      sim_log_debug(185U, "PHY_layer_check", "-signaling reception\n");
      CpmModelC__Model__receive(mine->msg);
      if (mine->ack) {
          sim_log_debug_clear(186U, "CpmModelC", " acknowledgment requested, ");
        }
      else 
        {
          sim_log_debug_clear(187U, "CpmModelC", " no acknowledgment requested.\n");
        }

      if (mine->ack && CpmModelC__Model__shouldAck(mine->msg)) {
          sim_log_debug_clear(188U, "CpmModelC", " scheduling ack.\n");

          CpmModelC__sim_gain_schedule_ack(mine->source, sim_time() + 1, mine);
        }
      else {
          CpmModelC__free_receive_message(mine);
        }

      CpmModelC__receiving[sim_node()] = 0;
    }
  else {
      if (RandomUniform() < 0.00001) {
          sim_log_debug(189U, "CpmModelC,SNRLoss", "Packet was technically lost, but TOSSIM introduces an ack false positive rate.\n");
          if (mine->ack && CpmModelC__Model__shouldAck(mine->msg)) {
              sim_log_debug_clear(190U, "CpmModelC", " scheduling ack.\n");
              CpmModelC__sim_gain_schedule_ack(mine->source, sim_time() + 1, mine);
            }
          else {
              CpmModelC__free_receive_message(mine);
            }
        }
      else {
          CpmModelC__free_receive_message(mine);
        }
      CpmModelC__receiving[sim_node()] = 0;
      sim_log_debug_clear(191U, "CpmModelC,SNRLoss", "  -packet was lost.\n");
    }
}

#line 575
static inline sim_event_t *CpmModelC__allocate_receive_event(sim_time_t endTime, CpmModelC__receive_message_t *msg)
#line 575
{
  sim_event_t *evt = (sim_event_t *)malloc(sizeof(sim_event_t ));

#line 577
  evt->mote = sim_node();
  evt->time = endTime;
  evt->handle = CpmModelC__sim_gain_receive_handle;
  evt->cleanup = sim_queue_cleanup_event;
  evt->cancelled = 0;
  evt->force = 1;
  evt->data = msg;
  return evt;
}

static inline CpmModelC__receive_message_t *CpmModelC__allocate_receive_message(void )
#line 587
{
  return (CpmModelC__receive_message_t *)malloc(sizeof(CpmModelC__receive_message_t ));
}

#line 463
static inline void CpmModelC__enqueue_receive_event(int source, sim_time_t endTime, message_t *msg, bool receive, double power, double reversePower)
#line 463
{
  sim_event_t *evt;
  CpmModelC__receive_message_t *list;
  CpmModelC__receive_message_t *rcv = CpmModelC__allocate_receive_message();
  double tmp_snr = 0.0;
  double noiseStr = CpmModelC__packetNoise(rcv);

#line 469
  rcv->source = source;
  rcv->start = sim_time();


  rcv->end = endTime;
  rcv->power = power;
  rcv->reversePower = reversePower;




  rcv->strength = (int8_t )floor(10.0 * log(pow(10.0, power / 10.0) + pow(10.0, noiseStr / 10.0)) / log(10.0));
  sim_log_debug(192U, "CpmModelC", "src: %i, node: %i ,rcv->strength:%i\n", source, sim_node(), rcv->strength);

  rcv->msg = msg;
  rcv->lost = 0;
  rcv->ack = receive;
  rcv->channel = sim_mote_get_radio_channel(source);





  if (!sim_mote_is_on(sim_node())) {
      sim_log_debug(193U, "CpmModelC", "Lost packet from %i due to %i being off\n", source, sim_node());
      rcv->lost = 1;
    }
  else {
#line 496
    if (!CpmModelC__shouldReceive(power - noiseStr)) {
        sim_log_debug(194U, "CpmModelC,SNRLoss", "Lost packet from %i to %i due to SNR being too low (%i)\n", source, sim_node(), (int )(power - noiseStr));
        sim_log_debug(195U, "PHY_layer_check", "Lost packet from %i to %i due to SNR being too low (%i)\n", source, sim_node(), (int )(power - noiseStr));

        rcv->lost = 1;
      }
    else {
#line 502
      if (sim_mote_get_radio_channel(sim_node()) != sim_mote_get_radio_channel(source)) {
          rcv->lost = 1;
        }
      else {
#line 505
        if (CpmModelC__receiving[sim_node()]) {
            sim_log_debug(196U, "CpmModelC,SNRLoss", "Lost packet from %i due to %i being mid-reception\n", source, sim_node());
            rcv->lost = 1;
          }
        else {
            CpmModelC__receiving[sim_node()] = 1;
          }
        }
      }
    }
#line 526
  list = CpmModelC__outstandingReceptionHead[sim_node()];
  while (list != (void *)0) {
      if (list->channel != sim_mote_get_radio_channel(source)) {
          list = list->next;
          continue;
        }
      if (!CpmModelC__shouldReceive(list->power - rcv->power)) {
          sim_log_debug(197U, "Gain,SNRLoss", "Going to lose packet from %i with signal %lf as am receiving a packet from %i with signal %lf\n", list->source, list->power, source, rcv->power);
          list->lost = 1;
        }
      list = list->next;
    }

  rcv->next = CpmModelC__outstandingReceptionHead[sim_node()];
  CpmModelC__outstandingReceptionHead[sim_node()] = rcv;
  evt = CpmModelC__allocate_receive_event(endTime, rcv);
  sim_queue_insert(evt);
}


static inline void CpmModelC__sim_gain_put(int dest, message_t *msg, sim_time_t endTime, bool receive, double power, double reversePower, int channel_id)
#line 546
{
  int prevNode = sim_node();

#line 548
  sim_log_debug(198U, "CpmModelC", "Enqueing reception event for %i at %llu with power %lf.\n", dest, endTime, power);
  sim_set_node(dest);
  CpmModelC__enqueue_receive_event(prevNode, endTime, msg, receive, power, reversePower);
  sim_set_node(prevNode);
}

#line 100
static inline double CpmModelC__timeInMs(void )
#line 100
{
  sim_time_t ftime = sim_time();
  int hours;
#line 102
  int minutes;
#line 102
  int seconds;
  sim_time_t secondBillionths;
  int temp_time;
  double ms_time;

  secondBillionths = ftime % sim_ticks_per_sec();
  if (sim_ticks_per_sec() > (sim_time_t )1000000000) {
      secondBillionths /= sim_ticks_per_sec() / (sim_time_t )1000000000;
    }
  else {
      secondBillionths *= (sim_time_t )1000000000 / sim_ticks_per_sec();
    }
  temp_time = (int )(secondBillionths / 10000);

  if (temp_time % 10 >= 5) {
      temp_time += 10 - temp_time % 10;
    }
  else {
      temp_time -= temp_time % 10;
    }
  ms_time = (float )(temp_time / 100.0);
  seconds = (int )(ftime / sim_ticks_per_sec());
  minutes = seconds / 60;
  hours = minutes / 60;
  seconds %= 60;
  minutes %= 60;

  ms_time += (hours * 3600 + minutes * 60 + seconds) * 1000;

  return ms_time;
}


static inline double CpmModelC__noise_hash_generation(void )
#line 135
{
  double CT = CpmModelC__timeInMs();
  uint32_t quotient = (sim_time_t )(CT * 10) / 10;
  uint8_t remain = (uint8_t )((sim_time_t )(CT * 10) % 10);
  double noise_val;
  uint16_t node_id = sim_node();

#line 141
  sim_log_debug(166U, "CpmModelC", "IN: noise_hash_generation() with CT: %f and channel id: %d and sensor id: %d\n", CT, sim_mote_get_radio_channel(node_id), node_id);
  if (5 <= remain && remain < 10) {
      noise_val = (double )sim_noise_generate(node_id, quotient + 1, sim_mote_get_radio_channel(node_id));
    }
  else {
      noise_val = (double )sim_noise_generate(node_id, quotient, sim_mote_get_radio_channel(node_id));
    }
  sim_log_debug(167U, "CpmModelC", "@ %s: OUT: noise_hash_generation(): %lf\n", sim_time_string(), noise_val);

  return noise_val;
}

# 79 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SimMoteP.nc"
static inline uint8_t SimMoteP__SimMote__getRadioChannel(void )
{
  if (SimMoteP__radioChannel[sim_node()] < 11 || SimMoteP__radioChannel[sim_node()] > 26) {
      return 26;
    }

  return SimMoteP__radioChannel[sim_node()];
}

# 245 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/CpmModelC.nc"
static inline double CpmModelC__prr_estimate_from_snr(double SNR)
#line 245
{
  double beta1 = 1.3687;
  double beta2 = 0.9187;
  double SNR_lin = pow(10.0, SNR / 10.0);
  double X = fabs(SNR_lin - beta2);
  double PSE = 0.5 * erfc(beta1 * sqrt(X / 2));
  double prr_hat = pow(1 - PSE, 23 * 2);

#line 252
  sim_log_debug(172U, "CpmModelC", "SNR is %lf, PRR is %lf\n", SNR, prr_hat);
  if (prr_hat > 1) {
    prr_hat = 1;
    }
  else {
#line 255
    if (prr_hat < 0) {
      prr_hat = 0;
      }
    }
#line 258
  return prr_hat;
}

# 119 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageC.nc"
static inline bool TossimActiveMessageC__Model__shouldAck(message_t *msg)
#line 119
{
  tossim_header_t *header = TossimActiveMessageC__getHeader(msg);

#line 121
  if (__nesc_ntoh_uint16(header->dest.nxdata) == TossimActiveMessageC__amAddress()) {
      sim_log_debug(218U, "Acks", "Received packet addressed to me so ack it\n");
      return TRUE;
    }
  return FALSE;
}

# 482 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/lib/macs/pure-tdma/PureTDMASchedulerP.nc"
static inline bool PureTDMASchedulerP__TossimPacketModel__shouldAck(message_t *msg)
#line 482
{
}

# 199 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/system/GenericSlotSenderP.nc"
static inline bool /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__SignalSend__shouldAck(message_t *msg)
#line 199
{
}

# 80 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/TossimPacketModel.nc"
inline static bool TossimPacketModelC__Packet__shouldAck(message_t *msg){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__SignalSend__shouldAck(msg);
#line 80
  __nesc_result = PureTDMASchedulerP__TossimPacketModel__shouldAck(msg);
#line 80
  __nesc_result = TossimActiveMessageC__Model__shouldAck(msg);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 314 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/TossimPacketModelC.nc"
static inline void TossimPacketModelC__GainRadioModel__acked(message_t *msg)
#line 314
{
  if (TossimPacketModelC__running[sim_node()]) {
      tossim_metadata_t *metadata = TossimPacketModelC__getMetadata(TossimPacketModelC__sending[sim_node()]);

#line 317
      __nesc_hton_uint8(metadata->ack.nxdata, 1);
      if (msg != TossimPacketModelC__sending[sim_node()]) {
          TossimPacketModelC__error[sim_node()] = 1;
          sim_log_debug(162U, "TossimPacketModelC", "Requested ack for 0x%x, but outgoing packet is 0x%x.\n", msg, TossimPacketModelC__sending[sim_node()]);
        }
    }
}

# 51 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/GainRadioModel.nc"
inline static void CpmModelC__Model__acked(message_t *msg){
#line 51
  TossimPacketModelC__GainRadioModel__acked(msg);
#line 51
}
#line 51
# 163 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/CpmModelC.nc"
static inline double CpmModelC__arr_estimate_from_snr(double SNR)
#line 163
{
  double beta1 = 1.3687;
  double beta2 = 0.9187;
  double SNR_lin = pow(10.0, SNR / 10.0);
  double X = fabs(SNR_lin - beta2);
  double PSE = 0.5 * erfc(beta1 * sqrt(X / 2));
  double prr_hat = pow(1 - PSE, 23 * 2);

#line 170
  sim_log_debug(168U, "CpmModelC,SNRLoss", "SNR is %lf, ARR is %lf\n", SNR, prr_hat);
  if (prr_hat > 1) {
    prr_hat = 1;
    }
  else {
#line 173
    if (prr_hat < 0) {
      prr_hat = 0;
      }
    }
#line 175
  return prr_hat;
}

static inline int CpmModelC__shouldAckReceive(double snr)
#line 178
{
  double prr = CpmModelC__arr_estimate_from_snr(snr);
  double coin = RandomUniform();

#line 181
  if (prr != 0 && prr != 1) {
      if (coin < prr) {
        prr = 1.0;
        }
      else {
#line 185
        prr = 0.0;
        }
    }
#line 187
  return (int )prr;
}

static inline void CpmModelC__sim_gain_ack_handle(sim_event_t *evt)
#line 190
{






  if (
#line 196
  CpmModelC__requestAck[sim_node()] && 
  CpmModelC__outgoing[sim_node()] != (void *)0 && 
  sim_mote_is_on(sim_node())) {
      CpmModelC__receive_message_t *rcv = (CpmModelC__receive_message_t *)evt->data;
      double power = rcv->reversePower;
      double noise = CpmModelC__packetNoise(rcv);
      double snr = power - noise;

#line 203
      if (CpmModelC__shouldAckReceive(snr)) {
          CpmModelC__Model__acked(CpmModelC__outgoing[sim_node()]);
        }
    }
  CpmModelC__free_receive_message((CpmModelC__receive_message_t *)evt->data);
}

# 348 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SimMoteP.nc"
static inline uint8_t SimMoteP__SimMote__get_power(void )
#line 348
{
  return SimMoteP__radio_power[sim_node()];
}

#line 65
static inline error_t SimMoteP__SimMote__setRadioChannel(uint8_t newRadioChannel)
{
  sim_log_debug(98U, "SimMoteRadioChannel", "SimMote.setRadioChannel:%d\n", SimMoteP__radioChannel[sim_node()]);
  if (newRadioChannel >= 11 && newRadioChannel <= 26) {
      SimMoteP__radioChannel[sim_node()] = newRadioChannel;
      return SUCCESS;
    }

  return FAIL;
}

#line 327
static inline error_t SimMoteP__SimMote__set_power(uint8_t power)
#line 327
{

  if (power <= 0) {
      SimMoteP__radio_power[sim_node()] = 0;
      sim_log_debug(103U, "SimMote_power", "radio_power:%d\n", SimMoteP__radio_power[sim_node()]);
      return SUCCESS;
    }
  else {
#line 334
    if (power >= 31) {
        SimMoteP__radio_power[sim_node()] = 31;
        sim_log_debug(104U, "SimMote_power", "radio_power:%d\n", SimMoteP__radio_power[sim_node()]);
        return SUCCESS;
      }
    else {
        SimMoteP__radio_power[sim_node()] = power;
        sim_log_debug(105U, "SimMote_power", "radio_power:%d\n", SimMoteP__radio_power[sim_node()]);
        return SUCCESS;
      }
    }
  return FAIL;
}

# 56 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420ControlP__syncDoneTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(CC2420ControlP__syncDoneTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 92 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AMPacket.nc"
inline static void PureTDMASchedulerP__AMPacket__setDestination(message_t * amsg, am_addr_t addr){
#line 92
  TossimActiveMessageC__AMPacket__setDestination(amsg, addr);
#line 92
}
#line 92
# 125 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/TossimPacketModelC.nc"
static inline error_t TossimPacketModelC__PacketAcknowledgements__requestAck(message_t *msg)
#line 125
{
  tossim_metadata_t *meta = TossimPacketModelC__getMetadata(msg);

  __nesc_hton_uint8(meta->ack.nxdata, TRUE);
  return SUCCESS;
}

# 48 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
inline static error_t PureTDMASchedulerP__PacketAcknowledgements__requestAck(message_t * msg){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = TossimPacketModelC__PacketAcknowledgements__requestAck(msg);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 60 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/control/sim/CC2420ControlP.nc"
static inline void CC2420ControlP__CC2420Config__setPower(uint8_t pw)
#line 60
{
  CC2420ControlP__power[sim_node()] = pw;
}

# 116 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static void PureTDMASchedulerP__CC2420Config__setPower(uint8_t power){
#line 116
  CC2420ControlP__CC2420Config__setPower(power);
#line 116
}
#line 116
# 53 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__Counter__size_type /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__Counter__get(void ){
#line 53
  unsigned short __nesc_result;
#line 53

#line 53
  __nesc_result = /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__Counter__get();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 75 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__to_size_type /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__Alarm__getNow(void )
{
  return /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__Counter__get();
}

#line 146
static inline void /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__Alarm__start(/*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__to_size_type dt)
{
  /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__Alarm__startAt(/*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__Alarm__getNow(), dt);
}

# 55 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void PureTDMASchedulerP__Txdelay__start(PureTDMASchedulerP__Txdelay__size_type dt){
#line 55
  /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__Alarm__start(dt);
#line 55
}
#line 55
# 53 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__CounterFrom__size_type /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__CounterFrom__get(void ){
#line 53
  unsigned short __nesc_result;
#line 53

#line 53
  __nesc_result = CounterMicro16P__Counter__get();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53







inline static bool /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__CounterFrom__isOverflowPending(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = CounterMicro16P__Counter__isOverflowPending();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 40 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncSend.nc"
inline static error_t PureTDMASchedulerP__SubSend__send(message_t * msg, uint8_t len){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__Send__send(msg, len);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 906 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/lib/macs/pure-tdma/PureTDMASchedulerP.nc"
static inline void PureTDMASchedulerP__Txdelay__fired(void )
#line 906
{
  uint32_t current_slot;

  current_slot = PureTDMASchedulerP__SlotterControl__getSlot() % PureTDMASchedulerP__superframe_length[sim_node()];
  if (PureTDMASchedulerP__SubSend__send(&PureTDMASchedulerP__packet[sim_node()], sizeof(TestNetworkMsg )) == SUCCESS) {
      /* atomic removed: atomic calls only */
#line 911
      PureTDMASchedulerP__Tx_count[sim_node()][PureTDMASchedulerP__Transmitting_flowid[sim_node()]] = PureTDMASchedulerP__Tx_count[sim_node()][PureTDMASchedulerP__Transmitting_flowid[sim_node()]] + 1;
      sim_log_debug(134U, "transmission", "Tx_count[%d]:%d at slot %d\n", PureTDMASchedulerP__Transmitting_flowid[sim_node()], PureTDMASchedulerP__Tx_count[sim_node()][PureTDMASchedulerP__Transmitting_flowid[sim_node()]], current_slot);
    }
  else 
#line 913
    {
    }
  if (TOS_NODE_ID == 1 || TOS_NODE_ID == 2) {
    }
}

# 67 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__Alarm__fired(void ){
#line 67
  PureTDMASchedulerP__Txdelay__fired();
#line 67
}
#line 67
# 151 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline void /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__AlarmFrom__fired(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__m_dt[sim_node()] == 0) 
        {
          /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__Alarm__fired();
        }
      else 
        {
          /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__set_alarm();
        }
    }
#line 163
    __nesc_atomic_end(__nesc_atomic); }
}

# 67 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__Alarm__fired(void ){
#line 67
  /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__AlarmFrom__fired();
#line 67
}
#line 67
# 19 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AlarmMicro16P.nc"
static inline void /*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__handle_timer_fired(sim_event_t *e)
{
  if (e->cancelled) {
    return;
    }
  /*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__Alarm__fired();
}











static inline bool /*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__Alarm__isRunning(void )
{
  return /*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__evt[sim_node()] != (void *)0;
}

static inline void /*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__Alarm__stop(void )
{
  if (/*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__Alarm__isRunning()) 
    {
      /*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__evt[sim_node()]->cancelled = 1;
      /*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__evt[sim_node()]->cleanup = sim_queue_cleanup_total;

      /*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__evt[sim_node()] = (void *)0;
    }
}






static inline void /*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__Alarm__startAt(uint16_t t0, uint16_t dt)
{
  sim_event_t *newEvt;
  sim_time_t fireAt;

  /*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__Alarm__stop();
  /*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__alarm[sim_node()] = t0 + dt;
  fireAt = /*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__zero[sim_node()] + (t0 + dt) * sim_ticks_per_sec() / 1024UL / 1024UL;





  newEvt = sim_queue_allocate_event();
  newEvt->handle = /*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__handle_timer_fired;
  newEvt->cleanup = sim_queue_cleanup_none;
  newEvt->time = fireAt > sim_time() ? fireAt : sim_time();

  /*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__evt[sim_node()] = newEvt;
  sim_queue_insert(newEvt);
}

# 92 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__AlarmFrom__startAt(/*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__AlarmFrom__size_type t0, /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__AlarmFrom__size_type dt){
#line 92
  /*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__Alarm__startAt(t0, dt);
#line 92
}
#line 92
# 53 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__Counter__size_type /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__Counter__get(void ){
#line 53
  unsigned short __nesc_result;
#line 53

#line 53
  __nesc_result = /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__Counter__get();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 75 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__to_size_type /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__Alarm__getNow(void )
{
  return /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__Counter__get();
}

#line 136
static inline void /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__Alarm__startAt(/*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__to_size_type t0, /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__to_size_type dt)
{
  /* atomic removed: atomic calls only */
  {
    /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__m_t0[sim_node()] = t0;
    /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__m_dt[sim_node()] = dt;
    /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__set_alarm();
  }
}

static inline void /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__Alarm__start(/*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__to_size_type dt)
{
  /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__Alarm__startAt(/*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__Alarm__getNow(), dt);
}

# 55 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__Alarm__start(/*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__Alarm__size_type dt){
#line 55
  /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__Alarm__start(dt);
#line 55
}
#line 55
# 40 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncSend.nc"
inline static error_t /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__SubSend__send(message_t * msg, uint8_t len){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = SenderDispatcherP__Send__send(TDMA_SLOT, msg, len);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 72 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/system/GenericSlotSenderP.nc"
static inline void /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__alarm(uint8_t at)
#line 72
{
}

#line 142
static inline void /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__Alarm__fired(void )
#line 142
{
  uint8_t oldState;

  /* atomic removed: atomic calls only */
#line 145
  oldState = /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__state[sim_node()];
  if (oldState != /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__S_START) {
      /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__alarm(2);
    }
  /* atomic removed: atomic calls only */
  /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__state[sim_node()] = /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__S_OFFSET;
  if (/*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__SubSend__send(/*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__toSend[sim_node()], /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__toSendLen[sim_node()]) != SUCCESS) {
      /* atomic removed: atomic calls only */
#line 152
      /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__state[sim_node()] = /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__S_END;
    }
  else 
#line 153
    {
      sim_log_debug(147U, "test", "GenericSlotSenderP. Delay Tx success\n");
    }
}

# 67 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__Alarm__fired(void ){
#line 67
  /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__Alarm__fired();
#line 67
}
#line 67
# 151 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline void /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__fired(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__m_dt[sim_node()] == 0) 
        {
          /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__Alarm__fired();
        }
      else 
        {
          /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__set_alarm();
        }
    }
#line 163
    __nesc_atomic_end(__nesc_atomic); }
}

# 67 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__Alarm__fired(void ){
#line 67
  /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__fired();
#line 67
}
#line 67
# 19 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AlarmMicro16P.nc"
static inline void /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__handle_timer_fired(sim_event_t *e)
{
  if (e->cancelled) {
    return;
    }
  /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__Alarm__fired();
}











static inline bool /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__Alarm__isRunning(void )
{
  return /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__evt[sim_node()] != (void *)0;
}

static inline void /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__Alarm__stop(void )
{
  if (/*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__Alarm__isRunning()) 
    {
      /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__evt[sim_node()]->cancelled = 1;
      /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__evt[sim_node()]->cleanup = sim_queue_cleanup_total;

      /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__evt[sim_node()] = (void *)0;
    }
}






static inline void /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__Alarm__startAt(uint16_t t0, uint16_t dt)
{
  sim_event_t *newEvt;
  sim_time_t fireAt;

  /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__Alarm__stop();
  /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__alarm[sim_node()] = t0 + dt;
  fireAt = /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__zero[sim_node()] + (t0 + dt) * sim_ticks_per_sec() / 1024UL / 1024UL;





  newEvt = sim_queue_allocate_event();
  newEvt->handle = /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__handle_timer_fired;
  newEvt->cleanup = sim_queue_cleanup_none;
  newEvt->time = fireAt > sim_time() ? fireAt : sim_time();

  /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__evt[sim_node()] = newEvt;
  sim_queue_insert(newEvt);
}

# 92 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__startAt(/*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__size_type t0, /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__size_type dt){
#line 92
  /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__Alarm__startAt(t0, dt);
#line 92
}
#line 92
# 53 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__Counter__size_type /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__Counter__get(void ){
#line 53
  unsigned short __nesc_result;
#line 53

#line 53
  __nesc_result = /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__Counter__get();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 75 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__to_size_type /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__Alarm__getNow(void )
{
  return /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__Counter__get();
}

#line 146
static inline void /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__Alarm__start(/*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__to_size_type dt)
{
  /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__Alarm__startAt(/*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__Alarm__getNow(), dt);
}

# 55 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void PureTDMASchedulerP__CCATxdelay__start(PureTDMASchedulerP__CCATxdelay__size_type dt){
#line 55
  /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__Alarm__start(dt);
#line 55
}
#line 55
# 923 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/lib/macs/pure-tdma/PureTDMASchedulerP.nc"
static inline void PureTDMASchedulerP__CCATxdelay__fired(void )
#line 923
{
  uint32_t current_slot;

  if (PureTDMASchedulerP__Rcv_check_mode[sim_node()] == TRUE) {
      current_slot = PureTDMASchedulerP__SlotterControl__getSlot() % PureTDMASchedulerP__superframe_length[sim_node()];
      if (PureTDMASchedulerP__SubSend__send(&PureTDMASchedulerP__packet[sim_node()], sizeof(TestNetworkMsg )) == SUCCESS) {
          /* atomic removed: atomic calls only */
#line 929
          PureTDMASchedulerP__Rcv_check_mode[sim_node()] = FALSE;
          /* atomic removed: atomic calls only */
#line 930
          PureTDMASchedulerP__Tx_count[sim_node()][PureTDMASchedulerP__Transmitting_flowid[sim_node()]] = PureTDMASchedulerP__Tx_count[sim_node()][PureTDMASchedulerP__Transmitting_flowid[sim_node()]] + 1;
          sim_log_debug(135U, "transmission", "Tx_count[%d]:%d at slot %d\n", PureTDMASchedulerP__Transmitting_flowid[sim_node()], PureTDMASchedulerP__Tx_count[sim_node()][PureTDMASchedulerP__Transmitting_flowid[sim_node()]], current_slot);
        }
      else {
        }
    }
}

# 67 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__Alarm__fired(void ){
#line 67
  PureTDMASchedulerP__CCATxdelay__fired();
#line 67
}
#line 67
# 151 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline void /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__AlarmFrom__fired(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__m_dt[sim_node()] == 0) 
        {
          /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__Alarm__fired();
        }
      else 
        {
          /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__set_alarm();
        }
    }
#line 163
    __nesc_atomic_end(__nesc_atomic); }
}

# 67 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__Alarm__fired(void ){
#line 67
  /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__AlarmFrom__fired();
#line 67
}
#line 67
# 19 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AlarmMicro16P.nc"
static inline void /*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__handle_timer_fired(sim_event_t *e)
{
  if (e->cancelled) {
    return;
    }
  /*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__Alarm__fired();
}











static inline bool /*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__Alarm__isRunning(void )
{
  return /*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__evt[sim_node()] != (void *)0;
}

static inline void /*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__Alarm__stop(void )
{
  if (/*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__Alarm__isRunning()) 
    {
      /*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__evt[sim_node()]->cancelled = 1;
      /*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__evt[sim_node()]->cleanup = sim_queue_cleanup_total;

      /*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__evt[sim_node()] = (void *)0;
    }
}






static inline void /*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__Alarm__startAt(uint16_t t0, uint16_t dt)
{
  sim_event_t *newEvt;
  sim_time_t fireAt;

  /*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__Alarm__stop();
  /*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__alarm[sim_node()] = t0 + dt;
  fireAt = /*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__zero[sim_node()] + (t0 + dt) * sim_ticks_per_sec() / 1024UL / 1024UL;





  newEvt = sim_queue_allocate_event();
  newEvt->handle = /*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__handle_timer_fired;
  newEvt->cleanup = sim_queue_cleanup_none;
  newEvt->time = fireAt > sim_time() ? fireAt : sim_time();

  /*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__evt[sim_node()] = newEvt;
  sim_queue_insert(newEvt);
}

# 92 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__AlarmFrom__startAt(/*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__AlarmFrom__size_type t0, /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__AlarmFrom__size_type dt){
#line 92
  /*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__Alarm__startAt(t0, dt);
#line 92
}
#line 92
# 136 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline void /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__Alarm__startAt(/*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__to_size_type t0, /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__to_size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__m_t0[sim_node()] = t0;
      /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__m_dt[sim_node()] = dt;
      /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__set_alarm();
    }
#line 143
    __nesc_atomic_end(__nesc_atomic); }
}

static inline void /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__Alarm__start(/*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__to_size_type dt)
{
  /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__Alarm__startAt(/*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__Alarm__getNow(), dt);
}

# 55 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void GenericSlotterP__Alarm__start(GenericSlotterP__Alarm__size_type dt){
#line 55
  /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__Alarm__start(dt);
#line 55
}
#line 55
#line 67
inline static void /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__Alarm__fired(void ){
#line 67
  GenericSlotterP__Alarm__fired();
#line 67
}
#line 67
# 151 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline void /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__AlarmFrom__fired(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__m_dt[sim_node()] == 0) 
        {
          /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__Alarm__fired();
        }
      else 
        {
          /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__set_alarm();
        }
    }
#line 163
    __nesc_atomic_end(__nesc_atomic); }
}

# 67 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__Alarm__fired(void ){
#line 67
  /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__AlarmFrom__fired();
#line 67
}
#line 67
# 19 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AlarmMicro16P.nc"
static inline void /*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__handle_timer_fired(sim_event_t *e)
{
  if (e->cancelled) {
    return;
    }
  /*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__Alarm__fired();
}

#line 58
static inline void /*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__Alarm__startAt(uint16_t t0, uint16_t dt)
{
  sim_event_t *newEvt;
  sim_time_t fireAt;

  /*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__Alarm__stop();
  /*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__alarm[sim_node()] = t0 + dt;
  fireAt = /*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__zero[sim_node()] + (t0 + dt) * sim_ticks_per_sec() / 1024UL / 1024UL;





  newEvt = sim_queue_allocate_event();
  newEvt->handle = /*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__handle_timer_fired;
  newEvt->cleanup = sim_queue_cleanup_none;
  newEvt->time = fireAt > sim_time() ? fireAt : sim_time();

  /*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__evt[sim_node()] = newEvt;
  sim_queue_insert(newEvt);
}

# 92 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__AlarmFrom__startAt(/*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__AlarmFrom__size_type t0, /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__AlarmFrom__size_type dt){
#line 92
  /*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__Alarm__startAt(t0, dt);
#line 92
}
#line 92
# 208 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageC.nc"
static inline message_t *TossimActiveMessageC__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 208
{
  return msg;
}

# 67 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * TossimActiveMessageC__Snoop__receive(am_id_t arg_0x2baa94b42670, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
    __nesc_result = TossimActiveMessageC__Snoop__default__receive(arg_0x2baa94b42670, msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 83 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/atm128/sim/atm128hardware.h"
static __inline void __nesc_disable_interrupt()
#line 83
{
  atm128RegFile[sim_node()][* (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F]] &= ~(1 << 7);
}






#line 91
__inline  __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F];

#line 95
  __nesc_disable_interrupt();
  return result;
}



#line 100
__inline  void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F] = original_SREG;
}

# 77 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline void SimSchedulerBasicP__sim_scheduler_event_handle(sim_event_t *e)
#line 77
{
  SimSchedulerBasicP__sim_scheduler_event_pending[sim_node()] = FALSE;








  if (SimSchedulerBasicP__Scheduler__runNextTask()) {
      SimSchedulerBasicP__sim_scheduler_submit_event();
    }
}




static inline void SimSchedulerBasicP__sim_scheduler_event_init(sim_event_t *e)
#line 95
{
  e->mote = sim_node();
  e->force = 0;
  e->data = (void *)0;
  e->handle = SimSchedulerBasicP__sim_scheduler_event_handle;
  e->cleanup = sim_queue_cleanup_none;
}

#line 158
static inline void SimSchedulerBasicP__Scheduler__init(void )
{
  sim_log_debug(93U, "Scheduler", "Initializing scheduler.\n");
  /* atomic removed: atomic calls only */
  {
    memset(SimSchedulerBasicP__m_next[sim_node()], SimSchedulerBasicP__NO_TASK, sizeof SimSchedulerBasicP__m_next[sim_node()]);
    SimSchedulerBasicP__m_head[sim_node()] = SimSchedulerBasicP__NO_TASK;
    SimSchedulerBasicP__m_tail[sim_node()] = SimSchedulerBasicP__NO_TASK;

    SimSchedulerBasicP__sim_scheduler_event_pending[sim_node()] = FALSE;
    SimSchedulerBasicP__sim_scheduler_event_init(&SimSchedulerBasicP__sim_scheduler_event[sim_node()]);
  }
}

# 46 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static void SimMainP__Scheduler__init(void ){
#line 46
  SimSchedulerBasicP__Scheduler__init();
#line 46
}
#line 46
# 112 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline uint8_t SimSchedulerBasicP__popTask(void )
{
  if (SimSchedulerBasicP__m_head[sim_node()] != SimSchedulerBasicP__NO_TASK) 
    {
      uint8_t id = SimSchedulerBasicP__m_head[sim_node()];

#line 117
      SimSchedulerBasicP__m_head[sim_node()] = SimSchedulerBasicP__m_next[sim_node()][SimSchedulerBasicP__m_head[sim_node()]];
      if (SimSchedulerBasicP__m_head[sim_node()] == SimSchedulerBasicP__NO_TASK) 
        {
          SimSchedulerBasicP__m_tail[sim_node()] = SimSchedulerBasicP__NO_TASK;
        }
      SimSchedulerBasicP__m_next[sim_node()][id] = SimSchedulerBasicP__NO_TASK;
      return id;
    }
  else 
    {
      return SimSchedulerBasicP__NO_TASK;
    }
}

# 40 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AsyncReceiveAdapterP.nc"
static inline tossim_header_t *AsyncReceiveAdapterP__getHeader(message_t *msg)
{
  return & ((message_header_t *)msg->header)->tossim;
}

# 67 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AMPacket.nc"
inline static am_addr_t TestNetworkC__AMPacket__destination(message_t * amsg){
#line 67
  unsigned short __nesc_result;
#line 67

#line 67
  __nesc_result = TossimActiveMessageC__AMPacket__destination(amsg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67










inline static am_addr_t TestNetworkC__AMPacket__source(message_t * amsg){
#line 77
  unsigned short __nesc_result;
#line 77

#line 77
  __nesc_result = TossimActiveMessageC__AMPacket__source(amsg);
#line 77

#line 77
  return __nesc_result;
#line 77
}
#line 77
# 66 "TestNetworkC.nc"
static inline message_t *

TestNetworkC__Receive__receive(message_t *msg, void *payload, uint8_t len)
#line 68
{
  am_addr_t src = TestNetworkC__AMPacket__source(msg);
  am_addr_t dest = TestNetworkC__AMPacket__destination(msg);

#line 71
  TestNetworkC__rcmr[sim_node()] = (TestNetworkMsg *)payload;
  return msg;
}

# 727 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/lib/macs/pure-tdma/PureTDMASchedulerP.nc"
static inline void *PureTDMASchedulerP__Send__getPayload(message_t *msg, uint8_t len)
#line 727
{
  return PureTDMASchedulerP__SubSend__getPayload(msg, len);
}

# 71 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncSend.nc"
inline static void * AsyncSendAdapterP__AsyncSend__getPayload(message_t * msg, uint8_t len){
#line 71
  void *__nesc_result;
#line 71

#line 71
  __nesc_result = PureTDMASchedulerP__Send__getPayload(msg, len);
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 89 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AsyncSendAdapterP.nc"
static inline void *AsyncSendAdapterP__AMSend__getPayload(am_id_t id, message_t *msg, uint8_t len)
{
  return AsyncSendAdapterP__AsyncSend__getPayload(msg, len);
}

# 124 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void * /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__getPayload(am_id_t arg_0x2baa94bfa1a0, message_t * msg, uint8_t len){
#line 124
  void *__nesc_result;
#line 124

#line 124
  __nesc_result = AsyncSendAdapterP__AMSend__getPayload(arg_0x2baa94bfa1a0, msg, len);
#line 124

#line 124
  return __nesc_result;
#line 124
}
#line 124
# 203 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void */*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__getPayload(uint8_t id, message_t *m, uint8_t len)
#line 203
{
  return /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__getPayload(0, m, len);
}

# 114 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static void * /*TestNetworkAppC.Sender.AMQueueEntryP*/AMQueueEntryP__0__Send__getPayload(message_t * msg, uint8_t len){
#line 114
  void *__nesc_result;
#line 114

#line 114
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__getPayload(0U, msg, len);
#line 114

#line 114
  return __nesc_result;
#line 114
}
#line 114
# 65 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline void */*TestNetworkAppC.Sender.AMQueueEntryP*/AMQueueEntryP__0__AMSend__getPayload(message_t *m, uint8_t len)
#line 65
{
  return /*TestNetworkAppC.Sender.AMQueueEntryP*/AMQueueEntryP__0__Send__getPayload(m, len);
}

# 124 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void * TestNetworkC__Send__getPayload(message_t * msg, uint8_t len){
#line 124
  void *__nesc_result;
#line 124

#line 124
  __nesc_result = /*TestNetworkAppC.Sender.AMQueueEntryP*/AMQueueEntryP__0__AMSend__getPayload(msg, len);
#line 124

#line 124
  return __nesc_result;
#line 124
}
#line 124
# 75 "TestNetworkC.nc"
static inline message_t *TestNetworkC__AMReceive__receive(message_t *bufPtr, void *payload, uint8_t len)
#line 75
{
  int i;
#line 76
  int j;

#line 77
  TestNetworkC__rcm[sim_node()] = (TestNetworkMsg *)payload;
  TestNetworkC__msgamr[sim_node()] = (TestNetworkMsg *)TestNetworkC__Send__getPayload(&TestNetworkC__packet[sim_node()], sizeof(TestNetworkMsg ));
  if (TestNetworkC__msgamr[sim_node()] == (void *)0) {
#line 79
      return;
    }
#line 80
  __nesc_hton_uint8(TestNetworkC__tnmsg_in_transit[sim_node()].data1.nxdata, __nesc_ntoh_uint8(TestNetworkC__rcm[sim_node()]->data1.nxdata));
  __nesc_hton_uint8(TestNetworkC__tnmsg_in_transit[sim_node()].data2.nxdata, __nesc_ntoh_uint8(TestNetworkC__rcm[sim_node()]->data2.nxdata));
  memcpy(TestNetworkC__msgamr[sim_node()], &TestNetworkC__tnmsg_in_transit[sim_node()], sizeof(TestNetworkMsg ));
  if (len != sizeof(TestNetworkMsg )) {
      return bufPtr;
    }
  return bufPtr;
}

# 77 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AsyncReceiveAdapterP.nc"
static inline message_t *AsyncReceiveAdapterP__Receive__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 77
{
#line 77
  return msg;
}

# 67 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * AsyncReceiveAdapterP__Receive__receive(am_id_t arg_0x2baa942f4a78, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  switch (arg_0x2baa942f4a78) {
#line 67
    case 5:
#line 67
      __nesc_result = TestNetworkC__AMReceive__receive(msg, payload, len);
#line 67
      __nesc_result = TestNetworkC__Receive__receive(msg, payload, len);
#line 67
      break;
#line 67
    default:
#line 67
      __nesc_result = AsyncReceiveAdapterP__Receive__default__receive(arg_0x2baa942f4a78, msg, payload, len);
#line 67
      break;
#line 67
    }
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 140 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/BeaconSlotP.nc"
static inline void BeaconSlotP__Receive__updateBuffer(message_t *msg)
#line 140
{
#line 140
  return BeaconSlotP__SubReceive__updateBuffer(msg);
}

# 52 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncReceive.nc"
inline static void PureTDMASchedulerP__SubReceive__updateBuffer(message_t * msg){
#line 52
  BeaconSlotP__Receive__updateBuffer(msg);
#line 52
}
#line 52
# 736 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/lib/macs/pure-tdma/PureTDMASchedulerP.nc"
static inline void PureTDMASchedulerP__Receive__updateBuffer(message_t *msg)
#line 736
{
#line 736
  return PureTDMASchedulerP__SubReceive__updateBuffer(msg);
}

# 52 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncReceive.nc"
inline static void AsyncReceiveAdapterP__AsyncReceive__updateBuffer(message_t * msg){
#line 52
  PureTDMASchedulerP__Receive__updateBuffer(msg);
#line 52
}
#line 52
# 59 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AsyncReceiveAdapterP.nc"
static inline void AsyncReceiveAdapterP__receiveDone_task__runTask(void )
{
  message_t *msg;
  void *payload;
  uint8_t len;

#line 64
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      msg = AsyncReceiveAdapterP__msg_[sim_node()];
      payload = AsyncReceiveAdapterP__payload_[sim_node()];
      len = AsyncReceiveAdapterP__len_[sim_node()];
    }
#line 69
    __nesc_atomic_end(__nesc_atomic); }


  AsyncReceiveAdapterP__AsyncReceive__updateBuffer(AsyncReceiveAdapterP__Receive__receive(__nesc_ntoh_uint8(AsyncReceiveAdapterP__getHeader(msg)->type.nxdata), msg, payload, len));
}

# 39 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AsyncSendAdapterP.nc"
static inline tossim_header_t *AsyncSendAdapterP__getHeader(message_t *msg)
{
  return & ((message_header_t *)msg->header)->tossim;
}

# 181 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(am_id_t id, message_t *msg, error_t err)
#line 181
{





  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()] >= 1) {
      return;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()]].msg == msg) {
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()], msg, err);
    }
  else {
      sim_log_debug(224U, "PointerBug", "%s received send done for %p, signaling for %p.\n", __FUNCTION__, msg, /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()]].msg);
    }
}

# 99 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void AsyncSendAdapterP__AMSend__sendDone(am_id_t arg_0x2baa942e0a00, message_t * msg, error_t error){
#line 99
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(arg_0x2baa942e0a00, msg, error);
#line 99
}
#line 99
# 69 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AsyncSendAdapterP.nc"
static inline void AsyncSendAdapterP__sendDone_task__runTask(void )
{
  message_t *msg;
  uint8_t len;

#line 73
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      msg = AsyncSendAdapterP__msg_[sim_node()];
      len = AsyncSendAdapterP__len_[sim_node()];
    }
#line 77
    __nesc_atomic_end(__nesc_atomic); }


  AsyncSendAdapterP__AMSend__sendDone(__nesc_ntoh_uint8(AsyncSendAdapterP__getHeader(msg)->type.nxdata), msg, len);
}

# 92 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void PureTDMASchedulerP__SplitControl__startDone(error_t error){
#line 92
  TestNetworkC__RadioControl__startDone(error);
#line 92
}
#line 92
# 31 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/SlotterControl.nc"
inline static error_t PureTDMASchedulerP__SlotterControl__synchronize(uint8_t toSlot){
#line 31
  unsigned char __nesc_result;
#line 31

#line 31
  __nesc_result = GenericSlotterP__SlotterControl__synchronize(toSlot);
#line 31

#line 31
  return __nesc_result;
#line 31
}
#line 31
# 74 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/system/GenericSlotterP.nc"
static inline error_t GenericSlotterP__AsyncStdControl__start(void )
#line 74
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 75
    GenericSlotterP__nextFire[sim_node()] = GenericSlotterP__Alarm__getNow() + GenericSlotterP__slotLength[sim_node()];
#line 75
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 74 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AsyncStdControl.nc"
inline static error_t PureTDMASchedulerP__GenericSlotter__start(void ){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = GenericSlotterP__AsyncStdControl__start();
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 300 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/lib/macs/pure-tdma/PureTDMASchedulerP.nc"
static inline void PureTDMASchedulerP__RadioPowerControl__startDone(error_t error)
#line 300
{
  int i;

#line 302
  if (PureTDMASchedulerP__coordinatorId[sim_node()] == TOS_NODE_ID) {
      if (PureTDMASchedulerP__init[sim_node()] == FALSE) {
          PureTDMASchedulerP__SplitControl__startDone(error);
          PureTDMASchedulerP__GenericSlotter__start();
          PureTDMASchedulerP__SlotterControl__synchronize(0);
          PureTDMASchedulerP__init[sim_node()] = TRUE;
        }
    }
  else 
#line 309
    {
      if (PureTDMASchedulerP__init[sim_node()] == FALSE) {
          PureTDMASchedulerP__SplitControl__startDone(error);
          PureTDMASchedulerP__init[sim_node()] = TRUE;
        }
    }
}

# 36 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/RadioPowerControl.nc"
inline static void SyncSendAdapterP__RadioPowerControl__startDone(error_t error){
#line 36
  PureTDMASchedulerP__RadioPowerControl__startDone(error);
#line 36
}
#line 36
# 42 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/SyncSendAdapterP.nc"
static inline void SyncSendAdapterP__SplitControl__startDone(error_t err)
#line 42
{
#line 42
  SyncSendAdapterP__RadioPowerControl__startDone(err);
}

# 92 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void TossimPacketModelC__Control__startDone(error_t error){
#line 92
  SyncSendAdapterP__SplitControl__startDone(error);
#line 92
}
#line 92
# 94 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/TossimPacketModelC.nc"
static inline void TossimPacketModelC__startDoneTask__runTask(void )
#line 94
{
  TossimPacketModelC__running[sim_node()] = TRUE;
  TossimPacketModelC__Control__startDone(SUCCESS);
}

# 89 "TestNetworkC.nc"
static inline void TestNetworkC__RadioControl__stopDone(error_t err)
#line 89
{
}

# 117 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void PureTDMASchedulerP__SplitControl__stopDone(error_t error){
#line 117
  TestNetworkC__RadioControl__stopDone(error);
#line 117
}
#line 117
# 317 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/lib/macs/pure-tdma/PureTDMASchedulerP.nc"
static inline void PureTDMASchedulerP__RadioPowerControl__stopDone(error_t error)
#line 317
{
  if (PureTDMASchedulerP__requestStop[sim_node()]) {
      printf("This is sensor: %u and the RadioPowerControl.stopDone has been reached\n", TOS_NODE_ID);
      PureTDMASchedulerP__requestStop[sim_node()] = FALSE;
      PureTDMASchedulerP__SplitControl__stopDone(error);
    }
}

# 42 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/RadioPowerControl.nc"
inline static void SyncSendAdapterP__RadioPowerControl__stopDone(error_t error){
#line 42
  PureTDMASchedulerP__RadioPowerControl__stopDone(error);
#line 42
}
#line 42
# 43 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/SyncSendAdapterP.nc"
static inline void SyncSendAdapterP__SplitControl__stopDone(error_t err)
#line 43
{
#line 43
  SyncSendAdapterP__RadioPowerControl__stopDone(err);
}

# 117 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void TossimPacketModelC__Control__stopDone(error_t error){
#line 117
  SyncSendAdapterP__SplitControl__stopDone(error);
#line 117
}
#line 117
# 99 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/TossimPacketModelC.nc"
static inline void TossimPacketModelC__stopDoneTask__runTask(void )
#line 99
{
  TossimPacketModelC__running[sim_node()] = FALSE;
  TossimPacketModelC__Control__stopDone(SUCCESS);
}

#line 144
static inline void TossimPacketModelC__sendDoneTask__runTask(void )
#line 144
{
  message_t *msg = TossimPacketModelC__sending[sim_node()];
  tossim_metadata_t *meta = TossimPacketModelC__getMetadata(msg);

#line 147
  __nesc_hton_uint8(meta->ack.nxdata, 0);
  __nesc_hton_int8(meta->strength.nxdata, 0);
  __nesc_hton_uint16(meta->time.nxdata, 0);
  TossimPacketModelC__sending[sim_node()] = FALSE;
  TossimPacketModelC__Packet__sendDone(msg, TossimPacketModelC__running[sim_node()] ? SUCCESS : EOFF);
}

# 52 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static error_t TestNetworkC__CC2420Config__sync(void ){
#line 52
  unsigned char __nesc_result;
#line 52

#line 52
  __nesc_result = CC2420ControlP__CC2420Config__sync();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 91 "TestNetworkC.nc"
static inline void TestNetworkC__CC2420Config__syncDone(error_t error)
#line 91
{
  if (error == SUCCESS) {
    }
  else 
#line 93
    {
      TestNetworkC__CC2420Config__sync();
    }
}

# 750 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/lib/macs/pure-tdma/PureTDMASchedulerP.nc"
static inline void PureTDMASchedulerP__CC2420Config__syncDone(error_t error)
#line 750
{
}

# 53 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static void CC2420ControlP__CC2420Config__syncDone(error_t error){
#line 53
  PureTDMASchedulerP__CC2420Config__syncDone(error);
#line 53
  TestNetworkC__CC2420Config__syncDone(error);
#line 53
}
#line 53
# 39 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/control/sim/CC2420ControlP.nc"
static inline void CC2420ControlP__syncDoneTask__runTask(void )
#line 39
{
  CC2420ControlP__CC2420Config__syncDone(SUCCESS);
}

# 700 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/lib/macs/pure-tdma/PureTDMASchedulerP.nc"
static inline void PureTDMASchedulerP__ReadRssi__readDone(error_t result, uint16_t val)
{
  sim_log_debug(132U, "RSSI_TEST", "ReadRssi.readDone: %d\n", (int16_t )val - 45);
}

# 63 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static void CpmModelC__ReadRssi__readDone(error_t result, CpmModelC__ReadRssi__val_t val){
#line 63
  PureTDMASchedulerP__ReadRssi__readDone(result, val);
#line 63
}
#line 63
# 595 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/CpmModelC.nc"
static inline void CpmModelC__read_rssi_task__runTask(void )
{
  double noise = CpmModelC__packetNoise((void *)0);

#line 598
  CpmModelC__rssi[sim_node()] = FALSE;



  CpmModelC__ReadRssi__readDone(SUCCESS, noise + 45);
}

# 161 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void )
#line 161
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()], /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()]].msg, FAIL);
}

# 59 "TestNetworkC.nc"
static inline void TestNetworkC__Send__sendDone(message_t *m, error_t err)
#line 59
{
  if (err != SUCCESS) {
    }
#line 61
  TestNetworkC__sendBusy[sim_node()] = FALSE;
}

# 99 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void /*TestNetworkAppC.Sender.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(message_t * msg, error_t error){
#line 99
  TestNetworkC__Send__sendDone(msg, error);
#line 99
}
#line 99
# 57 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline void /*TestNetworkAppC.Sender.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(message_t *m, error_t err)
#line 57
{
  /*TestNetworkAppC.Sender.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(m, err);
}

# 207 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(uint8_t id, message_t *msg, error_t err)
#line 207
{
}

# 89 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(uint8_t arg_0x2baa94bfb020, message_t * msg, error_t error){
#line 89
  switch (arg_0x2baa94bfb020) {
#line 89
    case 0U:
#line 89
      /*TestNetworkAppC.Sender.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(msg, error);
#line 89
      break;
#line 89
    default:
#line 89
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(arg_0x2baa94bfb020, msg, error);
#line 89
      break;
#line 89
    }
#line 89
}
#line 89
# 118 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void )
#line 118
{
  uint8_t i;
#line 119
  uint8_t j;
#line 119
  uint8_t mask;
#line 119
  uint8_t last;
  message_t *msg;

#line 121
  for (i = 0; i < 1 / 8 + 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[sim_node()][i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[sim_node()][i] & mask) {
                  last = i * 8 + j;
                  msg = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[sim_node()][last].msg;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[sim_node()][last].msg = (void *)0;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[sim_node()][i] &= ~mask;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

# 213 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline void SimSchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}

# 64 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static void SimSchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x2baa93ec9328){
#line 64
  switch (arg_0x2baa93ec9328) {
#line 64
    case AsyncReceiveAdapterP__receiveDone_task:
#line 64
      AsyncReceiveAdapterP__receiveDone_task__runTask();
#line 64
      break;
#line 64
    case AsyncSendAdapterP__sendDone_task:
#line 64
      AsyncSendAdapterP__sendDone_task__runTask();
#line 64
      break;
#line 64
    case TossimPacketModelC__startDoneTask:
#line 64
      TossimPacketModelC__startDoneTask__runTask();
#line 64
      break;
#line 64
    case TossimPacketModelC__stopDoneTask:
#line 64
      TossimPacketModelC__stopDoneTask__runTask();
#line 64
      break;
#line 64
    case TossimPacketModelC__sendDoneTask:
#line 64
      TossimPacketModelC__sendDoneTask__runTask();
#line 64
      break;
#line 64
    case CC2420ControlP__syncDoneTask:
#line 64
      CC2420ControlP__syncDoneTask__runTask();
#line 64
      break;
#line 64
    case CpmModelC__read_rssi_task:
#line 64
      CpmModelC__read_rssi_task__runTask();
#line 64
      break;
#line 64
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask:
#line 64
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask();
#line 64
      break;
#line 64
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask:
#line 64
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask();
#line 64
      break;
#line 64
    default:
#line 64
      SimSchedulerBasicP__TaskBasic__default__runTask(arg_0x2baa93ec9328);
#line 64
      break;
#line 64
    }
#line 64
}
#line 64
#line 56
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 484 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/lib/macs/pure-tdma/PureTDMASchedulerP.nc"
static inline error_t PureTDMASchedulerP__Send__send(message_t *msg, uint8_t len)
#line 484
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 485
    {
      if (PureTDMASchedulerP__toSend[sim_node()] == (void *)0) {
          PureTDMASchedulerP__toSend[sim_node()] = msg;
          PureTDMASchedulerP__toSendLen[sim_node()] = len;
          {
            unsigned char __nesc_temp = 
#line 489
            SUCCESS;

            {
#line 489
              __nesc_atomic_end(__nesc_atomic); 
#line 489
              return __nesc_temp;
            }
          }
        }
    }
#line 493
    __nesc_atomic_end(__nesc_atomic); }
#line 492
  return FAIL;
}

# 40 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncSend.nc"
inline static error_t AsyncSendAdapterP__AsyncSend__send(message_t * msg, uint8_t len){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = PureTDMASchedulerP__Send__send(msg, len);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 46 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AsyncSendAdapterP.nc"
static inline error_t AsyncSendAdapterP__AMSend__send(am_id_t id, am_addr_t addr, message_t *msg, uint8_t len)
{
  __nesc_hton_uint16(AsyncSendAdapterP__getHeader(msg)->dest.nxdata, addr);
  __nesc_hton_uint8(AsyncSendAdapterP__getHeader(msg)->type.nxdata, id);
  return AsyncSendAdapterP__AsyncSend__send(msg, len);
}

# 69 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(am_id_t arg_0x2baa94bfa1a0, am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = AsyncSendAdapterP__AMSend__send(arg_0x2baa94bfa1a0, addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 169 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageC.nc"
static inline uint8_t TossimActiveMessageC__Packet__payloadLength(message_t *msg)
#line 169
{
  return __nesc_ntoh_uint8(TossimActiveMessageC__getHeader(msg)->length.nxdata);
}

# 67 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(message_t * msg){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = TossimActiveMessageC__Packet__payloadLength(msg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 67 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AMPacket.nc"
inline static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(message_t * amsg){
#line 67
  unsigned short __nesc_result;
#line 67

#line 67
  __nesc_result = TossimActiveMessageC__AMPacket__destination(amsg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
#line 136
inline static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(message_t * amsg){
#line 136
  unsigned char __nesc_result;
#line 136

#line 136
  __nesc_result = TossimActiveMessageC__AMPacket__type(amsg);
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 57 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket(void )
#line 57
{
  uint8_t i;

#line 59
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()] = (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()] + 1) % 1;
  for (i = 0; i < 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()]].msg == (void *)0 || 
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()] / 8] & (1 << /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()] % 8)) 
        {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()] = (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()] + 1) % 1;
        }
      else {
          break;
        }
    }
  if (i >= 1) {
#line 70
    /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()] = 1;
    }
}

#line 166
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void )
#line 166
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket();
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()] < 1) {
      error_t nextErr;
      message_t *nextMsg = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()]].msg;
      am_id_t nextId = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(nextMsg);
      am_addr_t nextDest = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(nextMsg);
      uint8_t len = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(nextMsg);

#line 174
      nextErr = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask();
        }
    }
}

# 92 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/system/GenericSlotterP.nc"
static inline void GenericSlotterP__FrameConfiguration__setSlotLength(uint32_t slotTimeBms)
#line 92
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 93
    GenericSlotterP__slotLength[sim_node()] = slotTimeBms;
#line 93
    __nesc_atomic_end(__nesc_atomic); }
}

# 32 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/FrameConfiguration.nc"
inline static void PureTDMASchedulerP__FrameConfiguration__setSlotLength(uint32_t slotTimeBms){
#line 32
  GenericSlotterP__FrameConfiguration__setSlotLength(slotTimeBms);
#line 32
}
#line 32
# 100 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/system/GenericSlotterP.nc"
static inline void GenericSlotterP__FrameConfiguration__setFrameLength(uint32_t numSlots)
#line 100
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 101
    GenericSlotterP__frameLength[sim_node()] = numSlots;
#line 101
    __nesc_atomic_end(__nesc_atomic); }
}

# 38 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/FrameConfiguration.nc"
inline static void PureTDMASchedulerP__FrameConfiguration__setFrameLength(uint32_t numSlots){
#line 38
  GenericSlotterP__FrameConfiguration__setFrameLength(numSlots);
#line 38
}
#line 38
# 56 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t TossimPacketModelC__startDoneTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(TossimPacketModelC__startDoneTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 104 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/TossimPacketModelC.nc"
static inline error_t TossimPacketModelC__Control__start(void )
#line 104
{
  if (!TossimPacketModelC__initialized[sim_node()]) {
      sim_log_error(150U, "TossimPacketModelC", "TossimPacketModelC: Control.start() called before initialization!\n");
      return FAIL;
    }
  sim_log_debug(151U, "TossimPacketModelC", "TossimPacketModelC: Control.start() called.\n");
  TossimPacketModelC__startDoneTask__postTask();
  return SUCCESS;
}

# 83 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t SyncSendAdapterP__SplitControl__start(void ){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  __nesc_result = TossimPacketModelC__Control__start();
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 40 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/SyncSendAdapterP.nc"
static inline error_t SyncSendAdapterP__RadioPowerControl__start(void )
#line 40
{
#line 40
  return SyncSendAdapterP__SplitControl__start();
}

# 35 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/RadioPowerControl.nc"
inline static error_t PureTDMASchedulerP__RadioPowerControl__start(void ){
#line 35
  unsigned char __nesc_result;
#line 35

#line 35
  __nesc_result = SyncSendAdapterP__RadioPowerControl__start();
#line 35

#line 35
  return __nesc_result;
#line 35
}
#line 35
# 59 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static void TestNetworkC__CC2420Config__setChannel(uint8_t channel){
#line 59
  CC2420ControlP__CC2420Config__setChannel(channel);
#line 59
}
#line 59
# 42 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP__power_init(void )
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    * (volatile uint8_t *)&atm128RegFile[sim_node()][0x35] = 1 << SE;
  }
}

# 58 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 13 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AlarmMicro16P.nc"
static inline error_t /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__Init__init(void )
{
  /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__zero[sim_node()] = sim_time();
  return SUCCESS;
}

# 30 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/CounterMicro16P.nc"
static inline error_t CounterMicro16P__Init__init(void )
{
  CounterMicro16P__t0[sim_node()] = sim_time();
  CounterMicro16P__scheduleOverflow();
  return SUCCESS;
}

# 13 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AlarmMicro16P.nc"
static inline error_t /*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__Init__init(void )
{
  /*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__zero[sim_node()] = sim_time();
  return SUCCESS;
}

#line 13
static inline error_t /*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__Init__init(void )
{
  /*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__zero[sim_node()] = sim_time();
  return SUCCESS;
}

#line 13
static inline error_t /*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__Init__init(void )
{
  /*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__zero[sim_node()] = sim_time();
  return SUCCESS;
}

#line 13
static inline error_t /*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__Init__init(void )
{
  /*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__zero[sim_node()] = sim_time();
  return SUCCESS;
}

#line 13
static inline error_t /*TestNetworkAppC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__5__Init__init(void )
{
  /*TestNetworkAppC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__5__zero[sim_node()] = sim_time();
  return SUCCESS;
}

#line 13
static inline error_t /*TestNetworkAppC.SSTdmaSlotSenderC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__6__Init__init(void )
{
  /*TestNetworkAppC.SSTdmaSlotSenderC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__6__zero[sim_node()] = sim_time();
  return SUCCESS;
}

# 51 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t MotePlatformP__SubInit__init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = /*TestNetworkAppC.SSTdmaSlotSenderC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__6__Init__init();
#line 51
  __nesc_result = ecombine(__nesc_result, /*TestNetworkAppC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__5__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, CounterMicro16P__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__Init__init());
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 50 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void )
#line 50
{
#line 50
  atm128RegFile[sim_node()][27U] &= ~(1 << 4);
}

# 30 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP__SerialIdPin__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr();
#line 30
}
#line 30
# 53 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void )
#line 53
{
#line 53
  atm128RegFile[sim_node()][26U] &= ~(1 << 4);
}

# 33 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP__SerialIdPin__makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput();
#line 33
}
#line 33
# 26 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void )
#line 26
{

  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x15] = 0;
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x14] = 0xff;


  MotePlatformP__SerialIdPin__makeInput();
  MotePlatformP__SerialIdPin__clr();

  return MotePlatformP__SubInit__init();
}

# 46 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void )
#line 46
{
  sim_log_debug(44U, "Pins", "Setting bit %i of port %i.\n", (int )0, (int )27U);
  atm128RegFile[sim_node()][27U] |= 1 << 0;
}

# 29 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set();
#line 29
}
#line 29
# 46 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void )
#line 46
{
  sim_log_debug(45U, "Pins", "Setting bit %i of port %i.\n", (int )1, (int )27U);
  atm128RegFile[sim_node()][27U] |= 1 << 1;
}

# 29 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set();
#line 29
}
#line 29
# 46 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void )
#line 46
{
  sim_log_debug(46U, "Pins", "Setting bit %i of port %i.\n", (int )2, (int )27U);
  atm128RegFile[sim_node()][27U] |= 1 << 2;
}

# 29 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set();
#line 29
}
#line 29
# 54 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void )
#line 54
{
#line 54
  atm128RegFile[sim_node()][26U] |= 1 << 0;
}

# 35 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput();
#line 35
}
#line 35
# 54 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void )
#line 54
{
#line 54
  atm128RegFile[sim_node()][26U] |= 1 << 1;
}

# 35 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput();
#line 35
}
#line 35
# 54 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void )
#line 54
{
#line 54
  atm128RegFile[sim_node()][26U] |= 1 << 2;
}

# 35 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput();
#line 35
}
#line 35
# 45 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void )
#line 45
{
  /* atomic removed: atomic calls only */
#line 46
  {
    sim_log_debug(136U, "Init", "LEDS: initialized.\n");
    LedsP__Led0__makeOutput();
    LedsP__Led1__makeOutput();
    LedsP__Led2__makeOutput();
    LedsP__Led0__set();
    LedsP__Led1__set();
    LedsP__Led2__set();
  }
  return SUCCESS;
}

# 51 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t PlatformP__MoteInit__init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = LedsP__Init__init();
#line 51
  __nesc_result = ecombine(__nesc_result, MotePlatformP__PlatformInit__init());
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 21 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/platforms/mica/sim/MeasureClockC.nc"
static inline error_t MeasureClockC__Init__init(void )
#line 21
{
  return SUCCESS;
}

# 51 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t PlatformP__MeasureClock__init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = MeasureClockC__Init__init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 49 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP__Init__init(void )
{
  error_t ok;


  ok = PlatformP__MeasureClock__init();
  ok = ecombine(ok, PlatformP__MoteInit__init());

  if (ok != SUCCESS) {
    return ok;
    }
  PlatformP__power_init();

  return SUCCESS;
}

# 51 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t SimMainP__PlatformInit__init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = PlatformP__Init__init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 80 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AlarmMicro16P.nc"
static inline void /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__Counter__overflow(void )
{
  /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__zero[sim_node()] = sim_time();
}

# 166 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline void /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__Counter__overflow(void )
{
}

#line 166
static inline void /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__Counter__overflow(void )
{
}

#line 166
static inline void /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__Counter__overflow(void )
{
}

# 71 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__Counter__overflow(void ){
#line 71
  /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__Counter__overflow();
#line 71
  /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__Counter__overflow();
#line 71
  /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__Counter__overflow();
#line 71
}
#line 71
# 122 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static inline void /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__m_upper[sim_node()]++;
      if ((/*Counter32khz16C.TransformCounterC*/TransformCounterC__0__m_upper[sim_node()] & /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__OVERFLOW_MASK) == 0) {
        /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__Counter__overflow();
        }
    }
#line 130
    __nesc_atomic_end(__nesc_atomic); }
}

# 80 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AlarmMicro16P.nc"
static inline void /*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__Counter__overflow(void )
{
  /*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__zero[sim_node()] = sim_time();
}

# 166 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline void /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__Counter__overflow(void )
{
}

#line 166
static inline void /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__Counter__overflow(void )
{
}

#line 166
static inline void /*TestNetworkAppC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__5__Counter__overflow(void )
{
}

#line 166
static inline void /*TestNetworkAppC.SSTdmaSlotSenderC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__6__Counter__overflow(void )
{
}

# 71 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__Counter__overflow(void ){
#line 71
  /*TestNetworkAppC.SSTdmaSlotSenderC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__6__Counter__overflow();
#line 71
  /*TestNetworkAppC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__5__Counter__overflow();
#line 71
  /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__Counter__overflow();
#line 71
  /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__Counter__overflow();
#line 71
}
#line 71
# 122 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static inline void /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__CounterFrom__overflow(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__m_upper[sim_node()]++;
      if ((/*Counter32khz32C.TransformCounterC*/TransformCounterC__1__m_upper[sim_node()] & /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__OVERFLOW_MASK) == 0) {
        /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__Counter__overflow();
        }
    }
#line 130
    __nesc_atomic_end(__nesc_atomic); }
}

# 80 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AlarmMicro16P.nc"
static inline void /*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__Counter__overflow(void )
{
  /*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__zero[sim_node()] = sim_time();
}

#line 80
static inline void /*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__Counter__overflow(void )
{
  /*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__zero[sim_node()] = sim_time();
}

#line 80
static inline void /*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__Counter__overflow(void )
{
  /*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__zero[sim_node()] = sim_time();
}

#line 80
static inline void /*TestNetworkAppC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__5__Counter__overflow(void )
{
  /*TestNetworkAppC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__5__zero[sim_node()] = sim_time();
}

#line 80
static inline void /*TestNetworkAppC.SSTdmaSlotSenderC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__6__Counter__overflow(void )
{
  /*TestNetworkAppC.SSTdmaSlotSenderC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__6__zero[sim_node()] = sim_time();
}

# 71 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void CounterMicro16P__Counter__overflow(void ){
#line 71
  /*TestNetworkAppC.SSTdmaSlotSenderC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__6__Counter__overflow();
#line 71
  /*TestNetworkAppC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__5__Counter__overflow();
#line 71
  /*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__Counter__overflow();
#line 71
  /*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__Counter__overflow();
#line 71
  /*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__Counter__overflow();
#line 71
  /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__CounterFrom__overflow();
#line 71
  /*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__Counter__overflow();
#line 71
  /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow();
#line 71
  /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__Counter__overflow();
#line 71
}
#line 71
# 48 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/CounterMicro16P.nc"
static inline void CounterMicro16P__handleOverflow(sim_event_t *evt)
{
  CounterMicro16P__t0[sim_node()] = sim_time();
  CounterMicro16P__scheduleOverflow();
  CounterMicro16P__Counter__overflow();
}

# 54 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static bool SimMainP__Scheduler__runNextTask(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = SimSchedulerBasicP__Scheduler__runNextTask();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 84 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/TossimPacketModelC.nc"
static inline error_t TossimPacketModelC__Init__init(void )
#line 84
{
  sim_log_debug(149U, "TossimPacketModelC", "TossimPacketModelC: Init.init() called\n");
  TossimPacketModelC__initialized[sim_node()] = TRUE;



  TossimPacketModelC__sendEvent[sim_node()].cancelled = 1;
  return SUCCESS;
}

# 80 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/lib/macs/pure-tdma/ScheduleConfigC.nc"
static inline bool ScheduleConfigC__ScheduleConfig__flowdestination(uint8_t nodeid)
#line 80
{
  uint8_t i;

#line 82
  for (i = 0; i < 4; i++) {
      if (ScheduleConfigC__flow_destination[sim_node()][i] == nodeid) {
          return TRUE;
        }
    }
  return FALSE;
}

# 12 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/lib/macs/pure-tdma/ScheduleConfig.nc"
inline static bool PureTDMASchedulerP__ScheduleConfig__flowdestination(uint8_t nodeid){
#line 12
  unsigned char __nesc_result;
#line 12

#line 12
  __nesc_result = ScheduleConfigC__ScheduleConfig__flowdestination(nodeid);
#line 12

#line 12
  return __nesc_result;
#line 12
}
#line 12
# 90 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/lib/macs/pure-tdma/ScheduleConfigC.nc"
static inline uint8_t ScheduleConfigC__ScheduleConfig__taskid(uint8_t flowroot)
#line 90
{
  uint8_t i;

#line 92
  for (i = 0; i < 4; i++) {
      if (ScheduleConfigC__flow_source[sim_node()][i] == flowroot) {
          return i;
        }
    }
}

# 14 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/lib/macs/pure-tdma/ScheduleConfig.nc"
inline static uint8_t PureTDMASchedulerP__ScheduleConfig__taskid(uint8_t flowroot){
#line 14
  unsigned char __nesc_result;
#line 14

#line 14
  __nesc_result = ScheduleConfigC__ScheduleConfig__taskid(flowroot);
#line 14

#line 14
  return __nesc_result;
#line 14
}
#line 14
# 70 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/lib/macs/pure-tdma/ScheduleConfigC.nc"
static inline bool ScheduleConfigC__ScheduleConfig__flowsource(uint8_t nodeid)
#line 70
{
  uint8_t i;

#line 72
  for (i = 0; i < 4; i++) {
      if (ScheduleConfigC__flow_source[sim_node()][i] == nodeid) {
          return TRUE;
        }
    }
  return FALSE;
}

# 10 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/lib/macs/pure-tdma/ScheduleConfig.nc"
inline static bool PureTDMASchedulerP__ScheduleConfig__flowsource(uint8_t nodeid){
#line 10
  unsigned char __nesc_result;
#line 10

#line 10
  __nesc_result = ScheduleConfigC__ScheduleConfig__flowsource(nodeid);
#line 10

#line 10
  return __nesc_result;
#line 10
}
#line 10
# 53 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/lib/macs/pure-tdma/ScheduleConfigC.nc"
static inline uint8_t ScheduleConfigC__ScheduleConfig__backupNode(uint8_t flowid, uint8_t nodeid)
#line 53
{
  if (nodeid > 9 || nodeid < 0) {
      return 0;
    }
  else 
#line 56
    {

      return ScheduleConfigC__Backuppath[sim_node()][flowid][nodeid];
    }
}

# 6 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/lib/macs/pure-tdma/ScheduleConfig.nc"
inline static uint8_t PureTDMASchedulerP__ScheduleConfig__backupNode(uint8_t flowid, uint8_t nodeid){
#line 6
  unsigned char __nesc_result;
#line 6

#line 6
  __nesc_result = ScheduleConfigC__ScheduleConfig__backupNode(flowid, nodeid);
#line 6

#line 6
  return __nesc_result;
#line 6
}
#line 6
# 45 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/lib/macs/pure-tdma/ScheduleConfigC.nc"
static inline uint8_t ScheduleConfigC__ScheduleConfig__primaryNode(uint8_t flowid, uint8_t nodeid)
#line 45
{
  if (nodeid > 9 || nodeid < 0) {
      return 0;
    }
  else 
#line 48
    {
      return ScheduleConfigC__Primarypath[sim_node()][flowid][nodeid];
    }
}

# 4 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/lib/macs/pure-tdma/ScheduleConfig.nc"
inline static uint8_t PureTDMASchedulerP__ScheduleConfig__primaryNode(uint8_t flowid, uint8_t nodeid){
#line 4
  unsigned char __nesc_result;
#line 4

#line 4
  __nesc_result = ScheduleConfigC__ScheduleConfig__primaryNode(flowid, nodeid);
#line 4

#line 4
  return __nesc_result;
#line 4
}
#line 4
# 177 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/lib/macs/pure-tdma/PureTDMASchedulerP.nc"
static inline error_t PureTDMASchedulerP__Init__init(void )
#line 177
{
  uint8_t i;
#line 178
  uint8_t j;
  uint32_t (*VCS_buffer)[1];
  uint32_t *Task_T_buffer;
  uint32_t *Task_Tx_buffer;

  PureTDMASchedulerP__slotSize[sim_node()] = 10 * 32;
  PureTDMASchedulerP__bi[sim_node()] = 40000;
  PureTDMASchedulerP__sd[sim_node()] = 40000;
  PureTDMASchedulerP__cap[sim_node()] = 0;

  PureTDMASchedulerP__check_link_quality_1[sim_node()] = 0;
  PureTDMASchedulerP__isFlowroot[sim_node()] = FALSE;
  PureTDMASchedulerP__isFlowdest[sim_node()] = FALSE;
  PureTDMASchedulerP__Task_rels[sim_node()] = 0;
  PureTDMASchedulerP__taskid[sim_node()] = 0;



  Task_T_buffer = sim_get_TaskPeriods();
  PureTDMASchedulerP__Task_character[sim_node()][1][PureTDMASchedulerP__TASK_PERIOD[sim_node()]] = Task_T_buffer[0];
  PureTDMASchedulerP__Task_character[sim_node()][1][PureTDMASchedulerP__TASK_DEAD[sim_node()]] = Task_T_buffer[0];
  PureTDMASchedulerP__Task_character[sim_node()][2][PureTDMASchedulerP__TASK_PERIOD[sim_node()]] = Task_T_buffer[1];
  PureTDMASchedulerP__Task_character[sim_node()][2][PureTDMASchedulerP__TASK_DEAD[sim_node()]] = Task_T_buffer[1];

  PureTDMASchedulerP__superframe_length[sim_node()] = 50;



  Task_Tx_buffer = sim_get_TaskTx();
  PureTDMASchedulerP__Task_character[sim_node()][1][PureTDMASchedulerP__TASK_MAXTX[sim_node()]] = Task_Tx_buffer[0];
  PureTDMASchedulerP__Task_character[sim_node()][2][PureTDMASchedulerP__TASK_MAXTX[sim_node()]] = Task_Tx_buffer[1];


  PureTDMASchedulerP__temp_interf[sim_node()] = Task_Tx_buffer[3];
  PureTDMASchedulerP__temp_dist[sim_node()] = Task_T_buffer[3];


  for (i = 0; i < 4; i++) {
      PureTDMASchedulerP__Path[sim_node()][i][PureTDMASchedulerP__PRIMARYPATH[sim_node()]] = PureTDMASchedulerP__ScheduleConfig__primaryNode(i, TOS_NODE_ID);
      PureTDMASchedulerP__Path[sim_node()][i][PureTDMASchedulerP__BACKUPPATH[sim_node()]] = PureTDMASchedulerP__ScheduleConfig__backupNode(i, TOS_NODE_ID);




      PureTDMASchedulerP__rcv_slot[sim_node()][i] = 0;
      PureTDMASchedulerP__rcv_count[sim_node()][i] = 0;
      PureTDMASchedulerP__receive_lock[sim_node()][i] = FALSE;
      PureTDMASchedulerP__Tx_count[sim_node()][i] = 0;
      PureTDMASchedulerP__Total_tx_count[sim_node()][i] = 0;


      PureTDMASchedulerP__send_status[sim_node()][i] = FALSE;
      PureTDMASchedulerP__Rcv_check_mode[sim_node()] = FALSE;
      PureTDMASchedulerP__My_max_txopper[sim_node()][i] = 0;
      PureTDMASchedulerP__crt_frame[sim_node()][i] = 0;
      PureTDMASchedulerP__Total_frame_count[sim_node()][i] = 0;
      PureTDMASchedulerP__Receiving_flag[sim_node()][i] = TRUE;
      PureTDMASchedulerP__Loss_count[sim_node()][i] = 0;
      PureTDMASchedulerP__Miss_count[sim_node()][i] = 0;
      PureTDMASchedulerP__prev_job_idx[sim_node()][i] = 0;



      for (j = 0; j < PureTDMASchedulerP__superframe_length[sim_node()]; j++) {
          PureTDMASchedulerP__e2e_delay_buffer[sim_node()][i][j] = 0;
        }
    }


  if (PureTDMASchedulerP__ScheduleConfig__flowsource(TOS_NODE_ID) == TRUE) {
      PureTDMASchedulerP__isFlowroot[sim_node()] = TRUE;
      PureTDMASchedulerP__taskid[sim_node()] = PureTDMASchedulerP__ScheduleConfig__taskid(TOS_NODE_ID);
      PureTDMASchedulerP__My_max_txopper[sim_node()][PureTDMASchedulerP__taskid[sim_node()]] = PureTDMASchedulerP__Task_character[sim_node()][PureTDMASchedulerP__taskid[sim_node()]][PureTDMASchedulerP__TASK_MAXTX[sim_node()]];
      PureTDMASchedulerP__Task_rels[sim_node()] = PureTDMASchedulerP__schedule[sim_node()][PureTDMASchedulerP__taskid[sim_node()]][0];
    }
  else {
#line 252
    if (PureTDMASchedulerP__ScheduleConfig__flowdestination(TOS_NODE_ID) == TRUE) {
        PureTDMASchedulerP__isFlowdest[sim_node()] = TRUE;
      }
    }
  PureTDMASchedulerP__coordinatorId[sim_node()] = 100;
  PureTDMASchedulerP__init[sim_node()] = FALSE;
  PureTDMASchedulerP__toSend[sim_node()] = (void *)0;
  PureTDMASchedulerP__toSendLen[sim_node()] = 0;
  PureTDMASchedulerP__sync[sim_node()] = FALSE;
  PureTDMASchedulerP__requestStop[sim_node()] = FALSE;
  PureTDMASchedulerP__SimMote__setTcpMsg(0, 0, 0, 0, 0);



  VCS_buffer = sim_get_VirtualSchedule();
  if (TOS_NODE_ID <= 9) {
      if (VCS_buffer[TOS_NODE_ID][0] != (void *)0) {
          PureTDMASchedulerP__TxOffset[sim_node()] = VCS_buffer[TOS_NODE_ID][0];
        }
    }
  sim_log_debug(113U, "VCStest", "My TxOffset:%d\n", PureTDMASchedulerP__TxOffset[sim_node()]);


  sim_log_debug(114U, "Task_T_Test", "Task_T_buffer[]:%d, %d, %d, %d\n", Task_T_buffer[0], Task_T_buffer[1], Task_T_buffer[2], Task_T_buffer[3]);
  sim_log_debug(115U, "Task_T_Test", "Task_maxTx_buffer[]:%d, %d, %d, %d\n", Task_Tx_buffer[0], Task_Tx_buffer[1], Task_Tx_buffer[2], Task_Tx_buffer[3]);
  sim_log_debug(116U, "Task_T_Test", "Superframe:%lu\n", PureTDMASchedulerP__superframe_length[sim_node()]);
  return SUCCESS;
}

# 75 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/system/GenericSlotSenderP.nc"
static inline error_t /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__Init__init(void )
#line 75
{
  /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__toSend[sim_node()] = (void *)0;
  /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__toSendLen[sim_node()] = 0;
  /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__state[sim_node()] = /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__S_END;
  return SUCCESS;
}

# 60 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/system/GenericSlotterP.nc"
static inline error_t GenericSlotterP__Init__init(void )
#line 60
{
  /* atomic removed: atomic calls only */
#line 61
  {
    GenericSlotterP__slotLength[sim_node()] = 320;
    GenericSlotterP__frameLength[sim_node()] = 40000;
    GenericSlotterP__sync[sim_node()] = FALSE;
  }
  return SUCCESS;
}

# 46 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/system/SenderDispatcherP.nc"
static inline error_t SenderDispatcherP__Init__init(void )
#line 46
{
  SenderDispatcherP__toSend[sim_node()] = (void *)0;
  SenderDispatcherP__toSendLen[sim_node()] = 0;
  SenderDispatcherP__last_id[sim_node()] = NO_SLOT;






  return SUCCESS;
}

# 147 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageC.nc"
static inline void TossimActiveMessageC__AMPacket__setSource(message_t *amsg, am_addr_t addr)
#line 147
{
  tossim_header_t *header = TossimActiveMessageC__getHeader(amsg);

#line 149
  __nesc_hton_uint16(header->src.nxdata, addr);
}

# 110 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AMPacket.nc"
inline static void BeaconSlotP__AMPacket__setSource(message_t * amsg, am_addr_t addr){
#line 110
  TossimActiveMessageC__AMPacket__setSource(amsg, addr);
#line 110
}
#line 110
# 162 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageC.nc"
static inline void TossimActiveMessageC__AMPacket__setType(message_t *amsg, am_id_t t)
#line 162
{
  tossim_header_t *header = TossimActiveMessageC__getHeader(amsg);

#line 164
  __nesc_hton_uint8(header->type.nxdata, t);
}

# 151 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AMPacket.nc"
inline static void BeaconSlotP__AMPacket__setType(message_t * amsg, am_id_t t){
#line 151
  TossimActiveMessageC__AMPacket__setType(amsg, t);
#line 151
}
#line 151
#line 92
inline static void BeaconSlotP__AMPacket__setDestination(message_t * amsg, am_addr_t addr){
#line 92
  TossimActiveMessageC__AMPacket__setDestination(amsg, addr);
#line 92
}
#line 92
# 69 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/BeaconSlotP.nc"
static inline error_t BeaconSlotP__Init__init(void )
#line 69
{
  BeaconSlotP__AMPacket__setDestination(&BeaconSlotP__syncPkt[sim_node()], AM_BROADCAST_ADDR);
  BeaconSlotP__AMPacket__setType(&BeaconSlotP__syncPkt[sim_node()], SIMPLE_TDMA_SYNC);
  BeaconSlotP__AMPacket__setSource(&BeaconSlotP__syncPkt[sim_node()], TOS_NODE_ID);
  BeaconSlotP__syncPktLen[sim_node()] = sizeof(message_header_t ) + sizeof(nx_uint32_t );
  return SUCCESS;
}

# 20 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/control/sim/CC2420ControlP.nc"
static inline error_t CC2420ControlP__Init__init(void )
{
  CC2420ControlP__channel[sim_node()] = 26;

  CC2420ControlP__power[sim_node()] = 0;



  CC2420ControlP__autoAck[sim_node()] = TRUE;





  CC2420ControlP__hwAutoAck[sim_node()] = FALSE;

  return SUCCESS;
}

# 68 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/system/SSTdmaSlotSenderP.nc"
static inline error_t /*TestNetworkAppC.SSTdmaSlotSenderC.SSTdmaSlotSenderP*/SSTdmaSlotSenderP__0__Init__init(void )
#line 68
{
  /*TestNetworkAppC.SSTdmaSlotSenderC.SSTdmaSlotSenderP*/SSTdmaSlotSenderP__0__toSend[sim_node()] = (void *)0;
  /*TestNetworkAppC.SSTdmaSlotSenderC.SSTdmaSlotSenderP*/SSTdmaSlotSenderP__0__toSendLen[sim_node()] = 0;
  /*TestNetworkAppC.SSTdmaSlotSenderC.SSTdmaSlotSenderP*/SSTdmaSlotSenderP__0__state[sim_node()] = /*TestNetworkAppC.SSTdmaSlotSenderC.SSTdmaSlotSenderP*/SSTdmaSlotSenderP__0__S_END;
  return SUCCESS;
}

# 44 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/RandomMlcgC.nc"
static inline error_t RandomMlcgC__Init__init(void )
#line 44
{
  /* atomic removed: atomic calls only */
#line 45
  RandomMlcgC__seed[sim_node()] = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 51 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t SimMainP__SoftwareInit__init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = RandomMlcgC__Init__init();
#line 51
  __nesc_result = ecombine(__nesc_result, /*TestNetworkAppC.SSTdmaSlotSenderC.SSTdmaSlotSenderP*/SSTdmaSlotSenderP__0__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, CC2420ControlP__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, BeaconSlotP__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, SenderDispatcherP__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, GenericSlotterP__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, PureTDMASchedulerP__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, TossimPacketModelC__Init__init());
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 79 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/atm128/sim/atm128hardware.h"
static __inline void __nesc_enable_interrupt()
#line 79
{
  atm128RegFile[sim_node()][* (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F]] |= 1 << 7;
}

# 83 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t TestNetworkC__RadioControl__start(void ){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  __nesc_result = PureTDMASchedulerP__SplitControl__start();
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 98 "TestNetworkC.nc"
static inline void TestNetworkC__Alarm__fired(void )
#line 98
{
}

# 37 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AlarmMicro16P.nc"
static inline bool /*TestNetworkAppC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__5__Alarm__isRunning(void )
{
  return /*TestNetworkAppC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__5__evt[sim_node()] != (void *)0;
}

static inline void /*TestNetworkAppC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__5__Alarm__stop(void )
{
  if (/*TestNetworkAppC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__5__Alarm__isRunning()) 
    {
      /*TestNetworkAppC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__5__evt[sim_node()]->cancelled = 1;
      /*TestNetworkAppC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__5__evt[sim_node()]->cleanup = sim_queue_cleanup_total;

      /*TestNetworkAppC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__5__evt[sim_node()] = (void *)0;
    }
}

# 62 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*TestNetworkAppC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__5__AlarmFrom__stop(void ){
#line 62
  /*TestNetworkAppC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__5__Alarm__stop();
#line 62
}
#line 62
# 91 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline void /*TestNetworkAppC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__5__Alarm__stop(void )
{
  /*TestNetworkAppC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__5__AlarmFrom__stop();
}

# 62 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void TestNetworkC__Alarm__stop(void ){
#line 62
  /*TestNetworkAppC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__5__Alarm__stop();
#line 62
}
#line 62
# 42 "TestNetworkC.nc"
static inline void TestNetworkC__Boot__booted(void )
#line 42
{
  TestNetworkC__Alarm__stop();
  TestNetworkC__Alarm__fired();
  TestNetworkC__RadioControl__start();
}

# 67 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/system/GenericSlotSenderP.nc"
static inline void /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__Boot__booted(void )
{
}

# 69 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/system/GenericSlotterP.nc"
static inline void GenericSlotterP__Boot__booted(void )
{
}

# 49 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/interfaces/Boot.nc"
inline static void SimMainP__Boot__booted(void ){
#line 49
  GenericSlotterP__Boot__booted();
#line 49
  /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__Boot__booted();
#line 49
  TestNetworkC__Boot__booted();
#line 49
}
#line 49
# 112 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SimMoteP.nc"
static inline long long int SimMoteP__SimMote__getEuid(void )
#line 112
{
  return SimMoteP__euid[sim_node()];
}

#line 115
static inline void SimMoteP__SimMote__setEuid(long long int e)
#line 115
{
  SimMoteP__euid[sim_node()] = e;
}

#line 118
static inline long long int SimMoteP__SimMote__getStartTime(void )
#line 118
{
  return SimMoteP__startTime[sim_node()];
}




static inline int SimMoteP__SimMote__getVariableInfo(char *name, void **addr, size_t *size)
#line 125
{
  return __nesc_nido_resolve(sim_node(), name, (uintptr_t *)addr, (size_t *)size);
}

#line 142
static inline void SimMoteP__SimMote__turnOff(void )
#line 142
{
  SimMoteP__isOn[sim_node()] = FALSE;
}

#line 216
static inline void SimMoteP__sim_mote_boot_handle(sim_event_t *e)
#line 216
{
  char buf[128];

#line 218
  sim_print_now(buf, 128);

  SimMoteP__bootEvent[sim_node()] = (sim_event_t *)(void *)0;
  sim_log_debug(102U, "SimMoteP", "Turning on mote %i at time %s.\n", (int )sim_node(), buf);
  SimMoteP__SimMote__turnOn();
}

#line 289
static inline bool SimMoteP__SimMote__isIdle(void )
#line 289
{
  return SimMoteP__isIdle[sim_node()];
}





static inline void SimMoteP__SimMote__enableIdle(void )
#line 297
{
  SimMoteP__isIdle[sim_node()] = TRUE;
}

#line 293
static inline void SimMoteP__SimMote__disableIdle(void )
#line 293
{
  SimMoteP__isIdle[sim_node()] = FALSE;
}

# 38 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_event_queue.c"
  void sim_queue_init()
#line 38
{
  init_heap(&eventHeap);
}

  void sim_queue_insert(sim_event_t *event)
#line 42
{
  sim_log_debug(0U, "Queue", "Inserting 0x%p\n", event);
  heap_insert(&eventHeap, event, event->time);
}

# 238 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_log.c"
static void sim_log_debug(uint16_t id, char *string, const char *format, ...)
#line 238
{
  va_list args;
  int i;

#line 241
  if (outputs[id].files == (void *)0) {
      fillInOutput(id, string);
    }
  for (i = 0; i < outputs[id].num; i++) {
      FILE *file = outputs[id].files[i];

#line 246
      __builtin_va_start(args, format);
      fprintf(file, "%s DEBUG (%i): ", sim_time_string(), (int )sim_node());
      vfprintf(file, format, args);
      fflush(file);
    }
}

#line 76
static void fillInOutput(int id, char *name)
#line 76
{
  char *termination = name;
  char *namePos = name;
  int count = 0;
  char *newName = (char *)malloc(strlen(name) + 1);

#line 81
  memset(newName, 0, strlen(name) + 1);

  while (termination != (void *)0) {
      sim_log_channel_t *channel;

      termination = strrchr(namePos, ',');

      if (termination == (void *)0) {
          strcpy(newName, namePos);
        }
      else 
        {
          memcpy(newName, namePos, termination - namePos);
          newName[termination - namePos] = 0;
        }

      channel = hashtable_search(channelTable, namePos);
      if (channel != (void *)0) {
          count += channel->numOutputs;
        }

      namePos = termination + 1;
    }

  termination = name;
  namePos = name;


  outputs[id].files = (FILE **)malloc(sizeof(FILE *) * count);
  outputs[id].num = 0;


  while (termination != (void *)0) {
      sim_log_channel_t *channel;

      termination = strrchr(namePos, ',');

      if (termination == (void *)0) {
          strcpy(newName, namePos);
        }
      else 
        {
          memcpy(newName, namePos, termination - namePos);
          newName[termination - namePos] = 0;
        }

      channel = hashtable_search(channelTable, namePos);
      if (channel != (void *)0) {
          int i;
#line 129
          int j;

#line 130
          for (i = 0; i < channel->numOutputs; i++) {
              int duplicate = 0;
              int outputCount = outputs[id].num;


              for (j = 0; j < outputCount; j++) {
                  if (fileno(outputs[id].files[j]) == fileno(channel->outputs[i])) {
                      duplicate = 1;
                      j = outputCount;
                    }
                }
              if (!duplicate) {
                  outputs[id].files[outputCount] = channel->outputs[i];
                  outputs[id].num++;
                }
            }
        }
      namePos = termination + 1;
    }
}

# 223 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_tossim.c"
  char *sim_time_string()
#line 223
{
  sim_print_now(simTimeBuf, 128);
  return simTimeBuf;
}

#line 218
  int sim_print_now(char *buf, int len)
#line 218
{
  return sim_print_time(buf, len, sim_time());
}

#line 195
  int sim_print_time(char *buf, int len, sim_time_t ftime)
#line 195
{
  int hours;
  int minutes;
  int seconds;
  sim_time_t secondBillionths;

  secondBillionths = ftime % sim_ticks_per_sec();
  if (sim_ticks_per_sec() > (sim_time_t )1000000000) {
      secondBillionths /= sim_ticks_per_sec() / (sim_time_t )1000000000;
    }
  else {
      secondBillionths *= (sim_time_t )1000000000 / sim_ticks_per_sec();
    }

  seconds = (int )(ftime / sim_ticks_per_sec());
  minutes = seconds / 60;
  hours = minutes / 60;
  seconds %= 60;
  minutes %= 60;
  buf[len - 1] = 0;
  return snprintf(buf, len - 1, "%i:%i:%i.%09llu", hours, minutes, seconds, secondBillionths);
}

#line 108
  sim_time_t sim_ticks_per_sec()
#line 108
{
  return 10000000000ULL;
}

#line 101
  sim_time_t sim_time()
#line 101
{
  return sim_ticks;
}








  unsigned long sim_node()
#line 112
{
  return current_node;
}

# 186 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/heap.c"
static void up_heap(heap_t *heap, int findex)
#line 186
{
  int parent_index;

#line 188
  if (findex == 0) {
      return;
    }

  parent_index = (findex - 1) / 2;

  if (((node_t *)heap->data)[parent_index].key > ((node_t *)heap->data)[findex].key) {
      swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[parent_index]);
      up_heap(heap, parent_index);
    }
}

#line 147
static void swap(node_t *first, node_t *second)
#line 147
{
  long long int key;
  void *data;

  key = first->key;
  first->key = second->key;
  second->key = key;

  data = first->data;
  first->data = second->data;
  second->data = data;
}

# 47 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_event_queue.c"
  sim_event_t *sim_queue_pop()
#line 47
{
  long long int key;

#line 49
  return (sim_event_t *)heap_pop_min_data(&eventHeap, &key);
}

# 103 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/heap.c"
static void *heap_pop_min_data(heap_t *heap, long long int *key)
#line 103
{
  int last_index = heap->size - 1;
  void *data = ((node_t *)heap->data)[0].data;

#line 106
  if (key != (void *)0) {
      *key = ((node_t *)heap->data)[0].key;
    }
  ((node_t *)heap->data)[0].data = ((node_t *)heap->data)[last_index].data;
  ((node_t *)heap->data)[0].key = ((node_t *)heap->data)[last_index].key;

  heap->size--;

  down_heap(heap, 0);

  return data;
}

#line 160
static void down_heap(heap_t *heap, int findex)
#line 160
{
  int right_index = (findex + 1) * 2;
  int left_index = findex * 2 + 1;

  if (right_index < heap->size) {
      long long int left_key = ((node_t *)heap->data)[left_index].key;
      long long int right_key = ((node_t *)heap->data)[right_index].key;
      int min_key_index = left_key < right_key ? left_index : right_index;

      if (((node_t *)heap->data)[min_key_index].key < ((node_t *)heap->data)[findex].key) {
          swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[min_key_index]);
          down_heap(heap, min_key_index);
        }
    }
  else {
#line 174
    if (left_index >= heap->size) {
        return;
      }
    else {
        long long int left_key = ((node_t *)heap->data)[left_index].key;

#line 179
        if (left_key < ((node_t *)heap->data)[findex].key) {
            swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[left_index]);
            return;
          }
      }
    }
}

# 52 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_event_queue.c"
  bool sim_queue_is_empty()
#line 52
{
  return heap_is_empty(&eventHeap);
}

  long long int sim_queue_peek_time()
#line 56
{
  if (heap_is_empty(&eventHeap)) {
      return -1;
    }
  else {
      return heap_get_min_key(&eventHeap);
    }
}


  void sim_queue_cleanup_none(sim_event_t *event)
#line 66
{
  sim_log_debug(1U, "Queue", "cleanup_none: 0x%p\n", event);
}


  void sim_queue_cleanup_event(sim_event_t *event)
#line 71
{
  sim_log_debug(2U, "Queue", "cleanup_event: 0x%p\n", event);
  free(event);
}

  void sim_queue_cleanup_data(sim_event_t *event)
#line 76
{
  sim_log_debug(3U, "Queue", "cleanup_data: 0x%p\n", event);
  free(event->data);
  event->data = (void *)0;
}

  void sim_queue_cleanup_total(sim_event_t *event)
#line 82
{
  sim_log_debug(4U, "Queue", "cleanup_total: 0x%p\n", event);
  free(event->data);
  event->data = (void *)0;
  free(event);
}

# 48 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_tossim.c"
  void sim_init()
#line 48
{
  sim_queue_init();
  sim_log_init();
  sim_log_commit_change();
  sim_noise_init();

  {
    struct timeval tv;

#line 56
    gettimeofday(&tv, (void *)0);





    if (tv.tv_usec != 0) {
        sim_random_seed(tv.tv_usec);
      }
    else {
        sim_random_seed(tv.tv_sec);
      }
  }
}

# 226 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_log.c"
static void sim_log_commit_change()
#line 226
{
  int i;

#line 228
  for (i = 0; i < SIM_LOG_OUTPUT_COUNT; i++) {
      if (outputs[i].files != (void *)0) {
          outputs[i].num = 0;
          free(outputs[i].files);
          outputs[i].files = (void *)0;
        }
    }
}

# 63 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_noise.c"
  void sim_noise_init()
{
  int j;
  int i;

#line 67
  for (j = 0; j < 1000; j++) {
      for (i = 0; i < 16; i++) {
          noiseData[j][i].noiseGenTime = 0;
          noiseData[j][i].noiseTable = create_hashtable(NOISE_HASHTABLE_SIZE, sim_noise_hash, sim_noise_eq);
          noiseData[j][i].noiseTrace = (char *)malloc(sizeof(char ) * NOISE_MIN_TRACE);
          noiseData[j][i].noiseTraceLen = NOISE_MIN_TRACE;
          noiseData[j][i].noiseTraceIndex = 0;
        }
    }
}

# 93 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_tossim.c"
  void sim_random_seed(int seed)
#line 93
{

  if (seed == 0) {
      seed = 1;
    }
  sim_seed = seed;
}

#line 71
  void sim_end()
#line 71
{
  sim_queue_init();
}



  int sim_random()
#line 77
{
  uint32_t mlcg;
#line 78
  uint32_t p;
#line 78
  uint32_t q;
  uint64_t tmpseed;

#line 80
  tmpseed = (uint64_t )33614U * (uint64_t )sim_seed;
  q = tmpseed;
  q = q >> 1;
  p = tmpseed >> 32;
  mlcg = p + q;
  if (mlcg & 0x80000000) {
      mlcg = mlcg & 0x7FFFFFFF;
      mlcg++;
    }
  sim_seed = mlcg;
  return mlcg;
}

#line 104
  void sim_set_time(sim_time_t t)
#line 104
{
  sim_ticks = t;
}








  void sim_set_node(unsigned long node)
#line 115
{
  current_node = node;
  TOS_NODE_ID = node;
}

#line 151
  int sim_run_next_event()
#line 151
{

  int *tcpMsg_result;
  int result_to_py = 0;

  if (!sim_queue_is_empty()) {
      sim_event_t *event = sim_queue_pop();

#line 158
      sim_set_time(event->time);
      sim_set_node(event->mote);





      if ((sim_mote_is_on(event->mote) || event->force) && event->handle != (void *)0) {

          event->handle(event);

          if (event->mote == 51 || event->mote == 52) 
            {
              tcpMsg_result = sim_mote_getTcpMsg(event->mote);

              if (tcpMsg_result[0] == 0 && tcpMsg_result[1] == 0 && tcpMsg_result[2] == 0 && tcpMsg_result[3] == 0 && tcpMsg_result[4] == 0) 
                {
                }
              else 

                {

                  result_to_py |= 1u << tcpMsg_result[0];
                  sim_mote_setTcpMsg(event->mote, 0, 0, 0, 0, 0);
                }
            }
        }
      else {
        }
      if (event->cleanup != (void *)0) {
          event->cleanup(event);
        }
    }

  return result_to_py;
}

# 191 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SimMoteP.nc"
  bool sim_mote_is_on(int mote)
#line 191
{
  bool result;
  int tmp = sim_node();

#line 194
  sim_set_node(mote);
  result = SimMoteP__SimMote__isOn();

  sim_set_node(tmp);
  return result;
}

#line 255
  int *sim_mote_getTcpMsg(int mote)
#line 255
{
  int *tcpMsgg;
  int tmp = sim_node();

#line 258
  sim_set_node(mote);
  tcpMsgg = SimMoteP__SimMote__getTcpMsg();
  sim_set_node(tmp);
  return tcpMsgg;
}

  void sim_mote_setTcpMsg(int mote, int flow_id, int slot_id, int source_id, int node_id, int channel_id)
#line 264
{
  int tmp = sim_node();

#line 266
  sim_set_node(mote);
  SimMoteP__SimMote__setTcpMsg(flow_id, slot_id, source_id, node_id, channel_id);
  sim_set_node(tmp);
}









static void SimMoteP__SimMote__setTcpMsg(int flow_id, int slot_id, int source_id, int node_id, int channel_id)
#line 279
{
  SimMoteP__tcp_msg[sim_node()][0] = flow_id;
  SimMoteP__tcp_msg[sim_node()][1] = slot_id;
  SimMoteP__tcp_msg[sim_node()][2] = source_id;
  SimMoteP__tcp_msg[sim_node()][3] = node_id;
  SimMoteP__tcp_msg[sim_node()][4] = channel_id;
}

# 228 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_tossim.c"
  void sim_add_channel(char *channel, FILE *file)
#line 228
{
  sim_log_add_channel(channel, file);
}

  bool sim_remove_channel(char *channel, FILE *file)
#line 232
{
  return sim_log_remove_channel(channel, file);
}





  void sim_send_VirtualSchedule(int nodeid, int TxOffset, int dummy1, int dummy2)
#line 240
{
  if (nodeid <= 9) {
      simScheduleBuf[nodeid][0] = TxOffset;
    }
}


  int *sim_get_VirtualSchedule()
#line 247
{

  return simScheduleBuf;
}


  void sim_send_TaskPeriods(int Task1_T, int Task2_T, int Task3_T, int Task4_T)
#line 253
{
  uint8_t i;

  for (i = 0; i < 4; i++) {

      switch (i) {
          case 0: 
            simTaskPeriodBuf[i] = Task1_T;
          break;
          case 1: 
            simTaskPeriodBuf[i] = Task2_T;
          break;
          case 2: 
            simTaskPeriodBuf[i] = Task3_T;
          break;
          case 3: 
            simTaskPeriodBuf[i] = Task4_T;
          break;
          default: 
            simTaskPeriodBuf[i] = 0;
        }
    }
}



  int *sim_get_TaskPeriods()
#line 279
{

  return simTaskPeriodBuf;
}


  void sim_send_NumTx(int Task1_Tx, int Task2_Tx, int Task3_Tx, int Task4_Tx)
#line 285
{
  uint8_t i;

  for (i = 0; i < 4; i++) {

      switch (i) {
          case 0: 
            simTaskTx[i] = Task1_Tx;
          break;
          case 1: 
            simTaskTx[i] = Task2_Tx;
          break;
          case 2: 
            simTaskTx[i] = Task3_Tx;
          break;
          case 3: 
            simTaskTx[i] = Task4_Tx;
          break;
          default: 
            simTaskTx[i] = 0;
        }
    }
}



  int *sim_get_TaskTx()
#line 311
{

  return simTaskTx;
}

# 49 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_csma.c"
  int sim_csma_init_high()
#line 49
{
  return csmaInitHigh;
}

#line 52
  int sim_csma_init_low()
#line 52
{
  return csmaInitLow;
}

#line 55
  int sim_csma_high()
#line 55
{
  return csmaHigh;
}

#line 58
  int sim_csma_low()
#line 58
{
  return csmaLow;
}

#line 61
  int sim_csma_symbols_per_sec()
#line 61
{
  return csmaSymbolsPerSec;
}

#line 64
  int sim_csma_bits_per_symbol()
#line 64
{
  return csmaBitsPerSymbol;
}

#line 67
  int sim_csma_preamble_length()
#line 67
{
  return csmaPreambleLength;
}

#line 70
  int sim_csma_exponent_base()
#line 70
{
  return csmaExponentBase;
#line 71
  ;
}

#line 73
  int sim_csma_max_iterations()
#line 73
{
  return csmaMaxIterations;
}

#line 76
  int sim_csma_min_free_samples()
#line 76
{
  return csmaMinFreeSamples;
}

#line 79
  int sim_csma_rxtx_delay()
#line 79
{
  return csmaRxTxDelay;
}

#line 82
  int sim_csma_ack_time()
#line 82
{
  return csmaAckTime;
}



  void sim_csma_set_init_high(int val)
#line 88
{
  csmaInitHigh = val;
}

#line 91
  void sim_csma_set_init_low(int val)
#line 91
{
  csmaInitLow = val;
}

#line 94
  void sim_csma_set_high(int val)
#line 94
{
  csmaHigh = val;
}

#line 97
  void sim_csma_set_low(int val)
#line 97
{
  csmaLow = val;
}

#line 100
  void sim_csma_set_symbols_per_sec(int val)
#line 100
{
  csmaSymbolsPerSec = val;
}

#line 103
  void sim_csma_set_bits_per_symbol(int val)
#line 103
{
  csmaBitsPerSymbol = val;
}

#line 106
  void sim_csma_set_preamble_length(int val)
#line 106
{
  csmaPreambleLength = val;
}

#line 109
  void sim_csma_set_exponent_base(int val)
#line 109
{
  csmaExponentBase = val;
}

#line 112
  void sim_csma_set_max_iterations(int val)
#line 112
{
  csmaMaxIterations = val;
}

#line 115
  void sim_csma_set_min_free_samples(int val)
#line 115
{
  csmaMinFreeSamples = val;
}

#line 118
  void sim_csma_set_rxtx_delay(int val)
#line 118
{
  csmaRxTxDelay = val;
}

#line 121
  void sim_csma_set_ack_time(int val)
#line 121
{
  csmaAckTime = val;
}

# 15 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_gain.c"
  gain_entry_t *sim_gain_first(int src, int channel_id)
#line 15
{

  sim_log_debug(5U, "channel_switching_debug", "Gain modeling: in sim_gain_first() and channel id is: %u\n", channel_id);

  if (src > 1000) {
      return connectivity[1000][channel_id];
    }
  return connectivity[src][channel_id];
}

  gain_entry_t *sim_gain_next(gain_entry_t *currentLink)
#line 25
{
  return currentLink->next;
}


  void sim_gain_add(int src, int dest, double gain, int channel_id)
#line 30
{
  gain_entry_t *current;
  int temp = sim_node();

#line 33
  if (src > 1000) {
      src = 1000;
    }
  sim_set_node(src);
  current = sim_gain_first(src, channel_id);
  while (current != (void *)0) {
      if (current->mote == dest) {
          sim_set_node(temp);
          break;
        }
      current = current->next;
    }
  if (current == (void *)0) {
      current = sim_gain_allocate_link(dest, channel_id);
      current->next = connectivity[src][channel_id];
      connectivity[src][channel_id] = current;
    }
  current->mote = dest;
  current->gain = gain;
  current->channel = channel_id;
  sim_log_debug(6U, "Gain", "Adding link from %i to %i with gain %f\n", src, dest, gain);
  sim_set_node(temp);
}

  double sim_gain_value(int src, int dest, int channel_id)
#line 57
{
  gain_entry_t *current;
  int temp = sim_node();

#line 60
  sim_set_node(src);
  current = sim_gain_first(src, channel_id);
  while (current != (void *)0) {
      if (current->mote == dest) {
          sim_set_node(temp);
          sim_log_debug(7U, "Gain", "Getting link from %i to %i with gain %f\n", src, dest, current->gain);

          return current->gain;
        }
      current = current->next;
    }
  sim_set_node(temp);
  sim_log_debug(8U, "Gain", "Getting default link from %i to %i with gain %f\n", src, dest, 1.0);
  return 1.0;
}

  bool sim_gain_connected(int src, int dest, int channel_id)
#line 76
{
  gain_entry_t *current;
  int temp = sim_node();

#line 79
  sim_set_node(src);
  current = sim_gain_first(src, channel_id);
  while (current != (void *)0) {
      if (current->mote == dest) {
          sim_set_node(temp);
          return TRUE;
        }
      current = current->next;
    }
  sim_set_node(temp);
  return FALSE;
}

  void sim_gain_remove(int src, int dest, int channel_id)
#line 92
{
  gain_entry_t *current;
  gain_entry_t *prevLink;

  int temp = sim_node();

#line 97
  if (src > 1000) {
      src = 1000;
    }
  sim_set_node(src);
  current = sim_gain_first(src, channel_id);
  prevLink = (void *)0;

  while (current != (void *)0) {
      gain_entry_t *tmp;

#line 106
      if (current->mote == dest) {
          if (prevLink == (void *)0) {
              connectivity[src][channel_id] = current->next;
            }
          else {
              prevLink->next = current->next;
            }
          tmp = current->next;
          sim_gain_deallocate_link(current);
          printf("From sim_gain.c, we have just deallocate the link for Sensor:%u on Channel: %u\n", TOS_NODE_ID, channel_id);
          current = tmp;
        }
      else {
          prevLink = current;
          current = current->next;
        }
    }
  sim_set_node(temp);
}

#line 172
  void sim_gain_deallocate_link(gain_entry_t *linkToDelete)
#line 172
{
  free(linkToDelete);
}

#line 126
  void sim_gain_set_noise_floor(int node, double mean, double range, int channel_id)
#line 126
{
  if (node > 1000) {
      node = 1000;
    }
  localNoise[node][channel_id].mean = mean;
  localNoise[node][channel_id].range = range;
}

#line 150
  double sim_gain_sample_noise(int node, int channel_id)
#line 150
{
  double val;
#line 151
  double adjust;

#line 152
  if (node > 1000) {
      node = 1000;
    }
  val = localNoise[node][channel_id].mean;
  adjust = sim_random() % 2000000;
  adjust /= 1000000.0;
  adjust -= 1.0;
  adjust *= localNoise[node][channel_id].range;
  return val + adjust;
}

#line 176
  void sim_gain_set_sensitivity(double s)
#line 176
{
  sensitivity = s;
}

  double sim_gain_sensitivity()
#line 180
{
  return sensitivity;
}

# 79 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_noise.c"
  void sim_noise_create_model(uint16_t node_id, uint8_t channel_id)
#line 79
{
  makeNoiseModel(node_id, channel_id);
  makePmfDistr(node_id, channel_id);
}

#line 419
  void makeNoiseModel(uint16_t node_id, uint8_t channel_id)
#line 419
{
  int i;




  for (i = 0; i < NOISE_HISTORY; i++) {
      noiseData[node_id][channel_id].key[i] = search_bin_num(noiseData[node_id][channel_id].noiseTrace[i]);
      sim_log_debug(42U, "Insert", "Setting history %i to be %i\n", (int )i, (int )noiseData[node_id][channel_id].key[i]);
    }


  for (i = NOISE_HISTORY; i < noiseData[node_id][channel_id].noiseTraceIndex; i++) {
      sim_noise_add(node_id, noiseData[node_id][channel_id].noiseTrace[i], channel_id);
      arrangeKey(node_id, channel_id);
      noiseData[node_id][channel_id].key[NOISE_HISTORY - 1] = search_bin_num(noiseData[node_id][channel_id].noiseTrace[i]);
    }
  noiseData[node_id][channel_id].generated = 1;
}

#line 107
  uint8_t search_bin_num(char noise)
{
  uint8_t bin;

#line 110
  if (noise > NOISE_MAX || noise < NOISE_MIN) {
      noise = NOISE_MIN;
    }
  bin = (noise - NOISE_MIN) / NOISE_QUANTIZE_INTERVAL + 1;
  return bin;
}

#line 138
  void sim_noise_add(uint16_t node_id, char noise, uint8_t channel_id)
{
  int i;
  struct hashtable *pnoiseTable = noiseData[node_id][channel_id].noiseTable;
  char *key = noiseData[node_id][channel_id].key;
  sim_noise_hash_t *noise_hash;

#line 144
  noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, key);


  sim_log_debug(11U, "Insert", "Adding noise value %hhi\n", noise);
  if (noise_hash == (void *)0) {
      noise_hash = (sim_noise_hash_t *)malloc(sizeof(sim_noise_hash_t ));
      memcpy((void *)noise_hash->key, (void *)key, NOISE_HISTORY);

      noise_hash->numElements = 0;
      noise_hash->size = NOISE_DEFAULT_ELEMENT_SIZE;
      noise_hash->elements = (char *)malloc(sizeof(char ) * noise_hash->size);
      memset((void *)noise_hash->elements, 0, sizeof(char ) * noise_hash->size);

      noise_hash->flag = 0;
      for (i = 0; i < NOISE_NUM_VALUES; i++) {
          noise_hash->dist[i] = 0;
        }
      hashtable_insert(pnoiseTable, key, noise_hash);
      sim_log_debug(12U, "Insert", "Inserting %p into table %p with key ", noise_hash, pnoiseTable);
      {
        int ctr;

#line 165
        for (ctr = 0; ctr < NOISE_HISTORY; ctr++) 
          sim_log_debug_clear(13U, "Insert", "%0.3hhi ", key[ctr]);
      }
      sim_log_debug_clear(14U, "Insert", "\n");
    }

  if (noise_hash->numElements == noise_hash->size) 
    {
      char *newElements;
      int newSize = noise_hash->size * 2;

      newElements = (char *)malloc(sizeof(char ) * newSize);
      memcpy(newElements, noise_hash->elements, noise_hash->size);
      free(noise_hash->elements);
      noise_hash->elements = newElements;
      noise_hash->size = newSize;
    }

  noise_hash->elements[noise_hash->numElements] = noise;

  noise_hash->numElements++;
}

# 268 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_log.c"
static void sim_log_debug_clear(uint16_t id, char *string, const char *format, ...)
#line 268
{
  va_list args;
  int i;

#line 271
  if (outputs[id].files == (void *)0) {
      fillInOutput(id, string);
    }
  for (i = 0; i < outputs[id].num; i++) {
      FILE *file = outputs[id].files[i];

#line 276
      __builtin_va_start(args, format);
      vfprintf(file, format, args);
      fflush(file);
    }
}

# 242 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_noise.c"
  void arrangeKey(uint16_t node_id, uint8_t channel_id)
{

  char *pKey = noiseData[node_id][channel_id].key;

#line 246
  memcpy(pKey, pKey + 1, NOISE_HISTORY - 1);
}




  void makePmfDistr(uint16_t node_id, uint8_t channel_id)
{
  int i;
  char *pKey = noiseData[node_id][channel_id].key;
  char *fKey = noiseData[node_id][channel_id].freqKey;

  FreqKeyNum = 0;


  for (i = 0; i < NOISE_HISTORY; i++) {
      pKey[i] = search_bin_num(noiseData[node_id][channel_id].noiseTrace[i]);
    }

  for (i = NOISE_HISTORY; i < noiseData[node_id][channel_id].noiseTraceIndex; i++) {
      if (i == NOISE_HISTORY) {
        }

      sim_noise_dist(node_id, channel_id);
      arrangeKey(node_id, channel_id);
      pKey[NOISE_HISTORY - 1] = search_bin_num(noiseData[node_id][channel_id].noiseTrace[i]);
    }

  sim_log_debug_clear(19U, "HASH", "FreqKey = ");
  for (i = 0; i < NOISE_HISTORY; i++) 
    {
      sim_log_debug_clear(20U, "HASH", "%d,", fKey[i]);
    }
  sim_log_debug_clear(21U, "HASH", "\n");
}

#line 188
  void sim_noise_dist(uint16_t node_id, uint8_t channel_id)
{
  int i;
  uint8_t bin;
  float cmf = 0;
  struct hashtable *pnoiseTable = noiseData[node_id][channel_id].noiseTable;
  char *key = noiseData[node_id][channel_id].key;
  char *freqKey = noiseData[node_id][channel_id].freqKey;
  sim_noise_hash_t *noise_hash;

#line 197
  noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, key);




  if (noise_hash->flag == 1) {
    return;
    }
  for (i = 0; i < NOISE_NUM_VALUES; i++) {
      noise_hash->dist[i] = 0.0;
    }

  for (i = 0; i < noise_hash->numElements; i++) 
    {
      float val;

#line 212
      sim_log_debug(15U, "Noise_output", "Noise is found to be %i\n", noise_hash->elements[i]);
      bin = noise_hash->elements[i] - NOISE_MIN_QUANTIZE;

      val = noise_hash->dist[bin];
      val += (float )1.0;
      noise_hash->dist[bin] = val;
    }

  for (i = 0; i < NOISE_NUM_VALUES; i++) 
    {
      noise_hash->dist[i] = noise_hash->dist[i] / noise_hash->numElements;
      cmf += noise_hash->dist[i];
      noise_hash->dist[i] = cmf;
    }
  noise_hash->flag = 1;


  if (noise_hash->numElements > FreqKeyNum) 
    {
      int j;

#line 232
      FreqKeyNum = noise_hash->numElements;
      memcpy((void *)freqKey, (void *)key, NOISE_HISTORY);
      sim_log_debug(16U, "HashZeroDebug", "Setting most frequent key (%i): ", (int )FreqKeyNum);
      for (j = 0; j < NOISE_HISTORY; j++) {
          sim_log_debug_clear(17U, "HashZeroDebug", "[%hhu] ", key[j]);
        }
      sim_log_debug_clear(18U, "HashZeroDebug", "\n");
    }
}

#line 93
  void sim_noise_trace_add(uint16_t node_id, char noiseVal, uint8_t channel_id)
#line 93
{

  if (noiseData[node_id][channel_id].noiseTraceIndex == noiseData[node_id][channel_id].noiseTraceLen) {
      char *data = (char *)malloc(sizeof(char ) * noiseData[node_id][channel_id].noiseTraceLen * 2);

#line 97
      memcpy(data, noiseData[node_id][channel_id].noiseTrace, noiseData[node_id][channel_id].noiseTraceLen);
      free(noiseData[node_id][channel_id].noiseTrace);
      noiseData[node_id][channel_id].noiseTraceLen *= 2;
      noiseData[node_id][channel_id].noiseTrace = data;
    }
  noiseData[node_id][channel_id].noiseTrace[noiseData[node_id][channel_id].noiseTraceIndex] = noiseVal;
  noiseData[node_id][channel_id].noiseTraceIndex++;
  sim_log_debug(10U, "Insert", "Adding noise value %i for %i of %i\n", (int )noiseData[node_id][channel_id].noiseTraceIndex, (int )node_id, (int )noiseVal);
}











  char search_noise_from_bin_num(int i)
{
  char noise;

#line 120
  noise = NOISE_MIN + (i - 1) * NOISE_QUANTIZE_INTERVAL;
  return noise;
}

#line 287
  char sim_noise_gen(uint16_t node_id, uint8_t channel_id)
{

  int i;
  int noiseIndex = 0;
  char noise;

  struct hashtable *pnoiseTable = noiseData[node_id][channel_id].noiseTable;

  char *pKey = noiseData[node_id][channel_id].key;
  char *fKey = noiseData[node_id][channel_id].freqKey;
  double ranNum = RandomUniform();
  sim_noise_hash_t *noise_hash;

#line 300
  noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, pKey);



  if (noise_hash == (void *)0) {

      sim_log_debug(22U, "Noise_c", "Did not pattern match");

      sim_noise_alarm();
      noise = 0;
      sim_log_debug_clear(23U, "HASH", "(N)Noise\n");
      sim_log_debug(24U, "HashZeroDebug", "Defaulting to common hash.\n");
      memcpy((void *)pKey, (void *)fKey, NOISE_HISTORY);
      noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, pKey);
    }

  sim_log_debug_clear(25U, "HASH", "Key = ");
  for (i = 0; i < NOISE_HISTORY; i++) {
      sim_log_debug_clear(26U, "HASH", "%d,", pKey[i]);
    }
  sim_log_debug_clear(27U, "HASH", "\n");

  sim_log_debug(28U, "HASH", "Printing Key\n");
  sim_log_debug(29U, "HASH", "noise_hash->numElements=%d\n", noise_hash->numElements);


  numTotal++;


  if (noise_hash->numElements == 1) {
      noise = noise_hash->elements[0];
      sim_log_debug_clear(30U, "HASH", "(E)Noise = %d\n", noise);

      numCase1++;
      sim_log_debug(31U, "Noise_c", "In case 1: %i of %i\n", numCase1, numTotal);

      sim_log_debug(32U, "NoiseAudit", "Noise: %i\n", noise);
      return noise;
    }


  numCase2++;
  sim_log_debug(33U, "Noise_c", "In case 2: %i of %i\n", numCase2, numTotal);


  for (i = 0; i < NOISE_NUM_VALUES - 1; i++) {
      sim_log_debug(34U, "HASH", "IN:for i=%d\n", i);
      if (i == 0) {
          if (ranNum <= noise_hash->dist[i]) {
              noiseIndex = i;
              sim_log_debug_clear(35U, "HASH", "Selected Bin = %d -> ", i + 1);
              break;
            }
        }
      else {
#line 354
        if (noise_hash->dist[i - 1] < ranNum && 
        ranNum <= noise_hash->dist[i]) {
            noiseIndex = i;
            sim_log_debug_clear(36U, "HASH", "Selected Bin = %d -> ", i + 1);
            break;
          }
        }
    }
#line 361
  sim_log_debug(37U, "HASH", "OUT:for i=%d\n", i);
  noise = NOISE_MIN_QUANTIZE + i;
  sim_log_debug(38U, "NoiseAudit", "Noise: %i\n", noise);
  return noise;
}

# 103 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/randomlib.c"
static double RandomUniform(void )
{
  double uni;
  int seed1;
#line 106
  int seed2;


  if (!test) 
    {



      seed1 = sim_random() % 31329;
      seed2 = sim_random() % 30082;
      RandomInitialise(seed1, seed2);
    }

  uni = randU[i97 - 1] - randU[j97 - 1];
  if (uni <= 0.0) {
    uni++;
    }
#line 122
  randU[i97 - 1] = uni;
  i97--;
  if (i97 == 0) {
    i97 = 97;
    }
#line 126
  j97--;
  if (j97 == 0) {
    j97 = 97;
    }
#line 129
  randC -= randCD;
  if (randC < 0.0) {
    randC += randCM;
    }
#line 132
  uni -= randC;
  if (uni < 0.0) {
    uni++;
    }
  return uni;
}

# 367 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_noise.c"
  char sim_noise_generate(uint16_t node_id, uint32_t cur_t, uint8_t channel_id)
#line 367
{
  uint32_t i;
  uint32_t prev_t;
  uint32_t delta_t;
  char *noiseG;
  char noise;

  prev_t = noiseData[node_id][channel_id].noiseGenTime;

  if (noiseData[node_id][channel_id].generated == 0) {
      sim_log_error(39U, "TOSSIM", "Tried to generate noise from an uninitialized radio model of node %hu.\n", node_id);
      return 127;
    }

  if (0 <= cur_t && cur_t < NOISE_HISTORY) {
      noiseData[node_id][channel_id].noiseGenTime = cur_t;
      noiseData[node_id][channel_id].key[cur_t] = search_bin_num(noiseData[node_id][channel_id].noiseTrace[cur_t]);
      noiseData[node_id][channel_id].lastNoiseVal = noiseData[node_id][channel_id].noiseTrace[cur_t];
      return noiseData[node_id][channel_id].noiseTrace[cur_t];
    }

  if (prev_t == 0) {
    delta_t = cur_t - (NOISE_HISTORY - 1);
    }
  else {
#line 391
    delta_t = cur_t - prev_t;
    }
  sim_log_debug_clear(40U, "HASH", "delta_t = %d\n", delta_t);
  if (delta_t == 0) {
    noise = noiseData[node_id][channel_id].lastNoiseVal;
    }
  else 
#line 396
    {
      noiseG = (char *)malloc(sizeof(char ) * delta_t);
      for (i = 0; i < delta_t; i++) {
          noiseG[i] = sim_noise_gen(node_id, channel_id);
          arrangeKey(node_id, channel_id);
          noiseData[node_id][channel_id].key[NOISE_HISTORY - 1] = search_bin_num(noiseG[i]);
        }
      noise = noiseG[delta_t - 1];
      noiseData[node_id][channel_id].lastNoiseVal = noise;
      free(noiseG);
    }
  noiseData[node_id][channel_id].noiseGenTime = cur_t;
  if (noise == 0) {
      sim_log_debug(41U, "HashZeroDebug", "Generated noise of zero.\n");
    }

  return noise;
}

# 253 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_log.c"
static void sim_log_error(uint16_t id, char *string, const char *format, ...)
#line 253
{
  va_list args;
  int i;

#line 256
  if (outputs[id].files == (void *)0) {
      fillInOutput(id, string);
    }
  for (i = 0; i < outputs[id].num; i++) {
      FILE *file = outputs[id].files[i];

#line 261
      __builtin_va_start(args, format);
      fprintf(file, "%s ERROR (%i): ", sim_time_string(), (int )sim_node());
      vfprintf(file, format, args);
      fflush(file);
    }
}

# 46 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_packet.c"
  void sim_packet_set_source(sim_packet_t *msg, uint16_t src)
#line 46
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 48
  __nesc_hton_uint16(hdr->src.nxdata, src);
}

  uint16_t sim_packet_source(sim_packet_t *msg)
#line 51
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 53
  return __nesc_ntoh_uint16(hdr->src.nxdata);
}

  void sim_packet_set_destination(sim_packet_t *msg, uint16_t dest)
#line 56
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 58
  __nesc_hton_uint16(hdr->dest.nxdata, dest);
}

  uint16_t sim_packet_destination(sim_packet_t *msg)
#line 61
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 63
  return __nesc_ntoh_uint16(hdr->dest.nxdata);
}

  void sim_packet_set_length(sim_packet_t *msg, uint8_t length)
#line 66
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 68
  __nesc_hton_uint8(hdr->length.nxdata, length);
}

#line 70
  uint16_t sim_packet_length(sim_packet_t *msg)
#line 70
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 72
  return __nesc_ntoh_uint8(hdr->length.nxdata);
}

  void sim_packet_set_type(sim_packet_t *msg, uint8_t type)
#line 75
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 77
  __nesc_hton_uint8(hdr->type.nxdata, type);
}

  uint8_t sim_packet_type(sim_packet_t *msg)
#line 80
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 82
  return __nesc_ntoh_uint8(hdr->type.nxdata);
}

  uint8_t *sim_packet_data(sim_packet_t *p)
#line 85
{
  message_t *msg = (message_t *)p;

#line 87
  return (uint8_t *)& msg->data;
}

#line 89
  void sim_packet_set_strength(sim_packet_t *p, uint16_t str)
#line 89
{
  message_t *msg = (message_t *)p;
  tossim_metadata_t *md = (tossim_metadata_t *)& msg->metadata;

#line 92
  __nesc_hton_int8(md->strength.nxdata, str);
}

#line 94
  void sim_packet_deliver(int node, sim_packet_t *msg, sim_time_t t)
#line 94
{
  if (t < sim_time()) {
      t = sim_time();
    }
  sim_log_debug(43U, "Packet", "sim_packet.c: Delivering packet %p to %i at %llu\n", msg, node, t);
  active_message_deliver(node, (message_t *)msg, t);
}

# 246 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageC.nc"
  void active_message_deliver(int node, message_t *msg, sim_time_t t)
#line 246
{
  sim_event_t *evt = TossimActiveMessageC__allocate_deliver_event(node, msg, t);

#line 248
  sim_queue_insert(evt);
}

#line 101
static void TossimActiveMessageC__Model__receive(message_t *msg)
#line 101
{
  uint8_t len;
  void *payload;

  memcpy(TossimActiveMessageC__bufferPointer[sim_node()], msg, sizeof(message_t ));
  len = TossimActiveMessageC__Packet__payloadLength(TossimActiveMessageC__bufferPointer[sim_node()]);
  payload = TossimActiveMessageC__Packet__getPayload(TossimActiveMessageC__bufferPointer[sim_node()], TossimActiveMessageC__Packet__maxPayloadLength());

  if (TossimActiveMessageC__AMPacket__isForMe(msg)) {
      sim_log_debug(216U, "AM", "Received active message (%p) of type %hhu and length %hhu for me @ %s.\n", TossimActiveMessageC__bufferPointer[sim_node()], TossimActiveMessageC__AMPacket__type(TossimActiveMessageC__bufferPointer[sim_node()]), len, sim_time_string());
      TossimActiveMessageC__bufferPointer[sim_node()] = TossimActiveMessageC__Receive__receive(TossimActiveMessageC__AMPacket__type(TossimActiveMessageC__bufferPointer[sim_node()]), TossimActiveMessageC__bufferPointer[sim_node()], payload, len);
    }
  else {
      sim_log_debug(217U, "AM", "Snooped on active message of type %hhu and length %hhu for %hu @ %s.\n", TossimActiveMessageC__AMPacket__type(TossimActiveMessageC__bufferPointer[sim_node()]), len, TossimActiveMessageC__AMPacket__destination(TossimActiveMessageC__bufferPointer[sim_node()]), sim_time_string());
      TossimActiveMessageC__bufferPointer[sim_node()] = TossimActiveMessageC__Snoop__receive(TossimActiveMessageC__AMPacket__type(TossimActiveMessageC__bufferPointer[sim_node()]), TossimActiveMessageC__bufferPointer[sim_node()], payload, len);
    }
}

#line 132
static am_addr_t TossimActiveMessageC__AMPacket__destination(message_t *amsg)
#line 132
{
  tossim_header_t *header = TossimActiveMessageC__getHeader(amsg);

#line 134
  return __nesc_ntoh_uint16(header->dest.nxdata);
}

# 53 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__amAddress(void )
#line 53
{
  if (!ActiveMessageAddressC__set[sim_node()]) {
      ActiveMessageAddressC__addr[sim_node()] = TOS_NODE_ID;
      ActiveMessageAddressC__set[sim_node()] = TRUE;
    }
  return ActiveMessageAddressC__addr[sim_node()];
}

# 157 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageC.nc"
static am_id_t TossimActiveMessageC__AMPacket__type(message_t *amsg)
#line 157
{
  tossim_header_t *header = TossimActiveMessageC__getHeader(amsg);

#line 159
  return __nesc_ntoh_uint8(header->type.nxdata);
}

# 42 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/AlarmMicro16P.nc"
static void /*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__Alarm__stop(void )
{
  if (/*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__Alarm__isRunning()) 
    {
      /*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__evt[sim_node()]->cancelled = 1;
      /*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__evt[sim_node()]->cleanup = sim_queue_cleanup_total;

      /*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__evt[sim_node()] = (void *)0;
    }
}

# 96 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static void /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__set_alarm(void )
{
  /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__to_size_type now = /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__Counter__get();
#line 98
  /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__to_size_type expires;
#line 98
  /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__to_size_type remaining;




  expires = /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__m_t0[sim_node()] + /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__m_dt[sim_node()];


  remaining = (/*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__to_size_type )(expires - now);


  if (/*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__m_t0[sim_node()] <= now) 
    {
      if (expires >= /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__m_t0[sim_node()] && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__m_t0[sim_node()] || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 121
  if (remaining > /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__MAX_DELAY) 
    {
      /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__m_t0[sim_node()] = now + /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__MAX_DELAY;
      /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__m_dt[sim_node()] = remaining - /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__MAX_DELAY;
      remaining = /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__MAX_DELAY;
    }
  else 
    {
      /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__m_t0[sim_node()] += /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__m_dt[sim_node()];
      /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__m_dt[sim_node()] = 0;
    }
  /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__AlarmFrom__startAt((/*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__from_size_type )now << 5, 
  (/*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__from_size_type )remaining << 5);
}

# 69 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__to_size_type /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__Counter__get(void )
{
  /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__to_size_type rv = 0;

#line 72
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__upper_count_type high = /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__m_upper[sim_node()];
      /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__from_size_type low = /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__CounterFrom__get();

#line 76
      if (/*Counter32khz32C.TransformCounterC*/TransformCounterC__1__CounterFrom__isOverflowPending()) 
        {






          high++;
          low = /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__CounterFrom__get();
        }
      {
        /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__to_size_type high_to = high;
        /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__to_size_type low_to = low >> /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__LOW_SHIFT_RIGHT;

#line 90
        rv = (high_to << /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 92
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 55 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/CounterMicro16P.nc"
static uint16_t CounterMicro16P__Counter__get(void )
{
  return (sim_time() - CounterMicro16P__t0[sim_node()]) * 1024UL * 1024UL / sim_ticks_per_sec();
}

# 89 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_event_queue.c"
static sim_event_t *sim_queue_allocate_event()
#line 89
{
  sim_event_t *evt = (sim_event_t *)malloc(sizeof(sim_event_t ));

#line 91
  memset(evt, 0, sizeof(sim_event_t ));
  evt->mote = sim_node();
  return evt;
}

# 84 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/system/GenericSlotterP.nc"
static error_t GenericSlotterP__SlotterControl__synchronize(uint8_t toSlot)
#line 84
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 85
    GenericSlotterP__slot[sim_node()] = toSlot - 1;
#line 85
    __nesc_atomic_end(__nesc_atomic); }

  GenericSlotterP__Alarm__stop();
  GenericSlotterP__Alarm__fired();
  return SUCCESS;
}

#line 120
static void GenericSlotterP__Alarm__fired(void )
#line 120
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 121
    GenericSlotterP__nextFire[sim_node()] = GenericSlotterP__Alarm__getNow() + GenericSlotterP__slotLength[sim_node()];
#line 121
    __nesc_atomic_end(__nesc_atomic); }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 122
    GenericSlotterP__slot[sim_node()] = (GenericSlotterP__slot[sim_node()] + 1) % GenericSlotterP__frameLength[sim_node()];
#line 122
    __nesc_atomic_end(__nesc_atomic); }

  GenericSlotterP__Slotter__slot(GenericSlotterP__slot[sim_node()]);

  GenericSlotterP__Alarm__start(GenericSlotterP__slotLength[sim_node()]);
}

# 950 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/lib/macs/pure-tdma/PureTDMASchedulerP.nc"
static uint32_t PureTDMASchedulerP__getGCD(uint32_t num1, uint32_t num2)
#line 950
{
  uint8_t i;
  uint32_t gcd;

  if (num1 == 0 || num2 == 0) {
      return 0;
    }

  if (num1 < num2) {
      return PureTDMASchedulerP__getGCD(num2, num1);
    }
  else {
#line 960
    if (num1 % num2 == 0) {
        return num2;
      }
    else 
#line 962
      {
        return PureTDMASchedulerP__getGCD(num2, num1 % num2);
      }
    }
}

# 87 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageC.nc"
static void *TossimActiveMessageC__AMSend__getPayload(am_id_t id, message_t *m, uint8_t len)
#line 87
{
  return TossimActiveMessageC__Packet__getPayload(m, len);
}

# 59 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/system/SenderDispatcherP.nc"
static error_t SenderDispatcherP__Send__send(uint8_t slotType, message_t *msg, uint8_t len)
#line 59
{
  error_t err;
  message_t *prev_toSend;
  uint8_t prev_toSendLen;
#line 62
  uint8_t prev_id;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 64
    {
      prev_toSend = SenderDispatcherP__toSend[sim_node()];
      prev_toSendLen = SenderDispatcherP__toSendLen[sim_node()];
      prev_id = SenderDispatcherP__last_id[sim_node()];
    }
#line 68
    __nesc_atomic_end(__nesc_atomic); }

  if (prev_id != NO_SLOT) {
      return FAIL;
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 74
    {
      SenderDispatcherP__toSend[sim_node()] = msg;
      SenderDispatcherP__toSendLen[sim_node()] = len;
      SenderDispatcherP__last_id[sim_node()] = slotType;
    }
#line 78
    __nesc_atomic_end(__nesc_atomic); }
  err = SenderDispatcherP__SubSend__send(msg, len);
  if (err != SUCCESS) {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 81
        {
          SenderDispatcherP__toSend[sim_node()] = prev_toSend;
          SenderDispatcherP__toSendLen[sim_node()] = prev_toSendLen;
          SenderDispatcherP__last_id[sim_node()] = prev_id;
        }
#line 85
        __nesc_atomic_end(__nesc_atomic); }
    }
  return err;
}

# 295 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/TossimPacketModelC.nc"
static void TossimPacketModelC__send_transmit_done(sim_event_t *evt)
#line 295
{
  message_t *rval = TossimPacketModelC__sending[sim_node()];

#line 297
  TossimPacketModelC__sending[sim_node()] = (void *)0;
  TossimPacketModelC__transmitting[sim_node()] = FALSE;
  sim_log_debug(161U, "TossimPacketModelC", "PACKET: Signaling send done at %llu.\n", sim_time());
  TossimPacketModelC__Packet__sendDone(rval, TossimPacketModelC__running[sim_node()] ? SUCCESS : EOFF);
}

# 102 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/system/SenderDispatcherP.nc"
static void SenderDispatcherP__SubSend__sendDone(message_t *msg, error_t error)
#line 102
{
  uint8_t prev_last_id;

#line 104
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 104
    prev_last_id = SenderDispatcherP__last_id[sim_node()];
#line 104
    __nesc_atomic_end(__nesc_atomic); }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 106
    {
      if (msg == SenderDispatcherP__toSend[sim_node()]) {
          SenderDispatcherP__toSend[sim_node()] = (void *)0;
        }
    }
#line 110
    __nesc_atomic_end(__nesc_atomic); }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 112
    SenderDispatcherP__last_id[sim_node()] = NO_SLOT;
#line 112
    __nesc_atomic_end(__nesc_atomic); }





  SenderDispatcherP__Send__sendDone(prev_last_id, msg, error);
}

# 85 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/QueueC.nc"
static /*PureTDMASchedulerC.HIQueueC*/QueueC__0__queue_t /*PureTDMASchedulerC.HIQueueC*/QueueC__0__Queue__dequeue(void )
#line 85
{
  /*PureTDMASchedulerC.HIQueueC*/QueueC__0__queue_t t = /*PureTDMASchedulerC.HIQueueC*/QueueC__0__Queue__head();

#line 87
  sim_log_debug(206U, "QueueC", "%s: size is %hhu\n", __FUNCTION__, /*PureTDMASchedulerC.HIQueueC*/QueueC__0__size[sim_node()]);
  if (!/*PureTDMASchedulerC.HIQueueC*/QueueC__0__Queue__empty()) {
      /*PureTDMASchedulerC.HIQueueC*/QueueC__0__head[sim_node()]++;
      if (/*PureTDMASchedulerC.HIQueueC*/QueueC__0__head[sim_node()] == 2) {
#line 90
        /*PureTDMASchedulerC.HIQueueC*/QueueC__0__head[sim_node()] = 0;
        }
#line 91
      /*PureTDMASchedulerC.HIQueueC*/QueueC__0__size[sim_node()]--;
      /*PureTDMASchedulerC.HIQueueC*/QueueC__0__printQueue();
    }
  return t;
}

#line 69
static void /*PureTDMASchedulerC.HIQueueC*/QueueC__0__printQueue(void )
#line 69
{

  int i;
#line 71
  int j;

#line 72
  sim_log_debug(201U, "QueueC", "head <-");
  for (i = /*PureTDMASchedulerC.HIQueueC*/QueueC__0__head[sim_node()]; i < /*PureTDMASchedulerC.HIQueueC*/QueueC__0__head[sim_node()] + /*PureTDMASchedulerC.HIQueueC*/QueueC__0__size[sim_node()]; i++) {
      sim_log_debug_clear(202U, "QueueC", "[");
      for (j = 0; j < sizeof(/*PureTDMASchedulerC.HIQueueC*/QueueC__0__queue_t ); j++) {
          uint8_t v = ((uint8_t *)&/*PureTDMASchedulerC.HIQueueC*/QueueC__0__queue[sim_node()][i % 2])[j];

#line 77
          sim_log_debug_clear(203U, "QueueC", "%0.2hhx", v);
        }
      sim_log_debug_clear(204U, "QueueC", "] ");
    }
  sim_log_debug_clear(205U, "QueueC", "<- tail\n");
}


static /*PureTDMASchedulerC.LOQueueC*/QueueC__1__queue_t /*PureTDMASchedulerC.LOQueueC*/QueueC__1__Queue__dequeue(void )
#line 85
{
  /*PureTDMASchedulerC.LOQueueC*/QueueC__1__queue_t t = /*PureTDMASchedulerC.LOQueueC*/QueueC__1__Queue__head();

#line 87
  sim_log_debug(213U, "QueueC", "%s: size is %hhu\n", __FUNCTION__, /*PureTDMASchedulerC.LOQueueC*/QueueC__1__size[sim_node()]);
  if (!/*PureTDMASchedulerC.LOQueueC*/QueueC__1__Queue__empty()) {
      /*PureTDMASchedulerC.LOQueueC*/QueueC__1__head[sim_node()]++;
      if (/*PureTDMASchedulerC.LOQueueC*/QueueC__1__head[sim_node()] == 2) {
#line 90
        /*PureTDMASchedulerC.LOQueueC*/QueueC__1__head[sim_node()] = 0;
        }
#line 91
      /*PureTDMASchedulerC.LOQueueC*/QueueC__1__size[sim_node()]--;
      /*PureTDMASchedulerC.LOQueueC*/QueueC__1__printQueue();
    }
  return t;
}

#line 69
static void /*PureTDMASchedulerC.LOQueueC*/QueueC__1__printQueue(void )
#line 69
{

  int i;
#line 71
  int j;

#line 72
  sim_log_debug(208U, "QueueC", "head <-");
  for (i = /*PureTDMASchedulerC.LOQueueC*/QueueC__1__head[sim_node()]; i < /*PureTDMASchedulerC.LOQueueC*/QueueC__1__head[sim_node()] + /*PureTDMASchedulerC.LOQueueC*/QueueC__1__size[sim_node()]; i++) {
      sim_log_debug_clear(209U, "QueueC", "[");
      for (j = 0; j < sizeof(/*PureTDMASchedulerC.LOQueueC*/QueueC__1__queue_t ); j++) {
          uint8_t v = ((uint8_t *)&/*PureTDMASchedulerC.LOQueueC*/QueueC__1__queue[sim_node()][i % 2])[j];

#line 77
          sim_log_debug_clear(210U, "QueueC", "%0.2hhx", v);
        }
      sim_log_debug_clear(211U, "QueueC", "] ");
    }
  sim_log_debug_clear(212U, "QueueC", "<- tail\n");
}

# 197 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
static error_t SimSchedulerBasicP__TaskBasic__postTask(uint8_t id)
{
  error_t result;

#line 200
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 200
    {
      result = SimSchedulerBasicP__pushTask(id) ? SUCCESS : EBUSY;
    }
#line 202
    __nesc_atomic_end(__nesc_atomic); }
  if (result == SUCCESS) {
      sim_log_debug(96U, "Scheduler", "Posting task %hhu.\n", id);
      SimSchedulerBasicP__sim_scheduler_submit_event();
    }
  else {
      sim_log_debug(97U, "Scheduler", "Posting task %hhu, but already posted.\n", id);
    }
  return result;
}

#line 69
static void SimSchedulerBasicP__sim_scheduler_submit_event(void )
#line 69
{
  if (SimSchedulerBasicP__sim_scheduler_event_pending[sim_node()] == FALSE) {
      SimSchedulerBasicP__sim_scheduler_event[sim_node()].time = sim_time() + SimSchedulerBasicP__sim_config_task_latency();
      sim_queue_insert(&SimSchedulerBasicP__sim_scheduler_event[sim_node()]);
      SimSchedulerBasicP__sim_scheduler_event_pending[sim_node()] = TRUE;
    }
}

# 554 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/CpmModelC.nc"
static void CpmModelC__Model__putOnAirTo(int dest, message_t *msg, bool ack, sim_time_t endTime, double power, double reversePower, uint8_t channel_id)
#line 554
{

  gain_entry_t *neighborEntry = sim_gain_first(sim_node(), channel_id);

#line 557
  CpmModelC__requestAck[sim_node()] = ack;
  CpmModelC__outgoing[sim_node()] = msg;
  sim_log_debug(199U, "CpmModelC", "Node %i transmitting to %i, finishes at %llu, at channel: %d\n", sim_node(), dest, endTime, channel_id);
  while (neighborEntry != (void *)0) {
      int other = neighborEntry->mote;

      sim_log_debug(200U, "CpmModelC", "Node %i with neighborEntry:%d.\n", sim_node(), neighborEntry->mote);


      CpmModelC__sim_gain_put(other, msg, endTime, ack && (other == dest || dest == AM_BROADCAST_ADDR), power + sim_gain_value(sim_node(), other, channel_id), reversePower + sim_gain_value(other, sim_node(), channel_id), channel_id);
      neighborEntry = sim_gain_next(neighborEntry);
    }
}

#line 307
static double CpmModelC__packetNoise(CpmModelC__receive_message_t *msg)
#line 307
{
  double noise = CpmModelC__noise_hash_generation();
  CpmModelC__receive_message_t *list = CpmModelC__outstandingReceptionHead[sim_node()];
  int count = 0;

#line 311
  noise = pow(10.0, noise / 10.0);






  while (list != (void *)0) {


      sim_log_debug(176U, "CpmModelC", "packetReceive: outstanding from %d\n", list->source);
      count++;

      if (list->channel != sim_mote_get_radio_channel(sim_node())) {
          list = list->next;
          continue;
        }
      if (list != msg) {
          noise += pow(10.0, list->power / 10.0);
        }
      list = list->next;
    }
  noise = 10.0 * log(noise) / log(10.0);
  sim_log_debug(177U, "CpmModelC", "packetReceive: outstanding count %d noise %lf at %lf\n", count, noise, (double )sim_time() / sim_ticks_per_sec());
  return noise;
}

# 103 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SimMoteP.nc"
  uint8_t sim_mote_get_radio_channel(int mote)
#line 103
{
  uint8_t result;
  int tmp = sim_node();

#line 106
  sim_set_node(mote);
  result = SimMoteP__SimMote__getRadioChannel();
  sim_set_node(tmp);
  return result;
}

# 261 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/CpmModelC.nc"
static bool CpmModelC__shouldReceive(double SNR)
#line 261
{
  double prr = CpmModelC__prr_estimate_from_snr(SNR);
  double coin = RandomUniform();
  uint16_t node_id = sim_node();




  if (prr != 0 && prr != 1) {
      if (coin < prr) {
        prr = 1.0;
        }
      else {
#line 273
        prr = 0.0;
        }
    }
  return prr;
}

# 325 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/TossimPacketModelC.nc"
static bool TossimPacketModelC__GainRadioModel__shouldAck(message_t *msg)
#line 325
{
  if (TossimPacketModelC__running[sim_node()] && !TossimPacketModelC__transmitting[sim_node()]) {
      return TossimPacketModelC__Packet__shouldAck(msg);
    }
  else {
      return FALSE;
    }
}

# 230 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/CpmModelC.nc"
static void CpmModelC__sim_gain_schedule_ack(int source, sim_time_t t, CpmModelC__receive_message_t *r)
#line 230
{
  sim_event_t *ackEvent = (sim_event_t *)malloc(sizeof(sim_event_t ));

  ackEvent->mote = source;
  ackEvent->force = 1;
  ackEvent->cancelled = 0;
  ackEvent->time = t;
  ackEvent->handle = CpmModelC__sim_gain_ack_handle;
  ackEvent->cleanup = sim_queue_cleanup_event;
  ackEvent->data = r;
  sim_log_debug(171U, "PHY_layer_check", "+++ ackEvent->data:%d\n", ackEvent->data);

  sim_queue_insert(ackEvent);
}

# 356 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SimMoteP.nc"
  uint8_t sim_mote_getPower(int mote)
#line 356
{
  int tmpPower;
  int tmp = sim_node();

#line 359
  sim_set_node(mote);
  tmpPower = SimMoteP__SimMote__get_power();
  sim_set_node(tmp);
  return tmpPower;
}

# 223 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/CpmModelC.nc"
static bool CpmModelC__Model__clearChannel(void )
#line 223
{
  sim_log_debug(170U, "CpmModelC", "Checking clear channel @ %s: %f <= %f \n", sim_time_string(), (double )CpmModelC__packetNoise((void *)0), CpmModelC__clearThreshold[sim_node()]);


  return CpmModelC__packetNoise((void *)0) < CpmModelC__clearThreshold[sim_node()];
}

# 254 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/TossimPacketModelC.nc"
static void TossimPacketModelC__send_transmit_with_cca(sim_event_t *evt)
#line 254
{
  sim_time_t duration;
  tossim_metadata_t *metadata = TossimPacketModelC__getMetadata(TossimPacketModelC__sending[sim_node()]);

#line 257
  duration = 8 * (TossimPacketModelC__sendingLength[sim_node()] + TossimPacketModelC__sim_packet_header_length());
  duration /= sim_csma_bits_per_symbol();
  duration += sim_csma_preamble_length();
  if (__nesc_ntoh_uint8(metadata->ack.nxdata)) {
      duration += sim_csma_ack_time();
    }
  duration *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();
  evt->time += duration;
  evt->handle = TossimPacketModelC__send_transmit_done;

  sim_log_debug(159U, "TossimPacketModelC", "PACKET: Broadcasting packet to everyone.\n");
  TossimPacketModelC__GainRadioModel__putOnAirTo(TossimPacketModelC__destNode[sim_node()], TossimPacketModelC__sending[sim_node()], __nesc_ntoh_uint8(metadata->ack.nxdata), evt->time, 0.0, 0.0, sim_mote_get_radio_channel(sim_node()));
  __nesc_hton_uint8(metadata->ack.nxdata, 0);
  evt->time += sim_csma_rxtx_delay() * (sim_ticks_per_sec() / sim_csma_symbols_per_sec());
  sim_log_debug(160U, "TossimPacketModelC", "PACKET: Send done at %llu.\n", evt->time);
  sim_queue_insert(evt);
}

# 91 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SimMoteP.nc"
  error_t sim_mote_set_radio_channel(int mote, uint8_t newRadioChannel)
#line 91
{
  error_t result;
  int tmp = sim_node();

#line 94
  sim_set_node(mote);
  result = SimMoteP__SimMote__setRadioChannel(newRadioChannel);
  sim_set_node(tmp);
  return result;
}

# 43 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/chips/cc2420/control/sim/CC2420ControlP.nc"
static error_t CC2420ControlP__CC2420Config__sync(void )
#line 43
{
  sim_log_debug(164U, "CC2420Config", "CC2420Config: sync: autoAck %d, hwAutoAck %d\n", CC2420ControlP__autoAck[sim_node()], CC2420ControlP__hwAutoAck[sim_node()]);
  sim_mote_set_radio_channel(sim_node(), CC2420ControlP__channel[sim_node()]);
  sim_mote_setPower(sim_node(), CC2420ControlP__power[sim_node()]);
  CC2420ControlP__syncDoneTask__postTask();
  return SUCCESS;
}

# 365 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SimMoteP.nc"
  error_t sim_mote_setPower(int mote, uint8_t power)
#line 365
{
  error_t result;
  int tmp = sim_node();

#line 368
  sim_set_node(mote);
  SimMoteP__SimMote__set_power(power);
  sim_set_node(tmp);
  return result;
}

# 71 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/interfaces/AsyncSend.nc"
static void * /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__SubSend__getPayload(message_t * msg, uint8_t len){
#line 71
  void *__nesc_result;
#line 71

#line 71
  __nesc_result = SenderDispatcherP__Send__getPayload(TDMA_SLOT, msg, len);
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 872 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/lib/macs/pure-tdma/PureTDMASchedulerP.nc"
static void PureTDMASchedulerP__transmission(uint8_t Txing_flowid)
#line 872
{
  PureTDMASchedulerP__AMPacket__setDestination(&PureTDMASchedulerP__packet[sim_node()], PureTDMASchedulerP__Path[sim_node()][Txing_flowid][PureTDMASchedulerP__PRIMARYPATH[sim_node()]]);
  PureTDMASchedulerP__PacketAcknowledgements__requestAck(&PureTDMASchedulerP__packet[sim_node()]);
  PureTDMASchedulerP__CC2420Config__setChannel(PureTDMASchedulerP__CHANNEL_DEF);
  PureTDMASchedulerP__CC2420Config__setPower(PureTDMASchedulerP__RADIO_DEF_POWER);
  PureTDMASchedulerP__CC2420Config__sync();


  if (TOS_NODE_ID == 2) {
      PureTDMASchedulerP__Txdelay__start(32 * 3);
    }
  else {
#line 882
    if (TOS_NODE_ID == 3 && Txing_flowid == PureTDMASchedulerP__LO_TASK[sim_node()]) {
        PureTDMASchedulerP__Rcv_check_mode[sim_node()] = TRUE;

        PureTDMASchedulerP__CCATxdelay__start(32 * 5);
      }
    else {
#line 886
      if (TOS_NODE_ID == 4 && Txing_flowid == PureTDMASchedulerP__LO_TASK[sim_node()]) {
          PureTDMASchedulerP__Rcv_check_mode[sim_node()] = TRUE;

          PureTDMASchedulerP__CCATxdelay__start(32 * 5);
        }
      else {
#line 890
        if (TOS_NODE_ID == 5 && Txing_flowid == PureTDMASchedulerP__LO_TASK[sim_node()]) {
            PureTDMASchedulerP__Rcv_check_mode[sim_node()] = TRUE;

            PureTDMASchedulerP__CCATxdelay__start(32 * 5);
          }
        else {
#line 894
          if (TOS_NODE_ID == 6 && Txing_flowid == PureTDMASchedulerP__LO_TASK[sim_node()]) {
              PureTDMASchedulerP__Rcv_check_mode[sim_node()] = TRUE;

              PureTDMASchedulerP__CCATxdelay__start(32 * 5);
            }
          else 
#line 898
            {
              PureTDMASchedulerP__Txdelay__start(32 * 0);
            }
          }
        }
      }
    }
}

# 137 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageC.nc"
static void TossimActiveMessageC__AMPacket__setDestination(message_t *amsg, am_addr_t addr)
#line 137
{
  tossim_header_t *header = TossimActiveMessageC__getHeader(amsg);

#line 139
  __nesc_hton_uint16(header->dest.nxdata, addr);
}

# 136 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static void /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__Alarm__startAt(/*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__to_size_type t0, /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__to_size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__m_t0[sim_node()] = t0;
      /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__m_dt[sim_node()] = dt;
      /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__set_alarm();
    }
#line 143
    __nesc_atomic_end(__nesc_atomic); }
}

#line 96
static void /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__set_alarm(void )
{
  /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__to_size_type now = /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__Counter__get();
#line 98
  /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__to_size_type expires;
#line 98
  /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__to_size_type remaining;




  expires = /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__m_t0[sim_node()] + /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__m_dt[sim_node()];


  remaining = (/*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__to_size_type )(expires - now);


  if (/*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__m_t0[sim_node()] <= now) 
    {
      if (expires >= /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__m_t0[sim_node()] && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__m_t0[sim_node()] || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 121
  if (remaining > /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__MAX_DELAY) 
    {
      /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__m_t0[sim_node()] = now + /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__MAX_DELAY;
      /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__m_dt[sim_node()] = remaining - /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__MAX_DELAY;
      remaining = /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__MAX_DELAY;
    }
  else 
    {
      /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__m_t0[sim_node()] += /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__m_dt[sim_node()];
      /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__m_dt[sim_node()] = 0;
    }
  /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__AlarmFrom__startAt((/*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__from_size_type )now << 5, 
  (/*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__from_size_type )remaining << 5);
}

# 69 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__to_size_type /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__Counter__get(void )
{
  /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__to_size_type rv = 0;

#line 72
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__upper_count_type high = /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__m_upper[sim_node()];
      /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__from_size_type low = /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__CounterFrom__get();

#line 76
      if (/*Counter32khz16C.TransformCounterC*/TransformCounterC__0__CounterFrom__isOverflowPending()) 
        {






          high++;
          low = /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__CounterFrom__get();
        }
      {
        /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__to_size_type high_to = high;
        /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__to_size_type low_to = low >> /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__LOW_SHIFT_RIGHT;

#line 90
        rv = (high_to << /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 92
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 82 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/system/GenericSlotSenderP.nc"
static error_t /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__Send__send(message_t *msg, uint8_t len)
#line 82
{
  error_t err;
  uint8_t state_;
  uint8_t offset_;

  if (msg == (void *)0) {
#line 87
    return FAIL;
    }

  sim_log_debug(146U, "test", "Before transmission\n");
  /* atomic removed: atomic calls only */


  {
    state_ = /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__state[sim_node()];


    if (TOS_NODE_ID == 0) {
        offset_ = 0;
      }
    else 
#line 100
      {
        if (TOS_NODE_ID == 1) {
          offset_ = 32 * 0;
          }
        else {
#line 104
          offset_ = 32 * 0;
          }
      }
    /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__toSend[sim_node()] = msg;
    /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__toSendLen[sim_node()] = len;

    if (TOS_NODE_ID != 0) {


      if (offset_ == 0) {
          /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__state[sim_node()] = /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__S_OFFSET;
        }
      else 
#line 115
        {
          /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__state[sim_node()] = /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__S_START;
        }
      }
  }
  if (state_ != /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__S_END) {
      /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__alarm(0);
      return FAIL;
    }


  if (/*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__state[sim_node()] == /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__S_OFFSET) {
      err = /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__SubSend__send(/*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__toSend[sim_node()], /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__toSendLen[sim_node()]);
      if (err != SUCCESS) {
          /* atomic removed: atomic calls only */
#line 129
          /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__state[sim_node()] = /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__S_END;
        }
    }
  else 
#line 131
    {
      /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__Alarm__start(offset_);
      err = SUCCESS;
    }



  return err;
}

# 96 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static void /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__set_alarm(void )
{
  /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__to_size_type now = /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__Counter__get();
#line 98
  /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__to_size_type expires;
#line 98
  /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__to_size_type remaining;




  expires = /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__m_t0[sim_node()] + /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__m_dt[sim_node()];


  remaining = (/*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__to_size_type )(expires - now);


  if (/*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__m_t0[sim_node()] <= now) 
    {
      if (expires >= /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__m_t0[sim_node()] && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__m_t0[sim_node()] || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 121
  if (remaining > /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__MAX_DELAY) 
    {
      /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__m_t0[sim_node()] = now + /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__MAX_DELAY;
      /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__m_dt[sim_node()] = remaining - /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__MAX_DELAY;
      remaining = /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__MAX_DELAY;
    }
  else 
    {
      /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__m_t0[sim_node()] += /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__m_dt[sim_node()];
      /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__m_dt[sim_node()] = 0;
    }
  /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__startAt((/*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__from_size_type )now << 5, 
  (/*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__from_size_type )remaining << 5);
}

static void /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__Alarm__startAt(/*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__to_size_type t0, /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__to_size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__m_t0[sim_node()] = t0;
      /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__m_dt[sim_node()] = dt;
      /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__set_alarm();
    }
#line 143
    __nesc_atomic_end(__nesc_atomic); }
}

#line 96
static void /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__set_alarm(void )
{
  /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__to_size_type now = /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__Counter__get();
#line 98
  /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__to_size_type expires;
#line 98
  /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__to_size_type remaining;




  expires = /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__m_t0[sim_node()] + /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__m_dt[sim_node()];


  remaining = (/*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__to_size_type )(expires - now);


  if (/*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__m_t0[sim_node()] <= now) 
    {
      if (expires >= /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__m_t0[sim_node()] && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__m_t0[sim_node()] || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 121
  if (remaining > /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__MAX_DELAY) 
    {
      /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__m_t0[sim_node()] = now + /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__MAX_DELAY;
      /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__m_dt[sim_node()] = remaining - /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__MAX_DELAY;
      remaining = /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__MAX_DELAY;
    }
  else 
    {
      /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__m_t0[sim_node()] += /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__m_dt[sim_node()];
      /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__m_dt[sim_node()] = 0;
    }
  /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__AlarmFrom__startAt((/*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__from_size_type )now << 5, 
  (/*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__from_size_type )remaining << 5);
}

#line 96
static void /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__set_alarm(void )
{
  /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__to_size_type now = /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__Counter__get();
#line 98
  /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__to_size_type expires;
#line 98
  /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__to_size_type remaining;




  expires = /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__m_t0[sim_node()] + /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__m_dt[sim_node()];


  remaining = (/*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__to_size_type )(expires - now);


  if (/*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__m_t0[sim_node()] <= now) 
    {
      if (expires >= /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__m_t0[sim_node()] && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__m_t0[sim_node()] || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 121
  if (remaining > /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__MAX_DELAY) 
    {
      /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__m_t0[sim_node()] = now + /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__MAX_DELAY;
      /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__m_dt[sim_node()] = remaining - /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__MAX_DELAY;
      remaining = /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__MAX_DELAY;
    }
  else 
    {
      /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__m_t0[sim_node()] += /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__m_dt[sim_node()];
      /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__m_dt[sim_node()] = 0;
    }
  /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__AlarmFrom__startAt((/*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__from_size_type )now << 5, 
  (/*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__from_size_type )remaining << 5);
}

# 142 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageC.nc"
static am_addr_t TossimActiveMessageC__AMPacket__source(message_t *amsg)
#line 142
{
  tossim_header_t *header = TossimActiveMessageC__getHeader(amsg);

#line 144
  return __nesc_ntoh_uint16(header->src.nxdata);
}

# 102 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_packet.c"
  uint8_t sim_packet_max_length(sim_packet_t *msg)
#line 102
{
  return 156;
}

  sim_packet_t *sim_packet_allocate()
#line 106
{
  return (sim_packet_t *)malloc(sizeof(message_t ));
}

  void sim_packet_free(sim_packet_t *p)
#line 110
{
  printf("sim_packet.c: Freeing packet %p\n", p);
  free(p);
}

  void sim_packet_set_dsn(sim_packet_t *msg, uint8_t dsn)
#line 115
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 117
  __nesc_hton_uint8(hdr->dsn.nxdata, dsn);
}

  uint8_t sim_packet_dsn(sim_packet_t *msg)
#line 120
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 122
  return __nesc_ntoh_uint8(hdr->dsn.nxdata);
}

# 43 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SimMainP.nc"
  int sim_main_start_mote(void )
#line 43
{
  char timeBuf[128];

#line 45
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 45
    {






      SimMainP__Scheduler__init();





      SimMainP__PlatformInit__init();
      while (SimMainP__Scheduler__runNextTask()) ;





      SimMainP__SoftwareInit__init();
      while (SimMainP__Scheduler__runNextTask()) ;
    }
#line 67
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  sim_print_now(timeBuf, 128);
  sim_log_debug(92U, "SimMainP", "Mote %li signaling boot at time %s.\n", sim_node(), timeBuf);
  SimMainP__Boot__booted();





  return 0;
}

# 172 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
static bool SimSchedulerBasicP__Scheduler__runNextTask(void )
{
  uint8_t nextTask;

#line 175
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      nextTask = SimSchedulerBasicP__popTask();
      if (nextTask == SimSchedulerBasicP__NO_TASK) 
        {
          sim_log_debug(94U, "Scheduler", "Told to run next task, but no task to run.\n");
          {
            unsigned char __nesc_temp = 
#line 181
            FALSE;

            {
#line 181
              __nesc_atomic_end(__nesc_atomic); 
#line 181
              return __nesc_temp;
            }
          }
        }
    }
#line 185
    __nesc_atomic_end(__nesc_atomic); }
#line 184
  sim_log_debug(95U, "Scheduler", "Running task %hhu.\n", nextTask);
  SimSchedulerBasicP__TaskBasic__runTask(nextTask);
  return TRUE;
}

# 155 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(uint8_t last, message_t * msg, error_t err)
#line 155
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[sim_node()][last].msg = (void *)0;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend();
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(last, msg, err);
}

# 48 "TestNetworkC.nc"
static void TestNetworkC__RadioControl__startDone(error_t err)
#line 48
{
  if (err != SUCCESS) {
      TestNetworkC__RadioControl__start();
    }
  else {
      TestNetworkC__CC2420Config__setChannel(26);
      TestNetworkC__CC2420Config__sync();
    }
}

# 281 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/apps/wustl/upma/lib/macs/pure-tdma/PureTDMASchedulerP.nc"
static error_t PureTDMASchedulerP__SplitControl__start(void )
#line 281
{
  error_t err;

#line 283
  if (PureTDMASchedulerP__init[sim_node()] == FALSE) {
      PureTDMASchedulerP__FrameConfiguration__setSlotLength(PureTDMASchedulerP__slotSize[sim_node()]);
      PureTDMASchedulerP__FrameConfiguration__setFrameLength(PureTDMASchedulerP__bi[sim_node()] + 1);
    }

  err = PureTDMASchedulerP__RadioPowerControl__start();
  return err;
}

# 37 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/pure-tdma/sim/CounterMicro16P.nc"
static void CounterMicro16P__scheduleOverflow(void )
{
  sim_time_t nextOverflow = CounterMicro16P__t0[sim_node()] + 65535 * sim_ticks_per_sec() / 1024UL / 1024UL;

  sim_event_t *overflowEvent = sim_queue_allocate_event();

#line 42
  overflowEvent->handle = CounterMicro16P__handleOverflow;
  overflowEvent->cleanup = sim_queue_cleanup_none;
  overflowEvent->time = nextOverflow;
  sim_queue_insert(overflowEvent);
}

# 147 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/SimMoteP.nc"
  long long int sim_mote_euid(int mote)
#line 147
{
  long long int result;
  int tmp = sim_node();

#line 150
  sim_set_node(mote);
  result = SimMoteP__SimMote__getEuid();
  sim_set_node(tmp);
  return result;
}

  void sim_mote_set_euid(int mote, long long int id)
#line 156
{
  int tmp = sim_node();

#line 158
  sim_set_node(mote);
  SimMoteP__SimMote__setEuid(id);
  sim_set_node(tmp);
}

  long long int sim_mote_start_time(int mote)
#line 163
{
  long long int result;
  int tmp = sim_node();

#line 166
  sim_set_node(mote);
  result = SimMoteP__SimMote__getStartTime();
  sim_set_node(tmp);
  return result;
}

  int sim_mote_get_variable_info(int mote, char *name, void **ptr, size_t *len)
#line 172
{
  int result;
  int tmpID = sim_node();

#line 175
  sim_set_node(mote);
  result = SimMoteP__SimMote__getVariableInfo(name, ptr, len);
  sim_log_debug(100U, "SimMoteP", "Fetched %s of %i to be %p with len %i (result %i)\n", name, mote, *ptr, *len, result);
  sim_set_node(tmpID);
  return result;
}

  void sim_mote_set_start_time(int mote, long long int t)
#line 182
{
  int tmpID = sim_node();

#line 184
  sim_set_node(mote);
  SimMoteP__startTime[sim_node()] = t;
  sim_log_debug(101U, "SimMoteP", "Setting start time to %llu\n", SimMoteP__startTime[sim_node()]);
  sim_set_node(tmpID);
  return;
}











  void sim_mote_turn_on(int mote)
#line 201
{
  int tmp = sim_node();

#line 203
  sim_set_node(mote);
  SimMoteP__SimMote__turnOn();
  sim_set_node(tmp);
}

#line 129
static void SimMoteP__SimMote__turnOn(void )
#line 129
{
  if (!SimMoteP__isOn[sim_node()]) {
      if (SimMoteP__bootEvent[sim_node()] != (void *)0) {
          SimMoteP__bootEvent[sim_node()]->cancelled = TRUE;
        }
      __nesc_nido_initialise(sim_node());
      SimMoteP__startTime[sim_node()] = sim_time();
      sim_log_debug(99U, "SimMoteP", "Setting start time to %llu\n", SimMoteP__startTime[sim_node()]);
      SimMoteP__isOn[sim_node()] = TRUE;
      sim_main_start_mote();
    }
}

#line 208
  void sim_mote_turn_off(int mote)
#line 208
{
  int tmp = sim_node();

#line 210
  sim_set_node(mote);
  SimMoteP__SimMote__turnOff();

  sim_set_node(tmp);
}










  void sim_mote_enqueue_boot_event(int mote)
#line 225
{
  int tmp = sim_node();

#line 227
  sim_set_node(mote);

  if (SimMoteP__bootEvent[sim_node()] != (void *)0) {
      if (SimMoteP__bootEvent[sim_node()]->time == SimMoteP__startTime[sim_node()]) {

          SimMoteP__bootEvent[sim_node()]->cancelled = FALSE;
          return;
        }
      else {
          SimMoteP__bootEvent[sim_node()]->cancelled = TRUE;
        }
    }

  SimMoteP__bootEvent[sim_node()] = (sim_event_t *)malloc(sizeof(sim_event_t ));
  SimMoteP__bootEvent[sim_node()]->time = SimMoteP__startTime[sim_node()];
  SimMoteP__bootEvent[sim_node()]->mote = mote;
  SimMoteP__bootEvent[sim_node()]->force = TRUE;
  SimMoteP__bootEvent[sim_node()]->data = (void *)0;
  SimMoteP__bootEvent[sim_node()]->handle = SimMoteP__sim_mote_boot_handle;
  SimMoteP__bootEvent[sim_node()]->cleanup = sim_queue_cleanup_event;
  sim_queue_insert(SimMoteP__bootEvent[sim_node()]);

  sim_set_node(tmp);
}

#line 301
  bool sim_mote_is_idle(int mote)
#line 301
{
  bool result;
  int tmp = sim_node();

#line 304
  sim_set_node(mote);
  result = SimMoteP__SimMote__isIdle();
  sim_set_node(tmp);
  return result;
}

  void sim_mote_enable_idle(int mote)
#line 310
{
  int tmp = sim_node();

#line 312
  sim_set_node(mote);
  SimMoteP__SimMote__enableIdle();
  sim_set_node(tmp);
}

  void sim_mote_disable_idle(int mote)
#line 317
{
  int tmp = sim_node();

#line 319
  sim_set_node(mote);
  SimMoteP__SimMote__disableIdle();
  sim_set_node(tmp);
}

# 19 "/home/sihoon/WCPSv3-master/TinyOS-2.x-jhu/opt/tinyos-2.x/tos/lib/tossim/sim_lqi.c"
  uint8_t sim_lqi_generate(double SNR)
{
  uint8_t coin = RandomUniform() * 100;
  uint8_t i;
#line 22
  uint8_t closest_i = 0;


  for (i = 0; i < allSnr_len; i++) {
      if (allSnr[i].snr == SNR) {
          break;
        }
      else 
#line 28
        {
          if (fabs(SNR - allSnr[i].snr) < fabs(SNR - allSnr[closest_i].snr)) {
              closest_i = i;
            }
        }
    }
  i = i == allSnr_len ? closest_i : i;


  return bi_search(allSnr[i].lqi, 0, allSnr[i].numLqi - 1, coin);
}

#line 5
static uint8_t bi_search(lqi_dist_t *lqi, uint8_t low_i, uint8_t high_i, uint8_t coin)
{
  uint8_t i = low_i + (high_i - low_i + 1) / 2;
  uint8_t fromCDF = i == 0 ? 0 : lqi[i - 1].cdf;
  uint8_t toCDF = lqi[i].cdf;

#line 10
  if (fromCDF <= coin && coin < toCDF) {
      return lqi[i].lqi;
    }
  else {
#line 12
    if (fromCDF > coin) {
        return bi_search(lqi, low_i, i - 1, coin);
      }
    else 
#line 14
      {
        return bi_search(lqi, i + 1, high_i, coin);
      }
    }
}

/* Nido variable resolver function */

static int __nesc_nido_resolve(int __nesc_mote,
                               char* varname,
                               uintptr_t* addr, size_t* size)
{
  /* Module TestNetworkC */
  if (!strcmp(varname, "TestNetworkC__packet"))
  {
    *addr = (uintptr_t)&TestNetworkC__packet[__nesc_mote];
    *size = sizeof(TestNetworkC__packet[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TestNetworkC__rcm"))
  {
    *addr = (uintptr_t)&TestNetworkC__rcm[__nesc_mote];
    *size = sizeof(TestNetworkC__rcm[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TestNetworkC__rcmr"))
  {
    *addr = (uintptr_t)&TestNetworkC__rcmr[__nesc_mote];
    *size = sizeof(TestNetworkC__rcmr[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TestNetworkC__msgamr"))
  {
    *addr = (uintptr_t)&TestNetworkC__msgamr[__nesc_mote];
    *size = sizeof(TestNetworkC__msgamr[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TestNetworkC__tnmsg_in_transit"))
  {
    *addr = (uintptr_t)&TestNetworkC__tnmsg_in_transit[__nesc_mote];
    *size = sizeof(TestNetworkC__tnmsg_in_transit[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TestNetworkC__sendBusy"))
  {
    *addr = (uintptr_t)&TestNetworkC__sendBusy[__nesc_mote];
    *size = sizeof(TestNetworkC__sendBusy[__nesc_mote]);
    return 0;
  }

  /* Module PlatformP */

  /* Module MotePlatformP */

  /* Module HplAtm128GeneralIOPinP__0 */

  /* Module HplAtm128GeneralIOPinP__1 */

  /* Module HplAtm128GeneralIOPinP__2 */

  /* Module HplAtm128GeneralIOPinP__3 */

  /* Module HplAtm128GeneralIOPinP__4 */

  /* Module HplAtm128GeneralIOPinP__5 */

  /* Module HplAtm128GeneralIOPinP__6 */

  /* Module HplAtm128GeneralIOPinP__7 */

  /* Module HplAtm128GeneralIOPinP__8 */

  /* Module HplAtm128GeneralIOPinP__9 */

  /* Module HplAtm128GeneralIOPinP__10 */

  /* Module HplAtm128GeneralIOPinP__11 */

  /* Module HplAtm128GeneralIOPinP__12 */

  /* Module HplAtm128GeneralIOPinP__13 */

  /* Module HplAtm128GeneralIOPinP__14 */

  /* Module HplAtm128GeneralIOPinP__15 */

  /* Module HplAtm128GeneralIOPinP__16 */

  /* Module HplAtm128GeneralIOPinP__17 */

  /* Module HplAtm128GeneralIOPinP__18 */

  /* Module HplAtm128GeneralIOPinP__19 */

  /* Module HplAtm128GeneralIOPinP__20 */

  /* Module HplAtm128GeneralIOPinP__21 */

  /* Module HplAtm128GeneralIOPinP__22 */

  /* Module HplAtm128GeneralIOPinP__23 */

  /* Module HplAtm128GeneralIOPinP__24 */

  /* Module HplAtm128GeneralIOPinP__25 */

  /* Module HplAtm128GeneralIOPinP__26 */

  /* Module HplAtm128GeneralIOPinP__27 */

  /* Module HplAtm128GeneralIOPinP__28 */

  /* Module HplAtm128GeneralIOPinP__29 */

  /* Module HplAtm128GeneralIOPinP__30 */

  /* Module HplAtm128GeneralIOPinP__31 */

  /* Module HplAtm128GeneralIOPinP__32 */

  /* Module HplAtm128GeneralIOPinP__33 */

  /* Module HplAtm128GeneralIOPinP__34 */

  /* Module HplAtm128GeneralIOPinP__35 */

  /* Module HplAtm128GeneralIOPinP__36 */

  /* Module HplAtm128GeneralIOPinP__37 */

  /* Module HplAtm128GeneralIOPinP__38 */

  /* Module HplAtm128GeneralIOPinP__39 */

  /* Module HplAtm128GeneralIOPinP__40 */

  /* Module HplAtm128GeneralIOPinP__41 */

  /* Module HplAtm128GeneralIOPinP__42 */

  /* Module HplAtm128GeneralIOPinP__43 */

  /* Module HplAtm128GeneralIOPinP__44 */

  /* Module HplAtm128GeneralIOPinP__45 */

  /* Module HplAtm128GeneralIOPinP__46 */

  /* Module HplAtm128GeneralIOPinP__47 */

  /* Module HplAtm128GeneralIOSlowPinP__0 */

  /* Module HplAtm128GeneralIOSlowPinP__1 */

  /* Module HplAtm128GeneralIOSlowPinP__2 */

  /* Module HplAtm128GeneralIOSlowPinP__3 */

  /* Module HplAtm128GeneralIOSlowPinP__4 */

  /* Module HplAtm128GeneralIOSlowPinP__5 */

  /* Module HplAtm128GeneralIOSlowPinP__6 */

  /* Module HplAtm128GeneralIOSlowPinP__7 */

  /* Module HplAtm128GeneralIOSlowPinP__8 */

  /* Module HplAtm128GeneralIOSlowPinP__9 */

  /* Module HplAtm128GeneralIOSlowPinP__10 */

  /* Module HplAtm128GeneralIOSlowPinP__11 */

  /* Module HplAtm128GeneralIOSlowPinP__12 */

  /* Module MeasureClockC */

  /* Module SimMainP */

  /* Module SimSchedulerBasicP */
  if (!strcmp(varname, "SimSchedulerBasicP__m_head"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP__m_head[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP__m_head[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP__m_tail"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP__m_tail[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP__m_tail[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP__m_next"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP__m_next[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP__m_next[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP__sim_scheduler_event_pending"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP__sim_scheduler_event_pending[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP__sim_scheduler_event_pending[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP__sim_scheduler_event"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP__sim_scheduler_event[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP__sim_scheduler_event[__nesc_mote]);
    return 0;
  }

  /* Module SimMoteP */
  if (!strcmp(varname, "SimMoteP__euid"))
  {
    *addr = (uintptr_t)&SimMoteP__euid[__nesc_mote];
    *size = sizeof(SimMoteP__euid[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP__startTime"))
  {
    *addr = (uintptr_t)&SimMoteP__startTime[__nesc_mote];
    *size = sizeof(SimMoteP__startTime[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP__isOn"))
  {
    *addr = (uintptr_t)&SimMoteP__isOn[__nesc_mote];
    *size = sizeof(SimMoteP__isOn[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP__isIdle"))
  {
    *addr = (uintptr_t)&SimMoteP__isIdle[__nesc_mote];
    *size = sizeof(SimMoteP__isIdle[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP__bootEvent"))
  {
    *addr = (uintptr_t)&SimMoteP__bootEvent[__nesc_mote];
    *size = sizeof(SimMoteP__bootEvent[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP__radioChannel"))
  {
    *addr = (uintptr_t)&SimMoteP__radioChannel[__nesc_mote];
    *size = sizeof(SimMoteP__radioChannel[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP__tcp_msg"))
  {
    *addr = (uintptr_t)&SimMoteP__tcp_msg[__nesc_mote];
    *size = sizeof(SimMoteP__tcp_msg[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP__radio_power"))
  {
    *addr = (uintptr_t)&SimMoteP__radio_power[__nesc_mote];
    *size = sizeof(SimMoteP__radio_power[__nesc_mote]);
    return 0;
  }

  /* Module CC2420CsmaP */
  if (!strcmp(varname, "CC2420CsmaP__buffer"))
  {
    *addr = (uintptr_t)&CC2420CsmaP__buffer[__nesc_mote];
    *size = sizeof(CC2420CsmaP__buffer[__nesc_mote]);
    return 0;
  }

  /* Module AsyncReceiveAdapterP */
  if (!strcmp(varname, "AsyncReceiveAdapterP__msg_"))
  {
    *addr = (uintptr_t)&AsyncReceiveAdapterP__msg_[__nesc_mote];
    *size = sizeof(AsyncReceiveAdapterP__msg_[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "AsyncReceiveAdapterP__payload_"))
  {
    *addr = (uintptr_t)&AsyncReceiveAdapterP__payload_[__nesc_mote];
    *size = sizeof(AsyncReceiveAdapterP__payload_[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "AsyncReceiveAdapterP__len_"))
  {
    *addr = (uintptr_t)&AsyncReceiveAdapterP__len_[__nesc_mote];
    *size = sizeof(AsyncReceiveAdapterP__len_[__nesc_mote]);
    return 0;
  }

  /* Module AsyncSendAdapterP */
  if (!strcmp(varname, "AsyncSendAdapterP__msg_"))
  {
    *addr = (uintptr_t)&AsyncSendAdapterP__msg_[__nesc_mote];
    *size = sizeof(AsyncSendAdapterP__msg_[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "AsyncSendAdapterP__len_"))
  {
    *addr = (uintptr_t)&AsyncSendAdapterP__len_[__nesc_mote];
    *size = sizeof(AsyncSendAdapterP__len_[__nesc_mote]);
    return 0;
  }

  /* Module PureTDMASchedulerP */
  if (!strcmp(varname, "PureTDMASchedulerP__init"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__init[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__init[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__slotSize"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__slotSize[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__slotSize[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__bi"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__bi[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__bi[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__sd"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__sd[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__sd[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__cap"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__cap[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__cap[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__coordinatorId"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__coordinatorId[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__coordinatorId[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__toSend"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__toSend[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__toSend[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__toSendLen"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__toSendLen[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__toSendLen[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__packet"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__packet[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__packet[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__HIforwardPktBuffer"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__HIforwardPktBuffer[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__HIforwardPktBuffer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__LOforwardPktBuffer"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__LOforwardPktBuffer[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__LOforwardPktBuffer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__HIqueueSize"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__HIqueueSize[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__HIqueueSize[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__LOqueueSize"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__LOqueueSize[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__LOqueueSize[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__slot_"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__slot_[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__slot_[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__rcv_count"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__rcv_count[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__rcv_count[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__Tx_count"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__Tx_count[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__Tx_count[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__Total_tx_count"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__Total_tx_count[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__Total_tx_count[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__TxOffset"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__TxOffset[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__TxOffset[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__schedule"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__schedule[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__schedule[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__superframe_length"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__superframe_length[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__superframe_length[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__NUM_TASK"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__NUM_TASK[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__NUM_TASK[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__HI_TASK"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__HI_TASK[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__HI_TASK[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__LO_TASK"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__LO_TASK[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__LO_TASK[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__Task_character"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__Task_character[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__Task_character[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__TASK_PERIOD"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__TASK_PERIOD[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__TASK_PERIOD[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__TASK_DEAD"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__TASK_DEAD[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__TASK_DEAD[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__TASK_MAXTX"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__TASK_MAXTX[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__TASK_MAXTX[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__Path"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__Path[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__Path[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__PRIMARYPATH"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__PRIMARYPATH[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__PRIMARYPATH[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__BACKUPPATH"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__BACKUPPATH[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__BACKUPPATH[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__rcv_slot"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__rcv_slot[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__rcv_slot[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__receive_lock"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__receive_lock[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__receive_lock[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__isFlowroot"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__isFlowroot[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__isFlowroot[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__isFlowdest"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__isFlowdest[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__isFlowdest[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__Task_rels"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__Task_rels[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__Task_rels[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__e2e_delay_buffer"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__e2e_delay_buffer[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__e2e_delay_buffer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__send_status"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__send_status[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__send_status[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__Rcv_check_mode"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__Rcv_check_mode[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__Rcv_check_mode[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__taskid"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__taskid[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__taskid[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__Transmitting_flowid"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__Transmitting_flowid[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__Transmitting_flowid[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__My_max_txopper"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__My_max_txopper[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__My_max_txopper[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__check_link_quality_1"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__check_link_quality_1[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__check_link_quality_1[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__sync"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__sync[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__sync[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__requestStop"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__requestStop[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__requestStop[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__crt_frame"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__crt_frame[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__crt_frame[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__Total_frame_count"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__Total_frame_count[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__Total_frame_count[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__Receiving_flag"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__Receiving_flag[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__Receiving_flag[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__Receiving_flow_id"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__Receiving_flow_id[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__Receiving_flow_id[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__kth_job"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__kth_job[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__kth_job[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__prev_job_idx"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__prev_job_idx[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__prev_job_idx[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__Loss_count"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__Loss_count[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__Loss_count[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__Miss_count"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__Miss_count[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__Miss_count[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__temp_interf"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__temp_interf[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__temp_interf[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PureTDMASchedulerP__temp_dist"))
  {
    *addr = (uintptr_t)&PureTDMASchedulerP__temp_dist[__nesc_mote];
    *size = sizeof(PureTDMASchedulerP__temp_dist[__nesc_mote]);
    return 0;
  }

  /* Module LedsP */

  /* Module GenericSlotSenderP__0 */
  if (!strcmp(varname, "/*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__toSend"))
  {
    *addr = (uintptr_t)&/*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__toSend[__nesc_mote];
    *size = sizeof(/*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__toSend[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__toSendLen"))
  {
    *addr = (uintptr_t)&/*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__toSendLen[__nesc_mote];
    *size = sizeof(/*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__toSendLen[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__state"))
  {
    *addr = (uintptr_t)&/*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__state[__nesc_mote];
    *size = sizeof(/*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__state[__nesc_mote]);
    return 0;
  }

  /* Module AlarmMicro16P__0 */
  if (!strcmp(varname, "/*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__alarm"))
  {
    *addr = (uintptr_t)&/*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__alarm[__nesc_mote];
    *size = sizeof(/*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__alarm[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__zero"))
  {
    *addr = (uintptr_t)&/*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__zero[__nesc_mote];
    *size = sizeof(/*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__zero[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__evt"))
  {
    *addr = (uintptr_t)&/*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__evt[__nesc_mote];
    *size = sizeof(/*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__evt[__nesc_mote]);
    return 0;
  }

  /* Module CounterMicro16P */
  if (!strcmp(varname, "CounterMicro16P__t0"))
  {
    *addr = (uintptr_t)&CounterMicro16P__t0[__nesc_mote];
    *size = sizeof(CounterMicro16P__t0[__nesc_mote]);
    return 0;
  }

  /* Module TransformAlarmC__0 */
  if (!strcmp(varname, "/*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__m_t0"))
  {
    *addr = (uintptr_t)&/*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__m_t0[__nesc_mote];
    *size = sizeof(/*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__m_t0[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__m_dt"))
  {
    *addr = (uintptr_t)&/*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__m_dt[__nesc_mote];
    *size = sizeof(/*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__m_dt[__nesc_mote]);
    return 0;
  }

  /* Module TransformCounterC__0 */
  if (!strcmp(varname, "/*Counter32khz16C.TransformCounterC*/TransformCounterC__0__m_upper"))
  {
    *addr = (uintptr_t)&/*Counter32khz16C.TransformCounterC*/TransformCounterC__0__m_upper[__nesc_mote];
    *size = sizeof(/*Counter32khz16C.TransformCounterC*/TransformCounterC__0__m_upper[__nesc_mote]);
    return 0;
  }

  /* Module TossimPacketModelC */
  if (!strcmp(varname, "TossimPacketModelC__initialized"))
  {
    *addr = (uintptr_t)&TossimPacketModelC__initialized[__nesc_mote];
    *size = sizeof(TossimPacketModelC__initialized[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC__running"))
  {
    *addr = (uintptr_t)&TossimPacketModelC__running[__nesc_mote];
    *size = sizeof(TossimPacketModelC__running[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC__backoffCount"))
  {
    *addr = (uintptr_t)&TossimPacketModelC__backoffCount[__nesc_mote];
    *size = sizeof(TossimPacketModelC__backoffCount[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC__neededFreeSamples"))
  {
    *addr = (uintptr_t)&TossimPacketModelC__neededFreeSamples[__nesc_mote];
    *size = sizeof(TossimPacketModelC__neededFreeSamples[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC__sending"))
  {
    *addr = (uintptr_t)&TossimPacketModelC__sending[__nesc_mote];
    *size = sizeof(TossimPacketModelC__sending[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC__transmitting"))
  {
    *addr = (uintptr_t)&TossimPacketModelC__transmitting[__nesc_mote];
    *size = sizeof(TossimPacketModelC__transmitting[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC__sendingLength"))
  {
    *addr = (uintptr_t)&TossimPacketModelC__sendingLength[__nesc_mote];
    *size = sizeof(TossimPacketModelC__sendingLength[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC__destNode"))
  {
    *addr = (uintptr_t)&TossimPacketModelC__destNode[__nesc_mote];
    *size = sizeof(TossimPacketModelC__destNode[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC__sendEvent"))
  {
    *addr = (uintptr_t)&TossimPacketModelC__sendEvent[__nesc_mote];
    *size = sizeof(TossimPacketModelC__sendEvent[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC__cca_enable_flag"))
  {
    *addr = (uintptr_t)&TossimPacketModelC__cca_enable_flag[__nesc_mote];
    *size = sizeof(TossimPacketModelC__cca_enable_flag[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC__error"))
  {
    *addr = (uintptr_t)&TossimPacketModelC__error[__nesc_mote];
    *size = sizeof(TossimPacketModelC__error[__nesc_mote]);
    return 0;
  }

  /* Module GenericSlotterP */
  if (!strcmp(varname, "GenericSlotterP__slot"))
  {
    *addr = (uintptr_t)&GenericSlotterP__slot[__nesc_mote];
    *size = sizeof(GenericSlotterP__slot[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "GenericSlotterP__slotLength"))
  {
    *addr = (uintptr_t)&GenericSlotterP__slotLength[__nesc_mote];
    *size = sizeof(GenericSlotterP__slotLength[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "GenericSlotterP__frameLength"))
  {
    *addr = (uintptr_t)&GenericSlotterP__frameLength[__nesc_mote];
    *size = sizeof(GenericSlotterP__frameLength[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "GenericSlotterP__sync"))
  {
    *addr = (uintptr_t)&GenericSlotterP__sync[__nesc_mote];
    *size = sizeof(GenericSlotterP__sync[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "GenericSlotterP__nextFire"))
  {
    *addr = (uintptr_t)&GenericSlotterP__nextFire[__nesc_mote];
    *size = sizeof(GenericSlotterP__nextFire[__nesc_mote]);
    return 0;
  }

  /* Module AlarmMicro16P__1 */
  if (!strcmp(varname, "/*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__alarm"))
  {
    *addr = (uintptr_t)&/*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__alarm[__nesc_mote];
    *size = sizeof(/*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__alarm[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__zero"))
  {
    *addr = (uintptr_t)&/*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__zero[__nesc_mote];
    *size = sizeof(/*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__zero[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__evt"))
  {
    *addr = (uintptr_t)&/*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__evt[__nesc_mote];
    *size = sizeof(/*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__evt[__nesc_mote]);
    return 0;
  }

  /* Module TransformAlarmC__1 */
  if (!strcmp(varname, "/*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__m_t0"))
  {
    *addr = (uintptr_t)&/*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__m_t0[__nesc_mote];
    *size = sizeof(/*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__m_t0[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__m_dt"))
  {
    *addr = (uintptr_t)&/*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__m_dt[__nesc_mote];
    *size = sizeof(/*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__m_dt[__nesc_mote]);
    return 0;
  }

  /* Module TransformCounterC__1 */
  if (!strcmp(varname, "/*Counter32khz32C.TransformCounterC*/TransformCounterC__1__m_upper"))
  {
    *addr = (uintptr_t)&/*Counter32khz32C.TransformCounterC*/TransformCounterC__1__m_upper[__nesc_mote];
    *size = sizeof(/*Counter32khz32C.TransformCounterC*/TransformCounterC__1__m_upper[__nesc_mote]);
    return 0;
  }

  /* Module SenderDispatcherP */
  if (!strcmp(varname, "SenderDispatcherP__toSend"))
  {
    *addr = (uintptr_t)&SenderDispatcherP__toSend[__nesc_mote];
    *size = sizeof(SenderDispatcherP__toSend[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SenderDispatcherP__toSendLen"))
  {
    *addr = (uintptr_t)&SenderDispatcherP__toSendLen[__nesc_mote];
    *size = sizeof(SenderDispatcherP__toSendLen[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SenderDispatcherP__last_id"))
  {
    *addr = (uintptr_t)&SenderDispatcherP__last_id[__nesc_mote];
    *size = sizeof(SenderDispatcherP__last_id[__nesc_mote]);
    return 0;
  }

  /* Module DummyChannelMonitorC */

  /* Module BeaconSlotP */
  if (!strcmp(varname, "BeaconSlotP__syncPkt"))
  {
    *addr = (uintptr_t)&BeaconSlotP__syncPkt[__nesc_mote];
    *size = sizeof(BeaconSlotP__syncPkt[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BeaconSlotP__syncPktLen"))
  {
    *addr = (uintptr_t)&BeaconSlotP__syncPktLen[__nesc_mote];
    *size = sizeof(BeaconSlotP__syncPktLen[__nesc_mote]);
    return 0;
  }

  /* Module AlarmMicro16P__2 */
  if (!strcmp(varname, "/*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__alarm"))
  {
    *addr = (uintptr_t)&/*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__alarm[__nesc_mote];
    *size = sizeof(/*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__alarm[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__zero"))
  {
    *addr = (uintptr_t)&/*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__zero[__nesc_mote];
    *size = sizeof(/*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__zero[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__evt"))
  {
    *addr = (uintptr_t)&/*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__evt[__nesc_mote];
    *size = sizeof(/*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__evt[__nesc_mote]);
    return 0;
  }

  /* Module TransformAlarmC__2 */
  if (!strcmp(varname, "/*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__m_t0"))
  {
    *addr = (uintptr_t)&/*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__m_t0[__nesc_mote];
    *size = sizeof(/*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__m_t0[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__m_dt"))
  {
    *addr = (uintptr_t)&/*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__m_dt[__nesc_mote];
    *size = sizeof(/*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__m_dt[__nesc_mote]);
    return 0;
  }

  /* Module AlarmMicro16P__3 */
  if (!strcmp(varname, "/*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__alarm"))
  {
    *addr = (uintptr_t)&/*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__alarm[__nesc_mote];
    *size = sizeof(/*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__alarm[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__zero"))
  {
    *addr = (uintptr_t)&/*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__zero[__nesc_mote];
    *size = sizeof(/*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__zero[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__evt"))
  {
    *addr = (uintptr_t)&/*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__evt[__nesc_mote];
    *size = sizeof(/*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__evt[__nesc_mote]);
    return 0;
  }

  /* Module TransformAlarmC__3 */
  if (!strcmp(varname, "/*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__m_t0"))
  {
    *addr = (uintptr_t)&/*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__m_t0[__nesc_mote];
    *size = sizeof(/*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__m_t0[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__m_dt"))
  {
    *addr = (uintptr_t)&/*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__m_dt[__nesc_mote];
    *size = sizeof(/*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__m_dt[__nesc_mote]);
    return 0;
  }

  /* Module AlarmMicro16P__4 */
  if (!strcmp(varname, "/*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__alarm"))
  {
    *addr = (uintptr_t)&/*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__alarm[__nesc_mote];
    *size = sizeof(/*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__alarm[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__zero"))
  {
    *addr = (uintptr_t)&/*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__zero[__nesc_mote];
    *size = sizeof(/*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__zero[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__evt"))
  {
    *addr = (uintptr_t)&/*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__evt[__nesc_mote];
    *size = sizeof(/*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__evt[__nesc_mote]);
    return 0;
  }

  /* Module TransformAlarmC__4 */
  if (!strcmp(varname, "/*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__m_t0"))
  {
    *addr = (uintptr_t)&/*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__m_t0[__nesc_mote];
    *size = sizeof(/*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__m_t0[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__m_dt"))
  {
    *addr = (uintptr_t)&/*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__m_dt[__nesc_mote];
    *size = sizeof(/*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__m_dt[__nesc_mote]);
    return 0;
  }

  /* Module CC2420ControlP */
  if (!strcmp(varname, "CC2420ControlP__channel"))
  {
    *addr = (uintptr_t)&CC2420ControlP__channel[__nesc_mote];
    *size = sizeof(CC2420ControlP__channel[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CC2420ControlP__power"))
  {
    *addr = (uintptr_t)&CC2420ControlP__power[__nesc_mote];
    *size = sizeof(CC2420ControlP__power[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CC2420ControlP__autoAck"))
  {
    *addr = (uintptr_t)&CC2420ControlP__autoAck[__nesc_mote];
    *size = sizeof(CC2420ControlP__autoAck[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CC2420ControlP__hwAutoAck"))
  {
    *addr = (uintptr_t)&CC2420ControlP__hwAutoAck[__nesc_mote];
    *size = sizeof(CC2420ControlP__hwAutoAck[__nesc_mote]);
    return 0;
  }

  /* Module CpmModelC */
  if (!strcmp(varname, "CpmModelC__outgoing"))
  {
    *addr = (uintptr_t)&CpmModelC__outgoing[__nesc_mote];
    *size = sizeof(CpmModelC__outgoing[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC__requestAck"))
  {
    *addr = (uintptr_t)&CpmModelC__requestAck[__nesc_mote];
    *size = sizeof(CpmModelC__requestAck[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC__receiving"))
  {
    *addr = (uintptr_t)&CpmModelC__receiving[__nesc_mote];
    *size = sizeof(CpmModelC__receiving[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC__rssi"))
  {
    *addr = (uintptr_t)&CpmModelC__rssi[__nesc_mote];
    *size = sizeof(CpmModelC__rssi[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC__outstandingReceptionHead"))
  {
    *addr = (uintptr_t)&CpmModelC__outstandingReceptionHead[__nesc_mote];
    *size = sizeof(CpmModelC__outstandingReceptionHead[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC__clearThreshold"))
  {
    *addr = (uintptr_t)&CpmModelC__clearThreshold[__nesc_mote];
    *size = sizeof(CpmModelC__clearThreshold[__nesc_mote]);
    return 0;
  }

  /* Module TossimComPrintfP */

  /* Module ScheduleConfigC */
  if (!strcmp(varname, "ScheduleConfigC__Primarypath"))
  {
    *addr = (uintptr_t)&ScheduleConfigC__Primarypath[__nesc_mote];
    *size = sizeof(ScheduleConfigC__Primarypath[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ScheduleConfigC__Backuppath"))
  {
    *addr = (uintptr_t)&ScheduleConfigC__Backuppath[__nesc_mote];
    *size = sizeof(ScheduleConfigC__Backuppath[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ScheduleConfigC__flow_destination"))
  {
    *addr = (uintptr_t)&ScheduleConfigC__flow_destination[__nesc_mote];
    *size = sizeof(ScheduleConfigC__flow_destination[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ScheduleConfigC__flow_source"))
  {
    *addr = (uintptr_t)&ScheduleConfigC__flow_source[__nesc_mote];
    *size = sizeof(ScheduleConfigC__flow_source[__nesc_mote]);
    return 0;
  }

  /* Module QueueC__0 */
  if (!strcmp(varname, "/*PureTDMASchedulerC.HIQueueC*/QueueC__0__queue"))
  {
    *addr = (uintptr_t)&/*PureTDMASchedulerC.HIQueueC*/QueueC__0__queue[__nesc_mote];
    *size = sizeof(/*PureTDMASchedulerC.HIQueueC*/QueueC__0__queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*PureTDMASchedulerC.HIQueueC*/QueueC__0__head"))
  {
    *addr = (uintptr_t)&/*PureTDMASchedulerC.HIQueueC*/QueueC__0__head[__nesc_mote];
    *size = sizeof(/*PureTDMASchedulerC.HIQueueC*/QueueC__0__head[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*PureTDMASchedulerC.HIQueueC*/QueueC__0__tail"))
  {
    *addr = (uintptr_t)&/*PureTDMASchedulerC.HIQueueC*/QueueC__0__tail[__nesc_mote];
    *size = sizeof(/*PureTDMASchedulerC.HIQueueC*/QueueC__0__tail[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*PureTDMASchedulerC.HIQueueC*/QueueC__0__size"))
  {
    *addr = (uintptr_t)&/*PureTDMASchedulerC.HIQueueC*/QueueC__0__size[__nesc_mote];
    *size = sizeof(/*PureTDMASchedulerC.HIQueueC*/QueueC__0__size[__nesc_mote]);
    return 0;
  }

  /* Module QueueC__1 */
  if (!strcmp(varname, "/*PureTDMASchedulerC.LOQueueC*/QueueC__1__queue"))
  {
    *addr = (uintptr_t)&/*PureTDMASchedulerC.LOQueueC*/QueueC__1__queue[__nesc_mote];
    *size = sizeof(/*PureTDMASchedulerC.LOQueueC*/QueueC__1__queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*PureTDMASchedulerC.LOQueueC*/QueueC__1__head"))
  {
    *addr = (uintptr_t)&/*PureTDMASchedulerC.LOQueueC*/QueueC__1__head[__nesc_mote];
    *size = sizeof(/*PureTDMASchedulerC.LOQueueC*/QueueC__1__head[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*PureTDMASchedulerC.LOQueueC*/QueueC__1__tail"))
  {
    *addr = (uintptr_t)&/*PureTDMASchedulerC.LOQueueC*/QueueC__1__tail[__nesc_mote];
    *size = sizeof(/*PureTDMASchedulerC.LOQueueC*/QueueC__1__tail[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*PureTDMASchedulerC.LOQueueC*/QueueC__1__size"))
  {
    *addr = (uintptr_t)&/*PureTDMASchedulerC.LOQueueC*/QueueC__1__size[__nesc_mote];
    *size = sizeof(/*PureTDMASchedulerC.LOQueueC*/QueueC__1__size[__nesc_mote]);
    return 0;
  }

  /* Module SyncReceiveAdapterP */

  /* Module SyncSendAdapterP */

  /* Module TossimActiveMessageC */
  if (!strcmp(varname, "TossimActiveMessageC__buffer"))
  {
    *addr = (uintptr_t)&TossimActiveMessageC__buffer[__nesc_mote];
    *size = sizeof(TossimActiveMessageC__buffer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimActiveMessageC__bufferPointer"))
  {
    *addr = (uintptr_t)&TossimActiveMessageC__bufferPointer[__nesc_mote];
    *size = sizeof(TossimActiveMessageC__bufferPointer[__nesc_mote]);
    return 0;
  }

  /* Module ActiveMessageAddressC */
  if (!strcmp(varname, "ActiveMessageAddressC__set"))
  {
    *addr = (uintptr_t)&ActiveMessageAddressC__set[__nesc_mote];
    *size = sizeof(ActiveMessageAddressC__set[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ActiveMessageAddressC__addr"))
  {
    *addr = (uintptr_t)&ActiveMessageAddressC__addr[__nesc_mote];
    *size = sizeof(ActiveMessageAddressC__addr[__nesc_mote]);
    return 0;
  }

  /* Module AMQueueEntryP__0 */

  /* Module AMQueueImplP__0 */
  if (!strcmp(varname, "/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current"))
  {
    *addr = (uintptr_t)&/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[__nesc_mote];
    *size = sizeof(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue"))
  {
    *addr = (uintptr_t)&/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[__nesc_mote];
    *size = sizeof(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask"))
  {
    *addr = (uintptr_t)&/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[__nesc_mote];
    *size = sizeof(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[__nesc_mote]);
    return 0;
  }

  /* Module AlarmMicro16P__5 */
  if (!strcmp(varname, "/*TestNetworkAppC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__5__zero"))
  {
    *addr = (uintptr_t)&/*TestNetworkAppC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__5__zero[__nesc_mote];
    *size = sizeof(/*TestNetworkAppC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__5__zero[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TestNetworkAppC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__5__evt"))
  {
    *addr = (uintptr_t)&/*TestNetworkAppC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__5__evt[__nesc_mote];
    *size = sizeof(/*TestNetworkAppC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__5__evt[__nesc_mote]);
    return 0;
  }

  /* Module TransformAlarmC__5 */

  /* Module SSTdmaSlotSenderP__0 */
  if (!strcmp(varname, "/*TestNetworkAppC.SSTdmaSlotSenderC.SSTdmaSlotSenderP*/SSTdmaSlotSenderP__0__toSend"))
  {
    *addr = (uintptr_t)&/*TestNetworkAppC.SSTdmaSlotSenderC.SSTdmaSlotSenderP*/SSTdmaSlotSenderP__0__toSend[__nesc_mote];
    *size = sizeof(/*TestNetworkAppC.SSTdmaSlotSenderC.SSTdmaSlotSenderP*/SSTdmaSlotSenderP__0__toSend[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TestNetworkAppC.SSTdmaSlotSenderC.SSTdmaSlotSenderP*/SSTdmaSlotSenderP__0__toSendLen"))
  {
    *addr = (uintptr_t)&/*TestNetworkAppC.SSTdmaSlotSenderC.SSTdmaSlotSenderP*/SSTdmaSlotSenderP__0__toSendLen[__nesc_mote];
    *size = sizeof(/*TestNetworkAppC.SSTdmaSlotSenderC.SSTdmaSlotSenderP*/SSTdmaSlotSenderP__0__toSendLen[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TestNetworkAppC.SSTdmaSlotSenderC.SSTdmaSlotSenderP*/SSTdmaSlotSenderP__0__state"))
  {
    *addr = (uintptr_t)&/*TestNetworkAppC.SSTdmaSlotSenderC.SSTdmaSlotSenderP*/SSTdmaSlotSenderP__0__state[__nesc_mote];
    *size = sizeof(/*TestNetworkAppC.SSTdmaSlotSenderC.SSTdmaSlotSenderP*/SSTdmaSlotSenderP__0__state[__nesc_mote]);
    return 0;
  }

  /* Module AlarmMicro16P__6 */
  if (!strcmp(varname, "/*TestNetworkAppC.SSTdmaSlotSenderC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__6__zero"))
  {
    *addr = (uintptr_t)&/*TestNetworkAppC.SSTdmaSlotSenderC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__6__zero[__nesc_mote];
    *size = sizeof(/*TestNetworkAppC.SSTdmaSlotSenderC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__6__zero[__nesc_mote]);
    return 0;
  }

  /* Module TransformAlarmC__6 */

  /* Module RandomMlcgC */
  if (!strcmp(varname, "RandomMlcgC__seed"))
  {
    *addr = (uintptr_t)&RandomMlcgC__seed[__nesc_mote];
    *size = sizeof(RandomMlcgC__seed[__nesc_mote]);
    return 0;
  }

  return -1;
}
/* Invoke static initialisers for mote '__nesc_mote' */

static void __nesc_nido_initialise(int __nesc_mote)
{
  /* Module TestNetworkC */
  memset((void *)&TestNetworkC__packet[__nesc_mote], 0, sizeof TestNetworkC__packet[__nesc_mote]);
  memset((void *)&TestNetworkC__rcm[__nesc_mote], 0, sizeof TestNetworkC__rcm[__nesc_mote]);
  memset((void *)&TestNetworkC__rcmr[__nesc_mote], 0, sizeof TestNetworkC__rcmr[__nesc_mote]);
  memset((void *)&TestNetworkC__msgamr[__nesc_mote], 0, sizeof TestNetworkC__msgamr[__nesc_mote]);
  memset((void *)&TestNetworkC__tnmsg_in_transit[__nesc_mote], 0, sizeof TestNetworkC__tnmsg_in_transit[__nesc_mote]);
  TestNetworkC__sendBusy[__nesc_mote] = FALSE;

  /* Module PlatformP */

  /* Module MotePlatformP */

  /* Module HplAtm128GeneralIOPinP__0 */

  /* Module HplAtm128GeneralIOPinP__1 */

  /* Module HplAtm128GeneralIOPinP__2 */

  /* Module HplAtm128GeneralIOPinP__3 */

  /* Module HplAtm128GeneralIOPinP__4 */

  /* Module HplAtm128GeneralIOPinP__5 */

  /* Module HplAtm128GeneralIOPinP__6 */

  /* Module HplAtm128GeneralIOPinP__7 */

  /* Module HplAtm128GeneralIOPinP__8 */

  /* Module HplAtm128GeneralIOPinP__9 */

  /* Module HplAtm128GeneralIOPinP__10 */

  /* Module HplAtm128GeneralIOPinP__11 */

  /* Module HplAtm128GeneralIOPinP__12 */

  /* Module HplAtm128GeneralIOPinP__13 */

  /* Module HplAtm128GeneralIOPinP__14 */

  /* Module HplAtm128GeneralIOPinP__15 */

  /* Module HplAtm128GeneralIOPinP__16 */

  /* Module HplAtm128GeneralIOPinP__17 */

  /* Module HplAtm128GeneralIOPinP__18 */

  /* Module HplAtm128GeneralIOPinP__19 */

  /* Module HplAtm128GeneralIOPinP__20 */

  /* Module HplAtm128GeneralIOPinP__21 */

  /* Module HplAtm128GeneralIOPinP__22 */

  /* Module HplAtm128GeneralIOPinP__23 */

  /* Module HplAtm128GeneralIOPinP__24 */

  /* Module HplAtm128GeneralIOPinP__25 */

  /* Module HplAtm128GeneralIOPinP__26 */

  /* Module HplAtm128GeneralIOPinP__27 */

  /* Module HplAtm128GeneralIOPinP__28 */

  /* Module HplAtm128GeneralIOPinP__29 */

  /* Module HplAtm128GeneralIOPinP__30 */

  /* Module HplAtm128GeneralIOPinP__31 */

  /* Module HplAtm128GeneralIOPinP__32 */

  /* Module HplAtm128GeneralIOPinP__33 */

  /* Module HplAtm128GeneralIOPinP__34 */

  /* Module HplAtm128GeneralIOPinP__35 */

  /* Module HplAtm128GeneralIOPinP__36 */

  /* Module HplAtm128GeneralIOPinP__37 */

  /* Module HplAtm128GeneralIOPinP__38 */

  /* Module HplAtm128GeneralIOPinP__39 */

  /* Module HplAtm128GeneralIOPinP__40 */

  /* Module HplAtm128GeneralIOPinP__41 */

  /* Module HplAtm128GeneralIOPinP__42 */

  /* Module HplAtm128GeneralIOPinP__43 */

  /* Module HplAtm128GeneralIOPinP__44 */

  /* Module HplAtm128GeneralIOPinP__45 */

  /* Module HplAtm128GeneralIOPinP__46 */

  /* Module HplAtm128GeneralIOPinP__47 */

  /* Module HplAtm128GeneralIOSlowPinP__0 */

  /* Module HplAtm128GeneralIOSlowPinP__1 */

  /* Module HplAtm128GeneralIOSlowPinP__2 */

  /* Module HplAtm128GeneralIOSlowPinP__3 */

  /* Module HplAtm128GeneralIOSlowPinP__4 */

  /* Module HplAtm128GeneralIOSlowPinP__5 */

  /* Module HplAtm128GeneralIOSlowPinP__6 */

  /* Module HplAtm128GeneralIOSlowPinP__7 */

  /* Module HplAtm128GeneralIOSlowPinP__8 */

  /* Module HplAtm128GeneralIOSlowPinP__9 */

  /* Module HplAtm128GeneralIOSlowPinP__10 */

  /* Module HplAtm128GeneralIOSlowPinP__11 */

  /* Module HplAtm128GeneralIOSlowPinP__12 */

  /* Module MeasureClockC */

  /* Module SimMainP */

  /* Module SimSchedulerBasicP */
  memset((void *)&SimSchedulerBasicP__m_head[__nesc_mote], 0, sizeof SimSchedulerBasicP__m_head[__nesc_mote]);
  memset((void *)&SimSchedulerBasicP__m_tail[__nesc_mote], 0, sizeof SimSchedulerBasicP__m_tail[__nesc_mote]);
  memset((void *)&SimSchedulerBasicP__m_next[__nesc_mote], 0, sizeof SimSchedulerBasicP__m_next[__nesc_mote]);
  SimSchedulerBasicP__sim_scheduler_event_pending[__nesc_mote] = FALSE;
  memset((void *)&SimSchedulerBasicP__sim_scheduler_event[__nesc_mote], 0, sizeof SimSchedulerBasicP__sim_scheduler_event[__nesc_mote]);

  /* Module SimMoteP */
  memset((void *)&SimMoteP__euid[__nesc_mote], 0, sizeof SimMoteP__euid[__nesc_mote]);
  memset((void *)&SimMoteP__startTime[__nesc_mote], 0, sizeof SimMoteP__startTime[__nesc_mote]);
  memset((void *)&SimMoteP__isOn[__nesc_mote], 0, sizeof SimMoteP__isOn[__nesc_mote]);
  memset((void *)&SimMoteP__isIdle[__nesc_mote], 0, sizeof SimMoteP__isIdle[__nesc_mote]);
  memset((void *)&SimMoteP__bootEvent[__nesc_mote], 0, sizeof SimMoteP__bootEvent[__nesc_mote]);
  SimMoteP__radioChannel[__nesc_mote] = 26;
  memset((void *)&SimMoteP__tcp_msg[__nesc_mote], 0, sizeof SimMoteP__tcp_msg[__nesc_mote]);
  SimMoteP__radio_power[__nesc_mote] = 0;

  /* Module CC2420CsmaP */
  memset((void *)&CC2420CsmaP__buffer[__nesc_mote], 0, sizeof CC2420CsmaP__buffer[__nesc_mote]);

  /* Module AsyncReceiveAdapterP */
  memset((void *)&AsyncReceiveAdapterP__msg_[__nesc_mote], 0, sizeof AsyncReceiveAdapterP__msg_[__nesc_mote]);
  memset((void *)&AsyncReceiveAdapterP__payload_[__nesc_mote], 0, sizeof AsyncReceiveAdapterP__payload_[__nesc_mote]);
  memset((void *)&AsyncReceiveAdapterP__len_[__nesc_mote], 0, sizeof AsyncReceiveAdapterP__len_[__nesc_mote]);

  /* Module AsyncSendAdapterP */
  memset((void *)&AsyncSendAdapterP__msg_[__nesc_mote], 0, sizeof AsyncSendAdapterP__msg_[__nesc_mote]);
  memset((void *)&AsyncSendAdapterP__len_[__nesc_mote], 0, sizeof AsyncSendAdapterP__len_[__nesc_mote]);

  /* Module PureTDMASchedulerP */
  memset((void *)&PureTDMASchedulerP__init[__nesc_mote], 0, sizeof PureTDMASchedulerP__init[__nesc_mote]);
  memset((void *)&PureTDMASchedulerP__slotSize[__nesc_mote], 0, sizeof PureTDMASchedulerP__slotSize[__nesc_mote]);
  memset((void *)&PureTDMASchedulerP__bi[__nesc_mote], 0, sizeof PureTDMASchedulerP__bi[__nesc_mote]);
  memset((void *)&PureTDMASchedulerP__sd[__nesc_mote], 0, sizeof PureTDMASchedulerP__sd[__nesc_mote]);
  memset((void *)&PureTDMASchedulerP__cap[__nesc_mote], 0, sizeof PureTDMASchedulerP__cap[__nesc_mote]);
  memset((void *)&PureTDMASchedulerP__coordinatorId[__nesc_mote], 0, sizeof PureTDMASchedulerP__coordinatorId[__nesc_mote]);
  memset((void *)&PureTDMASchedulerP__toSend[__nesc_mote], 0, sizeof PureTDMASchedulerP__toSend[__nesc_mote]);
  memset((void *)&PureTDMASchedulerP__toSendLen[__nesc_mote], 0, sizeof PureTDMASchedulerP__toSendLen[__nesc_mote]);
  memset((void *)&PureTDMASchedulerP__packet[__nesc_mote], 0, sizeof PureTDMASchedulerP__packet[__nesc_mote]);
  memset((void *)&PureTDMASchedulerP__HIforwardPktBuffer[__nesc_mote], 0, sizeof PureTDMASchedulerP__HIforwardPktBuffer[__nesc_mote]);
  memset((void *)&PureTDMASchedulerP__LOforwardPktBuffer[__nesc_mote], 0, sizeof PureTDMASchedulerP__LOforwardPktBuffer[__nesc_mote]);
  memset((void *)&PureTDMASchedulerP__HIqueueSize[__nesc_mote], 0, sizeof PureTDMASchedulerP__HIqueueSize[__nesc_mote]);
  memset((void *)&PureTDMASchedulerP__LOqueueSize[__nesc_mote], 0, sizeof PureTDMASchedulerP__LOqueueSize[__nesc_mote]);
  memset((void *)&PureTDMASchedulerP__slot_[__nesc_mote], 0, sizeof PureTDMASchedulerP__slot_[__nesc_mote]);
  memset((void *)&PureTDMASchedulerP__rcv_count[__nesc_mote], 0, sizeof PureTDMASchedulerP__rcv_count[__nesc_mote]);
  memset((void *)&PureTDMASchedulerP__Tx_count[__nesc_mote], 0, sizeof PureTDMASchedulerP__Tx_count[__nesc_mote]);
  memset((void *)&PureTDMASchedulerP__Total_tx_count[__nesc_mote], 0, sizeof PureTDMASchedulerP__Total_tx_count[__nesc_mote]);
  memset((void *)&PureTDMASchedulerP__TxOffset[__nesc_mote], 0, sizeof PureTDMASchedulerP__TxOffset[__nesc_mote]);
  memcpy((void *)&PureTDMASchedulerP__schedule[__nesc_mote], (void *)&(unsigned char [4][3]){ { 0, 0 }, { 0, 1 }, { 0, 2 } }, sizeof PureTDMASchedulerP__schedule[__nesc_mote]);
  PureTDMASchedulerP__superframe_length[__nesc_mote] = 50;
  PureTDMASchedulerP__NUM_TASK[__nesc_mote] = 2;
  PureTDMASchedulerP__HI_TASK[__nesc_mote] = 1;
  PureTDMASchedulerP__LO_TASK[__nesc_mote] = 2;
  memcpy((void *)&PureTDMASchedulerP__Task_character[__nesc_mote], (void *)&(unsigned int [4][3]){ { 0, 0, 0 }, { 25, 25, 2 }, { 25, 25, 2 } }, sizeof PureTDMASchedulerP__Task_character[__nesc_mote]);
  PureTDMASchedulerP__TASK_PERIOD[__nesc_mote] = 0;
  PureTDMASchedulerP__TASK_DEAD[__nesc_mote] = 1;
  PureTDMASchedulerP__TASK_MAXTX[__nesc_mote] = 2;
  memset((void *)&PureTDMASchedulerP__Path[__nesc_mote], 0, sizeof PureTDMASchedulerP__Path[__nesc_mote]);
  PureTDMASchedulerP__PRIMARYPATH[__nesc_mote] = 0;
  PureTDMASchedulerP__BACKUPPATH[__nesc_mote] = 1;
  memset((void *)&PureTDMASchedulerP__rcv_slot[__nesc_mote], 0, sizeof PureTDMASchedulerP__rcv_slot[__nesc_mote]);
  memset((void *)&PureTDMASchedulerP__receive_lock[__nesc_mote], 0, sizeof PureTDMASchedulerP__receive_lock[__nesc_mote]);
  memset((void *)&PureTDMASchedulerP__isFlowroot[__nesc_mote], 0, sizeof PureTDMASchedulerP__isFlowroot[__nesc_mote]);
  memset((void *)&PureTDMASchedulerP__isFlowdest[__nesc_mote], 0, sizeof PureTDMASchedulerP__isFlowdest[__nesc_mote]);
  memset((void *)&PureTDMASchedulerP__Task_rels[__nesc_mote], 0, sizeof PureTDMASchedulerP__Task_rels[__nesc_mote]);
  memset((void *)&PureTDMASchedulerP__e2e_delay_buffer[__nesc_mote], 0, sizeof PureTDMASchedulerP__e2e_delay_buffer[__nesc_mote]);
  memset((void *)&PureTDMASchedulerP__send_status[__nesc_mote], 0, sizeof PureTDMASchedulerP__send_status[__nesc_mote]);
  memset((void *)&PureTDMASchedulerP__Rcv_check_mode[__nesc_mote], 0, sizeof PureTDMASchedulerP__Rcv_check_mode[__nesc_mote]);
  memset((void *)&PureTDMASchedulerP__taskid[__nesc_mote], 0, sizeof PureTDMASchedulerP__taskid[__nesc_mote]);
  memset((void *)&PureTDMASchedulerP__Transmitting_flowid[__nesc_mote], 0, sizeof PureTDMASchedulerP__Transmitting_flowid[__nesc_mote]);
  memset((void *)&PureTDMASchedulerP__My_max_txopper[__nesc_mote], 0, sizeof PureTDMASchedulerP__My_max_txopper[__nesc_mote]);
  memset((void *)&PureTDMASchedulerP__check_link_quality_1[__nesc_mote], 0, sizeof PureTDMASchedulerP__check_link_quality_1[__nesc_mote]);
  memset((void *)&PureTDMASchedulerP__sync[__nesc_mote], 0, sizeof PureTDMASchedulerP__sync[__nesc_mote]);
  memset((void *)&PureTDMASchedulerP__requestStop[__nesc_mote], 0, sizeof PureTDMASchedulerP__requestStop[__nesc_mote]);
  memset((void *)&PureTDMASchedulerP__crt_frame[__nesc_mote], 0, sizeof PureTDMASchedulerP__crt_frame[__nesc_mote]);
  memset((void *)&PureTDMASchedulerP__Total_frame_count[__nesc_mote], 0, sizeof PureTDMASchedulerP__Total_frame_count[__nesc_mote]);
  memset((void *)&PureTDMASchedulerP__Receiving_flag[__nesc_mote], 0, sizeof PureTDMASchedulerP__Receiving_flag[__nesc_mote]);
  PureTDMASchedulerP__Receiving_flow_id[__nesc_mote] = 0;
  PureTDMASchedulerP__kth_job[__nesc_mote] = 0;
  memset((void *)&PureTDMASchedulerP__prev_job_idx[__nesc_mote], 0, sizeof PureTDMASchedulerP__prev_job_idx[__nesc_mote]);
  memset((void *)&PureTDMASchedulerP__Loss_count[__nesc_mote], 0, sizeof PureTDMASchedulerP__Loss_count[__nesc_mote]);
  memset((void *)&PureTDMASchedulerP__Miss_count[__nesc_mote], 0, sizeof PureTDMASchedulerP__Miss_count[__nesc_mote]);
  memset((void *)&PureTDMASchedulerP__temp_interf[__nesc_mote], 0, sizeof PureTDMASchedulerP__temp_interf[__nesc_mote]);
  memset((void *)&PureTDMASchedulerP__temp_dist[__nesc_mote], 0, sizeof PureTDMASchedulerP__temp_dist[__nesc_mote]);

  /* Module LedsP */

  /* Module GenericSlotSenderP__0 */
  memset((void *)&/*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__toSend[__nesc_mote], 0, sizeof /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__toSend[__nesc_mote]);
  memset((void *)&/*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__toSendLen[__nesc_mote], 0, sizeof /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__toSendLen[__nesc_mote]);
  memset((void *)&/*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__state[__nesc_mote], 0, sizeof /*TDMASlotSenderC.TDMASlotSender.GenericSlotSenderP*/GenericSlotSenderP__0__state[__nesc_mote]);

  /* Module AlarmMicro16P__0 */
  /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__alarm[__nesc_mote] = 0;
  /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__zero[__nesc_mote] = 0;
  /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__0__evt[__nesc_mote] = (void *)0;

  /* Module CounterMicro16P */
  memset((void *)&CounterMicro16P__t0[__nesc_mote], 0, sizeof CounterMicro16P__t0[__nesc_mote]);

  /* Module TransformAlarmC__0 */
  memset((void *)&/*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__m_t0[__nesc_mote], 0, sizeof /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__m_t0[__nesc_mote]);
  memset((void *)&/*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__m_dt[__nesc_mote], 0, sizeof /*TDMASlotSenderC.TDMASlotSender.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__0__m_dt[__nesc_mote]);

  /* Module TransformCounterC__0 */
  memset((void *)&/*Counter32khz16C.TransformCounterC*/TransformCounterC__0__m_upper[__nesc_mote], 0, sizeof /*Counter32khz16C.TransformCounterC*/TransformCounterC__0__m_upper[__nesc_mote]);

  /* Module TossimPacketModelC */
  TossimPacketModelC__initialized[__nesc_mote] = FALSE;
  TossimPacketModelC__running[__nesc_mote] = FALSE;
  memset((void *)&TossimPacketModelC__backoffCount[__nesc_mote], 0, sizeof TossimPacketModelC__backoffCount[__nesc_mote]);
  memset((void *)&TossimPacketModelC__neededFreeSamples[__nesc_mote], 0, sizeof TossimPacketModelC__neededFreeSamples[__nesc_mote]);
  TossimPacketModelC__sending[__nesc_mote] = (void *)0;
  TossimPacketModelC__transmitting[__nesc_mote] = FALSE;
  TossimPacketModelC__sendingLength[__nesc_mote] = 0;
  memset((void *)&TossimPacketModelC__destNode[__nesc_mote], 0, sizeof TossimPacketModelC__destNode[__nesc_mote]);
  memset((void *)&TossimPacketModelC__sendEvent[__nesc_mote], 0, sizeof TossimPacketModelC__sendEvent[__nesc_mote]);
  memset((void *)&TossimPacketModelC__cca_enable_flag[__nesc_mote], 0, sizeof TossimPacketModelC__cca_enable_flag[__nesc_mote]);
  TossimPacketModelC__error[__nesc_mote] = 0;

  /* Module GenericSlotterP */
  memset((void *)&GenericSlotterP__slot[__nesc_mote], 0, sizeof GenericSlotterP__slot[__nesc_mote]);
  memset((void *)&GenericSlotterP__slotLength[__nesc_mote], 0, sizeof GenericSlotterP__slotLength[__nesc_mote]);
  memset((void *)&GenericSlotterP__frameLength[__nesc_mote], 0, sizeof GenericSlotterP__frameLength[__nesc_mote]);
  memset((void *)&GenericSlotterP__sync[__nesc_mote], 0, sizeof GenericSlotterP__sync[__nesc_mote]);
  memset((void *)&GenericSlotterP__nextFire[__nesc_mote], 0, sizeof GenericSlotterP__nextFire[__nesc_mote]);

  /* Module AlarmMicro16P__1 */
  /*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__alarm[__nesc_mote] = 0;
  /*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__zero[__nesc_mote] = 0;
  /*GenericSlotterC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__1__evt[__nesc_mote] = (void *)0;

  /* Module TransformAlarmC__1 */
  memset((void *)&/*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__m_t0[__nesc_mote], 0, sizeof /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__m_t0[__nesc_mote]);
  memset((void *)&/*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__m_dt[__nesc_mote], 0, sizeof /*GenericSlotterC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__1__m_dt[__nesc_mote]);

  /* Module TransformCounterC__1 */
  memset((void *)&/*Counter32khz32C.TransformCounterC*/TransformCounterC__1__m_upper[__nesc_mote], 0, sizeof /*Counter32khz32C.TransformCounterC*/TransformCounterC__1__m_upper[__nesc_mote]);

  /* Module SenderDispatcherP */
  memset((void *)&SenderDispatcherP__toSend[__nesc_mote], 0, sizeof SenderDispatcherP__toSend[__nesc_mote]);
  memset((void *)&SenderDispatcherP__toSendLen[__nesc_mote], 0, sizeof SenderDispatcherP__toSendLen[__nesc_mote]);
  memset((void *)&SenderDispatcherP__last_id[__nesc_mote], 0, sizeof SenderDispatcherP__last_id[__nesc_mote]);

  /* Module DummyChannelMonitorC */

  /* Module BeaconSlotP */
  memset((void *)&BeaconSlotP__syncPkt[__nesc_mote], 0, sizeof BeaconSlotP__syncPkt[__nesc_mote]);
  memset((void *)&BeaconSlotP__syncPktLen[__nesc_mote], 0, sizeof BeaconSlotP__syncPktLen[__nesc_mote]);

  /* Module AlarmMicro16P__2 */
  /*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__alarm[__nesc_mote] = 0;
  /*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__zero[__nesc_mote] = 0;
  /*PureTDMASchedulerC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__2__evt[__nesc_mote] = (void *)0;

  /* Module TransformAlarmC__2 */
  memset((void *)&/*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__m_t0[__nesc_mote], 0, sizeof /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__m_t0[__nesc_mote]);
  memset((void *)&/*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__m_dt[__nesc_mote], 0, sizeof /*PureTDMASchedulerC.Alarm32khz32C.TransformAlarmC*/TransformAlarmC__2__m_dt[__nesc_mote]);

  /* Module AlarmMicro16P__3 */
  /*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__alarm[__nesc_mote] = 0;
  /*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__zero[__nesc_mote] = 0;
  /*PureTDMASchedulerC.Alarm32khz16C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__3__evt[__nesc_mote] = (void *)0;

  /* Module TransformAlarmC__3 */
  memset((void *)&/*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__m_t0[__nesc_mote], 0, sizeof /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__m_t0[__nesc_mote]);
  memset((void *)&/*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__m_dt[__nesc_mote], 0, sizeof /*PureTDMASchedulerC.Alarm32khz16C.TransformAlarmC*/TransformAlarmC__3__m_dt[__nesc_mote]);

  /* Module AlarmMicro16P__4 */
  /*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__alarm[__nesc_mote] = 0;
  /*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__zero[__nesc_mote] = 0;
  /*PureTDMASchedulerC.CCAalarm.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__4__evt[__nesc_mote] = (void *)0;

  /* Module TransformAlarmC__4 */
  memset((void *)&/*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__m_t0[__nesc_mote], 0, sizeof /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__m_t0[__nesc_mote]);
  memset((void *)&/*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__m_dt[__nesc_mote], 0, sizeof /*PureTDMASchedulerC.CCAalarm.TransformAlarmC*/TransformAlarmC__4__m_dt[__nesc_mote]);

  /* Module CC2420ControlP */
  memset((void *)&CC2420ControlP__channel[__nesc_mote], 0, sizeof CC2420ControlP__channel[__nesc_mote]);
  memset((void *)&CC2420ControlP__power[__nesc_mote], 0, sizeof CC2420ControlP__power[__nesc_mote]);
  memset((void *)&CC2420ControlP__autoAck[__nesc_mote], 0, sizeof CC2420ControlP__autoAck[__nesc_mote]);
  memset((void *)&CC2420ControlP__hwAutoAck[__nesc_mote], 0, sizeof CC2420ControlP__hwAutoAck[__nesc_mote]);

  /* Module CpmModelC */
  memset((void *)&CpmModelC__outgoing[__nesc_mote], 0, sizeof CpmModelC__outgoing[__nesc_mote]);
  memset((void *)&CpmModelC__requestAck[__nesc_mote], 0, sizeof CpmModelC__requestAck[__nesc_mote]);
  CpmModelC__receiving[__nesc_mote] = 0;
  CpmModelC__rssi[__nesc_mote] = FALSE;
  CpmModelC__outstandingReceptionHead[__nesc_mote] = (void *)0;
  CpmModelC__clearThreshold[__nesc_mote] = -72.0;

  /* Module TossimComPrintfP */

  /* Module ScheduleConfigC */
  memcpy((void *)&ScheduleConfigC__Primarypath[__nesc_mote], (void *)&(unsigned char [4][9]){ { 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 3, 0, 4, 5, 51, 0, 0 }, { 0, 0, 3, 4, 5, 52, 0, 0 } }, sizeof ScheduleConfigC__Primarypath[__nesc_mote]);
  memcpy((void *)&ScheduleConfigC__Backuppath[__nesc_mote], (void *)&(unsigned char [4][9]){ { 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 3, 0, 5, 51, 7, 0, 51 }, { 0, 0, 3, 52, 3, 0, 0, 0 } }, sizeof ScheduleConfigC__Backuppath[__nesc_mote]);
  memcpy((void *)&ScheduleConfigC__flow_destination[__nesc_mote], (void *)&(unsigned char [4]){ 0, 51, 52 }, sizeof ScheduleConfigC__flow_destination[__nesc_mote]);
  memcpy((void *)&ScheduleConfigC__flow_source[__nesc_mote], (void *)&(unsigned char [4]){ 0, 1, 2 }, sizeof ScheduleConfigC__flow_source[__nesc_mote]);

  /* Module QueueC__0 */
  memset((void *)&/*PureTDMASchedulerC.HIQueueC*/QueueC__0__queue[__nesc_mote], 0, sizeof /*PureTDMASchedulerC.HIQueueC*/QueueC__0__queue[__nesc_mote]);
  /*PureTDMASchedulerC.HIQueueC*/QueueC__0__head[__nesc_mote] = 0;
  /*PureTDMASchedulerC.HIQueueC*/QueueC__0__tail[__nesc_mote] = 0;
  /*PureTDMASchedulerC.HIQueueC*/QueueC__0__size[__nesc_mote] = 0;

  /* Module QueueC__1 */
  memset((void *)&/*PureTDMASchedulerC.LOQueueC*/QueueC__1__queue[__nesc_mote], 0, sizeof /*PureTDMASchedulerC.LOQueueC*/QueueC__1__queue[__nesc_mote]);
  /*PureTDMASchedulerC.LOQueueC*/QueueC__1__head[__nesc_mote] = 0;
  /*PureTDMASchedulerC.LOQueueC*/QueueC__1__tail[__nesc_mote] = 0;
  /*PureTDMASchedulerC.LOQueueC*/QueueC__1__size[__nesc_mote] = 0;

  /* Module SyncReceiveAdapterP */

  /* Module SyncSendAdapterP */

  /* Module TossimActiveMessageC */
  memset((void *)&TossimActiveMessageC__buffer[__nesc_mote], 0, sizeof TossimActiveMessageC__buffer[__nesc_mote]);
  TossimActiveMessageC__bufferPointer[__nesc_mote] = &TossimActiveMessageC__buffer[__nesc_mote];

  /* Module ActiveMessageAddressC */
  ActiveMessageAddressC__set[__nesc_mote] = FALSE;
  memset((void *)&ActiveMessageAddressC__addr[__nesc_mote], 0, sizeof ActiveMessageAddressC__addr[__nesc_mote]);

  /* Module AMQueueEntryP__0 */

  /* Module AMQueueImplP__0 */
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[__nesc_mote] = 1;
  memset((void *)&/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[__nesc_mote], 0, sizeof /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[__nesc_mote]);
  memset((void *)&/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[__nesc_mote], 0, sizeof /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[__nesc_mote]);

  /* Module AlarmMicro16P__5 */
  /*TestNetworkAppC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__5__zero[__nesc_mote] = 0;
  /*TestNetworkAppC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__5__evt[__nesc_mote] = (void *)0;

  /* Module TransformAlarmC__5 */

  /* Module SSTdmaSlotSenderP__0 */
  memset((void *)&/*TestNetworkAppC.SSTdmaSlotSenderC.SSTdmaSlotSenderP*/SSTdmaSlotSenderP__0__toSend[__nesc_mote], 0, sizeof /*TestNetworkAppC.SSTdmaSlotSenderC.SSTdmaSlotSenderP*/SSTdmaSlotSenderP__0__toSend[__nesc_mote]);
  memset((void *)&/*TestNetworkAppC.SSTdmaSlotSenderC.SSTdmaSlotSenderP*/SSTdmaSlotSenderP__0__toSendLen[__nesc_mote], 0, sizeof /*TestNetworkAppC.SSTdmaSlotSenderC.SSTdmaSlotSenderP*/SSTdmaSlotSenderP__0__toSendLen[__nesc_mote]);
  memset((void *)&/*TestNetworkAppC.SSTdmaSlotSenderC.SSTdmaSlotSenderP*/SSTdmaSlotSenderP__0__state[__nesc_mote], 0, sizeof /*TestNetworkAppC.SSTdmaSlotSenderC.SSTdmaSlotSenderP*/SSTdmaSlotSenderP__0__state[__nesc_mote]);

  /* Module AlarmMicro16P__6 */
  /*TestNetworkAppC.SSTdmaSlotSenderC.Alarm32khz32C.AlarmMicro16C.AlarmMicro16P*/AlarmMicro16P__6__zero[__nesc_mote] = 0;

  /* Module TransformAlarmC__6 */

  /* Module RandomMlcgC */
  memset((void *)&RandomMlcgC__seed[__nesc_mote], 0, sizeof RandomMlcgC__seed[__nesc_mote]);

}
