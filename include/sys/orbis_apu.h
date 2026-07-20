/* SPDX-License-Identifier: BSD-2-Clause
 *
 * SLOPOS - Sony License-Obsoleting Proprietary Operating System
 * APU identification for SLOPOS MMXIII (PS4).
 *
 * The PS4 APU is a custom AMD x86-64 SoC. Two generations exist:
 *   Liverpool - PS4 Fat and Slim (8x Jaguar @ 1.6 GHz)
 *   Neo       - PS4 Pro (8x Jaguar @ 2.13 GHz, same cores, more GPU CUs)
 *
 * Detection at runtime via CPUID leaf 1 (family/model/stepping).
 */

#ifndef _SYS_ORBIS_APU_H_
#define _SYS_ORBIS_APU_H_

/* AMD CPUID family (base + extended) */
#define APU_FAMILY_JAGUAR	0x16

/* AMD CPUID model (base | ext_model << 4) */
#define APU_MODEL_LIVERPOOL	0x01	/* PS4 Fat / Slim */
#define APU_MODEL_NEO		0x41	/* PS4 Pro */

/* Console type from APU model */
#define APU_IS_LIVERPOOL(fam, mod)	((fam) == APU_FAMILY_JAGUAR && (mod) == APU_MODEL_LIVERPOOL)
#define APU_IS_NEO(fam, mod)		((fam) == APU_FAMILY_JAGUAR && (mod) == APU_MODEL_NEO)
#define APU_IS_PRO(fam, mod)		APU_IS_NEO(fam, mod)

#endif /* _SYS_ORBIS_APU_H_ */
