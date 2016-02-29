#define FILE_DEVICE_STRACE_TRAP      0x004D3D57

#define IOCTL_GET_SYSCALL_NUM              (ULONG) CTL_CODE(FILE_DEVICE_STRACE_TRAP, 0x00, METHOD_BUFFERED, FILE_WRITE_ACCESS)
#define IOCTL_STRACE_INIT                  (ULONG) CTL_CODE(FILE_DEVICE_STRACE_TRAP, 0x01, METHOD_BUFFERED, FILE_WRITE_ACCESS)
#define IOCTL_REPORT_SYSCALL_NAMES         (ULONG) CTL_CODE(FILE_DEVICE_STRACE_TRAP, 0x02, METHOD_BUFFERED, FILE_WRITE_ACCESS)

#define IOCTL_TRANSFER_TYPE( _iocontrol)   (_iocontrol & 0x3)
