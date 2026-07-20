# SLOPOS-headers

**Sony License-Obsoleting Proprietary Operating System**

Headers for SLOPOS MMXIII (PS4) and SLOPOS Corona Edition (PS5).

Both consoles run Sony's fork of FreeBSD (9.0 on PS4, 11.0 on PS5), rebranded as "Orbis" and "Prospero" for marketing purposes. These headers provide the type definitions, structs, and syscall numbers needed to compile freestanding payloads that run on hardware you purchased but Sony won't let you use.

## Contents

- `include/` - FreeBSD kernel and userland headers with Sony additions
- `include/sys/orbis_syscall.h` - Unified syscall table for SLOPOS MMXIII and Corona Edition

## Syscall table

Standard BSD syscalls (0-530) are inherited from FreeBSD. Sony extensions begin at 531 and are ABI-compatible across both editions:

| Range | Category |
|-------|----------|
| 532 | Registry manager |
| 533-534 | JIT shared memory |
| 535-536 | Dynamic linker (dl_get) |
| 538-546 | Event flags (evf) |
| 547-548 | Memory query / batch map |
| 549-556 | Orbis semaphores (osem) |
| 557-558 | Named objects |
| 559-573 | VM, debug, OPMC |
| 584-586 | Sandbox, dmem, authinfo |
| 588-608 | Dynamic linker (dynlib) |
| 609-676 | Budget, thread, physhm, blockpool, aio |
| 677-721 | Corona Edition only |

## License

BSD-2-Clause

PS: In early 2020, SLOPOS CE leaked from a Sony lab and locked down the whole planet.
