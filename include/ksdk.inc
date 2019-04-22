// golden
// 6/12/2018
//

/* functions */
KFUNC(0x30B7D0, Xfast_syscall, void, (void));
KFUNC(0x149F20, copyin, int, (const void *uaddr, void *kaddr, uint64_t len));
KFUNC(0x149E40, copyout, int, (const void *kaddr, void *uaddr, uint64_t len));
KFUNC(0x017F30, printf, int, (const char *fmt, ... ));
KFUNC(0x017FA0, vprintf, int, (const char *fmt, va_list arg));
KFUNC(0x3F85C0, malloc, void *, (uint64_t size, void *type, int flags));
KFUNC(0x3F87A0, free, void, (void *addr, void *type));
KFUNC(0x149D40, memcpy, void *, (void *dest, const void *src, uint64_t num));
KFUNC(0x304DD0, memset, void *, (void *ptr, int value, uint64_t num));
KFUNC(0x244EE0, memcmp, int, (const void *ptr1, const void *ptr2, uint64_t num));
KFUNC(0x16DF30, kmem_alloc, void *, (struct vm_map *map, uint64_t size));
KFUNC(0x353720, strlen, uint64_t, (const char *str));
KFUNC(0x2635A0, pause, void, (const char *wmesg, int timo));
KFUNC(0x465B20, kthread_add, int, (void (*func)(void *), void *arg, struct proc *procp, struct thread **newtdpp, int flags, int pages, const char *fmt, ...));
KFUNC(0x465DF0, kthread_exit, void, (void));
KFUNC(0x0719F0, sched_prio, void, (struct thread *td, uint16_t prio));
KFUNC(0x071D20, sched_add, void, (struct thread *td, uint64_t cpuset));
KFUNC(0x2638C0, kern_yield, void, (uint64_t p));
KFUNC(0x284B70, fill_regs, int, (struct thread *td, struct reg *rg));
KFUNC(0x284CA0, set_regs, int, (struct thread *td, struct reg *rg));
KFUNC(0x2EEED0, create_thread, int, (struct thread * td, uint64_t ctx, void (*start_func)(void *), void *arg, char *stack_base, uint64_t stack_size, char *tls_base, long *child_tid, long *parent_tid, uint64_t flags, uint64_t rtp));
KFUNC(0x465590, kproc_create, int, (void (*func)(void *), void *arg, struct proc **newpp, int flags, int pages, const char *fmt, ...));
KFUNC(0x466470, kthread_set_affinity, void, (const char *tdname, uint64_t prio, uint64_t cpuset, uint64_t unknown)); // custom name
KFUNC(0x466210, kthread_suspend_check, void, (void));
KFUNC(0x466320, kproc_kthread_add, int, (void (*func)(void *), void *arg, struct proc **procptr, struct thread **tdptr, int flags, int pages, char * procname, const char *fmt, ...));
KFUNC(0x390720, sx_init_flags, void, (struct sx *sx, const char *description, int opts));
KFUNC(0x390850, sx_xlock, void, (struct sx *sx));
KFUNC(0x3909E0, sx_xunlock, void, (struct sx *sx));
KFUNC(0x3102C0, mtx_init, void, (struct mtx *mutex, const char *name, const char *type, int opts));
KFUNC(0x30FC70, mtx_lock_spin_flags, void, (struct mtx *mutex, int flags));
KFUNC(0x30FE30, mtx_unlock_spin_flags, void, (struct mtx *mutex, int flags));
KFUNC(0x30F8A0, mtx_lock_sleep, void, (struct mtx *mutex, int flags));
KFUNC(0x30FB40, mtx_unlock_sleep, void, (struct mtx *mutex, int flags));
KFUNC(0x098EE0, kern_reboot, int, (int magic));
KFUNC(0x392ED0, vm_map_lock_read, void, (struct vm_map *map));
KFUNC(0x393A90, vm_map_lookup_entry, int, (struct vm_map *map, uint64_t address, struct vm_map_entry **entries));
KFUNC(0x392F20, vm_map_unlock_read, void, (struct vm_map *map));
KFUNC(0x392D00, vmspace_acquire_ref, struct vmspace *, (struct proc *p));
KFUNC(0x392B30, vmspace_free, void, (struct vmspace *vm));
KFUNC(0x3955B0, vm_map_delete, int, (struct vm_map *map, uint64_t start, uint64_t end));
KFUNC(0x397680, vm_map_protect, int, (struct vm_map * map, uint64_t start, uint64_t end, int new_prot, uint64_t set_max));
KFUNC(0x395CB0, vm_map_findspace, int, (struct vm_map * map, uint64_t start, uint64_t length, uint64_t *addr));
KFUNC(0x393D90, vm_map_insert, int, (struct vm_map * map, uint64_t object, uint64_t offset, uint64_t start, uint64_t end, int prot, int max, int cow));
KFUNC(0x392D60, vm_map_lock, void, (struct vm_map * map));
KFUNC(0x392DD0, vm_map_unlock, void, (struct vm_map * map));
KFUNC(0x17BDD0, proc_rwmem, int, (struct proc *p, struct uio *uio));

/* data */
KDATA(0x199FC18, disable_console_output, uint8_t);
KDATA(0x199BB80, M_TEMP, void);
KDATA(0x1B39218, kernel_map, void *);
KDATA(0x1042AB0, prison0, void *);
KDATA(0x21B89E0, rootvnode, void *);
KDATA(0x1ADF718, allproc, struct proc *);
KDATA(0x1034790, sysents, struct sysent);
