/*	$FreeBSD$	*/

/*
 * THIS FILE AUTOMATICALLY GENERATED.  DO NOT EDIT.
 *
 * generated from:
 *	FreeBSD: src/sys/dev/pccard/pccarddevs,v 1.7 2001/01/20 01:41:25 imp Exp 
 */
/* $NetBSD: pcmciadevs,v 1.107 2000/12/20 06:05:13; haya Exp $ */

/*-
 * Copyright (c) 1998 The NetBSD Foundation, Inc.
 * All rights reserved.
 *
 * This code is derived from software contributed to The NetBSD Foundation
 * by Christos Zoulas.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *        This product includes software developed by the NetBSD
 *        Foundation, Inc. and its contributors.
 * 4. Neither the name of The NetBSD Foundation nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE NETBSD FOUNDATION, INC. AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE FOUNDATION OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

/*
 * List of known PCMCIA vendors
 */

#define	PCCARD_VENDOR_FUJITSU	0x0004	/* Fujitsu Corporation */
#define	PCCARD_VENDOR_PANASONIC	0x0032	/* Matsushita Electric Industrial Co. */
#define	PCCARD_VENDOR_SANDISK	0x0045	/* Sandisk Corporation */
#define	PCCARD_VENDOR_NEWMEDIA	0x0057	/* New Media Corporation */
#define	PCCARD_VENDOR_INTEL	0x0089	/* Intel */
#define	PCCARD_VENDOR_IBM	0x00a4	/* IBM Corporation */
#define	PCCARD_VENDOR_MOTOROLA	0x0109	/* Motorola Corporation */
#define	PCCARD_VENDOR_3COM	0x0101	/* 3Com Corporation */
#define	PCCARD_VENDOR_MEGAHERTZ	0x0102	/* Megahertz Corporation */
#define	PCCARD_VENDOR_SOCKET	0x0104	/* Socket Communications */
#define	PCCARD_VENDOR_TDK	0x0105	/* TDK Corporation */
#define	PCCARD_VENDOR_XIRCOM	0x0105	/* Xircom */
#define	PCCARD_VENDOR_SMC	0x0108	/* Standard Microsystems Corporation */
#define	PCCARD_VENDOR_USROBOTICS	0x0115	/* US Robotics Corporation */
#define	PCCARD_VENDOR_MEGAHERTZ2	0x0128	/* Megahertz Corporation */
#define	PCCARD_VENDOR_OLICOM	0x0121	/* Olicom */
#define	PCCARD_VENDOR_ADAPTEC	0x012f	/* Adaptec Corporation */
#define	PCCARD_VENDOR_COMPAQ	0x0138	/* Compaq */
#define	PCCARD_VENDOR_LINKSYS	0x0149	/* Linksys Corporation */
#define	PCCARD_VENDOR_SIMPLETECH	0x014d	/* Simple Technology */
#define	PCCARD_VENDOR_LUCENT	0x0156	/* Lucent Technologies */
#define	PCCARD_VENDOR_AIRONET	0x015f	/* Aironet Wireless Communications */
#define	PCCARD_VENDOR_COMPAQ2	0x0183	/* Compaq */
#define	PCCARD_VENDOR_KINGSTON	0x0186	/* Kingston */
#define	PCCARD_VENDOR_DAYNA	0x0194	/* Dayna Corporation */
#define	PCCARD_VENDOR_RAYTHEON	0x01a6	/* Raytheon */
#define	PCCARD_VENDOR_IODATA	0x01bf	/* I-O DATA */
#define	PCCARD_VENDOR_BAY	0x01eb	/* Bay Networks */
#define	PCCARD_VENDOR_FARALLON	0x0200	/* Farallon Communications */
#define	PCCARD_VENDOR_TELECOMDEVICE	0x021b	/* Telecom Device */
#define	PCCARD_VENDOR_NOKIA	0x023d	/* Nokia Communications */
#define	PCCARD_VENDOR_SAMSUNG	0x0250	/* Samsung */
#define	PCCARD_VENDOR_LASAT	0x3401	/* Lasat Communications A/S */
#define	PCCARD_VENDOR_LEXARMEDIA	0x4e01	/* Lexar Media */
#define	PCCARD_VENDOR_COMPEX	0x8a01	/* Compex Corporation */
#define	PCCARD_VENDOR_MELCO	0x8a01	/* Melco Corporation */
#define	PCCARD_VENDOR_CONTEC	0xc001	/* Contec */
#define	PCCARD_VENDOR_MACNICA	0xc00b	/* MACNICA */
#define	PCCARD_VENDOR_COREGA	0xc00f	/* Corega K.K. */
#define	PCCARD_VENDOR_ALLIEDTELESIS	0xc00f	/* Allied Telesis K.K. */
#define	PCCARD_VENDOR_HAGIWARASYSCOM	0xc012	/* Hagiwara SYS-COM */
#define	PCCARD_VENDOR_RATOC	0xc015	/* RATOC System Inc. */
#define	PCCARD_VENDOR_ELSA	0xd601	/* Elsa */

/*
 * List of known products.  Grouped by vendor.
 */

/* Adaptec Products */
#define	PCCARD_CIS_ADAPTEC_APA1460	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_ADAPTEC_APA1460	0x0001
#define	PCCARD_STR_ADAPTEC_APA1460	"Adaptec APA-1460 SlimSCSI"
#define	PCCARD_CIS_ADAPTEC_APA1460A	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_ADAPTEC_APA1460A	0x0002
#define	PCCARD_STR_ADAPTEC_APA1460A	"Adaptec APA-1460A SlimSCSI"

/* 3COM Products */
#define	PCCARD_CIS_3COM_3CRWE737A	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_3COM_3CRWE737A	0x0001
#define	PCCARD_STR_3COM_3CRWE737A	"3Com AirConnect Wireless LAN"
#define	PCCARD_CIS_3COM_3C1	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_3COM_3C1	0x0cf1
#define	PCCARD_STR_3COM_3C1	"3Com Megahertz 3C1 10Mbps LAN CF+ Card"
#define	PCCARD_CIS_3COM_3C562	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_3COM_3C562	0x0562
#define	PCCARD_STR_3COM_3C562	"3Com 3c562 33.6 Modem/10Mbps Ethernet"
#define	PCCARD_CIS_3COM_3C589	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_3COM_3C589	0x0589
#define	PCCARD_STR_3COM_3C589	"3Com 3c589 10Mbps Ethernet"
#define	PCCARD_CIS_3COM_3C574	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_3COM_3C574	0x0574
#define	PCCARD_STR_3COM_3C574	"3Com 3c574-TX 10/100Mbps Ethernet"
#define	PCCARD_CIS_3COM_3CXM056BNW	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_3COM_3CXM056BNW	0x002f
#define	PCCARD_STR_3COM_3CXM056BNW	"3Com/NoteWorthy 3CXM056-BNW 56K Modem"
#define	PCCARD_CIS_3COM_3CXEM556	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_3COM_3CXEM556	0x0035
#define	PCCARD_STR_3COM_3CXEM556	"3Com/Megahertz 3CXEM556 Ethernet/Modem"
#define	PCCARD_CIS_3COM_3CXEM556INT	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_3COM_3CXEM556INT	0x003d
#define	PCCARD_STR_3COM_3CXEM556INT	"3Com/Megahertz 3CXEM556-INT Ethernet/Modem"
#define	PCCARD_CIS_3COM_3CCFEM556BI	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_3COM_3CCFEM556BI	0x0556
#define	PCCARD_STR_3COM_3CCFEM556BI	"3Com/Megahertz 3CCFEM556BI Ethernet/Modem"

/* Compaq Products */
#define	PCCARD_CIS_COMPAQ2_CPQ_10_100	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_COMPAQ2_CPQ_10_100	0x010a
#define	PCCARD_STR_COMPAQ2_CPQ_10_100	"Compaq Netelligent 10/100 Ethernet"

/* Compex Products */
#define	PCCARD_CIS_COMPEX_LINKPORT_ENET_B	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_COMPEX_LINKPORT_ENET_B	0x0100
#define	PCCARD_STR_COMPEX_LINKPORT_ENET_B	"Compex Linkport ENET-B Ethernet"

/* Lasat Products */
#define	PCCARD_CIS_LASAT_CREDIT_288	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_LASAT_CREDIT_288	0x2811
#define	PCCARD_STR_LASAT_CREDIT_288	"Lasat Credit 288 Modem"

/* Dayna Products */
#define	PCCARD_CIS_DAYNA_COMMUNICARD_E_1	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_DAYNA_COMMUNICARD_E_1	0x002d
#define	PCCARD_STR_DAYNA_COMMUNICARD_E_1	"Dayna CommuniCard E"
#define	PCCARD_CIS_DAYNA_COMMUNICARD_E_2	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_DAYNA_COMMUNICARD_E_2	0x002f
#define	PCCARD_STR_DAYNA_COMMUNICARD_E_2	"Dayna CommuniCard E"

/* DIGITAL Products */
#define	PCCARD_CIS_DIGITAL_MOBILE_MEDIA_CDROM	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_DIGITAL_MOBILE_MEDIA_CDROM	0x0d00
#define	PCCARD_STR_DIGITAL_MOBILE_MEDIA_CDROM	"Digital Mobile Media CD-ROM"

/* ELSA Products */
#define	PCCARD_CIS_ELSA_MC2_IEEE	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_ELSA_MC2_IEEE	0x0001
#define	PCCARD_STR_ELSA_MC2_IEEE	"AirLancer MC-2 IEEE"
#define	PCCARD_CIS_ELSA_XI300_IEEE	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_ELSA_XI300_IEEE	0x0002
#define	PCCARD_STR_ELSA_XI300_IEEE	"XI300 Wireless LAN"

/* Fujutsu Products */
#define	PCCARD_CIS_FUJITSU_SCSI600	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_FUJITSU_SCSI600	0x0401
#define	PCCARD_STR_FUJITSU_SCSI600	"Fujitsu SCSI 600 Interface"

/* Motorola Products */
#define	PCCARD_CIS_MOTOROLA_POWER144	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_MOTOROLA_POWER144	0x0105
#define	PCCARD_STR_MOTOROLA_POWER144	"Motorola Power 14.4 Modem"
#define	PCCARD_CIS_MOTOROLA_PM100C	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_MOTOROLA_PM100C	0x0302
#define	PCCARD_STR_MOTOROLA_PM100C	"Motorola Personal Messenger 100C CDPD Modem"

/* Kingston Products */
#define	PCCARD_CIS_KINGSTON_KNE2	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_KINGSTON_KNE2	0x0100
#define	PCCARD_STR_KINGSTON_KNE2	"Kingston KNE-PC2 Ethernet"

/* Fujitsu Products */
#define	PCCARD_CIS_FUJITSU_LA501	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_FUJITSU_LA501	0x2000
#define	PCCARD_STR_FUJITSU_LA501	"Fujitsu Towa LA501 Ethernet"
#define	PCCARD_CIS_FUJITSU_LA10S	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_FUJITSU_LA10S	0x1003
#define	PCCARD_STR_FUJITSU_LA10S	"Fujitsu Compact Flash Ethernet"

/* IBM Products */
#define	PCCARD_CIS_IBM_MICRODRIVE	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_IBM_MICRODRIVE	0x0000
#define	PCCARD_STR_IBM_MICRODRIVE	"IBM Microdrive"
#define	PCCARD_CIS_IBM_3270	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_IBM_3270	0x0001
#define	PCCARD_STR_IBM_3270	"IBM 3270 Emulation"
#define	PCCARD_CIS_IBM_INFOMOVER	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_IBM_INFOMOVER	0x0002
#define	PCCARD_STR_IBM_INFOMOVER	"IBM InfoMover"
#define	PCCARD_CIS_IBM_5250	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_IBM_5250	0x000b
#define	PCCARD_STR_IBM_5250	"IBM 5250 Emulation"
#define	PCCARD_CIS_IBM_TROPIC	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_IBM_TROPIC	0x001e
#define	PCCARD_STR_IBM_TROPIC	"IBM Token Ring 4/16"
#define	PCCARD_CIS_IBM_PORTABLE_CDROM	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_IBM_PORTABLE_CDROM	0x002d
#define	PCCARD_STR_IBM_PORTABLE_CDROM	"IBM PCMCIA Portable CD-ROM Drive"
#define	PCCARD_CIS_IBM_HOME_AND_AWAY	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_IBM_HOME_AND_AWAY	0x002e
#define	PCCARD_STR_IBM_HOME_AND_AWAY	"IBM Home and Away Modem"
#define	PCCARD_CIS_IBM_WIRELESS_LAN_ENTRY	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_IBM_WIRELESS_LAN_ENTRY	0x0032
#define	PCCARD_STR_IBM_WIRELESS_LAN_ENTRY	"IBM Wireless LAN Entry"
#define	PCCARD_CIS_IBM_ETHERJET	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_IBM_ETHERJET	0x003f
#define	PCCARD_STR_IBM_ETHERJET	"IBM EtherJet Ethernet"

/* Intel Products */
#define	PCCARD_CIS_INTEL_EEPRO100	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_INTEL_EEPRO100	0x010a
#define	PCCARD_STR_INTEL_EEPRO100	"Intel EtherExpress PRO/100"

/* I-O DATA */
#define	PCCARD_CIS_IODATA_PCLATE	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_IODATA_PCLATE	0x2216
#define	PCCARD_STR_IODATA_PCLATE	"I-O DATA PCLA/TE"

/* Farallon */
#define	PCCARD_CIS_FARALLON_SKYLINE	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_FARALLON_SKYLINE	0x0a01
#define	PCCARD_STR_FARALLON_SKYLINE	"SkyLINE Wireless"

/* Lexar Media */
#define	PCCARD_CIS_LEXARMEDIA_COMPACTFLASH	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_LEXARMEDIA_COMPACTFLASH	0x0100
#define	PCCARD_STR_LEXARMEDIA_COMPACTFLASH	"Lexar Media CompactFlash"

/* Linksys corporation */
#define	PCCARD_CIS_LINKSYS_ETHERFAST	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_LINKSYS_ETHERFAST	0x0230
#define	PCCARD_STR_LINKSYS_ETHERFAST	"Linksys Etherfast 10/100 Ethernet"
#define	PCCARD_CIS_LINKSYS_ECARD_1	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_LINKSYS_ECARD_1	0x0265
#define	PCCARD_STR_LINKSYS_ECARD_1	"Linksys EthernetCard or D-Link DE-650"
#define	PCCARD_CIS_LINKSYS_COMBO_ECARD	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_LINKSYS_COMBO_ECARD	0xc1ab
#define	PCCARD_STR_LINKSYS_COMBO_ECARD	"Linksys Combo EthernetCard"
#define	PCCARD_CIS_LINKSYS_TRUST_COMBO_ECARD	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_LINKSYS_TRUST_COMBO_ECARD	0x021b
#define	PCCARD_STR_LINKSYS_TRUST_COMBO_ECARD	"Trust (Linksys) Combo EthernetCard"

/* Megahertz Products */
#define	PCCARD_CIS_MEGAHERTZ_XJ4288	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_MEGAHERTZ_XJ4288	0x0023
#define	PCCARD_STR_MEGAHERTZ_XJ4288	"Megahertz XJ4288 Modem"
#define	PCCARD_CIS_MEGAHERTZ_XJ4336	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_MEGAHERTZ_XJ4336	0x0027
#define	PCCARD_STR_MEGAHERTZ_XJ4336	"Megahertz XJ4336 Modem"
#define	PCCARD_CIS_MEGAHERTZ_XJ5560	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_MEGAHERTZ_XJ5560	0x0034
#define	PCCARD_STR_MEGAHERTZ_XJ5560	"Megahertz X-JACK 56kbps Modem"
#define	PCCARD_CIS_MEGAHERTZ2_XJACK	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_MEGAHERTZ2_XJACK	0x0103
#define	PCCARD_STR_MEGAHERTZ2_XJACK	"Megahertz X-JACK Ethernet"
#define	PCCARD_CIS_MEGAHERTZ_XJEM3336	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_MEGAHERTZ_XJEM3336	0x0006
#define	PCCARD_STR_MEGAHERTZ_XJEM3336	"Megahertz X-JACK Ethernet Modem"

/* Melco Products */
#define	PCCARD_CIS_MELCO_LPC3_TX	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_MELCO_LPC3_TX	0xc1ab
#define	PCCARD_STR_MELCO_LPC3_TX	"Melco LPC3-TX"

/* Nokia Products */
#define	PCCARD_CIS_NOKIA_C020_WLAN	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_NOKIA_C020_WLAN	0x20c0
#define	PCCARD_STR_NOKIA_C020_WLAN	"Nokia C020 WLAN Card"

/* Olicom Products */
#define	PCCARD_CIS_OLICOM_TR	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_OLICOM_TR	0x2132
#define	PCCARD_STR_OLICOM_TR	"GoCard Token Ring 16/4"

/* Panasonic Products */
#define	PCCARD_CIS_PANASONIC_KXLC002	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_PANASONIC_KXLC002	0x0304
#define	PCCARD_STR_PANASONIC_KXLC002	"Panasonic 4X CD-ROM Interface Card"
#define	PCCARD_CIS_PANASONIC_KXLC003	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_PANASONIC_KXLC003	0x0504
#define	PCCARD_STR_PANASONIC_KXLC003	"Panasonic 8X CD-ROM Interface Card"

/* US Robotics Products */
#define	PCCARD_CIS_USROBOTICS_WORLDPORT144	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_USROBOTICS_WORLDPORT144	0x3330
#define	PCCARD_STR_USROBOTICS_WORLDPORT144	"US Robotics WorldPort 14.4 Modem"

/* Sandisk Products */
#define	PCCARD_CIS_SANDISK_SDCFB	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_SANDISK_SDCFB	0x0401
#define	PCCARD_STR_SANDISK_SDCFB	"Sandisk CompactFlash Card"

/* Simple Technology Products */
#define	PCCARD_CIS_SIMPLETECH_COMMUNICATOR288	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_SIMPLETECH_COMMUNICATOR288	0x0100
#define	PCCARD_STR_SIMPLETECH_COMMUNICATOR288	"Simple Technology 28.8 Communicator"
/* Simpletech ID also used by Symbol */
#define	PCCARD_CIS_SIMPLETECH_SPECTRUM24	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_SIMPLETECH_SPECTRUM24	0x801
#define	PCCARD_STR_SIMPLETECH_SPECTRUM24	"Symbol Spectrum24 WLAN Adapter"

/* Socket Communications Products */
#define	PCCARD_CIS_SOCKET_PAGECARD	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_SOCKET_PAGECARD	0x0003
#define	PCCARD_STR_SOCKET_PAGECARD	"Socket Communications PageCard"
#define	PCCARD_CIS_SOCKET_DUAL_RS232	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_SOCKET_DUAL_RS232	0x0006
#define	PCCARD_STR_SOCKET_DUAL_RS232	"Socket Communications Dual RS232"
#define	PCCARD_CIS_SOCKET_LP_ETHER_CF	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_SOCKET_LP_ETHER_CF	0x0075
#define	PCCARD_STR_SOCKET_LP_ETHER_CF	"Socket Communications LP-E CF"
#define	PCCARD_CIS_SOCKET_LP_ETHER	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_SOCKET_LP_ETHER	0x000d
#define	PCCARD_STR_SOCKET_LP_ETHER	"Socket Communications LP-E"

/* TDK Products */
#define	PCCARD_CIS_TDK_LAK_CD021BX	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_TDK_LAK_CD021BX	0x0200
#define	PCCARD_STR_TDK_LAK_CD021BX	"TDK LAK-CD021BX Ethernet"
#define	PCCARD_CIS_TDK_DFL9610	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_TDK_DFL9610	0x0d0a
#define	PCCARD_STR_TDK_DFL9610	"TDK DFL9610 Ethernet & Digital Cellular"
#define	PCCARD_CIS_TDK_LAK_CF010	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_TDK_LAK_CF010	0x0900
#define	PCCARD_STR_TDK_LAK_CF010	"TDK LAC-CF010"

/* Xircom Products */
#define	PCCARD_CIS_XIRCOM_CE	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_XIRCOM_CE	0x0108
#define	PCCARD_STR_XIRCOM_CE	"Xircom CreditCard Ethernet"
#define	PCCARD_CIS_XIRCOM_CE2	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_XIRCOM_CE2	0x010b
#define	PCCARD_STR_XIRCOM_CE2	"Xircom CreditCard Ethernet II"
#define	PCCARD_CIS_XIRCOM_CE3	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_XIRCOM_CE3	0x010a
#define	PCCARD_STR_XIRCOM_CE3	"Xircom CreditCard 10/100 Ethernet"
#define	PCCARD_CIS_XIRCOM_CEM	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_XIRCOM_CEM	0x110a
#define	PCCARD_STR_XIRCOM_CEM	"Xircom CreditCard Ethernet + Modem"
#define	PCCARD_CIS_XIRCOM_CEM28	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_XIRCOM_CEM28	0x110b
#define	PCCARD_STR_XIRCOM_CEM28	"Xircom CreditCard Ethernet + Modem 28"
#define	PCCARD_CIS_XIRCOM_CEM33	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_XIRCOM_CEM33	0x110b
#define	PCCARD_STR_XIRCOM_CEM33	"Xircom CreditCard Ethernet + Modem 33"
#define	PCCARD_CIS_XIRCOM_CEM56	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_XIRCOM_CEM56	0x110b
#define	PCCARD_STR_XIRCOM_CEM56	"Xircom CreditCard Ethernet + Modem 56"
#define	PCCARD_CIS_XIRCOM_REM56	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_XIRCOM_REM56	0x110a
#define	PCCARD_STR_XIRCOM_REM56	"Xircom RealPort Ethernet 10/100 + Modem 56"
#define	PCCARD_CIS_XIRCOM_CNW_801	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_XIRCOM_CNW_801	0x0801
#define	PCCARD_STR_XIRCOM_CNW_801	"Xircom CreditCard Netwave (Canada)"
#define	PCCARD_CIS_XIRCOM_CNW_802	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_XIRCOM_CNW_802	0x0802
#define	PCCARD_STR_XIRCOM_CNW_802	"Xircom CreditCard Netwave (US)"

/* New Media Products */
#define	PCCARD_CIS_NEWMEDIA_BASICS	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_NEWMEDIA_BASICS	0x0019
#define	PCCARD_STR_NEWMEDIA_BASICS	"New Media BASICS Ethernet"
#define	PCCARD_CIS_NEWMEDIA_BUSTOASTER	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_NEWMEDIA_BUSTOASTER	0xc102
#define	PCCARD_STR_NEWMEDIA_BUSTOASTER	"New Media BusToaster SCSI Host Adapter"

/* Standard Microsystems Corporation Products */
#define	PCCARD_CIS_SMC_8016	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_SMC_8016	0x0105
#define	PCCARD_STR_SMC_8016	"SMC 8016 EtherCard"
#define	PCCARD_CIS_SMC_EZCARD	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_SMC_EZCARD	0x8022
#define	PCCARD_STR_SMC_EZCARD	"SMC EZCard 10 PCMCIA"

/* Contec C-NET(PC) */
#define	PCCARD_CIS_CONTEC_CNETPC	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_CONTEC_CNETPC	0x0000
#define	PCCARD_STR_CONTEC_CNETPC	"Contec C-NET(PC)C"

/* Allied Telesis K.K. */
#define	PCCARD_CIS_ALLIEDTELESIS_LA_PCM	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_ALLIEDTELESIS_LA_PCM	0x0002
#define	PCCARD_STR_ALLIEDTELESIS_LA_PCM	"Allied Telesis LA-PCM"

/* RATOC System Inc. Products */
#define	PCCARD_CIS_RATOC_REX_R280	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_RATOC_REX_R280	0x1
#define	PCCARD_STR_RATOC_REX_R280	"RATOC REX-R280"

/* Lucent WaveLAN/IEEE */
#define	PCCARD_CIS_LUCENT_WAVELAN_IEEE	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_LUCENT_WAVELAN_IEEE	0x0002
#define	PCCARD_STR_LUCENT_WAVELAN_IEEE	"WaveLAN/IEEE"

/* Aironet */
#define	PCCARD_CIS_AIRONET_PC4500	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_AIRONET_PC4500	0x0005
#define	PCCARD_STR_AIRONET_PC4500	"Aironet PC4500 Wireless LAN Adapter"
#define	PCCARD_CIS_AIRONET_PC4800	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_AIRONET_PC4800	0x0007
#define	PCCARD_STR_AIRONET_PC4800	"Aironet PC4800 Wireless LAN Adapter"

/* Bay Networks */
#define	PCCARD_CIS_BAY_STACK_650	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_BAY_STACK_650	0x0804
#define	PCCARD_STR_BAY_STACK_650	"BayStack 650 Wireless LAN"
#define	PCCARD_CIS_BAY_SURFER_PRO	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_BAY_SURFER_PRO	0x0806
#define	PCCARD_STR_BAY_SURFER_PRO	"AirSurfer Pro Wireless LAN"
#define	PCCARD_CIS_BAY_STACK_660	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_BAY_STACK_660	0x0807
#define	PCCARD_STR_BAY_STACK_660	"BayStack 660 Wireless LAN"

/* Raylink/WebGear */
#define	PCCARD_CIS_RAYTHEON_WLAN	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_RAYTHEON_WLAN	0x0000
#define	PCCARD_STR_RAYTHEON_WLAN	"WLAN Adapter"

/* RATOC System Inc. Products */
#define	PCCARD_CIS_RATOC_REX_R280	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_RATOC_REX_R280	0x1
#define	PCCARD_STR_RATOC_REX_R280	"RATOC REX-R280"

/* Samsung */
#define	PCCARD_CIS_SAMSUNG_SWL_2000N	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_SAMSUNG_SWL_2000N	0x02
#define	PCCARD_STR_SAMSUNG_SWL_2000N	"Samsung MagicLAN SWL-2000N"

/* Telecom Device */
#define	PCCARD_CIS_TELECOMDEVICE_TCD_HPC100	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_TELECOMDEVICE_TCD_HPC100	0x0202
#define	PCCARD_STR_TELECOMDEVICE_TCD_HPC100	"Telecom Device TCD-HPC100"

/* MACNICA */
#define	PCCARD_CIS_MACNICA_ME1_JEIDA	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_MACNICA_ME1_JEIDA	0x3300
#define	PCCARD_STR_MACNICA_ME1_JEIDA	"MACNICA ME1 for JEIDA"

/* Cards we know only by their cis */
#define	PCCARD_VENDOR_PREMAX	-1	/* Premax */
#define	PCCARD_VENDOR_PLANET	-1	/* Planet */
#define	PCCARD_VENDOR_PLANEX	-1	/* Planex Communications Inc */
#define	PCCARD_VENDOR_DLINK	-1	/* D-Link */
#define	PCCARD_VENDOR_RPTI	-1	/* RPTI */
#define	PCCARD_VENDOR_ACCTON	-1	/* ACCTON */
#define	PCCARD_VENDOR_YEDATA	-1	/* Y-E DATA */
#define	PCCARD_VENDOR_DIGITAL	-1	/* Digital Equipment Corporation */
#define	PCCARD_VENDOR_TEAC	-1	/* TEAC */
#define	PCCARD_VENDOR_SVEC	-1	/* SVEC/Hawking Technology */
#define	PCCARD_VENDOR_NAKAGAWAMETAL	-1	/* NAKAGAWA METAL */
#define	PCCARD_VENDOR_AMBICOM	-1	/* AmbiCom Inc */
#define	PCCARD_VENDOR_EPSON	-1	/* Seiko Epson Corporation */
#define	PCCARD_VENDOR_EXP	-1	/* EXP Computer Inc */
#define	PCCARD_VENDOR_ICOM	-1	/* ICOM Inc */
#define	PCCARD_VENDOR_BILLIONTON	-1	/* Billionton Systems Inc. */
#define	PCCARD_VENDOR_AMD	-1	/* AMD */
#define	PCCARD_VENDOR_INTERSIL	-1	/* Intersil */

#define	PCCARD_CIS_MEGAHERTZ_XJ2288	{ "MEGAHERTZ", "MODEM XJ2288", NULL, NULL }
#define	PCCARD_PRODUCT_MEGAHERTZ_XJ2288	-1
#define	PCCARD_STR_MEGAHERTZ_XJ2288	"Megahertz XJ2288 Modem"
#define	PCCARD_CIS_PREMAX_PE200	{ "PMX   ", "PE-200", NULL, NULL }
#define	PCCARD_PRODUCT_PREMAX_PE200	-1
#define	PCCARD_STR_PREMAX_PE200	"PreMax PE-200"
#define	PCCARD_CIS_PLANET_SMARTCOM2000	{ "PCMCIA", "UE2212", NULL, NULL }
#define	PCCARD_PRODUCT_PLANET_SMARTCOM2000	-1
#define	PCCARD_STR_PLANET_SMARTCOM2000	"Planet SmartCOM 2000"
/*
 * vendor ID of both FNW-3600-T and FNW-3700-T is LINKSYS (0x0149) and
 * product ID is 0xc1ab, but it conflicts with LINKSYS Combo EthernetCard.
 */
#define	PCCARD_CIS_PLANEX_FNW3600T	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_PLANEX_FNW3600T	-1
#define	PCCARD_STR_PLANEX_FNW3600T	"Planex FNW-3600-T"
#define	PCCARD_CIS_PLANEX_FNW3700T	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_PLANEX_FNW3700T	-1
#define	PCCARD_STR_PLANEX_FNW3700T	"Planex FNW-3700-T"
#define	PCCARD_CIS_DLINK_DE650	{ "D-Link", "DE-650", NULL, NULL }
#define	PCCARD_PRODUCT_DLINK_DE650	-1
#define	PCCARD_STR_DLINK_DE650	"D-Link DE-650"
#define	PCCARD_CIS_DLINK_DE660	{ "D-Link", "DE-660", NULL, NULL }
#define	PCCARD_PRODUCT_DLINK_DE660	-1
#define	PCCARD_STR_DLINK_DE660	"D-Link DE-660"
#define	PCCARD_CIS_RPTI_EP400	{ "RPTI LTD.", "EP400", "CISV100", NULL }
#define	PCCARD_PRODUCT_RPTI_EP400	-1
#define	PCCARD_STR_RPTI_EP400	"RPTI EP400"
#define	PCCARD_CIS_RPTI_EP401	{ "RPTI", "EP401 Ethernet NE2000 Compatible", NULL, NULL }
#define	PCCARD_PRODUCT_RPTI_EP401	-1
#define	PCCARD_STR_RPTI_EP401	"RPTI EP401"
#define	PCCARD_CIS_ACCTON_EN2212	{ "ACCTON", "EN2212", NULL, NULL }
#define	PCCARD_PRODUCT_ACCTON_EN2212	-1
#define	PCCARD_STR_ACCTON_EN2212	"Accton EN2212"
#define	PCCARD_CIS_YEDATA_EXTERNAL_FDD	{ "Y-E DATA", "External FDD", NULL, NULL }
#define	PCCARD_PRODUCT_YEDATA_EXTERNAL_FDD	-1
#define	PCCARD_STR_YEDATA_EXTERNAL_FDD	"Y-E DATA External FDD"
#define	PCCARD_CIS_DIGITAL_DEPCMXX	{ "DIGITAL", "DEPCM-XX", NULL, NULL }
#define	PCCARD_PRODUCT_DIGITAL_DEPCMXX	-1
#define	PCCARD_STR_DIGITAL_DEPCMXX	"DEC DEPCM-BA"
#define	PCCARD_CIS_TEAC_IDECARDII	{ NULL, "NinjaATA-", NULL, NULL }
#define	PCCARD_PRODUCT_TEAC_IDECARDII	-1
#define	PCCARD_STR_TEAC_IDECARDII	"TEAC IDE Card/II"
#define	PCCARD_CIS_LINKSYS_ECARD_2	{ "LINKSYS", "E-CARD", NULL, NULL }
#define	PCCARD_PRODUCT_LINKSYS_ECARD_2	-1
#define	PCCARD_STR_LINKSYS_ECARD_2	"Linksys E-Card"
#define	PCCARD_CIS_COREGA_ETHER_PCC_T	{ "corega K.K.", "corega Ether PCC-T", NULL, NULL }
#define	PCCARD_PRODUCT_COREGA_ETHER_PCC_T	-1
#define	PCCARD_STR_COREGA_ETHER_PCC_T	"Corega Ether PCC-T"
#define	PCCARD_CIS_COREGA_ETHER_II_PCC_T	{ "corega K.K.", "corega EtherII PCC-T", NULL, NULL }
#define	PCCARD_PRODUCT_COREGA_ETHER_II_PCC_T	-1
#define	PCCARD_STR_COREGA_ETHER_II_PCC_T	"Corega EtherII PCC-T"
#define	PCCARD_CIS_COREGA_FAST_ETHER_PCC_TX	{ "corega K.K.", "corega FastEther PCC-TX", NULL, NULL }
#define	PCCARD_PRODUCT_COREGA_FAST_ETHER_PCC_TX	-1
#define	PCCARD_STR_COREGA_FAST_ETHER_PCC_TX	"Corega FastEther PCC-TX"
#define	PCCARD_CIS_COREGA_WIRELESS_LAN_PCC_11	{ "corega K.K.", "Wireless LAN PCC-11", NULL, NULL }
#define	PCCARD_PRODUCT_COREGA_WIRELESS_LAN_PCC_11	-1
#define	PCCARD_STR_COREGA_WIRELESS_LAN_PCC_11	"Corega Wireless LAN PCC-11"
#define	PCCARD_CIS_SVEC_COMBOCARD	{ "Ethernet", "Adapter", NULL, NULL }
#define	PCCARD_PRODUCT_SVEC_COMBOCARD	-1
#define	PCCARD_STR_SVEC_COMBOCARD	"SVEC/Hawking Tech. Combo Card"
#define	PCCARD_CIS_SVEC_LANCARD	{ "SVEC", "FD605 PCMCIA EtherNet Card", "V1-1", NULL }
#define	PCCARD_PRODUCT_SVEC_LANCARD	-1
#define	PCCARD_STR_SVEC_LANCARD	"SVEC PCMCIA Lan Card"
/*
 * vendor ID of PN650TX is LINKSYS (0x0149) and product ID is 0xc1ab, but
 * it conflicts with LINKSYS Combo EthernetCard.
 */
#define	PCCARD_CIS_SVEC_PN650TX	{ NULL, NULL, NULL, NULL }
#define	PCCARD_PRODUCT_SVEC_PN650TX	-1
#define	PCCARD_STR_SVEC_PN650TX	"SVEC PN650TX 10/100 Dual Speed Fast Ethernet PC Card"
#define	PCCARD_CIS_NAKAGAWAMETAL_LNT10TN	{ "PCMCIA", "LNT-10TN", NULL, NULL }
#define	PCCARD_PRODUCT_NAKAGAWAMETAL_LNT10TN	-1
#define	PCCARD_STR_NAKAGAWAMETAL_LNT10TN	"NAKAGAWA METAL LNT-10TN NE2000 Compatible Card"
#define	PCCARD_CIS_AMBICOM_AMB8002T	{ "AmbiCom Inc", "AMB8002T", NULL, NULL }
#define	PCCARD_PRODUCT_AMBICOM_AMB8002T	-1
#define	PCCARD_STR_AMBICOM_AMB8002T	"AmbiCom AMB8002T"
#define	PCCARD_CIS_IODATA_PCLAT	{ "I-O DATA", "PCLA", "ETHERNET", NULL }
#define	PCCARD_PRODUCT_IODATA_PCLAT	-1
#define	PCCARD_STR_IODATA_PCLAT	"IO-DATA PCLA/T"
#define	PCCARD_CIS_IODATA_CBIDE2	{ "IO DATA", "CBIDE2      ", NULL, NULL }
#define	PCCARD_PRODUCT_IODATA_CBIDE2	-1
#define	PCCARD_STR_IODATA_CBIDE2	"IO-DATA CBIDE2/16-bit mode"
#define	PCCARD_CIS_EPSON_EEN10B	{ "Seiko Epson Corp.", "Ethernet", "P/N: EEN10B Rev. 00", NULL }
#define	PCCARD_PRODUCT_EPSON_EEN10B	-1
#define	PCCARD_STR_EPSON_EEN10B	"Epson EEN10B"
#define	PCCARD_CIS_EXP_EXPMULTIMEDIA	{ "EXP   ", "PnPIDE", "F1", NULL }
#define	PCCARD_PRODUCT_EXP_EXPMULTIMEDIA	-1
#define	PCCARD_STR_EXP_EXPMULTIMEDIA	"EXP IDE/ATAPI DVD Card"
#define	PCCARD_CIS_AMD_AM79C930	{ "AMD", "Am79C930", NULL, NULL }
#define	PCCARD_PRODUCT_AMD_AM79C930	-1
#define	PCCARD_STR_AMD_AM79C930	"AMD Am79C930"
#define	PCCARD_CIS_ICOM_SL200	{ "Icom", "SL-200", NULL, NULL }
#define	PCCARD_PRODUCT_ICOM_SL200	-1
#define	PCCARD_STR_ICOM_SL200	"Icom SL-200"
#define	PCCARD_CIS_XIRCOM_CFE_10	{ "Xircom", "CompactCard Ethernet", "CFE-10", "1.00" }
#define	PCCARD_PRODUCT_XIRCOM_CFE_10	-1
#define	PCCARD_STR_XIRCOM_CFE_10	"Xircom CompactCard CFE-10"
#define	PCCARD_CIS_BILLIONTON_LNT10TN	{ "PCMCIA", "LNT-10TN", NULL, NULL }
#define	PCCARD_PRODUCT_BILLIONTON_LNT10TN	-1
#define	PCCARD_STR_BILLIONTON_LNT10TN	"Billionton Systems Inc. LNT-10TN NE2000 Compatible Card"
#define	PCCARD_CIS_NDC_ND5100_E	{ "NDC", "Ethernet", "A", NULL }
#define	PCCARD_PRODUCT_NDC_ND5100_E	-1
#define	PCCARD_STR_NDC_ND5100_E	"Sohoware ND5100E NE2000 Compatible Card"
#define	PCCARD_CIS_INTERSIL_PRISM2	{ "INTERSIL", "HFA384x/IEEE", "Version 01.02", NULL }
#define	PCCARD_PRODUCT_INTERSIL_PRISM2	-1
#define	PCCARD_STR_INTERSIL_PRISM2	"Intersil Prism II"
#define	PCCARD_CIS_MELCO_LPC2_TX	{ "MELCO", "LPC2-TX", NULL, NULL }
#define	PCCARD_PRODUCT_MELCO_LPC2_TX	-1
#define	PCCARD_STR_MELCO_LPC2_TX	"Melco LPC2-TX"
#define	PCCARD_CIS_SMC_2632W	{ "SMC", "SMC2632W", "Version 01.02", NULL }
#define	PCCARD_PRODUCT_SMC_2632W	-1
#define	PCCARD_STR_SMC_2632W	"SMC 2632 EZ Connect Wireless PC Card"
