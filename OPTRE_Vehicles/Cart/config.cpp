class CfgPatches
{
	class OPTRE_Vehicles_Cart
	{
		units[]={"OPTRE_M12_FAV"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Air_F","A3_Air_F_Beta","A3_Weapons_F","OPTRE_Core"};
		magazines[]={};
		ammo[]={};
	};
};

class CfgVehicles
{
	class LandVehicle;
	class Car:LandVehicle
	{
		class NewTurret;
	};
	class Car_F:Car
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
			class MainTurret:NewTurret
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
	class OPTRE_cart_base: Car_F
	{
		dlc = "OPTRE";
		author							= "Article 2 Studios";
		displayName						= "";
		class Library
		{
			libTextDesc					= "The Maintenance/ Tow Cart was designed to haul different varieties of Equipment, Parts, and other Vehicles.";
		};
		model							= "OPTRE_Vehicles\Cart\Cart.p3d";
		picture							= "OPTRE_Vehicles\Cart\Data\picture.paa";
		Icon							= "OPTRE_Vehicles\cart\Data\icon.paa";
		mapSize 						= 4;
		transportMaxBackpacks 			= 5;
		slingLoadCargoMemoryPoints[]	= {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		vehicleClass					= "OPTRE_UNSC_Vehicle_class";
		transportSoldier				= 0;
		crewVulnerable 					= 1;
		crewCrashProtection				= 0;
		crewExplosionProtection 		= 0.5;
		fuelExplosionPower 				= 2;
		epeImpulseDamageCoef 			= 25;
		armor							= 50;
		cost							= 500000;
		canFloat						= 0;
		threat[]						= {0.8,0.6,0.3};
		camouflage						= 4;
		destrType						= "DestructBuilding";
		ejectDeadGunner					= 1;
		class Reflectors
		{
			class LightCarHeadL01
			{
				color[]					= {1900,1800,1700};
				ambient[]				= {5,5,5};
				position				= "LightCarHeadL01";
				direction				= "LightCarHeadL01_end";
				hitpoint				= "Light_L";
				selection				= "Light_L";
				size					= 1;
				innerAngle				= 100;
				outerAngle				= 179;
				coneFadeCoef			= 10;
				intensity				= 1;
				useFlare				= 1;
				dayLight				= 0;
				flareSize				= 1;
				class Attenuation
				{
					start				= 1;
					constant			= 0;
					linear				= 0;
					quadratic			= 0.25;
					hardLimitStart		= 30;
					hardLimitEnd		= 60;
				};
			};
			class LightCarHeadL02:LightCarHeadL01
			{
				position				= "LightCarHeadL02";
				direction				= "LightCarHeadL02_end";
				FlareSize				= 0.5;
			};
		};
		aggregateReflectors[]			= {{"LightCarHeadL01","LightCarHeadL02"},{"LightCarHeadR01","LightCarHeadR02"}};
		class Exhausts
		{
			class Exhaust1
			{
				position				= "exhaust";
				direction				= "exhaust_dir";
				effect					= "ExhaustsEffect";
			};
			class Exhaust2
			{
				position				= "exhaust2_pos";
				direction				= "exhaust2_dir";
				effect					= "ExhaustsEffect";
			};
		};
		class AnimationSources:AnimationSources
		{
		};
		class HitPoints:HitPoints
		{
			class HitLFWheel:HitLFWheel
			{
				armor					= 999;
				explosionShielding		= 0;
				radius					= 0.25;
				passThrough				= 0;
			};
			class HitLF2Wheel:HitLF2Wheel
			{
				armor 					= 999;
				explosionShielding		= 0;
				radius					= 0.25;
				passThrough				= 0;
			};
			class HitRFWheel:HitRFWheel
			{
				armor					= 999;
				explosionShielding		= 0;
				radius					= 0.25;
				passThrough				= 0;
			};
			class HitRF2Wheel:HitRF2Wheel
			{
				armor					= 999;
				explosionShielding		= 0;
				radius					= 0.25;
				passThrough				= 0;
			};
			class HitFuel:HitFuel
			{
				armor					= 0.5;
				name					= "palivo";
				passThrough				= 0.5;
				explosionShielding		= 0.5;
			};
			class HitEngine:HitEngine
			{
				armor					= 0.5;
				name					= "motor";
				passThrough				= 0.5;
				explosionShielding		= 0.5;
			};
			class HitBody:HitBody
			{
				armor					= 2;
				name					= "karoserie";
				visual					= "body";
				passThrough				= 1;
				explosionShielding		= 0.5;
			};
		};
		class Damage
		{
			tex[]						= {"OPTRE_Core\data\base\glass_ca.paa","OPTRE_Core\data\base\transparent.paa","OPTRE_Core\data\base\transparent.paa"};
			mat[]						= {"OPTRE_Vehicles\Warthog\data\warthog.rvmat","OPTRE_Vehicles\Warthog\data\warthog_damage.rvmat","OPTRE_Vehicles\Warthog\data\warthog_destruct.rvmat","OPTRE_Vehicles\Warthog\data\warthog_addons.rvmat","OPTRE_Vehicles\Warthog\data\warthog_addons_damage.rvmat","OPTRE_Vehicles\Warthog\data\warthog_addons_destruct.rvmat","OPTRE_Core\data\base\reflective_glass.rvmat","OPTRE_Core\data\base\null.rvmat","OPTRE_Core\data\base\null.rvmat"};
		};
		wheelDamageThreshold			= 1;
		wheelDestroyThreshold			= 1;
		wheelDamageRadiusCoef			= 1;
		wheelDestroyRadiusCoef			= 1;
		driverLeftHandAnimName			= "drivewheel";
		driverRightHandAnimName			= "drivewheel";
		driverAction					= "Driver_low01";
		cargoAction[]					= {};
		hiddenSelections[]				= {"camo1"};
		hiddenSelectionsTextures[]		= {"OPTRE_Vehicles\cart\data\truck_01_ext_022_co.paa"};
		showNVGCargo[]					= {0,1};
		maxFordingDepth 				= 0.95;
		getInAction						= "GetInOffroad";
		getOutAction					= "GetOutMRAP_01";
		cargoGetInAction[]				= {"GetInHeli_Transport_01Cargo"};
		cargoGetOutAction[]				= {"GetOutHelicopterCargoRfl"};
		commanderCanSee					= 31;
		hideWeaponsDriver				= 1;
		hideWeaponsCargo				= 0;
		driverDoor						= "";
		cargoDoors[]					= {};
		precision						= 15;
		weapons[]						= {"TruckHorn2"};
		magazines[]						= {};

		#include "sounds.hpp"
		#include "physx.hpp"
		
		supplyRadius					= 5;
		transportMaxMagazines			= 120;
		class TransportMagazines
		{};
		class TransportItems
		{
			class _xx_OPTRE_Biofoam
			{
				name					= "OPTRE_Biofoam";
				count					= 2;
			};
		};
		class TransportWeapons
		{};
		class UserActions
		{
		};
	};
	class OPTRE_cart_yellow: OPTRE_cart_base
	{
		scope 							= 2;
		displayName						= "Maintenance/Tow Cart (Yellow)";
		author							= "Article 2 Studios";
		faction							= "OPTRE_UNSC";
		side							= 1;
		crew							= "OPTRE_UNSC_Army_Soldier_Rifleman_AR_WDL";
		hiddenSelections[]				= {"camo1","clan","insignia"};
		hiddenSelectionsTextures[]		= {"OPTRE_Vehicles\cart\data\truck_01_ext_022_co.paa"};
		class CargoTurret;
		class Turrets:Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerAction			= "passenger_boat_3";
				gunnerCompartments  	= "Compartment1";
				memoryPointsGetInGunner	= "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				memoryPointGunnerOptics	= "";
				gunnerName				= "Front Passenger";
				proxyIndex				= 2;
				maxElev					= 25;
				minElev					= -10;
				maxTurn					= 45;
				minTurn					= -45;
				hasGunner				= true;
				isPersonTurret			= 1;
				class dynamicViewLimits
				{
					CargoTurret_02[]	= {-65,95};
				};
			};
			class CargoTurret_02: CargoTurret
			{
				gunnerAction			= "passenger_inside_2";
				gunnerCompartments  	= "Compartment1";
				memoryPointsGetInGunner	= "pos pas";
				memoryPointsGetInGunnerDir = "pos pas dir";
				memoryPointGunnerOptics	= "";
				gunnerName				= "Side Passenger";
				proxyIndex				= 3;
				maxElev					= 20;
				minElev					= -20;
				maxTurn					= 45;
				minTurn					= -45;
				hasGunner				= true;
				isPersonTurret			= 1;
				class dynamicViewLimits
				{
					CargoTurret_02[]	= {-40,95};
				};
			};
		};
	};
	class OPTRE_cart_grey: OPTRE_cart_yellow
	{
		scope 							= 2;
		displayName						= "Maintenance/Tow Cart (Grey)";
		author							= "Article 2 Studios";
		faction							= "OPTRE_UNSC";
		side							= 1;
		crew							= "OPTRE_UNSC_Army_Soldier_Rifleman_AR_WDL";
		hiddenSelections[]				= {"camo1","clan","insignia"};
		hiddenSelectionsTextures[]		= {"OPTRE_Vehicles\cart\data\truck_01_ext_023_co.paa"};
	};
	class OPTRE_cart_green: OPTRE_cart_yellow
	{
		scope 							= 2;
		displayName						= "Maintenance/Tow Cart (Green)";
		author							= "Article 2 Studios";
		faction							= "OPTRE_UNSC";
		side							= 1;
		crew							= "OPTRE_UNSC_Army_Soldier_Rifleman_AR_WDL";
		hiddenSelections[]				= {"camo1","clan","insignia"};
		hiddenSelectionsTextures[]		= {"OPTRE_Vehicles\cart\data\truck_01_ext_024_co.paa"};
	};
	class OPTRE_forklift_base: OPTRE_cart_base
	{
		dlc = "OPTRE";
		author							= "Article 2 Studios";
		displayName						= "";
		class Library
		{
			libTextDesc					= "The Forklift lifts forks.";
		};
		model							= "OPTRE_Vehicles\Cart\forklift.p3d";
		picture							= "OPTRE_Vehicles\Cart\Data\picture.paa";
		Icon							= "OPTRE_Vehicles\cart\Data\icon.paa";
		mapSize 						= 4;
		transportMaxBackpacks 			= 5;
		slingLoadCargoMemoryPoints[]	= {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		vehicleClass					= "OPTRE_UNSC_Vehicle_class";
		transportSoldier				= 0;
		crewVulnerable 					= 1;
		crewCrashProtection				= 0;
		crewExplosionProtection 		= 0.5;
		fuelExplosionPower 				= 2;
		epeImpulseDamageCoef 			= 25;
		armor							= 50;
		cost							= 500000;
		canFloat						= 0;
		threat[]						= {0.8,0.6,0.3};
		camouflage						= 4;
		ejectDeadGunner					= 1;
		class Reflectors
		{
			class LightCarHeadL01
			{
				color[]					= {1900,1800,1700};
				ambient[]				= {5,5,5};
				position				= "LightCarHeadL01";
				direction				= "LightCarHeadL01_end";
				hitpoint				= "Light_L";
				selection				= "Light_L";
				size					= 1;
				innerAngle				= 100;
				outerAngle				= 179;
				coneFadeCoef			= 10;
				intensity				= 1;
				useFlare				= 1;
				dayLight				= 0;
				flareSize				= 1;
				class Attenuation
				{
					start				= 1;
					constant			= 0;
					linear				= 0;
					quadratic			= 0.25;
					hardLimitStart		= 30;
					hardLimitEnd		= 60;
				};
			};
			class LightCarHeadL02:LightCarHeadL01
			{
				position				= "LightCarHeadL02";
				direction				= "LightCarHeadL02_end";
				FlareSize				= 0.5;
			};
		};
		aggregateReflectors[]			= {{"LightCarHeadL01","LightCarHeadL02"},{"LightCarHeadR01","LightCarHeadR02"}};
		class Exhausts
		{
			class Exhaust1
			{
				position				= "exhaust";
				direction				= "exhaust_dir";
				effect					= "ExhaustsEffect";
			};
		};
		class AnimationSources:AnimationSources
		{
			class liftForks_1				/// the class name is later used in model.cfg
			{
				source = "user";	/// user source means it is waiting on some scripting input
				animPeriod = 5;		/// how long does it take to change value from 0 to 1 (or vice versa)
				initPhase = 0;		/// what value does it have while creating the vehicle
				sound = "ServoRampSound_2";
			};
			class liftForks_2				/// the class name is later used in model.cfg
			{
				source = "user";	/// user source means it is waiting on some scripting input
				animPeriod = 5;		/// how long does it take to change value from 0 to 1 (or vice versa)
				initPhase = 0;		/// what value does it have while creating the vehicle
				sound = "";
			};
		};
		class HitPoints:HitPoints
		{
			class HitLFWheel:HitLFWheel
			{
				armor					= 999;
				explosionShielding		= 0;
				radius					= 0.25;
				passThrough				= 0;
			};
			class HitLF2Wheel:HitLF2Wheel
			{
				armor 					= 999;
				explosionShielding		= 0;
				radius					= 0.25;
				passThrough				= 0;
			};
			class HitRFWheel:HitRFWheel
			{
				armor					= 999;
				explosionShielding		= 0;
				radius					= 0.25;
				passThrough				= 0;
			};
			class HitRF2Wheel:HitRF2Wheel
			{
				armor					= 999;
				explosionShielding		= 0;
				radius					= 0.25;
				passThrough				= 0;
			};
			class HitFuel:HitFuel
			{
				armor					= 0.5;
				name					= "palivo";
				passThrough				= 0.5;
				explosionShielding		= 0.5;
			};
			class HitEngine:HitEngine
			{
				armor					= 0.5;
				name					= "motor";
				passThrough				= 0.5;
				explosionShielding		= 0.5;
			};
			class HitBody:HitBody
			{
				armor					= 2;
				name					= "karoserie";
				visual					= "body";
				passThrough				= 1;
				explosionShielding		= 0.5;
			};
		};
		wheelDamageThreshold			= 1;
		wheelDestroyThreshold			= 1;
		wheelDamageRadiusCoef			= 1;
		wheelDestroyRadiusCoef			= 1;
		driverAction					= "OPTRE_Driver_HEV";
		cargoAction[]					= {};
		hiddenSelections[]				= {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[]		= {"optre_vehicles\cart\data\forklift_hull_yellow_co.paa","optre_vehicles\cart\data\forklift_forks_yellow_co.paa","optre_vehicles\cart\data\forklift_cockpit_yellow_co.paa"};
		showNVGCargo[]					= {0,1};
		maxFordingDepth 				= 0.95;
		getInAction						= "GetInOffroad";
		getOutAction					= "GetOutMRAP_01";
		cargoGetInAction[]				= {"GetInHeli_Transport_01Cargo"};
		cargoGetOutAction[]				= {"GetOutHelicopterCargoRfl"};
		commanderCanSee					= 31;
		hideWeaponsDriver				= 1;
		hideWeaponsCargo				= 1;
		driverDoor						= "";
		cargoDoors[]					= {};
		precision						= 15;
		weapons[]						= {"TruckHorn2"};
		magazines[]						= {};

		#include "sounds.hpp"
		#include "physx.hpp"
		
		supplyRadius					= 5;
		transportMaxMagazines			= 20;
		class TransportMagazines
		{};
		class TransportItems
		{};
		class TransportWeapons
		{};
		class Turrets
		{};
		class UserActions
		{
			class ForksUp
			{
				userActionID = 60;	
				displayName = "Raise Forks";
				displayNameDefault = "Raise Forks";
				textToolTip = "Raise Forks";
				position = forks_handle;
				radius = 5;
				priority = 2;
				onlyForPlayer = 0;
				condition = "((this animationPhase ""liftforks_2_anim"" < 0.5) AND (this animationPhase ""liftforks_1_anim"" < 0.5) AND (alive this) AND (player == driver this))"; /// only openable from inside and when closed
				statement = "this animate [""liftforks_2_anim"",1]; this animate [""liftforks_1_anim"",1]";
				animPeriod = 5;
            };
            class ForksDown: ForksUp
            {
				userActionID = 61;
				displayName = "Lower Forks";
				displayNameDefault = "Lower Forks";
				textToolTip = "Lower Forks";
				priority = 2;
				condition = "((this animationPhase ""liftforks_2_anim"" > 0.5) AND (this animationPhase ""liftforks_1_anim"" > 0.5) AND (alive this) AND (player == driver this))"; /// only openable from inside and when closed
				statement = "this animate [""liftforks_2_anim"",0]; this animate [""liftforks_1_anim"",0]";
				animPeriod = 5;
            };
		};
	};
	class OPTRE_forklift_yellow: OPTRE_forklift_base
	{
		scope 							= 2;
		displayName						= "S-2 Cargo Transporter (Yellow)";
		author							= "Article 2 Studios";
		faction							= "OPTRE_UEG_Civ";
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		hiddenSelections[]				= {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[]		= {"optre_vehicles\cart\data\forklift_hull_yellow_co.paa","optre_vehicles\cart\data\forklift_forks_yellow_co.paa","optre_vehicles\cart\data\forklift_cockpit_yellow_co.paa"};
	};
	class OPTRE_forklift_grey: OPTRE_forklift_base
	{
		scope 							= 2;
		displayName						= "S-2 Cargo Transporter (Grey)";
		author							= "Article 2 Studios";
		faction							= "OPTRE_UEG_Civ";
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		hiddenSelections[]				= {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[]		= {"optre_vehicles\cart\data\forklift_hull_white_co.paa","optre_vehicles\cart\data\forklift_forks_white_co.paa","optre_vehicles\cart\data\forklift_cockpit_white_co.paa"};
	};
	class OPTRE_forklift_green: OPTRE_forklift_base
	{
		scope 							= 2;
		displayName						= "S-2 Cargo Transporter (Green)";
		author							= "Article 2 Studios";
		faction							= "OPTRE_UEG_Civ";
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		hiddenSelections[]				= {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[]		= {"optre_vehicles\cart\data\forklift_hull_green_co.paa","optre_vehicles\cart\data\forklift_forks_green_co.paa","optre_vehicles\cart\data\forklift_cockpit_green_co.paa"};
	};
};