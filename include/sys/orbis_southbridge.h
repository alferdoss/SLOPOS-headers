/* SPDX-License-Identifier: BSD-2-Clause
 *
 * SLOPOS - Sony License-Obsoleting Proprietary Operating System
 * Southbridge identification for SLOPOS MMXIII (PS4).
 *
 * The PS4 southbridge is a separate Marvell ARM SoC connected to the
 * main APU via PCIe x4. Three major revisions exist: Aeolia, Belize,
 * and Baikal. Detection at runtime via sysctlbyname("hw.sce_subsys_subid").
 *
 * ID format: 0x00FFRRSS
 *   FF = family (01=Aeolia, 02=Belize, 03=Baikal, 04=Belize2)
 *   RR = revision
 *   SS = sub-revision
 */

#ifndef _SYS_ORBIS_SOUTHBRIDGE_H_
#define _SYS_ORBIS_SOUTHBRIDGE_H_

/* Southbridge family IDs (byte 2 of hw.sce_subsys_subid) */
#define SB_FAMILY_AEOLIA	0x01
#define SB_FAMILY_BELIZE	0x02
#define SB_FAMILY_BAIKAL	0x03
#define SB_FAMILY_BELIZE2	0x04

/* Full southbridge IDs as returned by hw.sce_subsys_subid */
#define SB_AEOLIA_A0		0x010100
#define SB_AEOLIA_A1		0x010200
#define SB_AEOLIA_A2		0x010300
#define SB_BELIZE_A0		0x020100
#define SB_BELIZE_B0		0x020200
#define SB_BAIKAL_A0		0x030100
#define SB_BAIKAL_B0		0x030200
#define SB_BAIKAL_B1		0x030201
#define SB_BELIZE2_A0		0x040100

/* CXD chip markings */
/* Aeolia:   CXD90025G  - PS4 Fat CUH-1000/1100 */
/* Belize:   CXD90036G  - PS4 Fat CUH-1200, early Slim/Pro (CUH-7000) */
/* Belize 2: CXD90046GG - mid Slim/Pro (CUH-7100, CUH-2200) */
/* Baikal:   CXD90042GG - late Slim/Pro (CUH-7100+, CUH-2200+) */

/* UART base addresses per southbridge family */
#define SB_UART_AEOLIA		0xD0340000	/* Aeolia + Belize + Belize2 */
#define SB_UART_BAIKAL		0xC890E000	/* Baikal only */

/* Extract family from hw.sce_subsys_subid */
#define SB_GET_FAMILY(id)	(((id) >> 16) & 0xFF)
#define SB_GET_REVISION(id)	(((id) >> 8) & 0xFF)
#define SB_GET_SUBREV(id)	((id) & 0xFF)

/* UART address for a given southbridge ID */
#define SB_UART_ADDR(id) \
	(SB_GET_FAMILY(id) == SB_FAMILY_BAIKAL ? SB_UART_BAIKAL : SB_UART_AEOLIA)

#endif /* _SYS_ORBIS_SOUTHBRIDGE_H_ */
