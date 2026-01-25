#ifndef GUARD_REGIONS_H
#define GUARD_REGIONS_H

<<<<<<< HEAD
#include "global.h"
#include "constants/regions.h"

enum KantoSubRegion GetKantoSubregion(u32 mapSecId);

static inline enum Region GetRegionForSectionId(u32 sectionId)
{
    if (sectionId >= KANTO_MAPSEC_START && sectionId < MAPSEC_SPECIAL_AREA)
        return REGION_KANTO;
    return REGION_HOENN;
}

static inline enum Region GetCurrentRegion(void)
{
    return GetRegionForSectionId(gMapHeader.regionMapSectionId);
}

=======
#include "constants/regions.h"

static inline u32 GetCurrentRegion(void)
{
    // TODO: Since there's no current multi-region support, we have this constant for the purposes of regional form comparisons.
    return REGION_HOENN;
}

>>>>>>> 11d8f44022 (Updated to upcoming)
#endif // GUARD_REGIONS_H
