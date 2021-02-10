#pragma once
#include "Zone.h"
#include "ZoneUSEastern.h"
#include "ZoneUSCentral.h"
#include "ZoneUSMountain.h"
#include "ZoneUSPacific.h"

enum class ZoneIds
{
	USCentral,
	USPacific,
	USMountain,
	USEastern
};

class ZoneFactory
{
public:
	static Zone* createZone(ZoneIds id)
	{
		switch (id)
		{
		case ZoneIds::USEastern:
			return new ZoneUSEastern();
		case ZoneIds::USCentral:
			return new ZoneUSCentral();
		case ZoneIds::USMountain:
			return new ZoneUSMountain();
		case ZoneIds::USPacific:
			return new ZoneUSPacific();
		default:
			return NULL;
		}
	}
};