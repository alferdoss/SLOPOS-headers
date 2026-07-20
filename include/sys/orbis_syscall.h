/* SPDX-License-Identifier: BSD-2-Clause
 *
 * SLOPOS - Sony License-Obsoleting Proprietary Operating System
 * Unified syscall table for SLOPOS MMXIII (PS4) and SLOPOS Corona Edition (PS5).
 *
 * Sony extensions to the FreeBSD syscall table begin at 531.
 * Syscall ABI is shared between both editions.
 */

#ifndef _SYS_ORBIS_SYSCALL_H_
#define _SYS_ORBIS_SYSCALL_H_

/* ── Standard BSD syscalls (FreeBSD 9/11 base) ─────────────────────── */

#define SYS_syscall			0
#define SYS_exit			1
#define SYS_fork			2
#define SYS_read			3
#define SYS_write			4
#define SYS_open			5
#define SYS_close			6
#define SYS_wait4			7
#define SYS_unlink			10
#define SYS_chdir			12
#define SYS_chmod			15
#define SYS_getpid			20
#define SYS_setuid			23
#define SYS_getuid			24
#define SYS_geteuid			25
#define SYS_recvmsg			27
#define SYS_sendmsg			28
#define SYS_recvfrom			29
#define SYS_accept			30
#define SYS_getpeername			31
#define SYS_getsockname			32
#define SYS_access			33
#define SYS_chflags			34
#define SYS_fchflags			35
#define SYS_sync			36
#define SYS_kill			37
#define SYS_getppid			39
#define SYS_dup				41
#define SYS_getegid			43
#define SYS_profil			44
#define SYS_getgid			47
#define SYS_getlogin			49
#define SYS_setlogin			50
#define SYS_sigaltstack			53
#define SYS_ioctl			54
#define SYS_reboot			55
#define SYS_revoke			56
#define SYS_execve			59
#define SYS_msync			65
#define SYS_munmap			73
#define SYS_mprotect			74
#define SYS_madvise			75
#define SYS_mincore			78
#define SYS_getgroups			79
#define SYS_setgroups			80
#define SYS_setitimer			83
#define SYS_getitimer			86
#define SYS_getdtablesize		89
#define SYS_dup2			90
#define SYS_fcntl			92
#define SYS_select			93
#define SYS_fsync			95
#define SYS_setpriority			96
#define SYS_socket			97
#define SYS_connect			98
#define SYS_netcontrol			99
#define SYS_getpriority			100
#define SYS_netabort			101
#define SYS_netgetsockinfo		102
#define SYS_bind			104
#define SYS_setsockopt			105
#define SYS_listen			106
#define SYS_socketex			113
#define SYS_socketclose			114
#define SYS_gettimeofday		116
#define SYS_getrusage			117
#define SYS_getsockopt			118
#define SYS_readv			120
#define SYS_writev			121
#define SYS_settimeofday		122
#define SYS_fchmod			124
#define SYS_netgetiflist		125
#define SYS_setreuid			126
#define SYS_setregid			127
#define SYS_rename			128
#define SYS_flock			131
#define SYS_sendto			133
#define SYS_shutdown			134
#define SYS_socketpair			135
#define SYS_mkdir			136
#define SYS_rmdir			137
#define SYS_utimes			138
#define SYS_adjtime			140
#define SYS_kqueueex			141
#define SYS_setsid			147
#define SYS_stat			188
#define SYS_fstat			189
#define SYS_lstat			190
#define SYS_pathconf			191
#define SYS_fpathconf			192
#define SYS_getrlimit			194
#define SYS_setrlimit			195
#define SYS_getdirentries		196
#define SYS___sysctl			202
#define SYS_mlock			203
#define SYS_munlock			204
#define SYS_futimes			206
#define SYS_poll			209
#define SYS_getdents			272
#define SYS_preadv			289
#define SYS_pwritev			290
#define SYS_getsid			310
#define SYS_aio_suspend			315
#define SYS_clock_gettime		232
#define SYS_clock_settime		233
#define SYS_clock_getres		234
#define SYS_ktimer_create		235
#define SYS_ktimer_delete		236
#define SYS_ktimer_settime		237
#define SYS_ktimer_gettime		238
#define SYS_ktimer_getoverrun		239
#define SYS_nanosleep			240
#define SYS_rfork			251
#define SYS_issetugid			253
#define SYS_kqueue			362
#define SYS_kevent			363
#define SYS_mtypeprotect		379
#define SYS_uuidgen			392
#define SYS_sendfile			393
#define SYS_fstatfs			397
#define SYS_ksem_close			400
#define SYS_ksem_post			401
#define SYS_ksem_wait			402
#define SYS_ksem_trywait		403
#define SYS_ksem_init			404
#define SYS_ksem_open			405
#define SYS_ksem_unlink			406
#define SYS_ksem_getvalue		407
#define SYS_ksem_destroy		408
#define SYS_sigaction			416
#define SYS_sigreturn			417
#define SYS_getcontext			421
#define SYS_setcontext			422
#define SYS_swapcontext			423
#define SYS_sigwait			429
#define SYS_thr_create			430
#define SYS_thr_exit			431
#define SYS_thr_self			432
#define SYS_thr_kill			433
#define SYS_ksem_timedwait		441
#define SYS_thr_suspend			442
#define SYS_thr_wake			443
#define SYS_kldunloadf			444
#define SYS__umtx_op			454
#define SYS_thr_new			455
#define SYS_sigqueue			456
#define SYS_thr_set_name		464
#define SYS_rtprio_thread		466
#define SYS_pread			475
#define SYS_pwrite			476
#define SYS_mmap			477
#define SYS_lseek			478
#define SYS_truncate			479
#define SYS_ftruncate			480
#define SYS_thr_kill2			481
#define SYS_shm_open			482
#define SYS_shm_unlink			483
#define SYS_cpuset_getid		486
#define SYS_cpuset_getaffinity		487
#define SYS_cpuset_setaffinity		488
#define SYS_openat			499
#define SYS___cap_rights_get		515
#define SYS_pselect			522
#define SYS_sigprocmask			340
#define SYS_sigsuspend			341
#define SYS_sigpending			343
#define SYS_sigtimedwait		345
#define SYS_sigwaitinfo			346
#define SYS_mlockall			324
#define SYS_munlockall			325
#define SYS___getcwd			326
#define SYS_sched_setparam		327
#define SYS_sched_getparam		328
#define SYS_sched_setscheduler		329
#define SYS_sched_getscheduler		330
#define SYS_sched_yield			331
#define SYS_sched_get_priority_max	332
#define SYS_sched_get_priority_min	333
#define SYS_sched_rr_get_interval	334

/* ── Sony Orbis/Prospero extensions (531+) ─────────────────────────── */

/* Registry manager */
#define SYS_regmgr_call			532

/* JIT shared memory */
#define SYS_jitshm_create		533
#define SYS_jitshm_alias		534

/* Dynamic linker (get_list/get_info, no load) */
#define SYS_dl_get_list			535
#define SYS_dl_get_info			536

/* Event flags */
#define SYS_evf_create			538
#define SYS_evf_delete			539
#define SYS_evf_open			540
#define SYS_evf_close			541
#define SYS_evf_wait			542
#define SYS_evf_trywait		543
#define SYS_evf_set			544
#define SYS_evf_clear			545
#define SYS_evf_cancel			546

/* Memory */
#define SYS_query_memory_protection	547
#define SYS_batch_map			548

/* Orbis semaphores */
#define SYS_osem_create			549
#define SYS_osem_delete			550
#define SYS_osem_open			551
#define SYS_osem_close			552
#define SYS_osem_wait			553
#define SYS_osem_trywait		554
#define SYS_osem_post			555
#define SYS_osem_cancel			556

/* Named objects */
#define SYS_namedobj_create		557
#define SYS_namedobj_delete		558

/* VM / debug */
#define SYS_set_vm_container		559
#define SYS_debug_init			560
#define SYS_opmc_enable			563
#define SYS_opmc_disable		564
#define SYS_opmc_set_ctl		565
#define SYS_opmc_set_ctr		566
#define SYS_opmc_get_ctr		567
#define SYS_virtual_query		572
#define SYS_mdbg_call			573

/* Sandbox / budget */
#define SYS_is_in_sandbox		584
#define SYS_dmem_container		585
#define SYS_get_authinfo		586

/* Dynamic linker (full) */
#define SYS_mname			588
#define SYS_dynlib_dlopen		589
#define SYS_dynlib_dlclose		590
#define SYS_dynlib_dlsym		591
#define SYS_dynlib_get_list		592
#define SYS_dynlib_get_info		593
#define SYS_dynlib_load_prx		594
#define SYS_dynlib_unload_prx		595
#define SYS_dynlib_do_copy_relocations	596
#define SYS_dynlib_get_proc_param	598
#define SYS_dynlib_process_needed_and_relocate 599

/* Paths / debug */
#define SYS_sandbox_path		600
#define SYS_mdbg_service		601
#define SYS_randomized_path		602
#define SYS_rdup			603
#define SYS_dl_get_metadata		604

/* Dev / auth */
#define SYS_is_development_mode		606
#define SYS_get_self_auth_info		607
#define SYS_dynlib_get_info_ex		608
#define SYS_budget_getid		609
#define SYS_budget_get_ptype		610
#define SYS_get_paging_stats_of_all_threads 611
#define SYS_get_proc_type_info		612
#define SYS_get_resident_count		613
#define SYS_get_resident_fmem_count	615

/* Thread */
#define SYS_thr_get_name		616
#define SYS_set_gpo			617
#define SYS_get_paging_stats_of_all_objects 618
#define SYS_test_debug_rwmem		619
#define SYS_free_stack			620
#define SYS_ipmimgr_call		622
#define SYS_get_gpo			623
#define SYS_get_vm_map_timestamp	624
#define SYS_opmc_set_hw			625
#define SYS_opmc_get_hw			626
#define SYS_get_cpu_usage_all		627
#define SYS_mmap_dmem			628
#define SYS_physhm_open			629
#define SYS_physhm_unlink		630
#define SYS_thr_suspend_ucontext	632
#define SYS_thr_resume_ucontext		633
#define SYS_thr_get_ucontext		634
#define SYS_thr_set_ucontext		635
#define SYS_set_timezone_info		636
#define SYS_set_phys_fmem_limit		637
#define SYS_utc_to_localtime		638
#define SYS_localtime_to_utc		639
#define SYS_set_uevt			640
#define SYS_get_cpu_usage_proc		641
#define SYS_get_map_statistics		642
#define SYS_set_chicken_switches	643
#define SYS_get_kernel_mem_statistics	646
#define SYS_get_sdk_compiled_version	647
#define SYS_app_state_change		648
#define SYS_dynlib_get_obj_member	649
#define SYS_process_terminate		652
#define SYS_blockpool_open		653
#define SYS_blockpool_map		654
#define SYS_blockpool_unmap		655
#define SYS_dynlib_get_info_for_libdbg	656
#define SYS_blockpool_batch		657
#define SYS_fdatasync			658
#define SYS_dynlib_get_list2		659
#define SYS_dynlib_get_info2		660
#define SYS_aio_submit			661
#define SYS_aio_multi_delete		662
#define SYS_aio_multi_wait		663
#define SYS_aio_multi_poll		664
#define SYS_aio_get_data		665
#define SYS_aio_multi_cancel		666
#define SYS_get_bio_usage_all		667
#define SYS_aio_create			668
#define SYS_aio_submit_cmd		669
#define SYS_aio_init			670
#define SYS_get_page_table_stats	671
#define SYS_dynlib_get_list_for_libdbg	672
#define SYS_blockpool_move		673
#define SYS_virtual_query_all		674
#define SYS_reserve_2mb_page		675
#define SYS_cpumode_yield		676

/* ── PS5 (Prospero) only ───────────────────────────────────────────── */

#define SYS_wait6			677
#define SYS_cap_rights_limit		678
#define SYS_cap_ioctls_limit		679
#define SYS_cap_ioctls_get		680
#define SYS_cap_fcntls_limit		681
#define SYS_cap_fcntls_get		682
#define SYS_bindat			683
#define SYS_connectat			684
#define SYS_chflagsat			685
#define SYS_accept4			686
#define SYS_pipe2			687
#define SYS_aio_mlock			688
#define SYS_procctl			689
#define SYS_ppoll			690
#define SYS_futimens			691
#define SYS_utimensat			692
#define SYS_numa_getaffinity		693
#define SYS_numa_setaffinity		694
#define SYS_apr_submit			700
#define SYS_apr_resolve			701
#define SYS_apr_stat			702
#define SYS_apr_wait			703
#define SYS_apr_ctrl			704
#define SYS_get_phys_page_size		705
#define SYS_begin_app_mount		706
#define SYS_end_app_mount		707
#define SYS_fsc2h_ctrl			708
#define SYS_streamwrite			709
#define SYS_app_save			710
#define SYS_app_restore			711
#define SYS_saved_app_delete		712
#define SYS_get_ppr_sdk_compiled_version 713
#define SYS_notify_app_event		714
#define SYS_ioreq			715
#define SYS_openintr			716
#define SYS_dl_get_info_2		717
#define SYS_acinfo_add			718
#define SYS_acinfo_delete		719
#define SYS_acinfo_get_all_for_coredump	720
#define SYS_ampr_ctrl_debug		721

/* Custom kexec syscall (patched by GoldHEN at slot 11) */
#define SYS_kexec			11

#endif /* _SYS_ORBIS_SYSCALL_H_ */
