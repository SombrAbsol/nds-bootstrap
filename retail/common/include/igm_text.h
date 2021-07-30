#ifndef IGM_TEXT_H
#define IGM_TEXT_H

#include "locations.h"

struct IgmText {
	u16 version[20];
	u16 ndsBootstrap[14];
	u16 ramViewer[20];
	u16 jumpAddress[20];
	u16 selectBank[20];
	u16 count[14];
	u16 menu[7][20];
	u16 options[10][20];
	bool rtl;
	u16 hotkey;
	u8 currentScreenshot;
	u8 battery;
};

#endif // IGM_TEXT_H
