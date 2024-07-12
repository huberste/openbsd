/*
 * Copyright (c) 2024 Stefan Huber <stefan_huber@genua.de>
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

/* structure to the NVM modules in ixl chips.
 * See Intel Ethernet Controller X710/XXV710/XL710 Datasheet
 * (332464-026, Rev 4.1, June 2022) Figure 3-9 "Flash high level map"
 */
struct ixl_nvm_data {
	uint8_t *vpdbank_1;	//   64KB
	uint8_t *vpdbank_2;	//   64KB
	uint8_t *emp_img;	// 1160KB
	uint8_t *oprom;		// 1160KB
	uint8_t *1st_free;	// 1160KB
	uint8_t *pci_analog;	//    8KB
	uint8_t *phy_analog;	//    8KB
	uint8_t *emp_global;	//    8KB
	uint8_t *emp_settings;	//    8KB
	uint8_t *mng;		//    8KB
	uint8_t *2nd_free;	//    8KB
	uint8_t *scratch;	//   16KB
	/* scratch area actually is 4KB per port */
};
