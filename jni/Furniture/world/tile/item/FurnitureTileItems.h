#pragma once

#include "MCPE/world/item/TileItem.h"

class FurnitureTileItems : public TileItem {
public:
	static FurnitureTileItems* tileItemTableWood;
	static FurnitureTileItems* tileItemTableStone;
	static FurnitureTileItems* tileItemChairWood;
	static FurnitureTileItems* tileItemChairStone;

	FurnitureTileItems(int id) : TileItem(id - 256){};
};