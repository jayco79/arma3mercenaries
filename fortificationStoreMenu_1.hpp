    //buyables set/store:
    class fortificationStore_1 {

        //category:
		class fortifications_1 {
            displayName = "Fortifications";
            kindOf = "other";

			class ACE_Sandbag_empty {
                displayName = "ACE Sandbag (empty)";
                description = "The ACE Sandbag (empty) can be utilize with the ACE self interaction menu.";
                price = 0;
                stock = 10000;
				kindOf = Items;
            };
			class Land_BagFence_Corner_F {
                displayName = "Sandbag Wall (Corner)";
                description = "Sandbag Wall (Corner) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 10;
                stock = 200;
				code = [container_1,"Land_BagFence_Corner_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_BagFence_End_F {
                displayName = "Sandbag Wall (End)";
                description = "Sandbag Wall (End) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 10;
                stock = 200;
				code = [container_1,"Land_BagFence_End_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_BagFence_Long_F {
                displayName = "Sandbag Wall (Long)";
                description = "Sandbag Wall (Long) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 20;
                stock = 200;
				code = [container_1,"Land_BagFence_Long_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_BagFence_Round_F {
                displayName = "Sandbag Wall (Round)";
                description = "Sandbag Wall (Round)) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 20;
                stock = 200;
				code = [container_1,"Land_BagFence_Round_F"] call grad_fortifications_fnc_addFort;
            };			
		    class Land_BagFence_Short_F {
                displayName = "Sandbag Wall (Short)";
                description = "Sandbag Wall (Short) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 15;
                stock = 200;
				code = [container_1,"Land_BagFence_Short_F"] call grad_fortifications_fnc_addFort;
            };
			class ACE_ConcertinaWireCoil {
                displayName = "ACE Concertina Wire Coil";
                description = "The ACE Concertina Wire Coil can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 20;
                stock = 10000;
				code = [container_1,"ACE_ConcertinaWireCoil"] call grad_fortifications_fnc_addFort;
            };
			class Land_HBarrier_1_F {
                displayName = "H-barrier (Block)";
                description = "H-barrier (Block) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 100;
                stock = 200;
				code = [container_1,"Land_HBarrier_1_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_HBarrier_3_F {
                displayName = "H-barrier (3 Blocks)";
                description = "H-barrier (3 Blocks) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 300;
                stock = 200;
				code = [container_1,"Land_HBarrier_3_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_HBarrier_5_F {
                displayName = "H-barrier (5 Blocks)";
                description = "H-barrier (5 Blocks) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 500;
                stock = 200;
				code = [container_1,"Land_HBarrier_5_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_HBarrierBig_F {
                displayName = "H-barrier (Big, 4 Blocks)";
                description = "H-barrier (Big, 4 Blocks) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 500;
                stock = 200;
				code = [container_1,"Land_HBarrierBig_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_HBarrierWall4_F {
                displayName = "H-barrier Wall (Short)";
                description = "H-barrier Wall (Short) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 600;
                stock = 200;
				code = [container_1,"Land_HBarrierWall4_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_HBarrierWall6_F {
                displayName = "H-barrier Wall (Long)";
                description = "H-barrier Wall (Long) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 800;
                stock = 200;
				code = [container_1,"Land_HBarrierWall6_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_HBarrierWall_corridor_F {
                displayName = "H-barrier Corridor";
                description = "H-barrier Corridor can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 1000;
                stock = 200;
				code = [container_1,"Land_HBarrierWall_corridor_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_HBarrierWall_corner_F {
                displayName = "H-barrier Wall (Corner)";
                description = "H-barrier Wall (Corner) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 800;
                stock = 200;
				code = [container_1,"Land_HBarrierWall_corner_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_CncBarrier_F {
                displayName = "Concrete Barrier";
                description = "Concrete Barrier can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 200;
                stock = 100;
				code = [container_1,"Land_CncBarrier_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_CncBarrierMedium_F {
                displayName = "Concrete Barrier (Medium)";
                description = "Concrete Barrier (Medium) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 250;
                stock = 100;
				code = [container_1,"Land_CncBarrierMedium_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_CncBarrierMedium4_F {
                displayName = "Concrete Barrier (Medium, Long)";
                description = "Concrete Barrier (Medium, Long) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 300;
                stock = 100;
				code = [container_1,"Land_CncBarrierMedium4_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_CncShelter_F {
                displayName = "Concrete Shelter";
                description = "Concrete Shelter can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 200;
                stock = 100;
				code = [container_1,"Land_CncShelter_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_CncWall1_F {
                displayName = "Concrete Wall";
                description = "Concrete Wall can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 200;
                stock = 100;
				code = [container_1,"Land_CncWall1_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_CncWall4_F {
                displayName = "Concrete Wall (Long)";
                description = "concrete Wall (Long) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 500;
                stock = 100;
				code = [container_1,"Land_CncWall4_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_Concrete_SmallWall_4m_F {
                displayName = "Concrete Wall (Small, 4 m)";
                description = "Concrete Wall (Small, 4 m) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 300;
                stock = 100;
				code = [container_1,"Land_Concrete_SmallWall_4m_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_Concrete_SmallWall_8m_F {
                displayName = "Concrete Wall (Small, 8 m)";
                description = "Concrete Wall (Small, 8 m) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 400;
                stock = 100;
				code = [container_1,"Land_Concrete_SmallWall_8m_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_Crash_barrier_F {
                displayName = "Safety Barrier";
                description = "Safety Barrier can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50;
                stock = 100;
				code = [container_1,"Land_Crash_barrier_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_Mil_WallBig_4m_F {
                displayName = "Military Base Wall";
                description = "Military Base Wall can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 1000;
                stock = 100;
				code = [container_1,"Land_Mil_WallBig_4m_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_Mil_WallBig_Corner_F {
                displayName = "Military Base Wall (Corner)";
                description = "Military Base Wall (Corner) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 1000;
                stock = 100;
				code = [container_1,"Land_Mil_WallBig_Corner_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_Mil_WallBig_Gate_F {
                displayName = "Military Base Wall (Gate)";
                description = "Military Base Wall (Gate) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 1000;
                stock = 100;
				code = [container_1,"Land_Mil_WallBig_Gate_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_BarGate_F {
                displayName = "Bar Gate";
                description = "Bar Gate";
                price = 100;
                stock = 100;
				code = [container_1,"Land_BarGate_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_RoadBarrier_01_F {
                displayName = "Bar Gate (v2)";
                description = "Bar Gate (v2) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 100;
                stock = 100;
				code = [container_1,"Land_RoadBarrier_01_F"] call grad_fortifications_fnc_addFort;
            };
			class RoadBarrier_small_F {
                displayName = "Road Barrier (Small)";
                description = "Road Barrier (Small) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 100;
                stock = 100;
				code = [container_1,"RoadBarrier_small_F"] call grad_fortifications_fnc_addFort;
            };			
			class Land_DragonsTeeth_01_4x2_new_F {
                displayName = "Dragon's Teeth (Row, new)";
                description = "Dragon's Teeth (Row, new) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 500;
                stock = 100;
				code = [container_1,"Land_DragonsTeeth_01_4x2_new_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_CzechHedgehog_01_new_F {
                displayName = "Czech Hedgehog (New)";
                description = "Czech Hedgehog (New) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 100;
                stock = 100;
				code = [container_1,"Land_CzechHedgehog_01_new_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_RampConcrete_F {
                displayName = "Concrete Ramp";
                description = "Concrete Ramp can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 100;
                stock = 100;
				code = [container_1,"Land_RampConcrete_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_RampConcreteHigh_F {
                displayName = "Concrete Ramp (High)";
                description = "Concrete Ramp(High) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 200;
                stock = 100;
				code = [container_1,"Land_RampConcreteHigh_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_Net_Fence_4m_F {
                displayName = "Net Fence";
                description = "Net Fence can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 100;
                stock = 200;
				code = [container_1,"Land_Net_Fence_4m_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_Net_Fence_8m_F {
                displayName = "Net Fence (Long)";
                description = "Net Fence (Long) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 200;
                stock = 200;
				code = [container_1,"Land_Net_Fence_8m_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_Net_Fence_Gate_F {
                displayName = "Net Fence (Gate)";
                description = "Net Fence (Gate) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 200;
                stock = 200;
				code = [container_1,"Land_Net_Fence_Gate_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_Net_Fence_pole_F {
                displayName = "Net Fence (Pole)";
                description = "Net Fence (Pole) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 10;
                stock = 200;
				code = [container_1,"Land_Net_Fence_pole_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_New_WiredFence_5m_F {
                displayName = "Barbed Wire Fence";
                description = "Barbed Wire Fence can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 200;
                stock = 200;
				code = [container_1,"Land_New_WiredFence_5m_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_New_WiredFence_10m_F {
                displayName = "Barbed Wire Fence (Long)";
                description = "Barbed Wire Fence (Long) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 400;
                stock = 200;
				code = [container_1,"Land_New_WiredFence_10m_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_New_WiredFence_pole_F {
                displayName = "Barbed Wire Fence (Pole)";
                description = "Barbed Wire Fence (Pole) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 20;
                stock = 200;
				code = [container_1,"Land_New_WiredFence_pole_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_BagBunker_Small_F {
                displayName = "Bunker (Small)";
                description = "Bunker (Small) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                 price = 500;
                 stock = 100;
				 code = [container_1,"Land_BagBunker_Small_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_BagBunker_Large_F {
                displayName = "Bunker (Large)";
                description = "Bunker (Large) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 1500;
                stock = 200;
				code = [container_1,"Land_BagBunker_Large_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_BagBunker_Tower_F {
                displayName = "Bunker (Tower)";
                description = "Bunker (Tower) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 2000;
                stock = 200;
				code = [container_1,"Land_BagBunker_Tower_F"] call grad_fortifications_fnc_addFort;
			};
			class Land_HBarrierTower_F {
                displayName = "H-barrier Watchtower";
                description = "H-barrier Watchtower can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 3000;
                stock = 200;
				code = [container_1,"Land_HBarrierTower_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_Cargo_House_V1_F {
                displayName = "Military Cargo House (Green)";
                description = "Military Cargo House (Green) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 5000;
                stock = 200;
				code = [container_1,"Land_Cargo_House_V1_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_Cargo_HQ_V1_F {
                displayName = "Military Cargo HQ (Green)";
                description = "Military Cargo HQ (Green) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50000;
                stock = 200;
				code = [container_1,"Land_Cargo_HQ_V1_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_Cargo_Patrol_V1_F {
                displayName = "Military Cargo Post (Green)";
                description = "Military Cargo Post (Green) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 15000;
                stock = 200;
				code = [container_1,"Land_Cargo_Patrol_V1_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_Cargo_Tower_V1_F {
                displayName = "Military Cargo Tower (Green)";
                description = "Military Cargo Tower (Green) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 100000;
                stock = 200;
				code = [container_1,"Land_Cargo_Tower_V1_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_PillboxBunker_01_big_F {
                displayName = "Pillbox (Big)";
                description = "Pillbox (Big) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 10000;
                stock = 200;
				code = [container_1,"Land_PillboxBunker_01_big_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_PillboxBunker_01_hex_F {
                displayName = "Pillbox (Hexagonal)";
                description = "Pillbox (Hexagonal) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 10000;
                stock = 200;
				code = [container_1,"Land_PillboxBunker_01_hex_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_PillboxBunker_01_rectangle_F {
                displayName = "Pillbox (Rectangular)";
                description = "Pillbox (Rectangular) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 10000;
                stock = 200;
				code = [container_1,"Land_PillboxBunker_01_rectangle_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_Bunker_01_small_F {
                displayName = "Land Bunker (Small)";
                description = "Land Bunker (Small) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 10000;
                stock = 200;
				code = [container_1,"Land_Bunker_01_small_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_Bunker_01_big_F {
                displayName = "Land Bunker (Big)";
                description = "Land Bunker (Big) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 20000;
                stock = 200;
				code = [container_1,"Land_Bunker_01_big_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_Bunker_01_tall_F {
                displayName = "Land Bunker (Tall)";
                description = "Land Bunker (Tall) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 40000;
                stock = 200;
				code = [container_1,"Land_Bunker_01_tall_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_Bunker_01_HQ_F {
                displayName = "Land Bunker (HQ)";
                description = "Land Bunker (HQ) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 20000;
                stock = 200;
				code = [container_1,"Land_Bunker_01_HQ_F"] call grad_fortifications_fnc_addFort;
            };
        };
		class Dfortifications {
            displayName = "Lights, Tents, Decorations";
            kindOf = "other";

			class Land_Camping_Light_F {
                displayName = "	Camping Lantern";
                description = "	Camping Lantern can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 20;
                stock = 200;
				code = [container_1,"Land_Camping_Light_F"] call grad_fortifications_fnc_addFort;
            };			
			class Land_PortableLight_single_F {
                displayName = "Portable Lights (Single)";
                description = "Portable Lights (Single) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50;
                stock = 200;
				code = [container_1,"Land_PortableLight_single_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_PortableLight_double_F {
                displayName = "Portable Lights (Double)";
                description = "Portable Lights (Double) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 75;
                stock = 200;
				code = [container_1,"Land_PortableLight_double_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_LampStreet_small_F {
                displayName = "Street Lamp (Small) [on]";
                description = "Street Lamp (Small) [on] can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 1000;
                stock = 200;
				code = [container_1,"Land_LampStreet_small_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_LampAirport_F {
                displayName = "Airport Lamp [on]";
                description = "Airport Lamp [on] can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 5000;
                stock = 200;
				code = [container_1,"Land_LampAirport_F"] call grad_fortifications_fnc_addFort;
            };
			class PortableHelipadLight_01_blue_F {
                displayName = "Portable Helipad Light (Blue)";
                description = "Portable Helipad Light (Blue) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50;
                stock = 200;
				code = [container_1,"PortableHelipadLight_01_blue_F"] call grad_fortifications_fnc_addFort;
            };
			class PortableHelipadLight_01_red_F {
                displayName = "Portable Helipad Light (Red)";
                description = "Portable Helipad Light (Red) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50;
                stock = 200;
				code = [container_1,"PortableHelipadLight_01_red_F"] call grad_fortifications_fnc_addFort;
            };			
		    class CamoNet_BLUFOR_F {
                displayName = "Camouflage Net (Green)";
                description = "Camouflage Net (Green) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 100;
                stock = 200;
				code = [container_1,"CamoNet_BLUFOR_F"] call grad_fortifications_fnc_addFort;
            };
			class CamoNet_BLUFOR_open_F {
                displayName = "Camouflage Net (Open, Green)";
                description = "Camouflage Net (Open, Green) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 100;
                stock = 200;
				code = [container_1,"CamoNet_BLUFOR_open_F"] call grad_fortifications_fnc_addFort;
            };
			class CamoNet_BLUFOR_big_F {
                displayName = "Camouflage Vehicle Cover (Green)";
                description = "Camouflage Vehicle Cover (Green) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 200;
                stock = 200;
				code = [container_1,"CamoNet_BLUFOR_big_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_BeachBooth_01_F {
                displayName = "Beach Booth";
                description = "Beach Booth can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 100;
                stock = 200;
				code = [container_1,"Land_BeachBooth_01_F"] call grad_fortifications_fnc_addFort;
            };
			class MetalBarrel_burning_F {
                displayName = "Metal Barrel (burning)";
                description = "Metal Barrel (burning) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 100;
                stock = 200;
				code = [container_1,"MetalBarrel_burning_F"] call grad_fortifications_fnc_addFort;
            };			
			class Land_BarrelWater_F {
                displayName = "Plastic Barrel (Water)";
                description = "Plastic Barrel (Water) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50;
                stock = 200;
				code = [container_1,"Land_BarrelWater_F"] call grad_fortifications_fnc_addFort;
            };			
			class Land_StallWater_F {
                displayName = "Stall (Water)";
                description = "Stall (Water) can be built with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 100;
                stock = 200;
				code = [container_1,"Land_StallWater_F"] call grad_fortifications_fnc_addFort;
            };
			class StorageBladder_02_water_forest_F {
                displayName = "Water Bladder (Forest)";
                description = "Water Bladder (Forest) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 1000;
                stock = 200;
				code = [container_1,"StorageBladder_02_water_forest_F"] call grad_fortifications_fnc_addFort;
            };		
			class WaterPump_01_forest_F {
                displayName = "Water Pump (Forest)";
                description = "Water Pump (Forest) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 100000;
                stock = 200;
				code = [container_1,"WaterPump_01_forest_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_WaterTank_04_F {
                displayName = "Water Tank (Small, On Stand)";
                description = "Water Tank (Small, On Stand) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50;
                stock = 200;
				code = [container_1,"Land_WaterTank_04_F"] call grad_fortifications_fnc_addFort;
            };			
			class Land_PaperBox_01_small_closed_brown_food_F {
                displayName = "Cardboard Box (Food) [IDAP]";
                description = "Cardboard Box (Food) [IDAP] can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 200;
                stock = 200;
				code = [container_1,"Land_PaperBox_01_small_closed_brown_food_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_HelipadCircle_F {
                displayName = "Helipad (Circle)";
                description = "Helipad (Circle) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50;
                stock = 200;
				code = [container_1,"Land_HelipadCircle_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_PlasticBarrier_01_line_x6_F {
                displayName = "Plastic Barrier (Small, 6)";
                description = "Plastic Barrier (Small, 6) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 20;
                stock = 200;
				code = [container_1,"Land_PlasticBarrier_01_line_x6_F"] call grad_fortifications_fnc_addFort;
            };			
			class Flag_US_F {
                displayName = "Flag (USA)";
                description = "Flag (USA) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50;
                stock = 200;
				code = [container_1,"Flag_US_F"] call grad_fortifications_fnc_addFort;
            };
			class Flag_POWMIA_F {
                displayName = "Flag (POW MIA)";
                description = "Flag (POW MIA) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50;
                stock = 200;
				code = [container_1,"Flag_POWMIA_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_SignM_WarningMilitaryArea_english_F {
                displayName = "Sign (Military Area, English)";
                description = "Sign (Military Area, English) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50;
                stock = 200;
				code = [container_1,"Land_SignM_WarningMilitaryArea_english_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_SignM_WarningMilitaryVehicles_english_F {
                displayName = "Sign (Military Vehicles, English)";
                description = "Sign (Military Vehicles, English) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 30;
                stock = 200;
				code = [container_1,"Land_SignM_WarningMilitaryVehicles_english_F"] call grad_fortifications_fnc_addFort;
            };			
			class Land_PierLadder_F {
                displayName = "Ladder (Pier)";
                description = "Ladder (Pier) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50;
                stock = 200;
				code = [container_1,"Land_PierLadder_F"] call grad_fortifications_fnc_addFort;
            };			
        };
		class Sfortifications {
            displayName = "Structures";
            kindOf = "other";
			
			class Land_LightHouse_F {
                displayName = "Lighthouse (Tall)";
                description = "Lighthouse (Tall) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50000;
                stock = 200;
				code = [container_1,"Land_LightHouse_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_Airport_Tower_F {
                displayName = "Airport Control Tower";
                description = "Airport Control Tower can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50000;
                stock = 200;
				code = [container_1,"Land_Airport_Tower_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_Communication_F {
                displayName = "Communication Tower";
                description = "Communication Tower can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50000;
                stock = 200;
				code = [container_1,"Land_Communication_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_TTowerBig_1_F {
                displayName = "Transmitter Tower";
                description = "Transmitter Tower can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50000;
                stock = 200;
				code = [container_1,"Land_TTowerBig_1_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_TTowerBig_2_F {
                displayName = "Transmitter Tower (Tall)";
                description = "Transmitter Tower (Tall) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50000;
                stock = 200;
				code = [container_1,"Land_TTowerBig_2_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_TTowerSmall_1_F {
                displayName = "Transmitter Pole";
                description = "Transmitter Pole can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50000;
                stock = 200;
				code = [container_1,"Land_TTowerSmall_1_F"] call grad_fortifications_fnc_addFort;
            };
			class Land_TTowerSmall_2_F {
                displayName = "Transmitter Pole (Tall)";
                description = "Transmitter Pole (Tall) can be deployed with the ACE Self Interaction Menu > Equipment > Fortifications.";
                price = 50000;
                stock = 200;
				code = [container_1,"Land_TTowerSmall_2_F"] call grad_fortifications_fnc_addFort;
            };
        };
	};