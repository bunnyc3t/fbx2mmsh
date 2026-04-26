#pragma once
#include <cstdint> // Woopsie!

#pragma pack(push, 1)

struct MeshHeader {
   uint32_t magic;
   uint32_t version;
   uint32_t numVerts;
}; 

#pragma pack(pop)
