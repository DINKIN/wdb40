#ifndef _WDB40_TYPES_H_
#define _WDB40_TYPES_H_


#define WDB40_MAX_STRING_SIZE				256

#define WDB40_DEVICE_TYPE_AR71XX			"ar71xx"
#define WDB40_DEVICE_TYPE_RAMIPS			"ramips"

#define WDB40_IWINFO_DEVICE_NAME_AR71XX		"radio0"
#define WDB40_IWINFO_DEVICE_NAME_RAMIPS		"ra0"


// status types to check
typedef enum e_Wdb40NetworkIntfType {
	WDB40_NETWORK_WIRELESS 		= 0,
	WDB40_NETWORK_INTF_WWAN,
	WDB40_NUM_NETWORK_INTFS
} eWdb40NetworkIntfType;


// network modes
typedef enum e_Wdb40NetworkMode {
	WDB40_NETWORK_MODE_UNKNOWN 	= 0,
	WDB40_NETWORK_AP,
	WDB40_NETWORK_STA,
	WDB40_NUM_NETWORK_MODES
} eWdb40NetworkMode;

// encryption types
typedef enum e_Wdb40NetworkEncryptionType {
	WDB40_ENCRYPTION_UNKNOWN 			= 0,
	WDB40_ENCRYPTION_NONE,
	WDB40_ENCRYPTION_WEP,
	WDB40_ENCRYPTION_PSK2,
	WDB40_ENCRYPTION_PSK,
	WDB40_NUM_ENCRYPTION_TYPES
} eWdb40NetworkEncryptionType;

typedef enum e_Wdb40NetworkEncryptionSubtype {
	WDB40_ENCRYPTION_WEP_OPEN_SHARED	= WDB40_NUM_ENCRYPTION_TYPES,
	WDB40_ENCRYPTION_WEP_OPEN,
	WDB40_ENCRYPTION_WEP_SHARED_AUTH,
	WDB40_ENCRYPTION_WPA_MIXED,
	WDB40_ENCRYPTION_WPA2,
	WDB40_ENCRYPTION_WPA,
	WDB40_NUM_ENCRYPTION_SUBTYPES
} eWdb40NetworkEncryptionSubtype;

// encryption ciphers
typedef enum e_Wdb40NetworkEncryptionCipher {
	WDB40_ENCRYPTION_CIPHER_NONE		= 0,
	WDB40_ENCRYPTION_CIPHER_WEP_40,
	WDB40_ENCRYPTION_CIPHER_WEP_104,
	WDB40_ENCRYPTION_CIPHER_TKIP,
	WDB40_ENCRYPTION_CIPHER_CCMP,
	WDB40_ENCRYPTION_CIPHER_WRAP,
	WDB40_ENCRYPTION_CIPHER_AES_OCB,
	WDB40_ENCRYPTION_CIPHER_CKIP,
	WDB40_NUM_ENCRYPTION_CIPHERS
} eWdb40NetworkEncryptionCipher;

// encryption suites
typedef enum e_Wdb40NetworkEncryptionSuite {
	WDB40_ENCRYPTION_SUITE_NONE		= 0,
	WDB40_ENCRYPTION_SUITE_PSK,
	WDB40_ENCRYPTION_SUITE_802_1X,
	WDB40_NUM_ENCRYPTION_SUITES
} eWdb40NetworkEncryptionSuite;



#endif // _WDB40_TYPES_H_

