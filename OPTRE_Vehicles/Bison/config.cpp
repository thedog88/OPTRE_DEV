#include "basicdefines_A3.hpp"
#include "CfgMovesBasic.hpp"

class CfgPatches
{
	class OPTRE_Vehicles_Bison
	{
		units[] = {"OPTRE_M412_IFV_UNSC","OPTRE_M413_MGS_UNSC"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","OPTRE_Core"};
		magazines[] = {};
		ammo[] = {};
	};
};

class DefaultEventHandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_APC_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class CfgVehicles 
{
	class Car;
	class Car_F: Car
	{
		class NewTurret;
		class Sounds;
		class HitPoints
		{
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
		};
	};
	class Wheeled_APC_F: Car_F {};
	class APC_Wheeled_01_base_F: Wheeled_APC_F
	{
		class ViewOptics;
		class ViewCargo;
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class EventHandlers;
	};
	class OPTRE_M413_base: APC_Wheeled_01_base_F
	{
		crew = "OPTRE_UNSC_Army_Soldier_Crewman_ARI";
		displayName = "-";
		accuracy = 0.25;
		model = "\OPTRE_Vehicles\Bison\IFV_Bison.p3d";
		picture = "\A3\armor_f_beta\APC_Wheeled_01\Data\UI\APC_Wheeled_01_ACRV_ca.paa";
		icon = "\A3\armor_f_beta\APC_Wheeled_01\Data\UI\map_amw_CA.paa";
		#include "pip.hpp"
		#include "physx.hpp"
		armorLights = 0.1;
		crewExplosionProtection = 0.9995;
		damageResistance = 0.00719;
		armor = 250;
		armorStructural = 6;
		forceHideDriver = 1;
		driverForceOptics = 0;
		driverAction = "Driver_OPTRE_Bison";
		driverInAction = "Driver_OPTRE_Bison";
		cargoAction[] = {"passenger_apc_generic02b","passenger_apc_generic04","passenger_apc_generic04","passenger_apc_generic03","passenger_apc_generic03","passenger_apc_generic04","passenger_apc_generic02b","passenger_apc_generic04"};
		castCargoShadow = false;
		castDriverShadow = false;
		castGunnerShadow = false;
		class Turrets: Turrets 
		{
			class MainTurret: MainTurret 
			{
				class Turrets {};
			    body = "mainTurret";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				maxVerticalRotSpeed=1.8;
				maxHorizontalRotSpeed = 1.8;
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				weapons[]={"OPTRE_90mm_M556","OPTRE_missiles_C2GMLS"};
				magazines[]={"OPTRE_30Rnd_90mm_APBC","OPTRE_30Rnd_90mm_SAPHE","OPTRE_10Rnd_90mm_S1","OPTRE_2Rnd_C2GMLS_missiles"};					
				minElev=-2;
				maxElev=+20;
				initElev=0;
				soundServo[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",0.56234133,1,30};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",0.56234133,1,30};
				turretInfoType = "RscOptics_APC_Wheeled_01_gunner";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex = 2;
				memoryPointGunnerOptics= "gunnerview";				
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
				gunnerOutOpticsEffect[] = {};
				gunnerOpticsEffect[] = {};
				gunnerForceOptics = 0;
				isPersonTurret = 0;
				usepip=1;
				class ViewOptics: RCWSOptics
				{
					visionMode[] = {"Normal","TI"};
				};
				class OpticsIn: Optics_Gunner_APC_01
				{
					class Wide: Wide{};
					class Medium: Medium{};
					class Narrow: Narrow{};
				};
				class ViewGunner: ViewGunner
				{
					//maxAngleY = 60; //test
					//minAngleY = -240; //test
					maxAngleY = -90;
					minAngleY = -90;
					initAngleY = -90;
				};
				showCrewAim = 2;
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.4;
						material = -1;
						name = "vez";
						visual = "vez";
						passThrough = 0.2;
						minimalHit = 0.1;
						explosionShielding = 0.2;
						radius = 0.25;
					};
					class HitGun
					{
						armor = 0.2;
						material = -1;
						name = "zbran";
						visual = "zbran";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 0.4;
						radius = 0.25;
					};
				};
				gunnerAction = "Gunner_OPTRE_Bison";
				gunnerInAction = "Gunner_OPTRE_Bison";
				gunnerGetInAction = "GetInAMV_cargo";
				gunnerGetOutAction = "GetOutLow";
				castGunnerShadow = 0;
				stabilizedInAxes = 3;
				viewGunnerInExternal = 1;
				forceHideGunner = 1;
				gunnerHasFlares = 1;
			};
		};
		hiddenSelections[] ={"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7"};
		hiddenSelectionsTextures[] = {"OPTRE_Vehicles\Bison\data\Bison_Body_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Misc_CO.paa","OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","OPTRE_Vehicles\Bison\data\Bison_CameraGlass_CO.paa"};
		class AnimationSources: AnimationSources
		{
			class muzzle_rot
			{
				source = "ammorandom";
				weapon = "OPTRE_90mm_M556";
			};
			class muzzle_hide
			{
				source = "reload";
				weapon = "OPTRE_90mm_M556";
			};
			class HideTurret
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.001;
			};
			class CargoDoorAnim
			{
				source = "user";
				animPeriod = 5;
				initPhase = 0;
				sound = "ServoRampSound_2";
			};
			class Missiles_revolving
			{
				source = "revolving";
				weapon = "OPTRE_missiles_C2GMLS";
			};
			class recoil_source 
			{
				source = "reload";
				weapon = "OPTRE_90mm_M556";
			};
		};
		
		class UserActions
		{
			class CargoDoorOpen
			{
				userActionID = 60;
				displayName = "Open Cargo Door";
				displayNameDefault = "Open Cargo Door";
				textToolTip = "Open Cargo Door";
				position = "chargodoor_axis";
				radius = 6;
				priority = 2;
				onlyForPlayer = 0;
				condition = "((this animationPhase ""CargoDoor"" < 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
				statement = "this animate [""CargoDoor"",1]";
				animPeriod = 5;
			};
			class CargoDoorClose: CargoDoorOpen
			{
				userActionID = 61;
				displayName = "Close Cargo Door";
				displayNameDefault = "Close Cargo Door";
				textToolTip = "Close Cargo Door";
				priority = 2;
				condition = "((this animationPhase ""CargoDoor"" > 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
				statement = "this animate [""CargoDoor"",0]";
				animPeriod = 5;
			};
		};
		class EventHandlers: EventHandlers
		{
			fired = "[_this select 0,_this select 6,'missile_move','MissileBase'] call BIS_fnc_missileLaunchPositionFix; _this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
		class Damage {
			tex[] = {};
			mat[] = 
			{
				"OPTRE_Vehicles\Bison\data\Bison_90mm.rvmat",
				"OPTRE_Vehicles\Bison\data\Bison_90mm_damage.rvmat",
				"OPTRE_Vehicles\Bison\data\Bison_destruct.rvmat",
				
				"OPTRE_Vehicles\Bison\data\Bison_Body.rvmat",
				"OPTRE_Vehicles\Bison\data\Bison_Body_damage.rvmat",
				"OPTRE_Vehicles\Bison\data\Bison_destruct.rvmat",
				
				"OPTRE_Vehicles\Bison\data\Bison_CameraGlass.rvmat",
				"OPTRE_Vehicles\Bison\data\Bison_CameraGlass_damage.rvmat",
				"OPTRE_Vehicles\Bison\data\Bison_destruct.rvmat",
				
				"OPTRE_Vehicles\Bison\data\Bison_Interior.rvmat",
				"OPTRE_Vehicles\Bison\data\Bison_Interior_damage.rvmat",
				"OPTRE_Vehicles\Bison\data\Bison_destruct.rvmat",
				
				"OPTRE_Vehicles\Bison\data\Bison_Misc.rvmat",
				"OPTRE_Vehicles\Bison\data\Bison_Misc_damage.rvmat",
				"OPTRE_Vehicles\Bison\data\Bison_destruct.rvmat",
				
				"OPTRE_Vehicles\Bison\data\Bison_Seats.rvmat",
				"OPTRE_Vehicles\Bison\data\Bison_Seats_damage.rvmat",
				"OPTRE_Vehicles\Bison\data\Bison_destruct.rvmat",
				
				"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon.rvmat",
				"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_damage.rvmat",
				"OPTRE_Vehicles\Bison\data\Bison_destruct.rvmat"
			};
		}; 
		smokeLauncherGrenadeCount = 6; //Number of smoke shells launched at once
		smokeLauncherVelocity = 14; //Velocity which smoke shells are launched at
		smokeLauncherOnTurret = 1; //0 if smoke launchers are on hull, 1 if on turret
		smokeLauncherAngle = 120; //Angle within which smoke grenades are launched (actual spacing may end up smaller so use slighty higher number)
		class ViewOptics: ViewOptics 
		{
			visionMode[] = {"Normal","NVG"};
		};

		class Exhausts 
		{
			class Exhaust1 
			{
				position = "exhaust_1";
				direction = "exhaust_1_dir";
				effect = "ExhaustsEffectAMV";
			};
			class Exhaust2 
			{
				position = "exhaust_2";
				direction = "exhaust_2_dir";
				effect = "ExhaustsEffectAMV";
			};
		};
		engineStartSpeed = 5;
		class Reflectors
		{
			class Left
			{
				color[] = {1900,1800,1700};
				ambient[] = {5,5,5};
				position = "Light_L";
				direction = "Light_L_end";
				hitpoint = "Light_L";
				selection = "Light_L";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 0;
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
			class Right: Left
			{
				position = "Light_R";
				direction = "Light_R_end";
				hitpoint = "Light_R";
				selection = "Light_R";
			};
			class Right2: Right
			{
				position = "light_R_flare";
				useFlare = 1;
			};
			class Left2: Left
			{
				position = "light_L_flare";
				useFlare = 1;
			};
			class Right3: Right2
			{
				position = "light_R_flare2";
				flareSize = 0.7;
				hitpoint = "Light_R2";
				selection = "Light_R2";
			};
			class Left3: Left2
			{
				position = "light_L_flare2";
				flareSize = 0.7;
				hitpoint = "Light_L2";
				selection = "Light_L2";
			};
		};
		aggregateReflectors[] = {{"Left","Left2","Left3","Right","Right2","Right3"}};
		explosionEffect = "FuelExplosionBig";
	};
	
	class OPTRE_M413_MGS_UNSC : OPTRE_M413_base 
	{
		dlc = "OPTRE";
		vehicleClass = "OPTRE_UNSC_Armored_class";
		crew = "OPTRE_UNSC_Army_Soldier_Crewman_WDL";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "OPTRE_UNSC";
		displayName = "M413 Bison MGS";
	};
	class OPTRE_M412_IFV_UNSC : OPTRE_M413_base 
	{
		dlc = "OPTRE";
		vehicleClass = "OPTRE_UNSC_Armored_class";
		crew = "OPTRE_UNSC_Army_Soldier_Crewman_WDL";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "OPTRE_UNSC";
		displayName = "M412 Bison IFV";
		model = "\OPTRE_Vehicles\Bison\IFV_Bison_40.p3d";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret 
			{
				weapons[]={"OPTRE_M230","OPTRE_missiles_C2GMLS"};
				magazines[]={"OPTRE_100Rnd_50mm_HE","OPTRE_100Rnd_50mm_APFSDS","OPTRE_2Rnd_C2GMLS_missiles"};
			};
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_rot
			{
				source = "ammorandom";
				weapon = "OPTRE_M230";
			};
			class muzzle_hide
			{
				source = "reload";
				weapon = "OPTRE_M230";
			};
			class recoil_source 
			{
				source = "reload";
				weapon = "OPTRE_M230";
			};
		};
	};
};