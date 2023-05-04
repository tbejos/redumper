#pragma once



#include <cstdint>

import cd;



namespace gpsxre
{

class Scrambler
{
public:
	Scrambler();
	bool Descramble(uint8_t *sector, int32_t *lba, uint32_t size = CD_DATA_SIZE) const;
	void Process(uint8_t *output, const uint8_t *data, uint32_t offset, uint32_t size) const;

private:
	uint8_t _table[CD_DATA_SIZE];

	void GenerateTable();
};

}
