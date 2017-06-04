
class CfgPatches
{
	class OPTRE_Vehicles_genet
	{
		units[] = { "OPTRE_Genet" };
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = { "OPTRE_Core","A3_Soft_F" };
	};
};
class DefaultEventhandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class CfgVehicles
{
	class Car;
	class Car_F : Car
	{
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitBody;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
		};
		class EventHandlers;
	};
	class OPTRE_Genet_base : Car_F
	{
		dlc = "OPTRE";
		model = "OPTRE_Vehicles\genet\genet.p3d";
		picture = "optre_vehicles\genet\data\genet_picture_ca.paa";
		Icon = "optre_vehicles\genet\data\genet_icon_ca.paa";
		displayName = "HuCiv Genet";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "\OPTRE_Vehicles\genet\Data\genet_co.paa" };
		terrainCoef = 6.5;
		turnCoef = 2.5;
		precision = 10;
		brakeDistance = 3.0;
		acceleration = 15;
		fireResistance = 5;
		armor = 32;
		cost = 50000;
		transportMaxBackpacks = 3;
		transportSoldier = 1;
		wheelDamageRadiusCoef = 0.9;
		wheelDestroyRadiusCoef = 0.4;
		maxFordingDepth = 0.5;
		waterResistance = 1;
		crewCrashProtection = 0.25;
		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "drivewheel";
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				count = 4;
				name = "FirstAidKit";
			};
		};
		class Turrets {};
		class HitPoints : HitPoints
		{
			class HitLFWheel : HitLFWheel
			{
				armor = 0.125;
				passThrough = 0;
			};
			class HitLF2Wheel : HitLF2Wheel
			{
				armor = 0.125;
				passThrough = 0;
			};
			class HitRFWheel : HitRFWheel
			{
				armor = 0.125;
				passThrough = 0;
			};
			class HitRF2Wheel : HitRF2Wheel
			{
				armor = 0.125;
				passThrough = 0;
			};
			class HitFuel
			{
				armor = 0.5;
				material = -1;
				name = "fueltank";
				visual = "";
				passThrough = 0.2;
			};
			class HitEngine
			{
				armor = 0.5;
				material = -1;
				name = "engine";
				visual = "";
				passThrough = 0.2;
			};
			class HitBody : HitBody
			{
				name = "body";
				visual = "camo1";
				passThrough = 1;
			};
			class HitGlass1 : HitGlass1
			{
				armor = 0.25;
			};
			class HitGlass2 : HitGlass2
			{
				armor = 0.25;
			};
			class HitGlass3 : HitGlass3
			{
				armor = 0.25;
			};
			class HitGlass4 : HitGlass4
			{
				armor = 0.25;
			};
		};
		driverAction = "driver_offroad01";
		cargoAction[] = { "passenger_low01","passenger_generic01_leanleft","passenger_generic01_foldhands" };
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = { "GetInLow" };
		cargoGetOutAction[] = { "GetOutLow" };
		attenuationEffectType = "CarAttenuation";
		soundGetIn[] = { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_door","db-5",1 };
		soundGetOut[] = { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_door","db-5",1,40 };
		soundDammage[] = { "","db-5",1 };
		soundEngineOnInt[] = { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_start","db-8",1.0 };
		soundEngineOnExt[] = { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_start","db-7",1.0,200 };
		soundEngineOffInt[] = { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_stop","db-8",1.0 };
		soundEngineOffExt[] = { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_stop","db-7",1.0,200 };
		buildCrash0[] = { "A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1","db0",1,200 };
		buildCrash1[] = { "A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2","db0",1,200 };
		buildCrash2[] = { "A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3","db0",1,200 };
		buildCrash3[] = { "A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4","db0",1,200 };
		soundBuildingCrash[] = { "buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25 };
		WoodCrash0[] = { "A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1","db0",1,200 };
		WoodCrash1[] = { "A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1","db0",1,200 };
		WoodCrash2[] = { "A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1","db0",1,200 };
		WoodCrash3[] = { "A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1","db0",1,200 };
		soundWoodCrash[] = { "woodCrash0",0.25,"woodCrash1",0.25,"woodCrash2",0.25,"woodCrash3",0.25 };
		armorCrash0[] = { "A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1","db0",1,200 };
		armorCrash1[] = { "A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2","db0",1,200 };
		armorCrash2[] = { "A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3","db0",1,200 };
		armorCrash3[] = { "A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4","db0",1,200 };
		soundArmorCrash[] = { "ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25 };
		class Sounds
		{
			class Idle_ext
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_idle","db-13",1,150 };
				frequency = "0.9 + ((rpm/6900) factor[(400/6900),(1150/6900)])*0.2";
				volume = "engineOn*camPos*(((rpm/6900) factor[(400/6900),(700/6900)])* ((rpm/6900) factor[(1100/6900),(900/6900)]))";
			};
			class Engine
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_1400rpm","db-11",1,200 };
				frequency = "0.8 + ((rpm/6900) factor[(900/6900),(2100/6900)])*0.2";
				volume = "engineOn*camPos*(((rpm/6900) factor[(870/6900),(1100/6900)])* ((rpm/6900) factor[(2100/6900),(1300/6900)]))";
			};
			class Engine1_ext
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_2000rpm","db-9",1,240 };
				frequency = "0.8 + ((rpm/6900) factor[(1300/6900),(3100/6900)])*0.2";
				volume = "engineOn*camPos*(((rpm/6900) factor[(1250/6900),(2050/6900)])* ((rpm/6900) factor[(3100/6900),(2300/6900)]))";
			};
			class Engine2_ext
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_2600rpm","db-8",1,280 };
				frequency = "0.8 + ((rpm/6900) factor[(2200/6900),(4100/6900)])*0.2";
				volume = "engineOn*camPos*(((rpm/6900) factor[(2250/6900),(3050/6900)])* ((rpm/6900) factor[(4100/6900),(3300/6900)]))";
			};
			class Engine3_ext
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_3200rpm","db-7",1,320 };
				frequency = "0.8 + ((rpm/6900) factor[(3300/6900),(4900/6900)])*0.2";
				volume = "engineOn*camPos*(((rpm/6900) factor[(3250/6900),(4050/6900)])* ((rpm/6900) factor[(4870/6900),(4200/6900)]))";
			};
			class Engine4_ext
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_3600rpm","db-6",1,360 };
				frequency = "0.8 + ((rpm/6900) factor[(4200/6900),(6200/6900)])*0.2";
				volume = "engineOn*camPos*(((rpm/6900) factor[(4150/6900),(4800/6900)])* ((rpm/6900) factor[(6150/6900),(5150/6900)]))";
			};
			class Engine5_ext
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_4000rpm","db-5",1,420 };
				frequency = "0.95 + ((rpm/6900) factor[(5100/6900),(6900/6900)])*0.15";
				volume = "engineOn*camPos*((rpm/6900) factor[(5100/6900),(6100/6900)])";
			};
			class IdleThrust
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_idle_exhaust","db-6",1,200 };
				frequency = "0.9 + ((rpm/6900) factor[(400/6900),(1150/6900)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6900) factor[(400/6900),(700/6900)])* ((rpm/6900) factor[(1100/6900),(900/6900)]))";
			};
			class EngineThrust
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_1400rpm_exhaust","db-5",1,250 };
				frequency = "0.8 + ((rpm/6900) factor[(900/6900),(2100/6900)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6900) factor[(870/6900),(1100/6900)])* ((rpm/6900) factor[(2100/6900),(1300/6900)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_2000rpm_exhaust","db-4",1,280 };
				frequency = "0.8 + ((rpm/6900) factor[(1300/6900),(3100/6900)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6900) factor[(1250/6900),(2050/6900)])* ((rpm/6900) factor[(3100/6900),(2300/6900)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_2600rpm_exhaust","db-3",1,320 };
				frequency = "0.8 + ((rpm/6900) factor[(2200/6900),(4100/6900)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6900) factor[(2250/6900),(3050/6900)])* ((rpm/6900) factor[(4100/6900),(3300/6900)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_3200rpm_exhaust","db-2",1,360 };
				frequency = "0.8 + ((rpm/6900) factor[(3300/6900),(4900/6900)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6900) factor[(3250/6900),(4050/6900)])* ((rpm/6900) factor[(4870/6900),(4200/6900)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_3600rpm_exhaust","db0",1,400 };
				frequency = "0.8 + ((rpm/6900) factor[(4200/6900),(6200/6900)])*0.3";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6900) factor[(4150/6900),(4800/6900)])* ((rpm/6900) factor[(6150/6900),(5150/6900)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_4000rpm_exhaust","db2",1,450 };
				frequency = "0.9 + ((rpm/6900) factor[(5100/6900),(6900/6900)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/6900) factor[(5100/6900),(6100/6900)])";
			};
			class Idle_int
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_idle","db-15",1 };
				frequency = "0.9 + ((rpm/6900) factor[(400/6900),(1150/6900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/6900) factor[(400/6900),(700/6900)])* ((rpm/6900) factor[(1100/6900),(900/6900)]))";
			};
			class Engine_int
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_1000rpm","db-14",1 };
				frequency = "0.8 + ((rpm/6900) factor[(900/6900),(2100/6900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/6900) factor[(870/6900),(1100/6900)])* ((rpm/6900) factor[(2100/6900),(1300/6900)]))";
			};
			class Engine1_int
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_2000rpm","db-12",1 };
				frequency = "0.8 + ((rpm/6900) factor[(1300/6900),(3100/6900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/6900) factor[(1250/6900),(2050/6900)])* ((rpm/6900) factor[(3100/6900),(2300/6900)]))";
			};
			class Engine2_int
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_2600rpm","db-11",1 };
				frequency = "0.8 + ((rpm/6900) factor[(2200/6900),(4100/6900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/6900) factor[(2250/6900),(3050/6900)])* ((rpm/6900) factor[(4100/6900),(3300/6900)]))";
			};
			class Engine3_int
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_3200rpm","db-10",1 };
				frequency = "0.8 + ((rpm/6900) factor[(3300/6900),(4900/6900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/6900) factor[(3250/6900),(4050/6900)])* ((rpm/6900) factor[(4870/6900),(4200/6900)]))";
			};
			class Engine4_int
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_4000rpm","db-9",1 };
				frequency = "0.8 + ((rpm/6900) factor[(4200/6900),(6200/6900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/6900) factor[(4150/6900),(4800/6900)])* ((rpm/6900) factor[(6150/6900),(5150/6900)]))";
			};
			class Engine5_int
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_5000rpm","db-6",1 };
				frequency = "0.95 + ((rpm/6900) factor[(5100/6900),(6900/6900)])*0.15";
				volume = "engineOn*(1-camPos)*((rpm/6900) factor[(5100/6900),(6100/6900)])";
			};
			class IdleThrust_int
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_idle_exhaust","db-10",1 };
				frequency = "0.9 + ((rpm/6900) factor[(400/6900),(1150/6900)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6900) factor[(400/6900),(700/6900)])* ((rpm/6900) factor[(1100/6900),(900/6900)]))";
			};
			class EngineThrust_int
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_1000rpm_exhaust","db-9",1 };
				frequency = "0.8 + ((rpm/6900) factor[(900/6900),(2100/6900)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6900) factor[(870/6900),(1100/6900)])* ((rpm/6900) factor[(2100/6900),(1300/6900)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_2000rpm_exhaust","db-8",1 };
				frequency = "0.8 + ((rpm/6900) factor[(1300/6900),(3100/6900)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6900) factor[(1250/6900),(2050/6900)])* ((rpm/6900) factor[(3100/6900),(2300/6900)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_2600rpm_exhaust","db-7",1 };
				frequency = "0.8 + ((rpm/6900) factor[(2200/6900),(4100/6900)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6900) factor[(2250/6900),(3050/6900)])* ((rpm/6900) factor[(4100/6900),(3300/6900)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_3200rpm_exhaust","db-6",1 };
				frequency = "0.8 + ((rpm/6900) factor[(3300/6900),(4900/6900)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6900) factor[(3250/6900),(4050/6900)])* ((rpm/6900) factor[(4870/6900),(4200/6900)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_4000rpm_exhaust","db-5",1 };
				frequency = "0.8 + ((rpm/6900) factor[(4200/6900),(6200/6900)])*0.3";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6900) factor[(4150/6900),(4800/6900)])* ((rpm/6900) factor[(6150/6900),(5150/6900)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_5000rpm_exhaust","db-4",1 };
				frequency = "0.9 + ((rpm/6900) factor[(5100/6900),(6900/6900)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/6900) factor[(5100/6900),(6100/6900)])";
			};
			class Movement
			{
				sound = "soundEnviron";
				frequency = "1";
				volume = "0";
			};
			class TiresRockOut
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1","db-6",1.0,60 };
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1","db-6",1.0,60 };
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2","db-6",1.0,60 };
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2","db-6",1.0,60 };
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1","db-6",1.0,60 };
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2","db-6",1.0,60 };
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3","db-8",1.0,90 };
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1","db-6",1.0 };
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\tires\int-tires-sand2","db-6",1.0 };
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2","db-6",1.0 };
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\tires\int-tires-mud2","db-6",1.0 };
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1","db-6",1.0 };
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2","db-6",1.0 };
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\noise_int_car_3","db-12",1.0 };
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04","db-3",1,80 };
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_ext_road
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db-3",1,80 };
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_ext_road
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db-3",1,80 };
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_ext_road
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db-3",1,80 };
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_ext_dirt
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking","db-3",1,60 };
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class acceleration_ext_dirt
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration","db-3",1,60 };
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt","db-3",1,60 };
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			class turn_right_ext_dirt
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt","db-3",1,60 };
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class breaking_int_road
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int","db-10",1 };
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_int_road
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db-10",1 };
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_int_road
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db-10",1 };
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_road
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db-10",1 };
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_int_dirt
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int","db-10",1 };
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-01, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_int_dirt
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int","db-10",1 };
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_int_dirt
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int","db-10",1 };
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_dirt
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int","db-10",1 };
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
		};
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget = "rendertarget0";
				class CameraView1
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
			class RearCam
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
			class FrontCam
			{
				renderTarget = "rendertarget2";
				class CameraView1
				{
					pointPosition = "PIP2_pos";
					pointDirection = "PIP2_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
		};
		thrustDelay = 0.2;
		brakeIdleSpeed = 1.78;
		maxSpeed = 150;
		fuelCapacity = 45;
		wheelCircumference = 2.277;
		antiRollbarForceCoef = 0.5;
		antiRollbarForceLimit = 0.5;
		antiRollbarSpeedMin = 20;
		antiRollbarSpeedMax = 80;
		idleRpm = 900;
		redRpm = 6900;
		class complexGearbox
		{
			GearboxRatios[] = { "R1",-3.231,"N",0,"D1",2.462,"D2",1.87,"D3",1.241,"D4",0.97,"D5",0.711 };
			TransmissionRatios[] = { "High",4.111 };
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		simulation = "carx";
		dampersBumpCoef = 0.05;
		differentialType = "front_limited";
		frontRearSplit = 0.5;
		frontBias = 1.5;
		rearBias = 1.3;
		centreBias = 1.3;
		clutchStrength = 15.0;
		enginePower = 100;
		maxOmega = 720;
		peakTorque = 350;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 0.35;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		torqueCurve[] = { { 0.0,0.0 },{ 0.178,0.8 },{ 0.25,1.0 },{ 0.461,0.9 },{ 0.9,0.8 },{ 1.0,0.3 } };
		changeGearMinEffectivity[] = { 0.95,0.15,0.95,0.95,0.95,0.95,0.95 };
		switchTime = 0.31;
		latency = 1.0;
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				mass = 20;
				MOI = 3.3;
				dampingRate = 0.5;
				maxBrakeTorque = 2000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = { 0,-1,0 };
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.1;
				mMaxDroop = 0.15;
				sprungMass = 350.0;
				springStrength = 22600;
				springDamperRate = 8680;
				longitudinalStiffnessPerUnitGravity = 100000;
				latStiffX = 25;
				latStiffY = 18000;
				frictionVsSlipGraph[] = { { 0,1 },{ 0.5,1 },{ 1,1 } };
			};
			class LR : LF
			{
				boneName = "wheel_1_2_damper";
				steering = 0;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				maxHandBrakeTorque = 3000;
				latStiffY = 180;
				sprungMass = 190.0;
				springStrength = 4750;
				springDamperRate = 1760;
			};
			class RF : LF
			{
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
			};
			class RR : RF
			{
				boneName = "wheel_2_2_damper";
				steering = 0;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				maxHandBrakeTorque = 3000;
				latStiffY = 180;
				sprungMass = 190.0;
				springStrength = 4750;
				springDamperRate = 1760;
			};
		};
		memoryPointTrackFLL = "TrackFLL";
		memoryPointTrackFLR = "TrackFLR";
		memoryPointTrackBLL = "TrackBLL";
		memoryPointTrackBLR = "TrackBLR";
		memoryPointTrackFRL = "TrackFRL";
		memoryPointTrackFRR = "TrackFRR";
		memoryPointTrackBRL = "TrackBRL";
		memoryPointTrackBRR = "TrackBRR";
		class Damage
		{
			tex[] = {};
			mat[] = { "A3\data_f\glass_veh_int.rvmat","A3\data_f\Glass_veh_damage.rvmat","A3\data_f\Glass_veh_damage.rvmat","A3\data_f\glass_veh.rvmat","A3\data_f\Glass_veh_damage.rvmat","A3\data_f\Glass_veh_damage.rvmat" };
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust";
				direction = "exhaust_dir";
				effect = "ExhaustsEffect";
			};
			class Exhaust2
			{
				position = "exhaust2_pos";
				direction = "exhaust2_dir";
				effect = "ExhaustsEffect";
			};
		};
		class Reflectors
		{
			class LightCarHeadL01
			{
				color[] = { 1900,1800,1700 };
				ambient[] = { 5,5,5 };
				position = "LightCarHeadL01";
				direction = "LightCarHeadL01_end";
				hitpoint = "Light_L";
				selection = "Light_L";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 1;
				dayLight = 0;
				flareSize = 1.0;
				class Attenuation
				{
					start = 1.0;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class LightCarHeadL02 : LightCarHeadL01
			{
				position = "LightCarHeadL02";
				direction = "LightCarHeadL02_end";
				FlareSize = 0.5;
			};
			class LightCarHeadR01 : LightCarHeadL01
			{
				position = "LightCarHeadR01";
				direction = "LightCarHeadR01_end";
				hitpoint = "Light_R";
				selection = "Light_R";
			};
			class LightCarHeadR02 : LightCarHeadR01
			{
				position = "LightCarHeadR02";
				direction = "LightCarHeadR02_end";
				FlareSize = 0.5;
			};
		};
		aggregateReflectors[] = { { "LightCarHeadL01","LightCarHeadL02" },{ "LightCarHeadR01","LightCarHeadR02" } };
		class EventHandlers : EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
		class textureSources
		{
			class colorgreen
			{
				displayName = "Green";
				author = "Article 2 Studios";
				textures[] =
				{
					"\OPTRE_Vehicles\genet\Data\genet_green_co.paa"
				};
				factions[] = {};
			};
			class colorblue
			{
				displayName = "Blue";
				author = "Article 2 Studios";
				textures[] =
				{
					"\OPTRE_Vehicles\genet\Data\genet_blue_co.paa"
				};
				factions[] = {};
			};
			class colorblack
			{
				displayName = "Black";
				author = "Article 2 Studios";
				textures[] =
				{
					"\OPTRE_Vehicles\genet\Data\genet_black_co.paa"
				};
				factions[] = {};
			};
			class colorred
			{
				displayName = "Red";
				author = "Article 2 Studios";
				textures[] =
				{
					"\OPTRE_Vehicles\genet\Data\genet_co.paa"
				};
				factions[] = {};
			};
			class colorcyan
			{
				displayName = "Cyan";
				author = "Article 2 Studios";
				textures[] =
				{
					"\OPTRE_Vehicles\genet\Data\genet_cyan_co.paa"
				};
				factions[] = {};
			};
			class colororange
			{
				displayName = "Orange";
				author = "Article 2 Studios";
				textures[] =
				{
					"\OPTRE_Vehicles\genet\Data\genet_orange_co.paa"
				};
				factions[] = {};
			};
			class colorpurple
			{
				displayName = "Purple";
				author = "Article 2 Studios";
				textures[] =
				{
					"\OPTRE_Vehicles\genet\Data\genet_purple_co.paa"
				};
				factions[] = {};
			};
			class coloryellow
			{
				displayName = "Yellow";
				author = "Article 2 Studios";
				textures[] =
				{
					"\OPTRE_Vehicles\genet\Data\genet_yellow_co.paa"
				};
				factions[] = {};
			};
		};
	};
	class OPTRE_Genet : OPTRE_Genet_base
	{
		scope = 2;
		scopeCurator = 2;
		crew = "C_man_1";
		side = 3;
		faction = "OPTRE_UEG_Civ";
		displayname = "HuCiv Genet";

		textureList[] =
		{
			"colorgreen", 1,
			"colorblack", 1,
			"colorblue", 1,
			"coloryellow", 1,
			"colorpurple", 1,
			"colororange", 1,
			"colorcyan", 1,
			"colorred", 1
		};
	};
};
