class TacBF
{
        class Supply
        {
                // Generates cargo IDs (More effecient broadcasting for these items + their ammo)
                staticWeapons[] = {"RHS_NSV_TriPod_MSV", "RHS_M2StaticMG_WD", "rhs_Metis_9k115_2_msv", "RHS_TOW_TriPod_WD", "rhs_2b14_82mm_msv", "RHS_M252_D"};
                class CargoCollections
                {
                        class statics_west {
                                transportClear = 1;
                                cargo[] = {{"RHS_M2StaticMG_WD", 2, 4}, {"RHS_TOW_TriPod_WD", 1,2}, {"RHS_M252_D", 2, 12}};
                        };
                        class statics_east {
                                transportClear = 1;
                                cargo[] = {{"RHS_NSV_TriPod_MSV", 2, 4}, {"rhs_Metis_9k115_2_msv", 1,2}, {"rhs_2b14_82mm_msv", 2, 12}};
                        };
						
			class rds_westFO {
				transportClear = 1;
				cargo[] = {{"RHS_M2StaticMG_MiniTripod_D", 2, 4}};
			};

			class rds_eastFO {
				transportClear = 1;
				cargo[] = {{"rhsgref_ins_DSHKM_Mini_TriPod", 2, 4}};
			};
                };
		class Containers
		{
			class ICE_ForwardOutpost_container_WestMG
			{
				crateCollection = "rds_westFO";
				crateMass = 1750; 
			};

			class ICE_ForwardOutpost_container_EastMG
			{
				crateCollection = "rds_eastFO";
				crateMass = 1750; 
			};
		};
 
        };
};