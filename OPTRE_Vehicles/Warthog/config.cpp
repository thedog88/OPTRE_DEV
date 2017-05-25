
class CfgPatches
{
	class OPTRE_Vehicles_Warthog
	{
		units[] = { "OPTRE_M12_FAV","OPTRE_M12_FAV_black","OPTRE_M12_FAV_tan","OPTRE_M12_FAV_snow","OPTRE_M12_FAV_ins","OPTRE_M813_TT","OPTRE_M813_TT_black","OPTRE_M813_TT_tan","OPTRE_M813_TT_snow","OPTRE_M12_LRV","OPTRE_M12_LRV_black","OPTRE_M12_LRV_tan","OPTRE_M12_LRV_snow","OPTRE_M12_LRV_ins","OPTRE_M12G1_LRV","OPTRE_M12_FAV_APC","OPTRE_M12_FAV_Marine","OPTRE_M12_FAV_PD","OPTRE_M813_TT_Marine","OPTRE_M12_LRV_Marine","OPTRE_M12G1_LRV_black","OPTRE_M12G1_LRV_tan","OPTRE_M12G1_LRV_snow","OPTRE_M12G1_LRV_Marine","OPTRE_M12A1_LRV","OPTRE_M12A1_LRV_black","OPTRE_M12A1_LRV_tan","OPTRE_M12A1_LRV_snow","OPTRE_M12A1_LRV_Marine","OPTRE_M12A1_LRV_ins","OPTRE_M12R_AA","OPTRE_M12R_AA_black","OPTRE_M12R_AA_tan","OPTRE_M12R_AA_snow","OPTRE_M12R_AA_Marine","OPTRE_M12R_AA_ins","OPTRE_M12_CIV","OPTRE_M12_CIV2" };
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
	class OPTRE_M12_base : Car_F
	{
		dlc = "OPTRE";
		author = "Article 2 Studios";
		displayName = "";
		class Library
		{
			libTextDesc = "The M12 FAV Warthog is the UNSC's primary ground vehicle, used for its scouting and reconnaissance capacity, or as an integral part of a mechanized infantry unit; the M12 has been a part of the UNSC's armored vehicle fleet for fifty years, and is the most recognizable vehicle in their arsenal. It is a highly mobile, all-wheel-drive, all-wheel-steering, ICE-powered (Internal combustion engine) vehicle equipped with a contuously-variable transmission.";
		};
		model = "OPTRE_Vehicles\Warthog\Warthog.p3d";
		picture = "OPTRE_Vehicles\Warthog\Data\picture.paa";
		Icon = "OPTRE_Vehicles\Warthog\Data\icon.paa";
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
		armor = 100;
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
			class LightCarHeadL03 : LightCarHeadL01
			{
				position = "LightCarHeadL03";
				direction = "LightCarHeadL03_end";
				innerAngle = 50;
				outerAngle = 179;
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
			class LightCarHeadR03 : LightCarHeadR01
			{
				position = "LightCarHeadR03";
				direction = "LightCarHeadR03_end";
				innerAngle = 50;
				outerAngle = 179;
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
		class AnimationSources : AnimationSources
		{
			class Gatling
			{
				source = "revolving";
				weapon = "OPTRE_M41_LAAG";
			};
			class Gatling_flash
			{
				source = "reload";
				weapon = "OPTRE_M41_LAAG";
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
			class HitGlass1 : HitGlass1
			{
				armor = 0.5;
				explosionShielding = 2;
				visual = "glass1";
				name = "glass1";
				passThrough = 0;
			};
		};
		class Damage
		{
			tex[] = { "OPTRE_Core\data\base\glass_ca.paa","OPTRE_Vehicles\shattered_dt.paa","OPTRE_Core\data\base\transparent.paa" };
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

		class RenderTargets
		{
			class FrontView
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
			class RearView
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
			class leftMirror
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
			class rightMirror
			{
				renderTarget = "rendertarget3";
				class CameraView1
				{
					pointPosition = "PIP3_pos";
					pointDirection = "PIP3_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
		};
		showNVGCargo[] = { 0,1 };
		maxFordingDepth = 0.95;
		getInAction = "GetInMRAP_01";
		getOutAction = "GetOutMRAP_01";
		cargoGetInAction[] = { "GetInMRAP_01_cargo" };
		cargoGetOutAction[] = { "GetOutMRAP_01" };
		commanderCanSee = 31;
		hideWeaponsDriver = 0;
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
		terrainCoef = 0;
		turnCoef = 3;
		thrustDelay = 0.2;
		brakeIdleSpeed = 1.78;
		maxSpeed = 125;
		fuelCapacity = 150;
		antiRollbarForceCoef = 0.75;
		antiRollbarForceLimit = 0.75;
		antiRollbarSpeedMin = 10;
		antiRollbarSpeedMax = 100;
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
				count = 4;
			};
		};
		class TransportWeapons {};
		class UserActions
		{
			class Flip
			{
				displayNameDefault = "Press SPACEBAR to Flip Warthog";
				displayName = "Press SPACEBAR to Flip Warthog";
				position = "";
				radius = 4;
				onlyForPlayer = 1;
				condition = "(alive this) AND !(canmove this)";
				statement = "this setVectorUp surfaceNormal getposATL this";
			};
		};
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "OPTRE_Vehicles\Warthog\data\warthog_co.paa" };

	};
	class OPTRE_M12_FAV : OPTRE_M12_base
	{
		scope = 2;
		displayName = "M12 FAV Warthog (Unarmed)";
		author = "Article 2 Studios";
		faction = "OPTRE_UNSC";
		side = 1;
		crew = "OPTRE_UNSC_Army_Soldier_Rifleman_AR_WDL";
		hiddenSelections[] = { "camo1","camo2","clan","clan_text","insignia","attach_apc","attach_mg","attach_troop" };
		hiddenSelectionsTextures[] = { "OPTRE_Vehicles\Warthog\data\warthog_co.paa" };
		class textureSources
		{
			class colorgreen
			{
				displayName = "Green";
				author = "Article 2 Studios";
				textures[] =
				{
					"OPTRE_Vehicles\Warthog\data\warthog_co.paa"
				};
				factions[] =
				{
					"OPTRE_UNSC"
				};
			};
			class colortan
			{
				displayName = "Tan";
				author = "Article 2 Studios";
				textures[] =
				{
					"OPTRE_Vehicles\Warthog\data\warthog_tan_co.paa"
				};
				factions[] =
				{
					"OPTRE_UNSC" // Side Blufor
				};
			};
			class colorblack
			{
				displayName = "Black";
				author = "Article 2 Studios";
				textures[] =
				{
					"OPTRE_Vehicles\Warthog\data\warthog_black_co.paa"
				};
				factions[] =
				{
					"OPTRE_UNSC" // Side Blufor
				};
			};
			class colorwhite
			{
				displayName = "Snow";
				author = "Article 2 Studios";
				textures[] =
				{
					"OPTRE_Vehicles\Warthog\data\warthog_snow_co.paa"
				};
				factions[] =
				{
					"OPTRE_UNSC" // Side Blufor
				};
			};
			//PD
			class colorPD
			{
				displayName = "PD";
				author = "Article 2 Studios";
				textures[] =
				{
					"OPTRE_Vehicles\Warthog\data\warthog_police_co.paa"
				};
				factions[] =
				{
					"OPTRE_PD"
				};
			};
			// Innies
			class colorinnie
			{
				displayName = "Innie";
				author = "Article 2 Studios";
				textures[] =
				{
					"OPTRE_Vehicles\Warthog\data\warthog_ins_co.paa"
				};
				factions[] =
				{
					"OPTRE_Ins" // Side opfor
				};
			};
		};

		textureList[] =
		{
			"colorgreen", 1,
			"colorblack", 1,
			"colortan", 1,
			"colorwhite", 1
		};
		class CargoTurret;
		class Turrets : Turrets
		{
			class CargoTurret_01 : CargoTurret
			{
				gunnerAction = "passenger_inside_2";
				gunnerCompartments = "Compartment1";
				memoryPointsGetInGunner = "pos pas";
				memoryPointsGetInGunnerDir = "pos pas dir";
				memoryPointGunnerOptics = "";
				gunnerName = "Front Passenger";
				proxyIndex = 1;
				maxElev = 10;
				minElev = -40;
				maxTurn = 95;
				minTurn = -95;
				hasGunner = 1;
				isPersonTurret = 1;
				class dynamicViewLimits
				{
					CargoTurret_02[] = { -65,95 };
				};
			};
			class CargoTurret_02 : CargoTurret_01
			{
				gunnerAction = "passenger_flatground_2";
				gunnerName = "Rear R Passenger";
				memoryPointsGetInGunner = "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				proxyIndex = 3;
				gunnerCompartments = "Compartment2";
				class dynamicViewLimits
				{
					CargoTurret_01[] = { -95,65 };
				};
			};
			class CargoTurret_03 : CargoTurret_02
			{
				gunnerAction = "passenger_flatground_1";
				gunnerName = "Rear L Passenger";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				proxyIndex = 2;
				gunnerCompartments = "Compartment2";
				class dynamicViewLimits
				{
					CargoTurret_01[] = { -95,65 };
					CargoTurret_02[] = { -65,95 };
				};
			};
		};
	};

	class OPTRE_M12_FAV_tan : OPTRE_M12_FAV
	{
		displayName = "M12 FAV Warthog (Unarmed) [Tan]";
		crew = "OPTRE_UNSC_Army_Soldier_Rifleman_AR_DES";
		author = "Article 2 Studios";
		hiddenSelections[] = { "camo1","camo2","clan","clan_text","insignia","attach_apc","attach_mg","attach_troop" };
		hiddenSelectionsTextures[] = { "OPTRE_Vehicles\Warthog\data\warthog_tan_co.paa" };
		textureList[] =
		{
			"colortan", 1
		};
	};
	class OPTRE_M12_FAV_snow : OPTRE_M12_FAV
	{
		displayName = "M12 FAV Warthog (Unarmed) [Snow]";
		author = "Article 2 Studios";
		crew = "OPTRE_UNSC_Army_Soldier_Rifleman_AR_SNO";
		hiddenSelections[] = { "camo1","camo2","clan","clan_text","insignia","attach_apc","attach_mg","attach_troop" };
		hiddenSelectionsTextures[] = { "OPTRE_Vehicles\Warthog\data\warthog_snow_co.paa" };
		textureList[] =
		{
			"colorwhite", 1
		};
	};
	class OPTRE_M12_FAV_Marine : OPTRE_M12_FAV
	{
		displayName = "M12 FAV Warthog (Unarmed) [Marine]";
		crew = "OPTRE_UNSC_Marine_Soldier_Rifleman_AR";
		author = "Article 2 Studios";
		textureList[] =
		{
			"colorgreen", 1,
			"colorblack", 1,
			"colortan", 1,
			"colorwhite", 1
		};
	};
	class OPTRE_M12_FAV_ins : OPTRE_M12_FAV
	{
		displayName = "M12 FAV Warthog (Unarmed) [Ins]";
		author = "Article 2 Studios";
		hiddenSelections[] = { "camo1","camo2","clan","clan_text","insignia","attach_apc","attach_mg","attach_troop" };
		hiddenSelectionsTextures[] = { "OPTRE_Vehicles\Warthog\data\warthog_ins_co.paa" };
		vehicleClass = "OPTRE_Ins_Vehicle_class";
		side = 0;
		crew = "OPTRE_Ins_URF_Rifleman_AR";
		faction = "OPTRE_Ins";
		textureList[] =
		{
			"colorinnie", 1
		};
	};
	class OPTRE_M12_FAV_PD : OPTRE_M12_FAV
	{
		displayName = "M12 FAV Warthog (Unarmed) [Police]";
		author = "Article 2 Studios";
		hiddenSelections[] = { "camo1","camo2","clan","clan_text","insignia","attach_apc","attach_mg","attach_troop" };
		hiddenSelectionsTextures[] = { "OPTRE_Vehicles\Warthog\data\warthog_police_co.paa" };
		vehicleClass = "OPTRE_PD_Vehicle_class";
		side = 2;
		crew = "OPTRE_PD_Soldier_Officer";
		faction = "OPTRE_PD";
		textureList[] =
		{
			"colorPD", 1
		};
	};

	/// TT ///
	class OPTRE_M813_TT : OPTRE_M12_base
	{
		displayName = "M831 TT Warthog (Transport)";
		scope = 2;
		model = "OPTRE_Vehicles\Warthog\Warthog_TT.p3d";
		author = "Article 2 Studios";
		faction = "OPTRE_UNSC";
		side = 1;
		transportSoldier = 0;
		crew = "OPTRE_UNSC_Army_Soldier_Rifleman_AR_WDL";
		hiddenSelections[] = { "camo1","camo2","clan","clan_text","insignia","attach_apc","attach_mg","attach_antenna" };
		hiddenSelectionsTextures[] = { "OPTRE_Vehicles\Warthog\data\warthog_co.paa","OPTRE_Vehicles\Warthog\data\warthog_addons_co.paa" };
		class textureSources
		{
			class colorgreen
			{
				displayName = "Green";
				author = "Article 2 Studios";
				textures[] =
				{
					"OPTRE_Vehicles\Warthog\data\warthog_co.paa",
					"OPTRE_Vehicles\Warthog\data\warthog_addons_co.paa"
				};
				factions[] =
				{
					"OPTRE_UNSC"
				};
			};
			class colortan
			{
				displayName = "Tan";
				author = "Article 2 Studios";
				textures[] =
				{
					"OPTRE_Vehicles\Warthog\data\warthog_tan_co.paa",
					"OPTRE_Vehicles\Warthog\data\warthog_addons_tan_co.paa"
				};
				factions[] =
				{
					"OPTRE_UNSC" // Side Blufor
				};
			};
			class colorblack
			{
				displayName = "Black";
				author = "Article 2 Studios";
				textures[] =
				{
					"OPTRE_Vehicles\Warthog\data\warthog_black_co.paa",
					"OPTRE_Vehicles\Warthog\data\warthog_addons_black_co.paa"
				};
				factions[] =
				{
					"OPTRE_UNSC" // Side Blufor
				};
			};
			class colorwhite
			{
				displayName = "Snow";
				author = "Article 2 Studios";
				textures[] =
				{
					"OPTRE_Vehicles\Warthog\data\warthog_snow_co.paa",
					"OPTRE_Vehicles\Warthog\data\warthog_addons_snow_co.paa"
				};
				factions[] =
				{
					"OPTRE_UNSC" // Side Blufor
				};
			};
		};

		textureList[] =
		{
			"colorgreen", 1,
			"colorblack", 1,
			"colortan", 1,
			"colorwhite", 1
		};
		vehicleClass = "OPTRE_UNSC_Vehicle_class";
		class CargoTurret;
		class Turrets : Turrets
		{
			class CargoTurret_01 : CargoTurret
			{
				gunnerAction = "passenger_inside_2";
				gunnerCompartments = "Compartment1";
				memoryPointsGetInGunner = "pos pas";
				memoryPointsGetInGunnerDir = "pos pas dir";
				memoryPointGunnerOptics = "";
				gunnerName = "Front Passenger";
				proxyIndex = 1;
				maxElev = 10;
				minElev = -40;
				maxTurn = 95;
				minTurn = -95;
				isPersonTurret = 1;
				hasGunner = 1;
				class dynamicViewLimits
				{
					CargoTurret_02[] = { -65,95 };
				};
			};
			class CargoTurret_02 : CargoTurret_01
			{
				gunnerAction = "passenger_bench_1";
				gunnerName = "Rear R Passenger";
				memoryPointsGetInGunner = "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				proxyIndex = 4;
				gunnerCompartments = "Compartment2";
				class dynamicViewLimits
				{
					CargoTurret_01[] = { -95,65 };
				};
			};
			class CargoTurret_03 : CargoTurret_02
			{
				gunnerAction = "passenger_bench_1";
				gunnerName = "Rear L Passenger";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				proxyIndex = 5;
				gunnerCompartments = "Compartment2";
				class dynamicViewLimits
				{
					CargoTurret_01[] = { -95,65 };
					CargoTurret_02[] = { -65,95 };
				};
			};
			class CargoTurret_04 : CargoTurret_02
			{
				gunnerAction = "passenger_inside_2";
				gunnerName = "Left Passenger 2";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				proxyIndex = 6;
				gunnerCompartments = "Compartment2";
				class dynamicViewLimits
				{
					CargoTurret_01[] = { -95,65 };
					CargoTurret_02[] = { -65,95 };
				};
			};
			class CargoTurret_05 : CargoTurret_02
			{
				gunnerAction = "passenger_inside_2";
				gunnerName = "Right Passenger 2";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				proxyIndex = 7;
				gunnerCompartments = "Compartment2";
				class dynamicViewLimits
				{
					CargoTurret_01[] = { -95,65 };
					CargoTurret_02[] = { -65,95 };
				};
			};
			class CargoTurret_06 : CargoTurret_02
			{
				gunnerAction = "passenger_inside_2";
				gunnerName = "Left Passenger 1";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				proxyIndex = 8;
				gunnerCompartments = "Compartment2";
				class dynamicViewLimits
				{
					CargoTurret_01[] = { -95,65 };
					CargoTurret_02[] = { -65,95 };
				};
			};
			class CargoTurret_07 : CargoTurret_02
			{
				gunnerAction = "passenger_inside_2";
				gunnerName = "Right Passenger 1";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				proxyIndex = 9;
				gunnerCompartments = "Compartment2";
				class dynamicViewLimits
				{
					CargoTurret_01[] = { -95,65 };
					CargoTurret_02[] = { -65,95 };
				};
			};
		};
	};

	class OPTRE_M813_TT_tan : OPTRE_M813_TT
	{
		displayName = "M831 TT Warthog (Transport) [Tan]";
		crew = "OPTRE_UNSC_Army_Soldier_Rifleman_AR_DES";
		author = "Article 2 Studios";
		hiddenSelections[] = { "camo1","camo2","clan","clan_text","insignia","attach_apc","attach_mg","attach_antenna" };
		hiddenSelectionsTextures[] = { "OPTRE_Vehicles\Warthog\data\warthog_tan_co.paa","OPTRE_Vehicles\Warthog\data\warthog_addons_tan_co.paa" };
		textureList[] =
		{
			"colortan", 1
		};
	};
	class OPTRE_M813_TT_snow : OPTRE_M813_TT
	{
		displayName = "M831 TT Warthog (Transport) [Snow]";
		author = "Article 2 Studios";
		crew = "OPTRE_UNSC_Army_Soldier_Rifleman_AR_SNO";
		hiddenSelections[] = { "camo1","camo2","clan","clan_text","insignia","attach_apc","attach_mg","attach_antenna" };
		hiddenSelectionsTextures[] = { "OPTRE_Vehicles\Warthog\data\warthog_snow_co.paa","OPTRE_Vehicles\Warthog\data\warthog_addons_snow_co.paa" };
		textureList[] =
		{
			"colorwhite", 1
		};
	};
	class OPTRE_M813_TT_Marine : OPTRE_M813_TT
	{
		displayName = "M831 TT Warthog (Transport) [Marine]";
		crew = "OPTRE_UNSC_Marine_Soldier_Rifleman_AR";
		author = "Article 2 Studios";
		textureList[] =
		{
			"colorgreen", 1,
			"colorblack", 1,
			"colortan", 1,
			"colorwhite", 1
		};
	};

	/// M12 ///
	class OPTRE_M12_LRV : OPTRE_M12_FAV
	{
		displayName = "M12 LRV Warthog (MG)";
		author = "Article 2 Studios";
		faction = "OPTRE_UNSC";
		model = "OPTRE_Vehicles\Warthog\Warthog_MG.p3d";
		transportSoldier = 0;
		hiddenSelections[] = { "camo1","camo2","clan","clan_text","insignia","attach_apc","attach_troop" };
		hiddenSelectionsTextures[] = { "OPTRE_Vehicles\Warthog\data\warthog_co.paa","OPTRE_Vehicles\Warthog\data\warthog_addons_co.paa" };
		class textureSources
		{
			class colorgreen
			{
				displayName = "Green";
				author = "Article 2 Studios";
				textures[] =
				{
					"OPTRE_Vehicles\Warthog\data\warthog_co.paa",
					"OPTRE_Vehicles\Warthog\data\warthog_addons_co.paa"
				};
				factions[] =
				{
					"OPTRE_UNSC"
				};
			};
			class colortan
			{
				displayName = "Tan";
				author = "Article 2 Studios";
				textures[] =
				{
					"OPTRE_Vehicles\Warthog\data\warthog_tan_co.paa",
					"OPTRE_Vehicles\Warthog\data\warthog_addons_tan_co.paa"
				};
				factions[] =
				{
					"OPTRE_UNSC" // Side Blufor
				};
			};
			class colorblack
			{
				displayName = "Black";
				author = "Article 2 Studios";
				textures[] =
				{
					"OPTRE_Vehicles\Warthog\data\warthog_black_co.paa",
					"OPTRE_Vehicles\Warthog\data\warthog_addons_black_co.paa"
				};
				factions[] =
				{
					"OPTRE_UNSC" // Side Blufor
				};
			};
			class colorwhite
			{
				displayName = "Snow";
				author = "Article 2 Studios";
				textures[] =
				{
					"OPTRE_Vehicles\Warthog\data\warthog_snow_co.paa",
					"OPTRE_Vehicles\Warthog\data\warthog_addons_snow_co.paa"
				};
				factions[] =
				{
					"OPTRE_UNSC" // Side Blufor
				};
			};
			// Innies
			class colorinnie
			{
				displayName = "Innie";
				author = "Article 2 Studios";
				textures[] =
				{
					"OPTRE_Vehicles\Warthog\data\warthog_ins_co.paa",
					"OPTRE_Vehicles\Warthog\data\warthog_addons_ins_CO.paa"
				};
				factions[] =
				{
					"OPTRE_Ins" // Side opfor
				};
			};
		};

		textureList[] =
		{
			"colorgreen", 1,
			"colorblack", 1,
			"colortan", 1,
			"colorwhite", 1
		};
		class RenderTargets
		{
			class FrontView
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
			class RearView
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
			class leftMirror
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
			class rightMirror
			{
				renderTarget = "rendertarget3";
				class CameraView1
				{
					pointPosition = "PIP3_pos";
					pointDirection = "PIP3_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
			class GunScreen
			{
				renderTarget = "rendertarget4";
				class CameraView1
				{
					pointPosition = "PIP4_pos";
					pointDirection = "PIP4_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.5;
				};
			};
		};
		class Turrets : Turrets
		{
			class CargoTurret_01 : CargoTurret
			{
				gunnerAction = "passenger_inside_2";
				gunnerCompartments = "Compartment1";
				memoryPointsGetInGunner = "pos pas";
				memoryPointsGetInGunnerDir = "pos pas dir";
				memoryPointGunnerOptics = "";
				gunnerName = "Front Passenger";
				proxyIndex = 1;
				maxElev = 10;
				minElev = -40;
				maxTurn = 95;
				minTurn = -95;
				isPersonTurret = 1;
				hasGunner = 1;
				class dynamicViewLimits
				{
					CargoTurret_02[] = { -65,95 };
				};
			};
			class MainTurret : MainTurret
			{
				body = "mainturret";
				gun = "maingun";
				animationsourcebody = "mainturret";
				animationSourceGun = "maingun";
				gunAxis = "Osa Hlavne";
				gunBeg = "Usti hlavne";
				gunEnd = "konec hlavne";
				minElev = -15;
				maxElev = 45;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				turretAxis = "OsaVeze";
				maxHorizontalRotSpeed = 1.75;
				maxVerticalRotSpeed = 1.5;
				gunnerAction = "driver_boat01";
				gunnerInAction = "driver_boat01";
				gunnerGetInAction = "GetInMRAP_01";
				gunnerGetOutAction = "GetOutMRAP_01";
				gunnerName = "Gunner";
				hideWeaponsGunner = 0;
				soundServo[] = { "",0.01,1 };
				stabilizedInAxes = 3;
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				commanding = 1;
				primaryGunner = 1;
				turretInfoType = "RscWeaponZeroing";
				memoryPointsGetInGunner = "Pos Gunner";
				memoryPointsGetInGunnerDir = "Pos Gunner dir";
				gunnerLeftHandAnimName = "trigger";
				gunnerRightHandAnimName = "trigger";
				memoryPointGun = "machinegun";
				weapons[] = { "OPTRE_M41_LAAG" };
				magazines[] = { "500Rnd_127x99_mag_Tracer_Yellow","500Rnd_127x99_mag_Tracer_Yellow","500Rnd_127x99_mag_Tracer_Yellow","500Rnd_127x99_mag_Tracer_Yellow" };
				memoryPointGunnerOptics = "gunnerview";
				gunnerOpticsShowCursor = 1;
				castGunnerShadow = 1;
				startEngine = 0;
				enableManualFire = 0;
				gunnerOpticsModel = "a3\weapons_f\Reticle\optics_empty";
				gunnerForceOptics = 0;
				hasGunner = 1;
				class ViewGunner : ViewOptics
				{
					initAngleX = -15;
					minAngleX = -45;
					maxAngleX = 45;
					initFov = 0.9;
					minFov = 0.42;
					maxFov = 0.9;
					visionMode[] = {};
				};
			};
		};
	};
	class OPTRE_M12_LRV_tan : OPTRE_M12_LRV
	{
		displayName = "M12 LRV Warthog (MG) [Tan]";
		crew = "OPTRE_UNSC_Army_Soldier_Rifleman_AR_DES";
		author = "Article 2 Studios";
		hiddenSelections[] = { "camo1","camo2","clan","clan_text","insignia","attach_apc","attach_troop" };
		hiddenSelectionsTextures[] = { "OPTRE_Vehicles\Warthog\data\warthog_tan_co.paa","OPTRE_Vehicles\Warthog\data\warthog_addons_tan_co.paa" };
		textureList[] =
		{
			"colortan", 1
		};
	};
	class OPTRE_M12_LRV_snow : OPTRE_M12_LRV
	{
		displayName = "M12 LRV Warthog (MG) [Snow]";
		author = "Article 2 Studios";
		crew = "OPTRE_UNSC_Army_Soldier_Rifleman_AR_SNO";
		hiddenSelections[] = { "camo1","camo2","clan","clan_text","insignia","attach_apc","attach_troop" };
		hiddenSelectionsTextures[] = { "OPTRE_Vehicles\Warthog\data\warthog_snow_co.paa","OPTRE_Vehicles\Warthog\data\warthog_addons_snow_co.paa" };
		textureList[] =
		{
			"colorwhite", 1
		};
	};
	class OPTRE_M12_LRV_Marine : OPTRE_M12_LRV
	{
		displayName = "M12 LRV Warthog (MG) [Marine]";
		crew = "OPTRE_UNSC_Marine_Soldier_Rifleman_AR";
		author = "Article 2 Studios";
		textureList[] =
		{
			"colorgreen", 1,
			"colorblack", 1,
			"colortan", 1,
			"colorwhite", 1
		};
	};
	class OPTRE_M12_LRV_ins : OPTRE_M12_LRV
	{
		displayName = "M12 LRV Warthog (MG) [Ins]";
		author = "Article 2 Studios";
		hiddenSelections[] = { "camo1","camo2","clan","clan_text","insignia","attach_apc","attach_troop" };
		hiddenSelectionsTextures[] = { "OPTRE_Vehicles\Warthog\data\warthog_ins_co.paa","OPTRE_Vehicles\Warthog\data\warthog_addons_ins_CO.paa" };
		textureList[] =
		{
			"colorinnie", 1
		};
		vehicleClass = "OPTRE_Ins_Vehicle_class";
		side = 0;
		crew = "OPTRE_Ins_URF_Rifleman_BR";
		faction = "OPTRE_Ins";
	};

	/// MG121:M12 ///
	class OPTRE_M12G1_LRV : OPTRE_M12_LRV
	{
		model = "OPTRE_Vehicles\Warthog\Warthog_g.p3d";
		displayName = "M12G1 Warthog (Gauss)";
		hiddenSelections[] = { "camo1","camo2","clan","clan_text","insignia" };
		hiddenSelectionsTextures[] = { "OPTRE_Vehicles\Warthog\data\warthog_co.paa","OPTRE_Vehicles\Warthog\data\warthog_addons_CO.paa" };
		textureList[] =
		{
			"colorgreen", 1,
			"colorblack", 1,
			"colortan", 1,
			"colorwhite", 1
		};
		class RenderTargets
		{
			class FrontView
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
			class RearView
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
			class leftMirror
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
			class rightMirror
			{
				renderTarget = "rendertarget3";
				class CameraView1
				{
					pointPosition = "PIP3_pos";
					pointDirection = "PIP3_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
			class Gunner_display
			{
				renderTarget = "rendertarget4";
				class CameraView1
				{
					pointPosition = "PIP4_pos";
					pointDirection = "PIP4_dir";
					renderQuality = 2;
					renderVisionMode = 2;
					fov = 0.5;
				};
			};
		};
		class Turrets : Turrets
		{
			class CargoTurret_01 : CargoTurret
			{
				gunnerAction = "passenger_inside_2";
				gunnerCompartments = "Compartment1";
				memoryPointsGetInGunner = "pos pas";
				memoryPointsGetInGunnerDir = "pos pas dir";
				memoryPointGunnerOptics = "";
				gunnerName = "Front Passenger";
				proxyIndex = 1;
				maxElev = 10;
				minElev = -40;
				maxTurn = 95;
				minTurn = -95;
				isPersonTurret = 1;
				hasGunner = 1;
				class dynamicViewLimits
				{
					CargoTurret_02[] = { -65,95 };
				};
			};
			class MainTurret : MainTurret
			{
				body = "mainturret";
				gun = "maingun";
				animationsourcebody = "mainturret";
				animationSourceGun = "maingun";
				gunAxis = "Osa Hlavne";
				gunBeg = "Usti hlavne";
				gunEnd = "konec hlavne";
				minElev = -15;
				maxElev = 45;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				turretAxis = "OsaVeze";
				maxHorizontalRotSpeed = 1.75;
				maxVerticalRotSpeed = 1.5;
				gunnerAction = "driver_boat01";
				gunnerInAction = "driver_boat01";
				gunnerGetInAction = "GetInMRAP_01";
				gunnerGetOutAction = "GetOutMRAP_01";
				gunnerName = "Gunner";
				hideWeaponsGunner = 0;
				stabilizedInAxes = 3;
				soundServo[] = { "",0.01,1 };
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				commanding = 1;
				primaryGunner = 1;
				memoryPointsGetInGunner = "Pos Gunner";
				memoryPointsGetInGunnerDir = "Pos Gunner dir";
				gunnerLeftHandAnimName = "trigger";
				gunnerRightHandAnimName = "trigger";
				memoryPointGun = "machinegun";
				weapons[] = { "OPTRE_M68_GAUSS" };
				magazines[] = { "OPTRE_3Rnd_ALIM_Gauss_Slugs","OPTRE_3Rnd_ALIM_Gauss_Slugs","OPTRE_3Rnd_ALIM_Gauss_Slugs","OPTRE_3Rnd_ALIM_Gauss_Slugs" };
				memoryPointGunnerOptics = "gunnerview";
				gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_w_F.p3d";
				gunnerOpticsShowCursor = 1;
				turretInfoType = "RscWeaponZeroing";
				class Viewoptics : ViewOptics
				{
					opticsZoomMin = 0.25;
					opticsZoomMax = 0.75;
					opticsZoomInit = 0.75;
					visionMode[] = { "Normal","NVG","Ti" };
					thermalMode[] = { 5,6 };
				};
				castGunnerShadow = 1;
				startEngine = 0;
				enableManualFire = 0;
				gunnerForceOptics = 0;
				class ViewGunner : ViewOptics
				{
					initFov = 0.75;
					minFov = 0.375;
					maxFov = 1.1;
				};
			};
		};
	};
	class OPTRE_M12G1_LRV_tan : OPTRE_M12G1_LRV
	{
		displayName = "M12G1 Warthog (Gauss) [Tan]";
		crew = "OPTRE_UNSC_Army_Soldier_Rifleman_AR_DES";
		author = "Article 2 Studios";
		hiddenSelections[] = { "camo1","camo2","clan","clan_text","insignia","attach_apc","attach_troop" };
		hiddenSelectionsTextures[] = { "OPTRE_Vehicles\Warthog\data\warthog_tan_co.paa","OPTRE_Vehicles\Warthog\data\warthog_addons_tan_co.paa" };
		textureList[] =
		{
			"colortan", 1
		};
	};
	class OPTRE_M12G1_LRV_snow : OPTRE_M12G1_LRV
	{
		displayName = "M12G1 Warthog (Gauss) [Snow]";
		author = "Article 2 Studios";
		crew = "OPTRE_UNSC_Army_Soldier_Rifleman_AR_SNO";
		hiddenSelections[] = { "camo1","camo2","clan","clan_text","insignia","attach_apc","attach_troop" };
		hiddenSelectionsTextures[] = { "OPTRE_Vehicles\Warthog\data\warthog_snow_co.paa","OPTRE_Vehicles\Warthog\data\warthog_addons_snow_co.paa" };
		textureList[] =
		{
			"colorwhite", 1
		};
	};
	class OPTRE_M12G1_LRV_Marine : OPTRE_M12G1_LRV
	{
		displayName = "M12G1 Warthog (Gauss) [Marine]";
		crew = "OPTRE_UNSC_Marine_Soldier_Rifleman_AR";
		author = "Article 2 Studios";
		textureList[] =
		{
			"colorgreen", 1,
			"colorblack", 1,
			"colortan", 1,
			"colorwhite", 1
		};
	};
	/// M12A1:M12 ///
	class OPTRE_M12A1_LRV : OPTRE_M12_LRV
	{
		model = "OPTRE_Vehicles\Warthog\warthog_AT.p3d";
		displayName = "M12A1 Warthog (Rocket)";
		hiddenSelections[] = { "camo1","camo2","clan","clan_text","insignia" };
		hiddenSelectionsTextures[] = { "OPTRE_Vehicles\Warthog\data\warthog_co.paa","OPTRE_Vehicles\Warthog\data\warthog_addons_CO.paa" };
		textureList[] =
		{
			"colorgreen", 1,
			"colorblack", 1,
			"colortan", 1,
			"colorwhite", 1
		};
		class RenderTargets
		{
			class FrontView
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
			class RearView
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
			class leftMirror
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
			class rightMirror
			{
				renderTarget = "rendertarget3";
				class CameraView1
				{
					pointPosition = "PIP3_pos";
					pointDirection = "PIP3_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
			class Gunner_display
			{
				renderTarget = "rendertarget4";
				class CameraView1
				{
					pointPosition = "PIP4_pos";
					pointDirection = "PIP4_dir";
					renderQuality = 2;
					renderVisionMode = 2;
					fov = 0.5;
				};
			};
		};
		class Turrets : Turrets
		{
			class CargoTurret_01 : CargoTurret
			{
				gunnerAction = "passenger_inside_2";
				gunnerCompartments = "Compartment1";
				memoryPointsGetInGunner = "pos pas";
				memoryPointsGetInGunnerDir = "pos pas dir";
				memoryPointGunnerOptics = "";
				gunnerName = "Front Passenger";
				proxyIndex = 1;
				maxElev = 10;
				minElev = -40;
				maxTurn = 95;
				minTurn = -95;
				isPersonTurret = 1;
				hasGunner = 1;
				class dynamicViewLimits
				{
					CargoTurret_02[] = { -65,95 };
				};
			};
			class MainTurret : MainTurret
			{
				body = "mainturret";
				gun = "maingun";
				animationsourcebody = "mainturret";
				animationSourceGun = "maingun";
				gunAxis = "Osa Hlavne";
				gunBeg = "Usti hlavne";
				gunEnd = "konec hlavne";
				minElev = -15;
				maxElev = 45;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				turretAxis = "OsaVeze";
				maxHorizontalRotSpeed = 1.75;
				maxVerticalRotSpeed = 1.5;
				gunnerAction = "driver_boat01";
				gunnerInAction = "driver_boat01";
				gunnerGetInAction = "GetInMRAP_01";
				gunnerGetOutAction = "GetOutMRAP_01";
				gunnerName = "Gunner";
				hideWeaponsGunner = 0;
				stabilizedInAxes = 3;
				soundServo[] = { "",0.01,1 };
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				commanding = 1;
				primaryGunner = 1;
				memoryPointsGetInGunner = "Pos Gunner";
				memoryPointsGetInGunnerDir = "Pos Gunner dir";
				gunnerLeftHandAnimName = "trigger";
				gunnerRightHandAnimName = "trigger";
				memoryPointGun = "machinegun";
				weapons[] = { "OPTRE_102R_Turret" };
				magazines[] = { "OPTRE_3Rnd_102mm_rockets","OPTRE_3Rnd_102mm_rockets","OPTRE_3Rnd_102mm_rockets","OPTRE_3Rnd_102mm_rockets" };
				memoryPointGunnerOptics = "gunnerview";
				gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_w_F.p3d";
				gunnerOpticsShowCursor = 1;
				turretInfoType = "RscWeaponZeroing";
				visionMode[] = { "Normal","NVG","Ti" };
				thermalMode[] = { 0,1 };
				castGunnerShadow = 1;
				startEngine = 0;
				enableManualFire = 0;
				gunnerForceOptics = 0;
				hasGunner = 1;
				class ViewGunner : ViewOptics
				{
					initFov = 0.75;
					minFov = 0.375;
					maxFov = 1.1;
				};
			};
		};
	};
	class OPTRE_M12A1_LRV_tan : OPTRE_M12A1_LRV
	{
		displayName = "M12A1 Warthog (Rocket) [Tan]";
		crew = "OPTRE_UNSC_Army_Soldier_Rifleman_AR_DES";
		author = "Article 2 Studios";
		hiddenSelections[] = { "camo1","camo2","clan","clan_text","insignia","attach_apc","attach_troop" };
		hiddenSelectionsTextures[] = { "OPTRE_Vehicles\Warthog\data\warthog_tan_co.paa","OPTRE_Vehicles\Warthog\data\warthog_addons_tan_co.paa" };
		textureList[] =
		{
			"colortan", 1
		};
	};
	class OPTRE_M12A1_LRV_snow : OPTRE_M12A1_LRV
	{
		displayName = "M12A1 Warthog (Rocket) [Snow]";
		author = "Article 2 Studios";
		crew = "OPTRE_UNSC_Army_Soldier_Rifleman_AR_SNO";
		hiddenSelections[] = { "camo1","camo2","clan","clan_text","insignia","attach_apc","attach_troop" };
		hiddenSelectionsTextures[] = { "OPTRE_Vehicles\Warthog\data\warthog_snow_co.paa","OPTRE_Vehicles\Warthog\data\warthog_addons_snow_co.paa" };
		textureList[] =
		{
			"colorwhite", 1
		};
	};
	class OPTRE_M12A1_LRV_Marine : OPTRE_M12A1_LRV
	{
		displayName = "M12A1 Warthog (Rocket) [Marine]";
		crew = "OPTRE_UNSC_Marine_Soldier_Rifleman_AR";
		author = "Article 2 Studios";
		textureList[] =
		{
			"colorgreen", 1,
			"colorblack", 1,
			"colortan", 1,
			"colorwhite", 1
		};
	};
	class OPTRE_M12A1_LRV_ins : OPTRE_M12A1_LRV
	{
		displayName = "M12A1 Warthog (Rocket) [Ins]";
		hiddenSelections[] = { "camo1","camo2","clan","clan_text","insignia" };
		hiddenSelectionsTextures[] = { "OPTRE_Vehicles\Warthog\data\warthog_ins_co.paa","OPTRE_Vehicles\Warthog\data\warthog_addons_ins_co.paa" };
		vehicleClass = "OPTRE_Ins_Vehicle_class";
		side = 0;
		crew = "OPTRE_Ins_URF_Rifleman_AR";
		faction = "OPTRE_Ins";
		textureList[] =
		{
			"colorinnie", 1
		};
	};

	/// M12R ///
	class OPTRE_M12R_AA : OPTRE_M12_LRV
	{
		model = "OPTRE_Vehicles\Warthog\warthog_AA.p3d";
		displayName = "M12R Warthog (AA)";
		hiddenSelections[] = { "camo1","camo2","clan","clan_text","insignia" };
		hiddenSelectionsTextures[] = { "OPTRE_Vehicles\Warthog\data\warthog_co.paa","OPTRE_Vehicles\Warthog\data\warthog_aa_co.paa" };
		class textureSources
		{
			class colorgreen
			{
				displayName = "Green";
				author = "Article 2 Studios";
				textures[] =
				{
					"OPTRE_Vehicles\Warthog\data\warthog_co.paa",
					"OPTRE_Vehicles\Warthog\data\warthog_aa_co.paa"
				};
				factions[] =
				{
					"OPTRE_UNSC"
				};
			};
			class colortan
			{
				displayName = "Tan";
				author = "Article 2 Studios";
				textures[] =
				{
					"OPTRE_Vehicles\Warthog\data\warthog_tan_co.paa",
					"OPTRE_Vehicles\Warthog\data\warthog_aa_tan_co.paa"
				};
				factions[] =
				{
					"OPTRE_UNSC" // Side Blufor
				};
			};
			class colorblack
			{
				displayName = "Black";
				author = "Article 2 Studios";
				textures[] =
				{
					"OPTRE_Vehicles\Warthog\data\warthog_black_co.paa",
					"OPTRE_Vehicles\Warthog\data\warthog_aa_black_co.paa"
				};
				factions[] =
				{
					"OPTRE_UNSC" // Side Blufor
				};
			};
			class colorwhite
			{
				displayName = "Snow";
				author = "Article 2 Studios";
				textures[] =
				{
					"OPTRE_Vehicles\Warthog\data\warthog_snow_co.paa",
					"OPTRE_Vehicles\Warthog\data\warthog_aa_snow_co.paa"
				};
				factions[] =
				{
					"OPTRE_UNSC" // Side Blufor
				};
			};
			// Innies
			class colorinnie
			{
				displayName = "Innie";
				author = "Article 2 Studios";
				textures[] =
				{
					"OPTRE_Vehicles\Warthog\data\warthog_ins_co.paa",
					"OPTRE_Vehicles\Warthog\data\warthog_aa_ins_CO.paa"
				};
				factions[] =
				{
					"OPTRE_Ins" // Side opfor
				};
			};
		};

		textureList[] =
		{
			"colorgreen", 1,
			"colorblack", 1,
			"colortan", 1,
			"colorwhite", 1
		};
		memoryPointLMissile = "Rocket_1";
		memoryPointRMissile = "Rocket_2";
		class AnimationSources : AnimationSources
		{
			class Missiles_revolving
			{
				source = "revolving";
				weapon = "OPTRE_M79_MLRS";
			};
		};
		class Turrets : Turrets
		{
			class CargoTurret_01 : CargoTurret
			{
				gunnerAction = "passenger_inside_2";
				gunnerCompartments = "Compartment1";
				memoryPointsGetInGunner = "pos pas";
				memoryPointsGetInGunnerDir = "pos pas dir";
				memoryPointGunnerOptics = "";
				gunnerName = "Front Passenger";
				proxyIndex = 1;
				maxElev = 10;
				minElev = -40;
				maxTurn = 95;
				minTurn = -95;
				isPersonTurret = 1;
				hasGunner = 1;
				class dynamicViewLimits
				{
					CargoTurret_02[] = { -65,95 };
				};
			};
			class MainTurret : MainTurret
			{
				body = "mainturret";
				gun = "maingun";
				animationsourcebody = "mainturret";
				animationSourceGun = "maingun";
				memoryPointLMissile = "Rocket_1";
				memoryPointRMissile = "Rocket_2";
				memoryPointGun[] = { "Rocket_1","Rocket_2" };
				gunAxis = "Osa Hlavne";
				minElev = -15;
				maxElev = 45;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				turretAxis = "OsaVeze";
				maxHorizontalRotSpeed = 1.75;
				maxVerticalRotSpeed = 1.5;
				gunnerAction = "driver_boat01";
				gunnerInAction = "driver_boat01";
				gunnerGetInAction = "GetInMRAP_01";
				gunnerGetOutAction = "GetOutMRAP_01";
				gunnerName = "Gunner";
				hideWeaponsGunner = 0;
				soundServo[] = { "",0.01,1 };
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				commanding = 1;
				primaryGunner = 1;
				turretInfoType = "RscWeaponZeroing";
				memoryPointsGetInGunner = "Pos Gunner";
				memoryPointsGetInGunnerDir = "Pos Gunner dir";
				gunnerLeftHandAnimName = "trigger";
				gunnerRightHandAnimName = "trigger";
				stabilizedInAxes = 3;
				weapons[] = { "OPTRE_M79_MLRS" };
				magazines[] = { "OPTRE_6Rnd_ASGM2_rockets","OPTRE_6Rnd_ASGM2_rockets","OPTRE_6Rnd_ASGM2_rockets","OPTRE_6Rnd_ASGM2_rockets" };
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGunneroutOptics = "gunneroutview";
				gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_w_F.p3d";
				gunnerOpticsShowCursor = 1;
				castGunnerShadow = 1;
				hasGunner = 1;
				class Viewoptics : ViewOptics
				{
					opticsZoomMin = 0.25;
					opticsZoomMax = 0.75;
					opticsZoomInit = 0.75;
					visionMode[] = { "Normal","NVG","Ti" };
					thermalMode[] = { 5,6 };
				};
				startEngine = 0;
				enableManualFire = 0;
				gunnerForceOptics = 0;
				class ViewGunner : ViewOptics
				{
					initFov = 0.75;
					minFov = 0.375;
					maxFov = 1.1;
				};
			};
		};
	};
	class OPTRE_M12R_AA_tan : OPTRE_M12R_AA
	{
		crew = "OPTRE_UNSC_Army_Soldier_Rifleman_AR_DES";
		displayName = "M12R Warthog (AA) [Tan]";
		hiddenSelections[] = { "camo1","camo2","clan","clan_text","insignia" };
		hiddenSelectionsTextures[] = { "OPTRE_Vehicles\Warthog\data\warthog_tan_co.paa","OPTRE_Vehicles\Warthog\data\warthog_aa_tan_co.paa" };
		textureList[] =
		{
			"colortan", 1
		};
	};
	class OPTRE_M12R_AA_snow : OPTRE_M12R_AA
	{
		crew = "OPTRE_UNSC_Army_Soldier_Rifleman_AR_SNO";
		displayName = "M12R Warthog (AA) [Snow]";
		hiddenSelections[] = { "camo1","camo2","clan","clan_text","insignia" };
		hiddenSelectionsTextures[] = { "OPTRE_Vehicles\Warthog\data\warthog_snow_co.paa","OPTRE_Vehicles\Warthog\data\warthog_aa_snow_co.paa" };
		textureList[] =
		{
			"colorwhite", 1
		};
	};
	class OPTRE_M12R_AA_Marine : OPTRE_M12R_AA
	{
		displayName = "M12R Warthog (AA) [Marine]";
		crew = "OPTRE_UNSC_Marine_Soldier_Rifleman_AR";
		author = "Article 2 Studios";
		textureList[] =
		{
			"colorgreen", 1,
			"colorblack", 1,
			"colortan", 1,
			"colorwhite", 1
		};
	};
	class OPTRE_M12R_AA_ins : OPTRE_M12R_AA
	{
		displayName = "M12R Warthog (AA) [Ins]";
		hiddenSelections[] = { "camo1","camo2","clan","clan_text","insignia" };
		hiddenSelectionsTextures[] = { "OPTRE_Vehicles\Warthog\data\warthog_ins_co.paa","OPTRE_Vehicles\Warthog\data\warthog_aa_ins_co.paa" };
		vehicleClass = "OPTRE_Ins_Vehicle_class";
		side = 0;
		crew = "OPTRE_Ins_URF_Rifleman_AR";
		faction = "OPTRE_Ins";
		textureList[] =
		{
			"colorinnie", 1
		};
	};

	/// APC ///
	class OPTRE_M12_FAV_APC : OPTRE_M12_FAV
	{
		displayName = "M12 FAV Warthog (APC) [Ins]";
		author = "Article 2 Studios";
		model = "OPTRE_Vehicles\Warthog\Warthog_APC.p3d";
		hiddenSelections[] = { "camo1","camo2","clan","clan_text","insignia","attach_mg","attach_troop" };
		hiddenSelectionsTextures[] = { "OPTRE_Vehicles\Warthog\data\warthog_ins_co.paa","OPTRE_Vehicles\Warthog\data\warthog_addons_ins_CO.paa" };
		class textureSources
		{
			// Innies
			class colorinnie
			{
				displayName = "Innie";
				author = "Article 2 Studios";
				textures[] =
				{
					"OPTRE_Vehicles\Warthog\data\warthog_ins_co.paa",
					"OPTRE_Vehicles\Warthog\data\warthog_addons_ins_CO.paa"
				};
				factions[] =
				{
					"OPTRE_Ins" // Side opfor
				};
			};
		};

		textureList[] =
		{
			"colorinnie", 1
		};
		vehicleClass = "OPTRE_Ins_Vehicle_class";
		side = 0;
		crew = "OPTRE_Ins_URF_Rifleman_AR";
		faction = "OPTRE_Ins";
		transportSoldier = 4;
		cargoAction[] = { "passenger_apc_narrow_generic01","passenger_apc_narrow_generic01","passenger_apc_narrow_generic02","passenger_generic01_leanright" };
		cargoIsCoDriver[] = { 0,0 };
		memoryPointsGetInCargo = "pos cargo";
		memoryPointsGetInCargoDir = "pos cargo dir";
		hideWeaponsCargo = 1;
		cargoProxyIndexes[] = { 6,7,8,9 };
		class Turrets : Turrets
		{
			class CargoTurret_01 : CargoTurret
			{
				gunnerAction = "vehicle_turnout_1";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos pas";
				memoryPointsGetInGunnerDir = "pos pas dir";
				memoryPointGunnerOptics = "";
				gunnerName = "Hatch Gunner";
				proxyIndex = 10;
				maxElev = 25;
				minElev = -20;
				maxTurn = 65;
				minTurn = -65;
				hasGunner = 1;
				isPersonTurret = 1;
			};
			class CargoTurret_02 : CargoTurret
			{
				gunnerAction = "passenger_inside_2";
				gunnerCompartments = "Compartment3";
				memoryPointsGetInGunner = "pos pas";
				memoryPointsGetInGunnerDir = "pos pas dir";
				memoryPointGunnerOptics = "";
				gunnerName = "Front Passenger";
				proxyIndex = 11;
				maxElev = 10;
				minElev = -5;
				maxTurn = -15;
				minTurn = -55;
				isPersonTurret = 1;
				hasGunner = 1;
			};
		};
	};
	class OPTRE_M12_CIV : OPTRE_M12_FAV
	{
		displayName = "AMG Hog (Gold)";
		author = "Article 2 Studios";
		faction = "OPTRE_UEG_Civ";
		side = 3;
		crew = "C_man_1";
		hiddenSelections[] = { "camo1","camo2","clan","clan_text","insignia","attach_apc","attach_mg","attach_troop" };
		hiddenSelectionsTextures[] = { "OPTRE_Vehicles\Warthog\data\warthog_gold_CO.paa","" };
		class textureSources
		{
			// CIV
			class colorgold
			{
				displayName = "Gold";
				author = "Article 2 Studios";
				textures[] =
				{
					"OPTRE_Vehicles\Warthog\data\warthog_gold_CO.paa",
					""
				};
				factions[] =
				{
					"OPTRE_UEG_Civ"
				};
			};
			class colorstripe
			{
				displayName = "Striped";
				author = "Article 2 Studios";
				textures[] =
				{
					"OPTRE_Vehicles\Warthog\data\warthog_stripe_CO.paa",
					""
				};
				factions[] =
				{
					"OPTRE_UEG_Civ"
				};
			};
		};

		textureList[] =
		{
			"colorstripe", 1,
			"colorgold", 1
		};
		vehicleClass = "Car";
	};
};