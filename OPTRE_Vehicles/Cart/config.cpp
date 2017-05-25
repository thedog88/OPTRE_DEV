class CfgPatches
{
	class OPTRE_Vehicles_Cart
	{
		units[] = { "OPTRE_cart","OPTRE_forklift" };
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = { "A3_Air_F","A3_Air_F_Beta","A3_Weapons_F","OPTRE_Core" };
		magazines[] = {};
		ammo[] = {};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Car : LandVehicle
	{
		class NewTurret;
	};
	class Car_F : Car
	{
		class AnimationSources
		{
			class HitLFWheel;
			class HitRFWheel;
			class HitLBWheel;
			class HitRBWheel;
			class HitLF2Wheel;
			class HitRF2Wheel;
			class HitLMWheel;
			class HitRMWheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class Gatling;
			class Gatling_flash;
		};
		class Turrets
		{
			class MainTurret : NewTurret
			{
				class ViewOptics;
			};
		};
		class HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitLF2Wheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitFuel;
			class HitEngine;
			class HitBody;
		};
	};
	class OPTRE_cart_base : Car_F
	{
		dlc = "OPTRE";
		author = "Article 2 Studios";
		displayName = "";
		class Library
		{
			libTextDesc = "The Maintenance/ Tow Cart was designed to haul different varieties of Equipment, Parts, and other Vehicles.";
		};
		model = "OPTRE_Vehicles\Cart\Cart.p3d";
		picture = "OPTRE_Vehicles\Cart\Data\picture.paa";
		Icon = "OPTRE_Vehicles\cart\Data\icon.paa";
		mapSize = 4;
		transportMaxBackpacks = 5;
		slingLoadCargoMemoryPoints[] = { "SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4" };
		vehicleClass = "OPTRE_UNSC_Vehicle_class";
		transportSoldier = 0;
		crewVulnerable = 1;
		crewCrashProtection = 0;
		crewExplosionProtection = 0.5;
		fuelExplosionPower = 2;
		epeImpulseDamageCoef = 25;
		armor = 50;
		cost = 500000;
		canFloat = 0;
		threat[] = { 0.8,0.6,0.3 };
		camouflage = 4;
		destrType = "DestructBuilding";
		ejectDeadGunner = 1;
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
				flareSize = 1;
				class Attenuation
				{
					start = 1;
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
		};
		aggregateReflectors[] = { { "LightCarHeadL01","LightCarHeadL02" },{ "LightCarHeadR01","LightCarHeadR02" } };
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
		class AnimationSources : AnimationSources {};
		class HitPoints : HitPoints
		{
			class HitLFWheel : HitLFWheel
			{
				armor = 999;
				explosionShielding = 0;
				radius = 0.25;
				passThrough = 0;
			};
			class HitLF2Wheel : HitLF2Wheel
			{
				armor = 999;
				explosionShielding = 0;
				radius = 0.25;
				passThrough = 0;
			};
			class HitRFWheel : HitRFWheel
			{
				armor = 999;
				explosionShielding = 0;
				radius = 0.25;
				passThrough = 0;
			};
			class HitRF2Wheel : HitRF2Wheel
			{
				armor = 999;
				explosionShielding = 0;
				radius = 0.25;
				passThrough = 0;
			};
			class HitFuel : HitFuel
			{
				armor = 0.5;
				name = "palivo";
				passThrough = 0.5;
				explosionShielding = 0.5;
			};
			class HitEngine : HitEngine
			{
				armor = 0.5;
				name = "motor";
				passThrough = 0.5;
				explosionShielding = 0.5;
			};
			class HitBody : HitBody
			{
				armor = 2;
				name = "karoserie";
				visual = "body";
				passThrough = 1;
				explosionShielding = 0.5;
			};
		};
		class Damage
		{
			tex[] = { "OPTRE_Core\data\base\glass_ca.paa","OPTRE_Core\data\base\transparent.paa","OPTRE_Core\data\base\transparent.paa" };
			mat[] = { "OPTRE_Vehicles\Warthog\data\warthog.rvmat","OPTRE_Vehicles\Warthog\data\warthog_damage.rvmat","OPTRE_Vehicles\Warthog\data\warthog_destruct.rvmat","OPTRE_Vehicles\Warthog\data\warthog_addons.rvmat","OPTRE_Vehicles\Warthog\data\warthog_addons_damage.rvmat","OPTRE_Vehicles\Warthog\data\warthog_addons_destruct.rvmat","OPTRE_Core\data\base\reflective_glass.rvmat","OPTRE_Core\data\base\null.rvmat","OPTRE_Core\data\base\null.rvmat" };
		};
		wheelDamageThreshold = 1;
		wheelDestroyThreshold = 1;
		wheelDamageRadiusCoef = 1;
		wheelDestroyRadiusCoef = 1;
		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "drivewheel";
		driverAction = "Driver_low01";
		cargoAction[] = {};
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "OPTRE_Vehicles\cart\data\truck_01_ext_022_co.paa" };
		showNVGCargo[] = { 0,1 };
		maxFordingDepth = 0.95;
		getInAction = "GetInOffroad";
		getOutAction = "GetOutMRAP_01";
		cargoGetInAction[] = { "GetInHeli_Transport_01Cargo" };
		cargoGetOutAction[] = { "GetOutHelicopterCargoRfl" };
		commanderCanSee = 31;
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 0;
		driverDoor = "";
		cargoDoors[] = {};
		precision = 15;
		weapons[] = { "TruckHorn2" };
		magazines[] = {};
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = { "veh_vehicle_MRAP_s" };
				speechPlural[] = { "veh_vehicle_MRAP_p" };
			};
		};
		attenuationEffectType = "OpenCarAttenuation";
		nameSound = "car";
		soundAttenuationCargo[] = { 1,0 };
		soundGetIn[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\getin",0.5623413,1 };
		soundGetOut[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\getout",0.5623413,1,40 };
		soundDammage[] = { "",0.5623413,1 };
		soundEngineOnInt[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_start",0.3548134,1 };
		soundEngineOnExt[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_start",0.7079458,1,200 };
		soundEngineOffInt[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_stop",0.3548134,1 };
		soundEngineOffExt[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_stop",0.7079458,1,200 };
		buildCrash0[] = { "A3\sounds_f\Vehicles\soft\noises\crash_building_01",1,1,200 };
		buildCrash1[] = { "A3\sounds_f\Vehicles\soft\noises\crash_building_02",1,1,200 };
		buildCrash2[] = { "A3\sounds_f\Vehicles\soft\noises\crash_building_03",1,1,200 };
		buildCrash3[] = { "A3\sounds_f\Vehicles\soft\noises\crash_building_04",1,1,200 };
		soundBuildingCrash[] = { "buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25 };
		WoodCrash0[] = { "A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_01",1,1,200 };
		WoodCrash1[] = { "A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_02",1,1,200 };
		WoodCrash2[] = { "A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_03",1,1,200 };
		WoodCrash3[] = { "A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_04",1,1,200 };
		WoodCrash4[] = { "A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_05",1,1,200 };
		WoodCrash5[] = { "A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_06",1,1,200 };
		soundWoodCrash[] = { "woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166 };
		ArmorCrash0[] = { "A3\sounds_f\Vehicles\soft\noises\crash_vehicle_01",1,1,200 };
		ArmorCrash1[] = { "A3\sounds_f\Vehicles\soft\noises\crash_vehicle_02",1,1,200 };
		ArmorCrash2[] = { "A3\sounds_f\Vehicles\soft\noises\crash_vehicle_03",1,1,200 };
		ArmorCrash3[] = { "A3\sounds_f\Vehicles\soft\noises\crash_vehicle_04",1,1,200 };
		soundArmorCrash[] = { "ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25 };
		class Sounds
		{
			class Idle_ext
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_idle",0.3981072,1,150 };
				frequency = "0.95 + ((rpm/ 4500) factor[(800/ 4500),(1400/ 4500)])*0.15";
				volume = "engineOn*camPos*(((rpm/ 4500) factor[(600/ 4500),(1100/ 4500)]) * ((rpm/ 4500) factor[(1800/ 4500),(1300/ 4500)]))";
			};
			class Engine
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_low1",0.4466836,1,250 };
				frequency = "0.9 + ((rpm/ 4500) factor[(1400/ 4500),(2100/ 4500)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 4500) factor[(1400/ 4500),(1800/ 4500)]) * ((rpm/ 4500) factor[(2300/ 4500),(2000/ 4500)]))";
			};
			class Engine1_ext
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_low2",0.5623413,1,300 };
				frequency = "0.9 +  ((rpm/ 4500) factor[(2100/ 4500),(2800/ 4500)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 4500) factor[(1900/ 4500),(2300/ 4500)]) * ((rpm/ 4500) factor[(3000/ 4500),(2500/ 4500)]))";
			};
			class Engine2_ext
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_mid",0.7079458,1,350 };
				frequency = "0.9 + ((rpm/ 4500) factor[(2800/ 4500),(3600/ 4500)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 4500) factor[(2500/ 4500),(3100/ 4500)]) * ((rpm/ 4500) factor[(4500/ 4500),(3700/ 4500)]))";
			};
			class Engine3_ext
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_high",1,1,400 };
				frequency = "0.95 + ((rpm/ 4500) factor[(3600/ 4500),(4500/ 4500)])*0.1";
				volume = "engineOn*camPos*((rpm/ 4500) factor[(3800/ 4500),(4500/ 4500)])";
			};
			class IdleThrust
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_idle",0.5623413,1,200 };
				frequency = "0.95 + ((rpm/ 4500) factor[(800/ 4500),(1400/ 4500)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(600/ 4500),(1100/ 4500)]) * ((rpm/ 4500) factor[(1800/ 4500),(1300/ 4500)]))";
			};
			class EngineThrust
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_low1",0.7079458,1,350 };
				frequency = "0.9 + ((rpm/ 4500) factor[(1400/ 4500),(2100/ 4500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(1400/ 4500),(1800/ 4500)]) * ((rpm/ 4500) factor[(2300/ 4500),(2000/ 4500)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_low2",0.8912509,1,400 };
				frequency = "0.9 +  ((rpm/ 4500) factor[(2100/ 4500),(2800/ 4500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(1900/ 4500),(2300/ 4500)]) * ((rpm/ 4500) factor[(3000/ 4500),(2500/ 4500)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_mid",1.122018,1,425 };
				frequency = "0.9 + ((rpm/ 4500) factor[(2800/ 4500),(3600/ 4500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(2500/ 4500),(3100/ 4500)]) * ((rpm/ 4500) factor[(4500/ 4500),(3700/ 4500)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_high",1.258925,1,450 };
				frequency = "0.95 + ((rpm/ 4500) factor[(3600/ 4500),(4500/ 4500)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 4500) factor[(3800/ 4500),(4500/ 4500)])";
			};
			class Idle_int
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_idle",0.2511886,1 };
				frequency = "0.95 + ((rpm/ 4500) factor[(800/ 4500),(1400/ 4500)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/ 4500) factor[(600/ 4500),(1100/ 4500)]) * ((rpm/ 4500) factor[(1800/ 4500),(1300/ 4500)]))";
			};
			class Engine_int
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_low1",0.3162278,1 };
				frequency = "0.9 + ((rpm/ 4500) factor[(1400/ 4500),(2100/ 4500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 4500) factor[(1400/ 4500),(1800/ 4500)]) * ((rpm/ 4500) factor[(2300/ 4500),(2000/ 4500)]))";
			};
			class Engine1_int
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_low2",0.3981072,1 };
				frequency = "0.9 +  ((rpm/ 4500) factor[(2100/ 4500),(2800/ 4500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 4500) factor[(1900/ 4500),(2300/ 4500)]) * ((rpm/ 4500) factor[(3000/ 4500),(2500/ 4500)]))";
			};
			class Engine2_int
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_mid",0.5011872,1 };
				frequency = "0.9 + ((rpm/ 4500) factor[(2800/ 4500),(3600/ 4500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 4500) factor[(2500/ 4500),(3100/ 4500)]) * ((rpm/ 4500) factor[(4500/ 4500),(3700/ 4500)]))";
			};
			class Engine3_int
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_high",0.6309574,1 };
				frequency = "0.95 + ((rpm/ 4500) factor[(3600/ 4500),(4500/ 4500)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/ 4500) factor[(3800/ 4500),(4500/ 4500)])";
			};
			class IdleThrust_int
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_idle",0.3548134,1 };
				frequency = "0.95 + ((rpm/ 4500) factor[(800/ 4500),(1400/ 4500)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(600/ 4500),(1100/ 4500)]) * ((rpm/ 4500) factor[(1800/ 4500),(1300/ 4500)]))";
			};
			class EngineThrust_int
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_low1",0.4466836,1 };
				frequency = "0.9 + ((rpm/ 4500) factor[(1400/ 4500),(2100/ 4500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(1400/ 4500),(1800/ 4500)]) * ((rpm/ 4500) factor[(2300/ 4500),(2000/ 4500)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_low2",0.5623413,1 };
				frequency = "0.9 +  ((rpm/ 4500) factor[(2100/ 4500),(2800/ 4500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(1900/ 4500),(2300/ 4500)]) * ((rpm/ 4500) factor[(3000/ 4500),(2500/ 4500)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_mid",0.7079458,1 };
				frequency = "0.9 + ((rpm/ 4500) factor[(2800/ 4500),(3600/ 4500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(2500/ 4500),(3100/ 4500)]) * ((rpm/ 4500) factor[(4500/ 4500),(3700/ 4500)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_high",0.7943282,1 };
				frequency = "0.95 + ((rpm/ 4500) factor[(3600/ 4500),(4500/ 4500)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 4500) factor[(3800/ 4500),(4500/ 4500)])";
			};
			class TiresRockOut
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",1.412538,1,60 };
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",1.412538,1,60 };
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",1.258925,1,60 };
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",1.122018,1,60 };
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",1.258925,1,60 };
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",1.122018,1,60 };
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",1.122018,1,90 };
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",0.7079458,1 };
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",0.7079458,1 };
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",0.7079458,1 };
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",0.7079458,1 };
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",0.7079458,1 };
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",0.7079458,1 };
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",0.5623413,1 };
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",0.7079458,1,80 };
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.7079458,1,80 };
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_road
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.7079458,1,80 };
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_road
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.7079458,1,80 };
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",0.7079458,1,60 };
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_ext_1",0.7079458,1,60 };
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_dirt
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.7079458,1,60 };
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.7079458,1,60 };
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_road
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",0.3162278,1 };
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.3162278,1 };
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_road
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.3162278,1 };
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_road
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.3162278,1 };
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_dirt
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",0.3162278,1 };
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_int_1",0.3162278,1 };
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_dirt
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.3162278,1 };
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_dirt
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.3162278,1 };
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
		};
		terrainCoef = 0.45;
		turnCoef = 3;
		thrustDelay = 0.2;
		brakeIdleSpeed = 1.78;
		maxSpeed = 40;
		fuelCapacity = 150;
		antiRollbarForceCoef = 0.75;
		antiRollbarForceLimit = 0.75;
		antiRollbarSpeedMin = 10;
		antiRollbarSpeedMax = 40;
		idleRpm = 800;
		redRpm = 4500;
		slowSpeedForwardCoef = 0.35;
		normalSpeedForwardCoef = 0.65;
		class complexGearbox
		{
			GearboxRatios[] = { "R1",-3.182,"N",0,"D1",4.182,"D2",2.318,"D3",1.85,"D4",1.65,"D5",1.45 };
			TransmissionRatios[] = { "High",5.539 };
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		simulation = "carx";
		dampersBumpCoef = 0.25;
		differentialType = "all_open";
		frontRearSplit = 0.5;
		frontBias = 1.3;
		rearBias = 1.3;
		centreBias = 1.3;
		clutchStrength = 10;
		enginePower = 276;
		maxOmega = 471;
		peakTorque = 1253;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 0.35;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		torqueCurve[] = { { 0,0 },{ 0.178,0.5 },{ 0.25,0.85 },{ 0.4,0.9 },{ 0.5,1 },{ 0.725,0.95 },{ 0.85,0.6 },{ 1,0.3 } };
		changeGearMinEffectivity[] = { 0.95,0.15,0.95,0.95,0.95,0.95,0.95 };
		switchTime = 0.25;
		latency = 1;
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
				maxHandBrakeTorque = 6000;
				suspTravelDirection[] = { 0,-1,0 };
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.25;
				mMaxDroop = 0.25;
				sprungMass = 350;
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
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				side = "left";
				steering = 0;
			};
			class RF : LF
			{
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				side = "right";
			};
			class RR : RF
			{
				boneName = "wheel_2_2_damper";
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				side = "right";
				steering = 0;
			};
		};
		supplyRadius = 5;
		transportMaxMagazines = 120;
		class TransportMagazines {};
		class TransportItems
		{
			class _xx_OPTRE_Biofoam
			{
				name = "OPTRE_Biofoam";
				count = 2;
			};
		};
		class TransportWeapons {};
		class UserActions {};
	};
	class OPTRE_cart : OPTRE_cart_base
	{
		scope = 2;
		displayName = "Maintenance/Tow Cart";
		author = "Article 2 Studios";
		faction = "OPTRE_UNSC";
		side = 1;
		crew = "OPTRE_UNSC_Army_Soldier_Rifleman_AR_WDL";
		hiddenSelections[] = { "camo1","clan","insignia" };
		hiddenSelectionsTextures[] = { "OPTRE_Vehicles\cart\data\truck_01_ext_022_co.paa" };
		class textureSources
		{
			class coloryellow
			{
				displayName = "Yellow";
				author = "Article 2 Studios";
				textures[] =
				{
					"OPTRE_Vehicles\cart\data\truck_01_ext_022_co.paa"
				};
				factions[] = {};
			};
			class colorgrey
			{
				displayName = "Grey";
				author = "Article 2 Studios";
				textures[] =
				{
					"OPTRE_Vehicles\cart\data\truck_01_ext_023_co.paa"
				};
				factions[] = {};
			};
			class colorgreen
			{
				displayName = "Green";
				author = "Article 2 Studios";
				textures[] =
				{
					"OPTRE_Vehicles\cart\data\truck_01_ext_024_co.paa"
				};
				factions[] = {};
			};
		};
		textureList[] =
		{
			"colorgreen", 1,
			"coloryellow", 1,
			"colorgrey", 1
		};
		class CargoTurret;
		class Turrets : Turrets
		{
			class CargoTurret_01 : CargoTurret
			{
				gunnerAction = "passenger_boat_3";
				gunnerCompartments = "Compartment1";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				memoryPointGunnerOptics = "";
				gunnerName = "Front Passenger";
				proxyIndex = 2;
				maxElev = 25;
				minElev = -10;
				maxTurn = 45;
				minTurn = -45;
				hasGunner = 1;
				isPersonTurret = 1;
				class dynamicViewLimits
				{
					CargoTurret_02[] = { -65,95 };
				};
			};
			class CargoTurret_02 : CargoTurret
			{
				gunnerAction = "passenger_inside_2";
				gunnerCompartments = "Compartment1";
				memoryPointsGetInGunner = "pos pas";
				memoryPointsGetInGunnerDir = "pos pas dir";
				memoryPointGunnerOptics = "";
				gunnerName = "Side Passenger";
				proxyIndex = 3;
				maxElev = 20;
				minElev = -20;
				maxTurn = 45;
				minTurn = -45;
				hasGunner = 1;
				isPersonTurret = 1;
				class dynamicViewLimits
				{
					CargoTurret_02[] = { -40,95 };
				};
			};
		};
	};

	class OPTRE_forklift_base : OPTRE_cart_base
	{
		dlc = "OPTRE";
		author = "Article 2 Studios";
		displayName = "";
		class Library
		{
			libTextDesc = "The Forklift lifts forks.";
		};
		model = "OPTRE_Vehicles\Cart\forklift.p3d";
		picture = "OPTRE_Vehicles\Cart\Data\forklift_picture_ca.paa";
		Icon = "OPTRE_Vehicles\cart\Data\forklift_icon_ca.paa";
		mapSize = 4;
		transportMaxBackpacks = 5;
		slingLoadCargoMemoryPoints[] = { "SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4" };
		vehicleClass = "OPTRE_UNSC_Vehicle_class";
		transportSoldier = 0;
		crewVulnerable = 1;
		crewCrashProtection = 0;
		crewExplosionProtection = 0.5;
		fuelExplosionPower = 2;
		epeImpulseDamageCoef = 25;
		armor = 50;
		cost = 500000;
		canFloat = 0;
		threat[] = { 0.8,0.6,0.3 };
		camouflage = 4;
		ejectDeadGunner = 1;
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
				flareSize = 1;
				class Attenuation
				{
					start = 1;
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
		};
		aggregateReflectors[] = { { "LightCarHeadL01","LightCarHeadL02" },{ "LightCarHeadR01","LightCarHeadR02" } };
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust";
				direction = "exhaust_dir";
				effect = "ExhaustsEffect";
			};
		};
		class AnimationSources : AnimationSources
		{
			class liftForks_1
			{
				source = "user";
				animPeriod = 5;
				initPhase = 0;
				sound = "ServoRampSound_2";
			};
			class liftForks_2
			{
				source = "user";
				animPeriod = 5;
				initPhase = 0;
				sound = "";
			};
		};
		class HitPoints : HitPoints
		{
			class HitLFWheel : HitLFWheel
			{
				armor = 999;
				explosionShielding = 0;
				radius = 0.25;
				passThrough = 0;
			};
			class HitLF2Wheel : HitLF2Wheel
			{
				armor = 999;
				explosionShielding = 0;
				radius = 0.25;
				passThrough = 0;
			};
			class HitRFWheel : HitRFWheel
			{
				armor = 999;
				explosionShielding = 0;
				radius = 0.25;
				passThrough = 0;
			};
			class HitRF2Wheel : HitRF2Wheel
			{
				armor = 999;
				explosionShielding = 0;
				radius = 0.25;
				passThrough = 0;
			};
			class HitFuel : HitFuel
			{
				armor = 0.5;
				name = "palivo";
				passThrough = 0.5;
				explosionShielding = 0.5;
			};
			class HitEngine : HitEngine
			{
				armor = 0.5;
				name = "motor";
				passThrough = 0.5;
				explosionShielding = 0.5;
			};
			class HitBody : HitBody
			{
				armor = 2;
				name = "karoserie";
				visual = "body";
				passThrough = 1;
				explosionShielding = 0.5;
			};
		};
		wheelDamageThreshold = 1;
		wheelDestroyThreshold = 1;
		wheelDamageRadiusCoef = 1;
		wheelDestroyRadiusCoef = 1;
		driverAction = "OPTRE_Driver_HEV";
		cargoAction[] = {};
		hiddenSelections[] = { "camo1","camo2","camo3" };
		hiddenSelectionsTextures[] = { "optre_vehicles\cart\data\forklift_hull_yellow_co.paa","optre_vehicles\cart\data\forklift_forks_yellow_co.paa","optre_vehicles\cart\data\forklift_cockpit_yellow_co.paa" };
		class textureSources
		{
			class coloryellow
			{
				displayName = "Yellow";
				author = "Article 2 Studios";
				textures[] =
				{
					"optre_vehicles\cart\data\forklift_hull_yellow_co.paa",
					"optre_vehicles\cart\data\forklift_forks_yellow_co.paa",
					"optre_vehicles\cart\data\forklift_cockpit_yellow_co.paa"
				};
				factions[] = {};
			};
			class colorgrey
			{
				displayName = "Grey";
				author = "Article 2 Studios";
				textures[] =
				{
					"optre_vehicles\cart\data\forklift_hull_white_co.paa",
					"optre_vehicles\cart\data\forklift_forks_white_co.paa",
					"optre_vehicles\cart\data\forklift_cockpit_white_co.paa"
				};
				factions[] = {};
			};
			class colorgreen
			{
				displayName = "Green";
				author = "Article 2 Studios";
				textures[] =
				{
					"optre_vehicles\cart\data\forklift_hull_green_co.paa",
					"optre_vehicles\cart\data\forklift_forks_green_co.paa",
					"optre_vehicles\cart\data\forklift_cockpit_green_co.paa"
				};
				factions[] = {};
			};
		};

		showNVGCargo[] = { 0,1 };
		maxFordingDepth = 0.95;
		getInAction = "GetInOffroad";
		getOutAction = "GetOutMRAP_01";
		cargoGetInAction[] = { "GetInHeli_Transport_01Cargo" };
		cargoGetOutAction[] = { "GetOutHelicopterCargoRfl" };
		commanderCanSee = 31;
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 1;
		driverDoor = "";
		cargoDoors[] = {};
		precision = 15;
		weapons[] = { "TruckHorn2" };
		magazines[] = {};
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = { "veh_vehicle_MRAP_s" };
				speechPlural[] = { "veh_vehicle_MRAP_p" };
			};
		};
		attenuationEffectType = "OpenCarAttenuation";
		nameSound = "car";
		soundAttenuationCargo[] = { 1,0 };
		soundGetIn[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\getin",0.5623413,1 };
		soundGetOut[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\getout",0.5623413,1,40 };
		soundDammage[] = { "",0.5623413,1 };
		soundEngineOnInt[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_start",0.3548134,1 };
		soundEngineOnExt[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_start",0.7079458,1,200 };
		soundEngineOffInt[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_stop",0.3548134,1 };
		soundEngineOffExt[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_stop",0.7079458,1,200 };
		buildCrash0[] = { "A3\sounds_f\Vehicles\soft\noises\crash_building_01",1,1,200 };
		buildCrash1[] = { "A3\sounds_f\Vehicles\soft\noises\crash_building_02",1,1,200 };
		buildCrash2[] = { "A3\sounds_f\Vehicles\soft\noises\crash_building_03",1,1,200 };
		buildCrash3[] = { "A3\sounds_f\Vehicles\soft\noises\crash_building_04",1,1,200 };
		soundBuildingCrash[] = { "buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25 };
		WoodCrash0[] = { "A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_01",1,1,200 };
		WoodCrash1[] = { "A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_02",1,1,200 };
		WoodCrash2[] = { "A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_03",1,1,200 };
		WoodCrash3[] = { "A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_04",1,1,200 };
		WoodCrash4[] = { "A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_05",1,1,200 };
		WoodCrash5[] = { "A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_06",1,1,200 };
		soundWoodCrash[] = { "woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166 };
		ArmorCrash0[] = { "A3\sounds_f\Vehicles\soft\noises\crash_vehicle_01",1,1,200 };
		ArmorCrash1[] = { "A3\sounds_f\Vehicles\soft\noises\crash_vehicle_02",1,1,200 };
		ArmorCrash2[] = { "A3\sounds_f\Vehicles\soft\noises\crash_vehicle_03",1,1,200 };
		ArmorCrash3[] = { "A3\sounds_f\Vehicles\soft\noises\crash_vehicle_04",1,1,200 };
		soundArmorCrash[] = { "ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25 };
		class Sounds
		{
			class Idle_ext
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_idle",0.3981072,1,150 };
				frequency = "0.95 + ((rpm/ 4500) factor[(800/ 4500),(1400/ 4500)])*0.15";
				volume = "engineOn*camPos*(((rpm/ 4500) factor[(600/ 4500),(1100/ 4500)]) * ((rpm/ 4500) factor[(1800/ 4500),(1300/ 4500)]))";
			};
			class Engine
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_low1",0.4466836,1,250 };
				frequency = "0.9 + ((rpm/ 4500) factor[(1400/ 4500),(2100/ 4500)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 4500) factor[(1400/ 4500),(1800/ 4500)]) * ((rpm/ 4500) factor[(2300/ 4500),(2000/ 4500)]))";
			};
			class Engine1_ext
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_low2",0.5623413,1,300 };
				frequency = "0.9 +  ((rpm/ 4500) factor[(2100/ 4500),(2800/ 4500)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 4500) factor[(1900/ 4500),(2300/ 4500)]) * ((rpm/ 4500) factor[(3000/ 4500),(2500/ 4500)]))";
			};
			class Engine2_ext
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_mid",0.7079458,1,350 };
				frequency = "0.9 + ((rpm/ 4500) factor[(2800/ 4500),(3600/ 4500)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 4500) factor[(2500/ 4500),(3100/ 4500)]) * ((rpm/ 4500) factor[(4500/ 4500),(3700/ 4500)]))";
			};
			class Engine3_ext
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_high",1,1,400 };
				frequency = "0.95 + ((rpm/ 4500) factor[(3600/ 4500),(4500/ 4500)])*0.1";
				volume = "engineOn*camPos*((rpm/ 4500) factor[(3800/ 4500),(4500/ 4500)])";
			};
			class IdleThrust
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_idle",0.5623413,1,200 };
				frequency = "0.95 + ((rpm/ 4500) factor[(800/ 4500),(1400/ 4500)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(600/ 4500),(1100/ 4500)]) * ((rpm/ 4500) factor[(1800/ 4500),(1300/ 4500)]))";
			};
			class EngineThrust
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_low1",0.7079458,1,350 };
				frequency = "0.9 + ((rpm/ 4500) factor[(1400/ 4500),(2100/ 4500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(1400/ 4500),(1800/ 4500)]) * ((rpm/ 4500) factor[(2300/ 4500),(2000/ 4500)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_low2",0.8912509,1,400 };
				frequency = "0.9 +  ((rpm/ 4500) factor[(2100/ 4500),(2800/ 4500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(1900/ 4500),(2300/ 4500)]) * ((rpm/ 4500) factor[(3000/ 4500),(2500/ 4500)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_mid",1.122018,1,425 };
				frequency = "0.9 + ((rpm/ 4500) factor[(2800/ 4500),(3600/ 4500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(2500/ 4500),(3100/ 4500)]) * ((rpm/ 4500) factor[(4500/ 4500),(3700/ 4500)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_high",1.258925,1,450 };
				frequency = "0.95 + ((rpm/ 4500) factor[(3600/ 4500),(4500/ 4500)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 4500) factor[(3800/ 4500),(4500/ 4500)])";
			};
			class Idle_int
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_idle",0.2511886,1 };
				frequency = "0.95 + ((rpm/ 4500) factor[(800/ 4500),(1400/ 4500)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/ 4500) factor[(600/ 4500),(1100/ 4500)]) * ((rpm/ 4500) factor[(1800/ 4500),(1300/ 4500)]))";
			};
			class Engine_int
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_low1",0.3162278,1 };
				frequency = "0.9 + ((rpm/ 4500) factor[(1400/ 4500),(2100/ 4500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 4500) factor[(1400/ 4500),(1800/ 4500)]) * ((rpm/ 4500) factor[(2300/ 4500),(2000/ 4500)]))";
			};
			class Engine1_int
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_low2",0.3981072,1 };
				frequency = "0.9 +  ((rpm/ 4500) factor[(2100/ 4500),(2800/ 4500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 4500) factor[(1900/ 4500),(2300/ 4500)]) * ((rpm/ 4500) factor[(3000/ 4500),(2500/ 4500)]))";
			};
			class Engine2_int
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_mid",0.5011872,1 };
				frequency = "0.9 + ((rpm/ 4500) factor[(2800/ 4500),(3600/ 4500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 4500) factor[(2500/ 4500),(3100/ 4500)]) * ((rpm/ 4500) factor[(4500/ 4500),(3700/ 4500)]))";
			};
			class Engine3_int
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_high",0.6309574,1 };
				frequency = "0.95 + ((rpm/ 4500) factor[(3600/ 4500),(4500/ 4500)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/ 4500) factor[(3800/ 4500),(4500/ 4500)])";
			};
			class IdleThrust_int
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_idle",0.3548134,1 };
				frequency = "0.95 + ((rpm/ 4500) factor[(800/ 4500),(1400/ 4500)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(600/ 4500),(1100/ 4500)]) * ((rpm/ 4500) factor[(1800/ 4500),(1300/ 4500)]))";
			};
			class EngineThrust_int
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_low1",0.4466836,1 };
				frequency = "0.9 + ((rpm/ 4500) factor[(1400/ 4500),(2100/ 4500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(1400/ 4500),(1800/ 4500)]) * ((rpm/ 4500) factor[(2300/ 4500),(2000/ 4500)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_low2",0.5623413,1 };
				frequency = "0.9 +  ((rpm/ 4500) factor[(2100/ 4500),(2800/ 4500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(1900/ 4500),(2300/ 4500)]) * ((rpm/ 4500) factor[(3000/ 4500),(2500/ 4500)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_mid",0.7079458,1 };
				frequency = "0.9 + ((rpm/ 4500) factor[(2800/ 4500),(3600/ 4500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(2500/ 4500),(3100/ 4500)]) * ((rpm/ 4500) factor[(4500/ 4500),(3700/ 4500)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_high",0.7943282,1 };
				frequency = "0.95 + ((rpm/ 4500) factor[(3600/ 4500),(4500/ 4500)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 4500) factor[(3800/ 4500),(4500/ 4500)])";
			};
			class TiresRockOut
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",1.412538,1,60 };
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",1.412538,1,60 };
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",1.258925,1,60 };
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",1.122018,1,60 };
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",1.258925,1,60 };
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",1.122018,1,60 };
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",1.122018,1,90 };
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",0.7079458,1 };
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",0.7079458,1 };
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",0.7079458,1 };
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",0.7079458,1 };
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",0.7079458,1 };
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",0.7079458,1 };
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",0.5623413,1 };
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",0.7079458,1,80 };
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.7079458,1,80 };
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_road
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.7079458,1,80 };
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_road
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.7079458,1,80 };
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",0.7079458,1,60 };
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_ext_1",0.7079458,1,60 };
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_dirt
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.7079458,1,60 };
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.7079458,1,60 };
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_road
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",0.3162278,1 };
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.3162278,1 };
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_road
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.3162278,1 };
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_road
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.3162278,1 };
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_dirt
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",0.3162278,1 };
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_int_1",0.3162278,1 };
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_dirt
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.3162278,1 };
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_dirt
			{
				sound[] = { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.3162278,1 };
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
		};
		terrainCoef = 0.45;
		turnCoef = 3;
		thrustDelay = 0.2;
		brakeIdleSpeed = 1.78;
		maxSpeed = 40;
		fuelCapacity = 150;
		antiRollbarForceCoef = 0.75;
		antiRollbarForceLimit = 0.75;
		antiRollbarSpeedMin = 10;
		antiRollbarSpeedMax = 40;
		idleRpm = 800;
		redRpm = 4500;
		slowSpeedForwardCoef = 0.35;
		normalSpeedForwardCoef = 0.65;
		class complexGearbox
		{
			GearboxRatios[] = { "R1",-3.182,"N",0,"D1",4.182,"D2",2.318,"D3",1.85,"D4",1.65,"D5",1.45 };
			TransmissionRatios[] = { "High",5.539 };
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		simulation = "carx";
		dampersBumpCoef = 0.25;
		differentialType = "all_open";
		frontRearSplit = 0.5;
		frontBias = 1.3;
		rearBias = 1.3;
		centreBias = 1.3;
		clutchStrength = 10;
		enginePower = 276;
		maxOmega = 471;
		peakTorque = 1253;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 0.35;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		torqueCurve[] = { { 0,0 },{ 0.178,0.5 },{ 0.25,0.85 },{ 0.4,0.9 },{ 0.5,1 },{ 0.725,0.95 },{ 0.85,0.6 },{ 1,0.3 } };
		changeGearMinEffectivity[] = { 0.95,0.15,0.95,0.95,0.95,0.95,0.95 };
		switchTime = 0.25;
		latency = 1;
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
				maxHandBrakeTorque = 6000;
				suspTravelDirection[] = { 0,-1,0 };
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.25;
				mMaxDroop = 0.25;
				sprungMass = 350;
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
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				side = "left";
				steering = 0;
			};
			class RF : LF
			{
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				side = "right";
			};
			class RR : RF
			{
				boneName = "wheel_2_2_damper";
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				side = "right";
				steering = 0;
			};
		};
		supplyRadius = 5;
		transportMaxMagazines = 20;
		class TransportMagazines {};
		class TransportItems {};
		class TransportWeapons {};
		class Turrets {};
		class UserActions
		{
			class ForksUp
			{
				userActionID = 60;
				displayName = "Raise Forks";
				displayNameDefault = "Raise Forks";
				textToolTip = "Raise Forks";
				position = "forks_handle";
				radius = 5;
				priority = 2;
				onlyForPlayer = 0;
				condition = "((this animationPhase ""liftforks_2_anim"" < 0.5) AND (this animationPhase ""liftforks_1_anim"" < 0.5) AND (alive this) AND (player == driver this))";
				statement = "this animate [""liftforks_2_anim"",1]; this animate [""liftforks_1_anim"",1]";
				animPeriod = 5;
			};
			class ForksDown : ForksUp
			{
				userActionID = 61;
				displayName = "Lower Forks";
				displayNameDefault = "Lower Forks";
				textToolTip = "Lower Forks";
				priority = 2;
				condition = "((this animationPhase ""liftforks_2_anim"" > 0.5) AND (this animationPhase ""liftforks_1_anim"" > 0.5) AND (alive this) AND (player == driver this))";
				statement = "this animate [""liftforks_2_anim"",0]; this animate [""liftforks_1_anim"",0]";
				animPeriod = 5;
			};
		};
	};
	class OPTRE_forklift : OPTRE_forklift_base
	{
		scope = 2;
		displayName = "S-2 Cargo Transporter";
		author = "Article 2 Studios";
		faction = "OPTRE_UEG_Civ";
		crew = "C_man_1";
		side = 3;
		textureList[] =
		{
			"colorgreen", 1,
			"coloryellow", 1,
			"colorgrey", 1
		};
	};
};