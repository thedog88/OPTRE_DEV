class CfgPatches
{
	class OPTRE_Vehicles_Pelican
	{
		units[] = { "OPTRE_Objects_Wreck_Pelican","OPTRE_Objects_Wreck_Pelican_Static1","OPTRE_Pelican_unarmed","OPTRE_Pelican_unarmed_ins","OPTRE_Pelican_unarmed_marine","OPTRE_Pelican_armed","OPTRE_Pelican_armed_marine","OPTRE_Pelican_armed_ins","OPTRE_Objects_Wreck_Pelican_Static2" };
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = { "A3_Air_F","A3_Air_F_Beta","A3_Weapons_F","OPTRE_Core" };
	};
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class CfgVehicles
{
	class All {};
	class Static : All {};
	class Helicopter;
	class Helicopter_Base_F : Helicopter
	{
		class Turrets;
		class HitPoints;
		class ViewPilot;
		class CargoTurret;
		class Reflectors
		{
			class Right;
		};
	};
	class Helicopter_Base_H : Helicopter_Base_F
	{
		class EventHandlers;
		class Turrets : Turrets
		{
			class CopilotTurret;
		};
		class HitPoints : HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
		class AnimationSources;
		class ViewOptics;
		class RotorLibHelicopterProperties;
	};
	class OPTRE_Pelican_F : Helicopter_Base_H
	{
		dlc = "OPTRE";
		vehicleClass = "OPTRE_UNSC_Air_class";

		scope = 0;
		author = "Article 2 Studios";
		armor = 120;
		destrType = "DestructWreck";
		gearRetracting = 1;

		displayName = "Pelican_base";
		model = "OPTRE_Vehicles\Pelican\Pelican_base.p3d";
		icon = "OPTRE_Vehicles\Pelican\Data\icon.paa";
		mapSize = 25;
		picture = "OPTRE_Vehicles\Pelican\Data\icon2.paa";
		driveOnComponent[] = { "wheel_1_1","wheel_2_1","wheel_2_2" };
		nameSound = "veh_air_plane_s";
		damageResistance = 0.00555;
		fuelCapacity = 2000;
		fuelConsumptionRate = 0.03845;
		insideSoundCoef = 0.0116228;
		noseDownCoef = 0;
		crewCrashProtection = 0;
		crewExplosionProtection = 0;
		maxSpeed = 500;
		maxFordingDepth = 0.75;
		mainBladeRadius = 0.1;
		liftForceCoef = 2;
		bodyFrictionCoef = 0.6777;
		cyclicAsideForceCoef = 4;
		cyclicForwardForceCoef = 2;
		backRotorForceCoef = 1.377;
		driverAction = "pilot_Heli_Light_02";
		driverInAction = "pilot_Heli_Light_02";
		precisegetinout = 1;
		GetInAction = "pilot_Heli_Light_02_Enter";
		GetOutAction = "pilot_Heli_Light_02_Exit";
		cargoGetInAction[] = { "GetInHelicopterCargo" };
		cargoGetOutAction[] = { "GetOutHelicopterCargo" };
		transportSoldier = 10;
		cargoCanEject = 1;
		driverCanEject = 0;
		cargoAction[] = { "passenger_apc_narrow_generic01","passenger_apc_generic04","passenger_apc_narrow_generic02","passenger_generic01_leanright","passenger_apc_narrow_generic02","passenger_apc_narrow_generic03","passenger_generic01_leanleft","passenger_generic01_foldhands","passenger_apc_generic04","passenger_generic01_foldhands","passenger_apc_generic02" };
		cargoIsCoDriver[] = { 0,0 };
		memoryPointsGetInCargo = "pos cargo";
		memoryPointsGetInCargoDir = "pos cargo dir";
		hideWeaponsCargo = 1;
		ejectDeadGunner = 0;
		cargoProxyIndexes[] = { 3,4,5,6,7,8,9,10,11,12 };

		allowTabLock = 1;
		gunnerCanSee = 31;
		commanderCanSee = 31;
		driverCanSee = 31;
		canUseScanner = 1;
		incomingMissileDetectionSystem = 16;
		irScanToEyeFactor = 1;
		irScanRangeMin = 200;
		irScanRangeMax = 10000;
		irScanGround = 1;
		irTarget = 1;
		irTargetSize = 2.0;
		laserScanner = 1;
		laserTarget = 0;
		weaponLockSystem = "2+4+8+16";
		nvScanner = 1;
		radarTarget = 1;
		radarTargetSize = 2.0;
		radarType = 4; // Aircraft Radar
		receiveRemoteTargets = true; // deve version only currently not tested
		reportRemoteTargets = true; // deve version only currently not tested
		reportOwnPosition = true; // deve version only currently not tested
		showAllTargets = 2; //LockYes, show targets from all sensors  https://community.bistudio.com/wiki/File:showAllTargets.png
		availableForSupportTypes[] = { "Drop","Transport" };
		cost = 900000;

		class HitPoints : HitPoints
		{
			class HitHull : HitHull
			{
				armor = 0.1;
				visual = "Hull";
				minimalHit = 0.05;
				depends = "Total";
				radius = 0.01;
			};
			class HitFuel : HitFuel
			{
				armor = 0.7;
				radius = 0.25;
				minimalHit = 0.05;
				explosionShielding = 2;
			};
			class HitAvionics : HitAvionics
			{
				armor = 1.3;
				radius = 0.4;
				minimalHit = 0.05;
				explosionShielding = 1.5;
			};
			class HitHRotor : HitHRotor
			{
				armor = 2.6;
				radius = 0.4;
				minimalHit = 0.09;
				explosionShielding = 2.5;
			};
			class HitVRotor : HitVRotor
			{
				armor = 1.3;
				radius = 0.06;
				minimalHit = 0.05;
				explosionShielding = 6;
			};
		};
		class TransportBackpacks {};
		class TransportItems {};
		maximumLoad = 5000;
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust1";
				direction = "exhaust1_dir";
				effect = "ExhaustsEffectHeliMed";
			};
			class Exhaust2
			{
				position = "exhaust2";
				direction = "exhaust2_dir";
				effect = "ExhaustsEffectHeliMed";
			};
			class Exhaust3
			{
				position = "exhaust3";
				direction = "exhaust3_dir";
				effect = "ExhaustsEffectHeliMed";
			};
			class Exhaust4
			{
				position = "exhaust4";
				direction = "exhaust4_dir";
				effect = "ExhaustsEffectHeliMed";
			};
			class Exhaust5
			{
				position = "exhaust5";
				direction = "exhaust5_dir";
				effect = "ExhaustsEffectHeliMed";
			};
			class Exhaust6
			{
				position = "exhaust6";
				direction = "exhaust6_dir";
				effect = "ExhaustsEffectHeliMed";
			};
			class Exhaust7
			{
				position = "exhaust7";
				direction = "exhaust7_dir";
				effect = "ExhaustsEffectHeliMed";
			};
			class Exhaust8
			{
				position = "exhaust8";
				direction = "exhaust8_dir";
				effect = "ExhaustsEffectHeliMed";
			};
		};

		selectionFireAnim = "muzzleFlash";
		weapons[] = { "CMFlareLauncher" };
		magazines[] = { "168Rnd_CMFlare_Chaff_Magazine" };
		class ViewPilot : ViewPilot
		{
			initFov = 0.75;
			minFov = 0.375;
			maxFov = 1.1;
		};
		class Viewoptics : Viewoptics
		{
			initAngleX = 0;
			minAngleX = 0;
			maxAngleX = 0;
			initAngleY = 0;
			minAngleY = 0;
			maxAngleY = 0;
			initFov = 0.1;
			minFov = 0.1;
			maxFov = 1.2;
		};
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName = "W";
					initAngleX = 0;
					minAngleX = 0;
					maxAngleX = "+0";
					initAngleY = 0;
					minAngleY = 0;
					maxAngleY = "+0";
					initFov = 0.5;
					minFov = 0.5;
					maxFov = 0.5;
					visionMode[] = { "Normal","NVG","Ti" };
					thermalMode[] = { 0,1 };
					gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				};
				showMiniMapInOptics = 0;
				showUAVViewpInOptics = 0;
				showSlingLoadManagerInOptics = 1;
			};
			minTurn = 0;
			maxTurn = 0;
			initTurn = 0;
			minElev = 80;
			maxElev = 80;
			initElev = 80;
			maxXRotSpeed = 0.5;
			maxYRotSpeed = 0.5;
			pilotOpticsShowCursor = 1;
			controllable = 0;
		};
		memoryPointDriverOptics = "slingCamera";
		slingLoadMaxCargoMass = 500000;
		slingLoadMemoryPoint = "slingLoad0";
		ace_fastroping_enabled = 1;
		ace_fastroping_ropeOrigins[] = { "ropeOriginLeft","ropeOriginRight" };
		class MFD
		{
			class AirplaneHUD
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = { 0.15,0.15,1,1.0 };
				helmetMountedDisplay = 1;
				helmetPosition[] = { -0.0375,0.0375,0.1 };
				helmetRight[] = { 0.075,0.0,0.0 };
				helmetDown[] = { 0.0,-0.075,0.0 };
				enableParallax = 1;
				font = "LucidaConsoleB";
				class Bones
				{
					class HUDCenter
					{
						type = "fixed";
						pos[] = { 0.5,0.5 };
					};
					class HorizonBankSource
					{
						type = "rotational";
						source = "HorizonBank";
						center[] = { 0.5,0.5 };
						min = -6.2831;
						max = 6.2831;
						minAngle = -360;
						maxAngle = 360;
					};
					class HorizonDiveSource
					{
						source = "horizonDive";
						type = "linear";
						min = -1;
						max = 1;
						minPos[] = { 0.5,2.5 };
						maxPos[] = { 0.5,-1.5 };
					};
					class VelocityVector
					{
						type = "vector";
						source = "velocityToView";
						pos0[] = { 0.5,0.5 };
						pos10[] = { 0.734,0.73 };
					};
					class ForwardVector
					{
						type = "vector";
						source = "forward";
						pos0[] = { 0,0 };
						pos10[] = { 0.234,0.23 };
					};
					class GunnerAim
					{
						type = "vector";
						source = "weapon";
						pos0[] = { 0,-0.0025 };
						pos10[] = { 0.01,0.0025 };
					};
					class WeaponAim
					{
						type = "vector";
						source = "weaponToView";
						pos0[] = { 0.5,0.5 };
						pos10[] = { 0.734,0.73 };
					};
					class SliderDiveSource
					{
						type = "linear";
						source = "horizonDive";
						min = "RAD(-10)";
						max = "RAD(10)";
						minPos[] = { 0.105,0.38 };
						maxPos[] = { 0.105,0.54 };
					};
					class SliderDiveSource30 : SliderDiveSource
					{
						min = "RAD(10)";
						max = "RAD(30)";
						minPos[] = { 0.0,-0.04 };
						maxPos[] = { 0.0,"0)" };
					};
					class SliderDiveSource90 : SliderDiveSource30
					{
						min = "RAD(30)";
						max = "RAD(90)";
						minPos[] = { 0.0,-0.04 };
					};
					class SliderDiveSource30m : SliderDiveSource
					{
						min = "RAD(-30)";
						max = "RAD(-10)";
						minPos[] = { 0.0,0 };
						maxPos[] = { 0.0,0.04 };
					};
					class SliderDiveSource90m : SliderDiveSource30m
					{
						min = "RAD(-90)";
						max = "RAD(-30)";
						maxPos[] = { 0.0,0.04 };
					};
					class SliderAltitudeSource
					{
						type = "linear";
						source = "altitudeAGL";
						sourceOffset = -3;
						min = 0;
						max = 1000;
						minPos[] = { 0.885,0.2 };
						maxPos[] = { 0.885,0.375 };
					};
					class GForceSource
					{
						type = "linear";
						source = "gmeter";
						sourceScale = 0.15;
						min = -1;
						max = 3;
						minPos[] = { 0.105,0.7 };
						maxPos[] = { 0.105,0.86 };
					};
					class SliderVSpeedSource
					{
						type = "linear";
						source = "vspeed";
						min = -15;
						max = 15;
						minPos[] = { 0.795,0.6 };
						maxPos[] = { 0.795,0.84 };
					};
					class ImpactPoint
					{
						type = "vector";
						source = "ImpactPointToView";
						pos0[] = { 0.5,0.5 };
						pos10[] = { 0.734,0.73 };
					};
					class WPPoint
					{
						type = "vector";
						source = "WPPointToView";
						pos0[] = { 0.5,0.5 };
						pos10[] = { 0.734,0.73 };
					};
					class rtdRPM1
					{
						type = "linear";
						source = "rpm";
						min = 0.1;
						max = 1.0;
						minPos[] = { 0,-0.075 };
						maxPos[] = { 0,0 };
					};
					class rtdRPM2 : rtdRPM1
					{
						source = "rpm";
					};
					class Limit0109
					{
						type = "limit";
						limits[] = { 0.1,0.1,0.9,0.9 };
					};
					class Target
					{
						source = "targettoview";
						type = "vector";
						pos0[] = { 0.5,0.5 };
						pos10[] = { 0.734,0.73 };
					};
					class MissileFlightTimeRot1
					{
						type = "rotational";
						source = "MissileFlightTime";
						sourceScale = 0.46;
						center[] = { 0,0 };
						min = 0;
						max = 0.5;
						minAngle = 0;
						maxAngle = 18;
						aspectRatio = 0.982906;
					};
					class MissileFlightTimeRot2 : MissileFlightTimeRot1
					{
						maxAngle = 36;
						max = 1;
					};
					class MissileFlightTimeRot3 : MissileFlightTimeRot1
					{
						maxAngle = 54;
						max = 1.5;
					};
					class MissileFlightTimeRot4 : MissileFlightTimeRot1
					{
						maxAngle = 72;
						max = 2;
					};
					class MissileFlightTimeRot5 : MissileFlightTimeRot1
					{
						maxAngle = 90;
						max = 2.5;
					};
					class MissileFlightTimeRot6 : MissileFlightTimeRot1
					{
						maxAngle = 108;
						max = 3;
					};
					class MissileFlightTimeRot7 : MissileFlightTimeRot1
					{
						maxAngle = 126;
						max = 3.5;
					};
					class MissileFlightTimeRot8 : MissileFlightTimeRot1
					{
						maxAngle = 144;
						max = 4;
					};
					class MissileFlightTimeRot9 : MissileFlightTimeRot1
					{
						maxAngle = 162;
						max = 4.5;
					};
					class MissileFlightTimeRot10 : MissileFlightTimeRot1
					{
						maxAngle = 180;
						max = 5;
					};
					class MissileFlightTimeRot11 : MissileFlightTimeRot1
					{
						maxAngle = 198;
						max = 5.5;
					};
					class MissileFlightTimeRot12 : MissileFlightTimeRot1
					{
						maxAngle = 216;
						max = 6;
					};
					class MissileFlightTimeRot13 : MissileFlightTimeRot1
					{
						maxAngle = 234;
						max = 6.5;
					};
					class MissileFlightTimeRot14 : MissileFlightTimeRot1
					{
						maxAngle = 252;
						max = 7;
					};
					class MissileFlightTimeRot15 : MissileFlightTimeRot1
					{
						maxAngle = 270;
						max = 7.5;
					};
					class MissileFlightTimeRot16 : MissileFlightTimeRot1
					{
						maxAngle = 288;
						max = 8;
					};
					class MissileFlightTimeRot17 : MissileFlightTimeRot1
					{
						maxAngle = 306;
						max = 8.5;
					};
					class MissileFlightTimeRot18 : MissileFlightTimeRot1
					{
						maxAngle = 324;
						max = 9;
					};
					class MissileFlightTimeRot19 : MissileFlightTimeRot1
					{
						maxAngle = 342;
						max = 9.5;
					};
					class MissileFlightTimeRot20 : MissileFlightTimeRot1
					{
						maxAngle = 360;
						max = 10;
					};
					class HorizonBankRotFull
					{
						type = "rotational";
						source = "horizonBank";
						center[] = { 0,0 };
						min = -3.1416;
						max = 3.1416;
						minAngle = -180;
						maxAngle = 180;
						aspectRatio = 1;
					};
					class Airport1
					{
						type = "vector";
						source = "airportCorner1";
						pos0[] = { 0.5,0.5 };
						pos10[] = { 0.734,0.73 };
					};
					class Airport2 : Airport1
					{
						source = "airportCorner2";
					};
					class Airport3 : Airport1
					{
						source = "airportCorner3";
					};
					class Airport4 : Airport1
					{
						source = "airportCorner4";
					};
					class ILS_H
					{
						type = "ils";
						pos0[] = { 0.5,0.5 };
						pos3[] = { 0.5702,0.5 };
					};
					class ILS_W : ILS_H
					{
						pos3[] = { 0.5,0.569 };
					};
				};
				class Draw
				{
					alpha = 1.0;
					color[] = { 0.15,0.15,1,1.0 };
					condition = "on";
					class VelocityLine
					{
						type = "line";
						width = 2.0;
						points[] = { { "HUDCenter",1 },{ "VelocityVector",1 },{},{ "VelocityVector",{ 0,-0.00491453 },1 },{ "VelocityVector",{ 0.0025,-0.00425598 },1 },{ "VelocityVector",{ 0.00433,-0.00245726 },1 },{ "VelocityVector",{ 0.005,0 },1 },{ "VelocityVector",{ 0.00433,0.00245726 },1 },{ "VelocityVector",{ 0.0025,0.00425598 },1 },{ "VelocityVector",{ 0,0.00491453 },1 },{ "VelocityVector",{ -0.0025,0.00425598 },1 },{ "VelocityVector",{ -0.00433,0.00245726 },1 },{ "VelocityVector",{ -0.005,0 },1 },{ "VelocityVector",{ -0.00433,-0.00245726 },1 },{ "VelocityVector",{ -0.0025,-0.00425598 },1 },{ "VelocityVector",{ 0,-0.00491453 },1 },{} };
					};
					class Static
					{
						type = "line";
						width = 3.0;
						points[] = { { "SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{ 0.015,0.01 },1 },{ "SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{ 0.0,0.0 },1 },{ "SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{ 0.015,-0.01 },1 },{ "SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{ 0.015,0.01 },1 },{},{ "SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{ 0.03,0.015 },1 },{ "SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{ 0.088,0.015 },1 },{ "SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{ 0.088,-0.015 },1 },{ "SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{ 0.03,-0.015 },1 },{ "SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{ 0.03,0.015 },1 },{},{ { 0.1,0.3 },1 },{ { 0.1,0.62 },1 },{},{ { 0.1,0.3 },1 },{ { 0.08,0.3 },1 },{},{ { 0.1,0.34 },1 },{ { 0.08,0.34 },1 },{},{ { 0.1,0.38 },1 },{ { 0.08,0.38 },1 },{},{ { 0.1,0.46 },1 },{ { 0.08,0.46 },1 },{},{ { 0.1,0.54 },1 },{ { 0.08,0.54 },1 },{},{ { 0.1,0.58 },1 },{ { 0.08,0.58 },1 },{},{ { 0.1,0.62 },1 },{ { 0.08,0.62 },1 },{},{ "GForceSource",{ 0.015,0.01 },1 },{ "GForceSource",{ 0.0,0.0 },1 },{ "GForceSource",{ 0.015,-0.01 },1 },{ "GForceSource",{ 0.015,0.01 },1 },{},{ { 0.1,0.688 },1 },{ { 0.1,0.82 },1 },{},{ { 0.1,0.7 },1 },{ { 0.08,0.7 },1 },{},{ { 0.1,0.74 },1 },{ { 0.08,0.74 },1 },{},{ { 0.1,0.78 },1 },{ { 0.08,0.78 },1 },{},{ { 0.1,0.82 },1 },{ { 0.08,0.82 },1 },{},{ { 0.4,0.86 },1 },{ { 0.4,0.94 },1 },{ { 0.6,0.94 },1 },{ { 0.6,0.86 },1 },{ { 0.4,0.86 },1 },{},{ { 0.4,0.885 },1 },{ { 0.408,0.885 },1 },{},{ { 0.6,0.885 },1 },{ { 0.592,0.885 },1 },{},{ { 0.5,0.86 },1 },{ { 0.5,0.868 },1 },{},{ { 0.5,0.94 },1 },{ { 0.5,0.932 },1 },{},{ { 0.52,0.08 },1 },{ { 0.5,0.11 },1 },{ { 0.48,0.08 },1 },{ { 0.52,0.08 },1 },{},{ { 0.46,0.07 },1 },{ { 0.54,0.07 },1 },{ { 0.54,0.035 },1 },{ { 0.46,0.035 },1 },{ { 0.46,0.07 },1 },{},{ { 0.15,0.115 },1 },{ { 0.85,0.115 },1 },{},{ { 0.0,0.96 },1 },{ { 1.1,0.96 },1 },{},{ { 0.48,0.5 },1 },{ { 0.49,0.5 },1 },{},{ { 0.51,0.5 },1 },{ { 0.52,0.5 },1 },{},{ { 0.5,0.49 },1 },{ { 0.5,0.48 },1 },{},{ { 0.5,0.51 },1 },{ { 0.5,0.52 },1 },{},{ "WeaponAim",1,{ -0.02,0.0 },1 },{ "WeaponAim",1,{ -0.01,0.0 },1 },{},{ "WeaponAim",1,{ 0.01,0.0 },1 },{ "WeaponAim",1,{ 0.02,0.0 },1 },{},{ "WeaponAim",1,{ 0.0,-0.01 },1 },{ "WeaponAim",1,{ 0.0,-0.02 },1 },{},{ "WeaponAim",1,{ 0.0,0.01 },1 },{ "WeaponAim",1,{ 0.0,0.02 },1 },{},{ "HUDCenter",{ -0.165,7.08909e-009 },1 },{ "HUDCenter",{ -0.22,9.45212e-009 },1 },{},{ "HUDCenter",{ 0.165,-1.93397e-009 },1 },{ "HUDCenter",{ 0.22,-2.57863e-009 },1 },{},{ "HUDCenter",{ -0.0825,0.140452 },1 },{ "HUDCenter",{ -0.09625,0.16386 },1 },{},{ "HUDCenter",{ 0.0825,0.140452 },1 },{ "HUDCenter",{ 0.09625,0.16386 },1 },{},{ "HUDCenter",{ -0.142894,0.0810898 },1 },{ "HUDCenter",{ -0.16671,0.0946047 },1 },{},{ "HUDCenter",{ 0.142894,0.0810897 },1 },{ "HUDCenter",{ 0.16671,0.0946047 },1 },{},{ "HUDCenter",{ -0.116673,0.114678 },1 },{ "HUDCenter",{ -0.155564,0.152904 },1 },{},{ "HUDCenter",{ 0.116673,0.114678 },1 },{ "HUDCenter",{ 0.155563,0.152904 },1 },{},{} };
					};
					class Gunner
					{
						type = "line";
						width = 4.0;
						points[] = { { "GunnerAim",{ 0.485,0.892 },1 },{ "GunnerAim",{ 0.485,0.908 },1 },{ "GunnerAim",{ 0.515,0.908 },1 },{ "GunnerAim",{ 0.515,0.892 },1 },{ "GunnerAim",{ 0.485,0.892 },1 } };
					};
					class DiveNumber
					{
						type = "text";
						source = "horizondive";
						sourceScale = 57.29578;
						sourceOffset = 0;
						align = "left";
						scale = 1;
						pos[] = { "SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{ 0.085,"0.00-0.011" },1 };
						right[] = { "SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{ 0.12,"0.00-0.011" },1 };
						down[] = { "SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{ 0.085,"0.03-0.011" },1 };
					};
					class VSpeedGroup
					{
						condition = "on";
						class VSpeedNumber
						{
							type = "text";
							source = "vspeed";
							sourceScale = 1;
							align = "center";
							scale = 1;
							pos[] = { { "0.82+0.07",0.728 },1 };
							right[] = { { "0.86+0.07",0.728 },1 };
							down[] = { { "0.82+0.07",0.763 },1 };
						};
						class Static
						{
							type = "line";
							width = 3.0;
							points[] = { { { 0.849,0.76 },1 },{ { 0.929,0.76 },1 },{ { 0.929,0.725 },1 },{ { 0.849,0.725 },1 },{ { 0.849,0.76 },1 },{} };
						};
					};
					class VSpeedGroupUp
					{
						condition = "vspeed";
						class Static
						{
							type = "line";
							width = 3.0;
							points[] = { { { 0.869,0.715 },1 },{ { 0.909,0.715 },1 },{ { 0.889,0.695 },1 },{ { 0.869,0.715 },1 },{} };
						};
					};
					class VSpeedGroupDown
					{
						condition = "-vspeed";
						class Static
						{
							type = "line";
							width = 3.0;
							points[] = { { { 0.869,0.77 },1 },{ { 0.909,0.77 },1 },{ { 0.889,0.79 },1 },{ { 0.869,0.77 },1 },{} };
						};
					};
					class AltGroup
					{
						condition = "1000 - altitudeAGL";
						class Static
						{
							type = "line";
							width = 3.0;
							points[] = { { "SliderAltitudeSource",{ 0.024,0.01 },1 },{ "SliderAltitudeSource",{ 0.009,0.0 },1 },{ "SliderAltitudeSource",{ 0.024,-0.01 },1 },{ "SliderAltitudeSource",{ 0.024,0.01 },1 },{},{ "SliderAltitudeSource",{ 0.035,0.015 },1 },{ "SliderAltitudeSource",{ 0.093,0.015 },1 },{ "SliderAltitudeSource",{ 0.093,-0.015 },1 },{ "SliderAltitudeSource",{ 0.035,-0.015 },1 },{ "SliderAltitudeSource",{ 0.035,0.015 },1 },{},{ { 0.889,0.2 },1 },{ { 0.889,0.375 },1 },{},{ { 0.879,0.2 },1 },{ { 0.899,0.2 },1 },{},{ { 0.879,0.375 },1 },{ { 0.899,0.375 },1 },{} };
						};
						class AltNumber
						{
							type = "text";
							source = "altitudeAGL";
							sourceScale = 1;
							sourceOffset = -3;
							align = "left";
							scale = 1;
							pos[] = { "SliderAltitudeSource",{ 0.085,"0.00-0.011" },1 };
							right[] = { "SliderAltitudeSource",{ 0.11,"0.00-0.011" },1 };
							down[] = { "SliderAltitudeSource",{ 0.085,"0.03-0.011" },1 };
						};
						class AltStatic50
						{
							type = "text";
							source = "static";
							text = "1000";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = { { 0.885,0.171 },1 };
							right[] = { { 0.925,0.171 },1 };
							down[] = { { 0.885,0.201 },1 };
						};
					};
					class SpeedNumber
					{
						type = "text";
						source = "speed";
						sourceScale = 3.6;
						sourceLength = 3;
						align = "left";
						scale = 1;
						pos[] = { { 0.13,0.22 },1 };
						down[] = { { 0.13,0.26 },1 };
						right[] = { { 0.2,0.22 },1 };
					};
					class HeadingNumber
					{
						type = "text";
						source = "heading";
						sourceScale = 1;
						align = "center";
						scale = 1;
						pos[] = { { "0.80-0.302","0.082-0.043" },1 };
						right[] = { { "0.84-0.302","0.082-0.043" },1 };
						down[] = { { "0.80-0.302","0.117-0.043" },1 };
					};
					class Angle_90
					{
						type = "text";
						source = "static";
						text = "90";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = { { 0.07,0.285 },1 };
						right[] = { { 0.11,0.285 },1 };
						down[] = { { 0.07,0.315 },1 };
					};
					class Angle_30
					{
						type = "text";
						source = "static";
						text = "30";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = { { 0.07,0.325 },1 };
						right[] = { { 0.11,0.325 },1 };
						down[] = { { 0.07,0.355 },1 };
					};
					class Angle_10
					{
						type = "text";
						source = "static";
						text = "10";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = { { 0.07,0.365 },1 };
						right[] = { { 0.11,0.365 },1 };
						down[] = { { 0.07,0.395 },1 };
					};
					class Angle_0
					{
						type = "text";
						source = "static";
						text = "0";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = { { 0.07,0.445 },1 };
						right[] = { { 0.11,0.445 },1 };
						down[] = { { 0.07,0.475 },1 };
					};
					class Angle_10m
					{
						type = "text";
						source = "static";
						text = "-10";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = { { 0.07,0.525 },1 };
						right[] = { { 0.11,0.525 },1 };
						down[] = { { 0.07,0.555 },1 };
					};
					class Angle_30m
					{
						type = "text";
						source = "static";
						text = "-30";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = { { 0.07,0.565 },1 };
						right[] = { { 0.11,0.565 },1 };
						down[] = { { 0.07,0.595 },1 };
					};
					class Angle_90m
					{
						type = "text";
						source = "static";
						text = "-90";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = { { 0.07,0.605 },1 };
						right[] = { { 0.11,0.605 },1 };
						down[] = { { 0.07,0.635 },1 };
					};
					class GMeterStatic3
					{
						type = "text";
						source = "static";
						text = "3";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = { { 0.07,0.683 },1 };
						right[] = { { 0.11,0.683 },1 };
						down[] = { { 0.07,0.713 },1 };
					};
					class GMeterStatic2
					{
						type = "text";
						source = "static";
						text = "2";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = { { 0.07,0.723 },1 };
						right[] = { { 0.11,0.723 },1 };
						down[] = { { 0.07,0.753 },1 };
					};
					class GMeterStatic1
					{
						type = "text";
						source = "static";
						text = "1";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = { { 0.07,0.763 },1 };
						right[] = { { 0.11,0.763 },1 };
						down[] = { { 0.07,0.793 },1 };
					};
					class GMeterStatic0
					{
						type = "text";
						source = "static";
						text = "0";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = { { 0.07,0.803 },1 };
						right[] = { { 0.11,0.803 },1 };
						down[] = { { 0.07,0.833 },1 };
					};
					class CollectiveNumber
					{
						type = "text";
						source = "throttle";
						sourceScale = 100;
						align = "left";
						scale = 1;
						pos[] = { { 0.889,0.46 },1 };
						right[] = { { 0.939,0.46 },1 };
						down[] = { { 0.889,0.495 },1 };
					};
					class CollectiveText
					{
						type = "text";
						source = "static";
						text = "%";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] = { { 0.899,0.46 },1 };
						right[] = { { 0.949,0.46 },1 };
						down[] = { { 0.899,0.495 },1 };
					};

					class HeadingScale
					{
						type = "scale";
						horizontal = 1;
						source = "heading";
						sourceScale = 0.1;
						sourceoffset = 0;
						width = 3.0;
						NeverEatSeaWeed = 1;
						top = 0.15;
						center = 0.5;
						bottom = 0.85;
						lineXleft = 0.114;
						lineYright = 0.12;
						lineXleftMajor = 0.114;
						lineYrightMajor = 0.13;
						majorLineEach = 2;
						numberEach = 6;
						step = 0.5;
						stepSize = 0.0344828;
						align = "center";
						scale = 1;
						pos[] = { 0.15,0.13 };
						right[] = { 0.21,0.13 };
						down[] = { 0.15,0.17 };
					};
					class HorizonBanking
					{
						type = "line";
						width = 3.0;
						clipTL[] = { 0.0,0.1 };
						clipBR[] = { 1.0,0.9 };
						points[] = { { "HorizonBankSource",{ 0.16,0.0 },1 },{ "HorizonBankSource",{ 0.1,0.0 },1 },{ "HorizonBankSource",{ 0.085,-0.015 },1 },{ "HorizonBankSource",{ 0.07,0.0 },1 },{ "HorizonBankSource",{ 0.05,0.0 },1 },{},{ "HorizonBankSource",{ -0.16,0.0 },1 },{ "HorizonBankSource",{ -0.1,0.0 },1 },{ "HorizonBankSource",{ -0.085,-0.015 },1 },{ "HorizonBankSource",{ -0.07,0.0 },1 },{ "HorizonBankSource",{ -0.05,0.0 },1 },{} };
					};
					class CoordXNumber
					{
						type = "text";
						source = "coordinateX";
						sourceScale = 0.01;
						sourceLength = 3;
						sourceOffset = -0.5;
						align = "right";
						scale = 1;
						pos[] = { { 0.809,0.961 },1 };
						right[] = { { 0.859,0.961 },1 };
						down[] = { { 0.809,0.996 },1 };
					};
					class CoordYNumber : CoordXNumber
					{
						source = "coordinateY";
						pos[] = { { 0.899,0.961 },1 };
						right[] = { { 0.949,0.961 },1 };
						down[] = { { 0.899,0.996 },1 };
					};
					class Time : CoordXNumber
					{
						source = "time";
						text = "%X";
						align = "left";
						pos[] = { { 0.605,0.961 },1 };
						right[] = { { 0.655,0.961 },1 };
						down[] = { { 0.605,0.996 },1 };
					};
					class CurrentWeapon
					{
						type = "text";
						source = "weapon";
						sourceScale = 1;
						align = "left";
						scale = 1;
						pos[] = { { 0.979,0.889 },1 };
						right[] = { { 1.029,0.889 },1 };
						down[] = { { 0.979,0.924 },1 };
					};
					class CurrentAmmo : CurrentWeapon
					{
						source = "ammo";
						align = "left";
						pos[] = { { 0.979,0.921 },1 };
						right[] = { { 1.029,0.921 },1 };
						down[] = { { 0.979,0.956 },1 };
					};
					class CoordXText
					{
						type = "text";
						source = "static";
						text = "GRID:";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] = { { 0.655,0.961 },1 };
						right[] = { { 0.705,0.961 },1 };
						down[] = { { 0.655,0.996 },1 };
					};
					class CoordYText
					{
						type = "text";
						source = "static";
						text = "";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] = { { 0.875,0.961 },1 };
						right[] = { { 0.925,0.961 },1 };
						down[] = { { 0.875,0.996 },1 };
					};
					class LightsGroup
					{
						condition = "lights";
						class LightsText
						{
							type = "text";
							source = "static";
							text = "LIGHT";
							align = "left";
							scale = 1;
							pos[] = { { 0.149,0.961 },1 };
							right[] = { { 0.199,0.961 },1 };
							down[] = { { 0.149,0.996 },1 };
						};
					};
					class CollisionLights
					{
						condition = "collisionlights";
						class CollisionLightsText
						{
							type = "text";
							source = "static";
							text = "COLL";
							align = "left";
							scale = 1;
							pos[] = { { 0.309,0.961 },1 };
							right[] = { { 0.359,0.961 },1 };
							down[] = { { 0.309,0.996 },1 };
						};
					};
					class WeaponsLocking
					{
						condition = "missilelocking";
						blinkingPattern[] = { 0.2,0.2 };
						blinkingStartsOn = 1;
						class Text
						{
							type = "text";
							source = "static";
							text = "LOCKING";
							align = "center";
							scale = 1;
							pos[] = { { 0.215,0.879701 },1 };
							right[] = { { 0.275,0.879701 },1 };
							down[] = { { 0.215,0.928846 },1 };
						};
					};
					class TargetInfo
					{
						condition = "missilelocked";
						class TargetLockedText
						{
							type = "text";
							source = "static";
							text = "TARGET ACQUIRED";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = { { 0.195,0.859 },1 };
							right[] = { { 0.235,0.859 },1 };
							down[] = { { 0.195,0.89 },1 };
						};
						class TimeOfFlightText
						{
							type = "text";
							source = "static";
							text = "TOF:";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = { { "0.127+0.13",0.889 },1 };
							right[] = { { 0.302,0.889 },1 };
							down[] = { { "0.127+0.13",0.924 },1 };
						};
						class DistanceText
						{
							type = "text";
							source = "static";
							text = "DISTANCE:";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = { { "0.125+0.13",0.921 },1 };
							right[] = { { 0.3,0.921 },1 };
							down[] = { { "0.125+0.13",0.956 },1 };
						};
						class TOF_source : CurrentWeapon
						{
							source = "missileflighttime";
							align = "right";
							pos[] = { { 0.269,0.889 },1 };
							right[] = { { 0.319,0.889 },1 };
							down[] = { { 0.269,0.924 },1 };
						};
						class TargetDistance : CurrentWeapon
						{
							source = "targetDist";
							sourceLength = 0;
							sourcePrecision = 1;
							sourceScale = 0.001;
							align = "right";
							pos[] = { { 0.269,0.921 },1 };
							right[] = { { 0.319,0.921 },1 };
							down[] = { { 0.269,0.956 },1 };
						};
					};
					class IncomingMissile
					{
						condition = "incomingmissile";
						blinkingPattern[] = { 0.3,0.3 };
						blinkingStartsOn = 1;
						class Text
						{
							type = "text";
							source = "static";
							text = "!INCOMING MISSILE!";
							align = "center";
							scale = 1;
							pos[] = { { 0.485,0.216239 },1 };
							right[] = { { 0.545,0.216239 },1 };
							down[] = { { 0.485,0.265385 },1 };
						};
					};
					class GearGroup
					{
						type = "group";
						condition = "ils";
						class GearText
						{
							type = "text";
							source = "static";
							text = "GEAR";
							align = "center";
							scale = 1;
							pos[] = { { 0.5,0.825641 },1 };
							right[] = { { 0.54,0.825641 },1 };
							down[] = { { 0.5,0.855128 },1 };
						};
					};
					class MGun
					{
						condition = "mgun+rocket";
						class Cross
						{
							type = "line";
							width = 3.0;
							points[] = { { "ImpactPoint",{ 0.0,-0.0294872 },1 },{ "ImpactPoint",{ 0.0,-0.0393162 },1 },{},{ "ImpactPoint",{ 0.02,-0.024 },1 },{ "ImpactPoint",{ 0.025,-0.031 },1 },{},{ "ImpactPoint",{ 0.0,-0.002 },1 },{ "ImpactPoint",{ 0.0,0.002 },1 },{},{ "ImpactPoint",{ -0.002,0.0 },1 },{ "ImpactPoint",{ 0.002,0.0 },1 },{} };
						};
						class Circle
						{
							type = "line";
							width = 3.0;
							points[] = { { "ImpactPoint",{ 0,-0.0344017 },1 },{ "MissileFlightTimeRot1",{ 0,0.035 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot2",{ 0,0.035 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot3",{ 0,0.035 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot4",{ 0,0.035 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot5",{ 0,0.035 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot6",{ 0,0.035 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot7",{ 0,0.035 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot8",{ 0,0.035 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot9",{ 0,0.035 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot10",{ 0,0.035 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot11",{ 0,0.035 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot12",{ 0,0.035 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot13",{ 0,0.035 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot14",{ 0,0.035 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot15",{ 0,0.035 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot16",{ 0,0.035 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot17",{ 0,0.035 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot18",{ 0,0.035 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot19",{ 0,0.035 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot20",{ 0,0.035 },1,"ImpactPoint",1 } };
						};
						class Circle_Min_Range
						{
							type = "line";
							width = 3.0;
							points[] = { { "ImpactPoint",{ 0,-0.0294872 },1 },{ "ImpactPoint",{ 0.005208,-0.029039 },1 },{ "ImpactPoint",{ 0.01026,-0.0277091 },1 },{ "ImpactPoint",{ 0.015,-0.0255359 },1 },{ "ImpactPoint",{ 0.019284,-0.0225872 },1 },{ "ImpactPoint",{ 0.02298,-0.0189544 },1 },{ "ImpactPoint",{ 0.02598,-0.0147436 },1 },{ "ImpactPoint",{ 0.028191,-0.0100846 },1 },{ "ImpactPoint",{ 0.029544,-0.00511897 },1 },{ "ImpactPoint",{ 0.03,0 },1 },{ "ImpactPoint",{ 0.029544,0.00511897 },1 },{ "ImpactPoint",{ 0.028191,0.0100846 },1 },{ "ImpactPoint",{ 0.02598,0.0147436 },1 },{ "ImpactPoint",{ 0.02298,0.0189544 },1 },{ "ImpactPoint",{ 0.019284,0.0225872 },1 },{ "ImpactPoint",{ 0.015,0.0255359 },1 },{ "ImpactPoint",{ 0.01026,0.0277091 },1 },{ "ImpactPoint",{ 0.005208,0.029039 },1 },{ "ImpactPoint",{ 0,0.0294872 },1 },{ "ImpactPoint",{ -0.005208,0.029039 },1 },{ "ImpactPoint",{ -0.01026,0.0277091 },1 },{ "ImpactPoint",{ -0.015,0.0255359 },1 },{ "ImpactPoint",{ -0.019284,0.0225872 },1 },{ "ImpactPoint",{ -0.02298,0.0189544 },1 },{ "ImpactPoint",{ -0.02598,0.0147436 },1 },{ "ImpactPoint",{ -0.028191,0.0100846 },1 },{ "ImpactPoint",{ -0.029544,0.00511897 },1 },{ "ImpactPoint",{ -0.03,0 },1 },{ "ImpactPoint",{ -0.029544,-0.00511897 },1 },{ "ImpactPoint",{ -0.028191,-0.0100846 },1 },{ "ImpactPoint",{ -0.02598,-0.0147436 },1 },{ "ImpactPoint",{ -0.02298,-0.0189544 },1 },{ "ImpactPoint",{ -0.019284,-0.0225872 },1 },{ "ImpactPoint",{ -0.015,-0.0255359 },1 },{ "ImpactPoint",{ -0.01026,-0.0277091 },1 },{ "ImpactPoint",{ -0.005208,-0.029039 },1 },{ "ImpactPoint",{ 0,-0.0294872 },1 } };
						};
						class Distance
						{
							type = "text";
							source = "ImpactDistance";
							sourceScale = 0.001;
							sourcePrecision = 1;
							max = 15;
							align = "center";
							scale = 1;
							pos[] = { "ImpactPoint",{ -0.002,-0.08 },1 };
							right[] = { "ImpactPoint",{ 0.045,-0.08 },1 };
							down[] = { "ImpactPoint",{ -0.002,-0.04 },1 };
						};
					};
					class WP
					{
						condition = "wpvalid";
						class WPdist
						{
							type = "text";
							source = "wpdist";
							sourceScale = 0.001;
							sourcePrecision = 1;
							align = "left";
							scale = 1;
							pos[] = { { 0.935,0.810897 },1 };
							right[] = { { 0.995,0.810897 },1 };
							down[] = { { 0.935,0.860043 },1 };
						};
						class WPstatic
						{
							type = "text";
							source = "static";
							text = ">";
							align = "center";
							scale = 2;
							pos[] = { { 0.95,0.810897 },1 };
							right[] = { { 0.97,0.810897 },1 };
							down[] = { { 0.95,0.860043 },1 };
						};
						class WPIndex
						{
							type = "text";
							source = "wpIndex";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] = { { 0.96,0.810897 },1 };
							right[] = { { 1.02,0.810897 },1 };
							down[] = { { 0.96,0.860043 },1 };
						};
						class WP
						{
							width = 1;
							type = "line";
							points[] = { { "wppoint",1,{ "HorizonBankRotFull",0.015,-0.035 },1 },{ "wppoint",1,{ "HorizonBankRotFull",0.0,0.0 },1 },{ "wppoint",1,{ "HorizonBankRotFull",-0.015,-0.035 },1 } };
						};
					};
					class RadarBoxes
					{
						type = "radartoview";
						pos0[] = { 0.5,0.5 };
						pos10[] = { 0.734,0.73 };
						width = 2;
						points[] = { { { -0.002,-0.00196581 },1 },{ { 0.002,-0.00196581 },1 },{ { 0.002,0.00196581 },1 },{ { -0.002,0.00196581 },1 },{ { -0.002,-0.00196581 },1 } };
					};
					class TargetDiamond
					{
						class shape
						{
							type = "line";
							width = 4;
							points[] = { { "Target",1,"Limit0109",1,{ 0.02,0.0196581 },1 },{ "Target",1,"Limit0109",1,{ -0.02,0.0196581 },1 },{ "Target",1,"Limit0109",1,{ -0.02,-0.0196581 },1 },{ "Target",1,"Limit0109",1,{ 0.02,-0.0196581 },1 },{ "Target",1,"Limit0109",1,{ 0.02,0.0196581 },1 } };
						};
					};
					class TargetLocked
					{
						condition = "missilelocked";
						class shape
						{
							type = "line";
							width = 4;
							points[] = { { "Target",1,"Limit0109",1,{ 0,-0.0294872 },1 },{ "Target",1,"Limit0109",1,{ 0.03,0 },1 },{ "Target",1,"Limit0109",1,{ 0,0.0294872 },1 },{ "Target",1,"Limit0109",1,{ -0.03,0 },1 },{ "Target",1,"Limit0109",1,{ 0,-0.0294872 },1 } };
						};
					};
				};
			};
		};
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent : SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 3000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 3000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 26;
						angleRangeVertical = 26;
						maxTrackableSpeed = 300;
						animDirection = "Cannon_rot";
					};
					class VisualSensorComponent : SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 3000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 3000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 26;
						angleRangeVertical = 26;
						maxTrackableSpeed = 300;
						animDirection = "Cannon_rot";
					};
					class ActiveRadarSensorComponent : SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 4000;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 4000;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableSpeed = 300;
						angleRangeHorizontal = 180;
						angleRangeVertical = 90;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						aimDown = 30;
					};
					class PassiveRadarSensorComponent : SensorTemplatePassiveRadar {};
					class LaserSensorComponent : SensorTemplateLaser {};
					class NVSensorComponent : SensorTemplateNV {};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft : DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoMiniMap";
					};
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
						resource = "RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "PrimaryGunner";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = { 4000,2000,16000,8000 };
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight : DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay = "SensorDisplay";
				class Components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoMiniMap";
					};
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
						resource = "RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "PrimaryGunner";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = { 4000,2000,16000,8000 };
						resource = "RscCustomInfoSensors";
					};
				};
			};
		};
		class Turrets : Turrets
		{
			class CopilotTurret : CopilotTurret
			{
				gunnerAction = "pilot_Heli_Light_02";
				gunnerInAction = "pilot_Heli_Light_02";
				precisegetinout = 1;
				gunnerGetInAction = "pilot_Heli_Light_02_Enter";
				gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
				memoryPointsGetInGunner = "Pos_Gunner";
				memoryPointsGetInGunnerDir = "Pos_Gunner_dir";
				canEject = 0;
				body = "mainTurret";
				gun = "mainGun";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				maxHorizontalRotSpeed = 5;
				maxVerticalRotSpeed = 5;
				proxyindex = 1;
				isCopilot = 1;
				gunnerName = "Co-Pilot";
				primaryGunner = 1;
				visionMode[] = { "Normal","NVG","Ti" };
				weapons[] = { "Laserdesignator_mounted" };
				magazines[] = { "Laserbatteries" };
				minElev = -90;
				maxElev = 40;
				initElev = -45;
				minTurn = -180;
				maxTurn = 180;
				initTurn = 0;
				stabilizedInAxes = "StabilizedInAxesBoth";
				startEngine = 0;
				class Viewoptics
				{
					minAngleX = -360;
					maxAngleX = 360;
					initAngleX = 0;
					minAngleY = -360;
					maxAngleY = 360;
					initAngleY = 0;
					initFov = 0.75;
					minFov = 0.25;
					maxFov = 0.75;
					visionMode[] = { "Normal","NVG","Ti" };
				};
				soundServo[] = { "",0.01,1 };
				outGunnerMayFire = 1;
				commanding = -1;
				gunBeg = "S_start";
				gunEnd = "S_end";
				memoryPointGunnerOptics = "gunner1";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis = "axisturret1";
				gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class CargoTurret_01 : CargoTurret
			{
				gunnerAction = "passenger_inside_2";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos_cargo_l";
				memoryPointsGetInGunnerDir = "pos_cargo_l_dir";
				gunnerName = "Passenger (Left door)";
				proxyIndex = 1;
				maxElev = 15;
				minElev = -25;
				maxTurn = 10;
				minTurn = -50;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "cargoDoors";
				memoryPointGunnerOptics = "";
			};
			class CargoTurret_02 : CargoTurret_01
			{
				gunnerAction = "passenger_inside_2";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos_cargo_r";
				memoryPointsGetInGunnerDir = "pos_cargo_r_dir";
				gunnerName = "Passenger (Right door)";
				proxyIndex = 2;
				maxElev = 15;
				minElev = -25;
				maxTurn = 50;
				minTurn = -10;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "cargoDoors";
				memoryPointGunnerOptics = "";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = { "A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass_damage.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass_destruct.rvmat","A3\data_F\default.rvmat","A3\data_F\default.rvmat","A3\data_F\default_destruct.rvmat" };
		};
		attenuationEffectType = "HeliAttenuation";
		soundGetIn[] = { "A3\Sounds_F\air\Heli_Light_02\open","db-5",1 };
		soundGetOut[] = { "A3\Sounds_F\air\Heli_Light_02\close","db0",1,50 };
		soundEnviron[] = { "","db-30",1.0 };
		soundDammage[] = { "A3\Sounds_F\air\Heli_Light_02\crash","db-5",1 };
		soundEngineOnInt[] = { "A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_int_start_v2","db-5",1.0 };
		soundEngineOnExt[] = { "A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_ext_start_v2","db-2",1.0,600 };
		soundEngineOffInt[] = { "A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_int_stop_v2","db-5",1.0 };
		soundEngineOffExt[] = { "A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_ext_stop_v2","db-2",1.0,600 };
		soundLocked[] = { "\A3\Sounds_F\weapons\Rockets\opfor_lock_1","db-20",1 };
		soundIncommingMissile[] = { "\A3\Sounds_F\weapons\Rockets\opfor_lock_2","db-20",1 };
		class Sounds
		{
			class Engine
			{
				sound[] = { "A3\Sounds_F\air\plane_fighter_03\Plane_Fighter_03_engi_ext","db-10",1.0,900 };
				frequency = "rotorSpeed";
				volume = "0.5*camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[] = { "A3\Sounds_F\air\plane_fighter_03\Plane_Fighter_03_low_ext","db-5",1.0,1200 };
				frequency = "rotorSpeed";
				volume = "0.5*camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust/3)*0.8";
				cone[] = { 1.6,3.14,1.6,0.95 };
			};
			class RotorHighOut
			{
				sound[] = { "A3\Sounds_F\air\plane_fighter_03\Plane_Fighter_03_engi_ext","db-5",1.0,1500 };
				frequency = "rotorSpeed";
				volume = "0.5*camPos*(rotorSpeed factor[0.4,1])";
				cone[] = { 1.6,3.14,1.6,0.95 };
			};
			class RotorNoiseExt
			{
				sound[] = { "A3\Sounds_F\air\plane_fighter_03\Plane_Fighter_03-fors_ext","db-5",1,800 };
				frequency = 1;
				volume = "0.5*camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust/3)*0.8";
				cone[] = { 1.6,3.14,1.6,0.95 };
			};
			class EngineLowIn
			{
				sound[] = { "A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_low_int","db-5",1.0 };
				frequency = "rotorSpeed";
				volume = "0.25*camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust/3)*0.8";
			};
			class EngineHighIn
			{
				sound[] = { "A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_engi_int","db-5",1.2 };
				frequency = "rotorSpeed";
				volume = "0.25*camPos*(rotorSpeed factor[0.4,1])";
			};
			class ForsageIn
			{
				sound[] = { "A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-fors_int","db-5",1.0 };
				frequency = "rotorSpeed";
				volume = "0.25*(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
			};
			class WindNoiseIn
			{
				sound[] = { "A3\Sounds_F\air\Plane_Fighter_03\noise","db-5",1.0 };
				frequency = "1";
				volume = "0.25*(1-camPos)*(speed factor[1, 150])";
			};
		};
		class RenderTargets
		{
			class LeftCam
			{
				renderTarget = "rendertarget0";
				class CameraView1
				{
					pointPosition = "PIP2_pos";
					pointDirection = "PIP2_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.75;
				};
			};
			class RightCam
			{
				renderTarget = "rendertarget2";
				class CameraView1
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.75;
				};
			};
			class BackLeftCam
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "PIP3_pos";
					pointDirection = "PIP3_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.75;
				};
			};
			class BackRightCam
			{
				renderTarget = "rendertarget3";
				class CameraView1
				{
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.75;
				};
			};
		};
		class AnimationSources : AnimationSources
		{
			class cargoDoors
			{
				source = "user";
				animPeriod = 5;
				initPhase = 0;
				sound = "ServoRampSound_2";
			};
			class wingControl
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class gunVert
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class gunHorz
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class HideWeapon
			{
				source = "user";
				animPeriod = 1e-005;
				initPhase = 0;
			};
			class Gatling
			{
				source = "revolving";
				weapon = "gatling_30mm";
			};
			class Gatling_flash
			{
				source = "ammorandom";
				weapon = "gatling_30mm";
			};
			class Missiles_revolving
			{
				source = "revolving";
				weapon = "missiles_DAGR";
			};
			class Proxy
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
		};
		class UserActions
		{
			class RampOpen
			{
				userActionID = 60;
				displayName = "Open Ramp";
				displayNameDefault = "Open Ramp";
				textToolTip = "Open Ramp";
				position = "cargo_door_handle";
				radius = 6;
				priority = 2;
				onlyForPlayer = 0;
				condition = "((this animationPhase ""cargoDoor_1"" < 0.5) AND (this animationPhase ""cargoDoor_2"" < 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
				statement = "this animate [""cargoDoor_1"",1]; this animate [""cargoDoor_2"",1]";
				animPeriod = 5;
			};
			class RampClose : RampOpen
			{
				userActionID = 61;
				displayName = "Close Ramp";
				displayNameDefault = "Close Ramp";
				textToolTip = "Close Ramp";
				priority = 2;
				condition = "((this animationPhase ""cargoDoor_1"" > 0.5) AND (this animationPhase ""cargoDoor_2"" > 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
				statement = "this animate [""cargoDoor_1"",0]; this animate [""cargoDoor_2"",0]";
				animPeriod = 5;
			};
			class ThrusterEngage
			{
				userActionID = 64;
				displayName = "ENGAGE FORWARD THRUSTERS";
				displayNameDefault = "ENGAGE FORWARD THRUSTERS";
				textToolTip = "ENGAGE FORWARD THRUSTERS";
				position = "cargo_door_handle";
				radius = 5;
				priority = 10;
				onlyForPlayer = 0;
				condition = "(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this))";
				statement = "this execVM ""\OPTRE_Vehicles\Pelican\ThrusterEngage.sqf""";
			};
			class ThrusterDisngage : ThrusterEngage
			{
				userActionID = 65;
				displayName = "DISENGAGE FORWARD THRUSTERS";
				displayNameDefault = "DISENGAGE FORWARD THRUSTERS";
				textToolTip = "DISENGAGE FORWARD THRUSTERS";
				condition = "((this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this))";
				statement = "this execVM ""\OPTRE_Vehicles\Pelican\ThrusterDisengage.sqf""";
			};
		};
		hiddenSelections[] = { "camo1","camo3","clan","clan_text","insignia","attach_gun" };
		hiddenSelectionsTextures[] = { "OPTRE_Vehicles\Pelican\data\PelicanExterior_green_CO.paa","" };
		class Reflectors : Reflectors
		{
			class Right
			{
				color[] = { 7000,7500,10000 };
				ambient[] = { 70,75,100 };
				intensity = 50;
				size = 1;
				innerAngle = 15;
				outerAngle = 65;
				coneFadeCoef = 10;
				position = "Light_R_pos";
				direction = "Light_R_dir";
				hitpoint = "Light_R_hitpoint";
				selection = "Light_R";
				useFlare = 1;
				flareSize = 10;
				flareMaxDistance = 250;
				dayLight = 0;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 1;
					hardLimitStart = 100;
					hardLimitEnd = 200;
				};
			};
			class Left : Right
			{
				position = "Light_L_pos";
				direction = "Light_L_dir";
				hitpoint = "Light_L_hitpoint";
				selection = "Light_L";
			};
		};
		aggregateReflectors[] = { { "Left","Right" } };
		class textureSources
		{
			class colorgreen
			{
				displayName = "Green";
				author = "Article 2 Studios";
				textures[] =
				{
					"OPTRE_Vehicles\Pelican\data\PelicanExterior_green_CO.paa",""
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
					"OPTRE_Vehicles\Pelican\data\PelicanExterior_Tan_CO.paa",""
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
					"OPTRE_Vehicles\Pelican\data\PelicanExterior_black_CO.paa",""
				};
				factions[] =
				{
					"OPTRE_UNSC" // Side Blufor
				};
			};
			class colormarine
			{
				displayName = "Marines";
				author = "Article 2 Studios";
				textures[] =
				{
					"OPTRE_Vehicles\Pelican\data\PelicanExterior_Marine_CO.paa",""
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
					"OPTRE_Vehicles\Pelican\data\PelicanExterior_innie_CO.paa",""
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
			"colortan", 1
		};
	};

	class OPTRE_Pelican_unarmed : OPTRE_Pelican_F
	{
		displayName = "D77H-TCI Pelican";
		author = "Article 2 Studios";
		scope = 2;
		side = 1;
		vehicleClass = "OPTRE_UNSC_Air_class";
		faction = "OPTRE_UNSC";
		crew = "OPTRE_UNSC_Airforce_Soldier_Airman";


		textureList[] =
		{
			"colorgreen", 1,
			"colorblack", 1,
			"colortan", 1
		};
	};

	class OPTRE_Pelican_unarmed_marine : OPTRE_Pelican_F
	{
		displayName = "D77H-TCI Pelican (Marine)";
		author = "Article 2 Studios";
		scope = 2;
		side = 1;
		vehicleClass = "OPTRE_UNSC_Air_class";
		faction = "OPTRE_UNSC";
		crew = "OPTRE_UNSC_Marine_Pilot";

		hiddenSelectionsTextures[] = { "OPTRE_Vehicles\Pelican\data\PelicanExterior_Marine_CO.paa","" };
		textureList[] =
		{
			"colormarine", 1
		};
	};

	class OPTRE_Pelican_unarmed_ins : OPTRE_Pelican_unarmed
	{
		displayName = "D77H-TCI Pelican (Ins)";
		author = "Article 2 Studios";
		scope = 2;
		side = 0;
		faction = "OPTRE_Ins";
		crew = "OPTRE_Ins_ER_Rebel_tan";
		vehicleClass = "OPTRE_Ins_Air_class";

		hiddenSelectionsTextures[] = { "OPTRE_Vehicles\Pelican\data\PelicanExterior_innie_CO.paa" };
		textureList[] =
		{
			"colorinnie", 1
		};
	};

	/// ARMED ///
	class OPTRE_Pelican_armed : OPTRE_Pelican_F
	{
		displayName = "D77H-TCI/AV Pelican";
		author = "Article 2 Studios";
		scope = 2;
		scopecurator = 2;
		side = 1;
		vehicleClass = "OPTRE_UNSC_Air_class";
		faction = "OPTRE_UNSC";
		crew = "OPTRE_UNSC_Airforce_Soldier_Airman";
		hiddenSelections[] = { "camo1","camo3","clan","clan_text","insignia" };
		hiddenSelectionsTextures[] = { "OPTRE_Vehicles\Pelican\data\PelicanExterior_green_CO.paa","OPTRE_Vehicles\Pelican\data\PelicanExterior_green_CO.paa" };
		memoryPointLMissile = "Rocket_1";
		memoryPointRMissile = "Rocket_2";
		weapons[] = { "CMFlareLauncher","OPTRE_missiles_Anvil1" };
		magazines[] = { "168Rnd_CMFlare_Chaff_Magazine","OPTRE_32Rnd_Anvil1_missiles" };

		class Turrets : Turrets
		{
			class CopilotTurret : CopilotTurret
			{
				gunnerAction = "pilot_Heli_Light_02";
				gunnerInAction = "pilot_Heli_Light_02";
				precisegetinout = 1;
				gunnerGetInAction = "pilot_Heli_Light_02_Enter";
				gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
				memoryPointsGetInGunner = "Pos_Gunner";
				memoryPointsGetInGunnerDir = "Pos_Gunner_dir";
				canEject = 1;
				body = "mainTurret";
				gun = "mainGun";
				gunAxis = "Osa Hlavne";
				gunBeg = "Usti hlavne";
				gunEnd = "konec hlavne";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				maxHorizontalRotSpeed = 5;
				maxVerticalRotSpeed = 5;
				proxyindex = 1;
				isCopilot = 1;
				gunnerName = "Gunner";
				primaryGunner = 1;
				visionMode[] = { "Normal","NVG","Ti" };
				weapons[] = { "OPTRE_M370","CMFlareLauncher","Laserdesignator_mounted" };
				magazines[] = { "250Rnd_30mm_HE_shells","250Rnd_30mm_HE_shells","250Rnd_30mm_HE_shells","250Rnd_30mm_HE_shells","168Rnd_CMFlare_Chaff_Magazine","Laserbatteries" };
				minElev = -90;
				maxElev = 30;
				initElev = 0;
				minTurn = -180;
				maxTurn = 180;
				initTurn = 0;
				stabilizedInAxes = "StabilizedInAxesBoth";
				startEngine = 0;
				class Viewoptics
				{
					minAngleX = -80;
					maxAngleX = 80;
					initAngleX = 0;
					minAngleY = -80;
					maxAngleY = 15;
					initAngleY = 0;
					initFov = 0.75;
					minFov = 0.25;
					maxFov = 0.75;
					visionMode[] = { "Normal","NVG","Ti" };
				};
				soundServo[] = { "",0.01,1 };
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner1";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis = "axisturret1";
				gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class CargoTurret_01 : CargoTurret
			{
				gunnerAction = "passenger_inside_2";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos_cargo_l";
				memoryPointsGetInGunnerDir = "pos_cargo_l_dir";
				gunnerName = "Passenger (Left door)";
				proxyIndex = 1;
				maxElev = 15;
				minElev = -25;
				maxTurn = 10;
				minTurn = -50;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "cargoDoors";
				memoryPointGunnerOptics = "";
			};
			class CargoTurret_02 : CargoTurret_01
			{
				gunnerAction = "passenger_inside_2";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos_cargo_r";
				memoryPointsGetInGunnerDir = "pos_cargo_r_dir";
				gunnerName = "Passenger (Right door)";
				proxyIndex = 2;
				maxElev = 15;
				minElev = -25;
				maxTurn = 50;
				minTurn = -10;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "cargoDoors";
				memoryPointGunnerOptics = "";
			};
		};

		class textureSources
		{
			class colorgreen
			{
				displayName = "Green";
				author = "Article 2 Studios";
				textures[] =
				{
					"OPTRE_Vehicles\Pelican\data\PelicanExterior_green_CO.paa","OPTRE_Vehicles\Pelican\data\PelicanExterior_green_CO.paa"
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
					"OPTRE_Vehicles\Pelican\data\PelicanExterior_Tan_CO.paa","OPTRE_Vehicles\Pelican\data\PelicanExterior_Tan_CO.paa"
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
					"OPTRE_Vehicles\Pelican\data\PelicanExterior_black_CO.paa","OPTRE_Vehicles\Pelican\data\PelicanExterior_black_CO.paa"
				};
				factions[] =
				{
					"OPTRE_UNSC" // Side Blufor
				};
			};
			class colormarine
			{
				displayName = "Marines";
				author = "Article 2 Studios";
				textures[] =
				{
					"OPTRE_Vehicles\Pelican\data\PelicanExterior_Marine_CO.paa","OPTRE_Vehicles\Pelican\data\PelicanExterior_Marine_CO.paa"
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
					"OPTRE_Vehicles\Pelican\data\PelicanExterior_innie_CO.paa","OPTRE_Vehicles\Pelican\data\PelicanExterior_innie_CO.paa"
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
			"colortan", 1
		};
	};

	class OPTRE_Pelican_armed_marine : OPTRE_Pelican_armed
	{
		author = "Article 2 Studios";
		displayName = "D77H-TCI/AV Pelican (Marine)";
		crew = "OPTRE_UNSC_Marine_Pilot";

		hiddenSelectionsTextures[] = { "OPTRE_Vehicles\Pelican\data\PelicanExterior_marine_CO.paa","OPTRE_Vehicles\Pelican\data\PelicanExterior_marine_CO.paa" };
		textureList[] =
		{
			"colormarine", 1
		};
	};
	class OPTRE_Pelican_armed_ins : OPTRE_Pelican_armed
	{
		author = "Article 2 Studios";
		displayName = "D77H-TCI/AV Pelican (Ins)";
		side = 0;
		faction = "OPTRE_Ins";
		crew = "OPTRE_Ins_ER_Rebel_tan";
		vehicleClass = "OPTRE_Ins_Air_class";

		hiddenSelectionsTextures[] = { "OPTRE_Vehicles\Pelican\data\PelicanExterior_innie_CO.paa","OPTRE_Vehicles\Pelican\data\PelicanExterior_innie_CO.paa" };
		textureList[] =
		{
			"colorinnie", 1
		};
	};
	class PlaneWreck;
	class OPTRE_Objects_Wreck_Pelican : PlaneWreck
	{
		author = "Article 2 Studios";
		scope = 2;
		scopeCurator = 2;
		model = "OPTRE_Vehicles\Pelican\pelican_wreck.p3d";
		icon = "OPTRE_Vehicles\Pelican\Data\icon.paa";
		displayname = "D77H-TCI Pelican Wreck";
		typicalCargo[] = {};
		vehicleClass = "OPTRE_UNSC_Object_class";
		irTarget = 0;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		transportSoldier = 1;
		class Eventhandlers {};
	};
	class Wreck_base_F;
	class OPTRE_Objects_Wreck_Pelican_Static1 : Wreck_base_F
	{
		author = "Article 2 Studios";
		displayname = "D77H-TCI Pelican Wreck (Static 1)";
		icon = "OPTRE_Vehicles\Pelican\Data\icon.paa";
		mapSize = 25;
		model = "OPTRE_Vehicles\Pelican\pelican_wreck_static1.p3d";
		vehicleClass = "OPTRE_UNSC_Object_class";
		scope = 2;
		scopeCurator = 2;
	};
	class OPTRE_Objects_Wreck_Pelican_Static2 : OPTRE_Objects_Wreck_Pelican_Static1
	{
		author = "Article 2 Studios";
		displayname = "D77H-TCI Pelican Wreck (Static 2)";
		model = "OPTRE_Vehicles\Pelican\pelican_wreck_static2.p3d";
	};
};
