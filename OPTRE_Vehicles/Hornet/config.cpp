
class CfgPatches
{
	class OPTRE_Vehicles_Hornet
	{
		units[] = { "OPTRE_Objects_Wreck_Hornet","OPTRE_UNSC_hornet_CAP","OPTRE_UNSC_hornet_ins_CAP","OPTRE_UNSC_hornet_CAS","OPTRE_UNSC_hornet_ins_CAS" };
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
class WeaponCloudsMGun;
class CfgVehicles
{
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
		class Eventhandlers;
		class Viewoptics;
		class ViewPilot;
		class RotorLibHelicopterProperties;
		class CargoTurret;
		class Reflectors
		{
			class Right;
		};
	};
	class OPTRE_Hornet_base : Helicopter_Base_H
	{
		dlc = "OPTRE";
		armor = 100;
		fuelCapacity = 260;
		fuelConsumptionRate = 0.0322;
		maxFordingDepth = 0.8;
		mainBladeRadius = 0.1;
		class RotorLibHelicopterProperties : RotorLibHelicopterProperties
		{
			RTDconfig = "A3\Air_F\Heli_Light_01\RTD_Heli_Light_01.xml";
			autoHoverCorrection[] = { 0.28,2.88,0 };
			defaultCollective = 0.635;
			maxTorque = 900;
			stressDamagePerSec = 0.0033333332;
			maxHorizontalStabilizerLeftStress = 10000;
			maxHorizontalStabilizerRightStress = 10000;
			maxVerticalStabilizerStress = 10000;
			horizontalWingsAngleCollMin = 0;
			horizontalWingsAngleCollMax = 0;
			maxMainRotorStress = 31000;
			maxTailRotorStress = 5200;
			retreatBladeStallWarningSpeed = 77.222;
		};
		maxSpeed = 170;
		slingLoadMaxCargoMass = 500;
		liftForceCoef = 2.5;
		cyclicAsideForceCoef = 1.5;
		cyclicForwardForceCoef = 1;
		bodyFrictionCoef = 0.3;
		backRotorForceCoef = 2.5;
		accuracy = 0.5;
		displayName = "Hornet";
		model = "\OPTRE_vehicles\hornet\hornet.p3d";
		driveOnComponent[] = { "skid" };
		author = "Article 2 Studios";
		icon = "OPTRE_Vehicles\Falcon\Data\icon.paa";
		picture = "OPTRE_Vehicles\Falcon\Data\icon2.paa";
		destrType = "DestructWreck";
		driverAction = "pilot_Heli_Light_02";
		driverInAction = "pilot_Heli_Light_02";
		precisegetinout = 1;
		GetInAction = "pilot_Heli_Light_02_Enter";
		GetOutAction = "pilot_Heli_Light_02_Exit";
		cargoGetInAction[] = { "GetInHeli_Transport_01Cargo" };
		cargoGetOutAction[] = { "GetOutMantis" };
		transportSoldier = 0;
		hideWeaponsCargo = 0;
		cargoProxyIndexes[] = {};

		class TransportBackpacks {};
		class TransportItems {};
		maximumLoad = 2000;
		cargoCanEject = 1;
		driverCanEject = 1;
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
		};
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
							maxRange = 4000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 4000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 26;
						angleRangeVertical = 20;
						maxTrackableSpeed = 500;
						aimDown = 0;
						animDirection = "PilotCamera_V";
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
						angleRangeVertical = 20;
						maxTrackableSpeed = 500;
						aimDown = 0;
						animDirection = "PilotCamera_V";
					};
					class ActiveRadarSensorComponent : SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 8000;
							maxRange = 8000;
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
						angleRangeHorizontal = 90;
						angleRangeVertical = 90;
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
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class VehicleDriverDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Driver";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = { 8000,4000,2000,16000 };
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
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class VehicleDriverDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Driver";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = { 8000,4000,2000,16000 };
						resource = "RscCustomInfoSensors";
					};
				};
			};
		};

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
		radarType = 4;
		receiveRemoteTargets = true;
		reportRemoteTargets = true;
		reportOwnPosition = true;
		showAllTargets = 2;

		selectionFireAnim = "zasleh";
		gunBeg[] = { "z_gunL_muzzle","z_gunR_muzzle" };
		gunEnd[] = { "z_gunL_chamber","z_gunR_chamber" };
		memoryPointLMissile = "Rocket_1";
		memoryPointRMissile = "Rocket_2";
		visionMode[] = { "Normal","NVG","Ti" };
		weapons[] = { "OPTRE_GUA23A","OPTRE_missiles_C2GMLS","CMFlareLauncher" };
		magazines[] = { "OPTRE_2000Rnd_20mm_HEIAP","OPTRE_12Rnd_C2GMLS_missiles","168Rnd_CMFlare_Chaff_Magazine" };
		class ViewPilot : ViewPilot
		{
			initFov = 0.75;
			minFov = 0.375;
			maxFov = 1.1;
		};
		memoryPointDriverOptics = "slingCamera";
		ace_fastroping_enabled = 1;
		ace_fastroping_ropeOrigins[] = { "ropeOriginLeft","ropeOriginRight" };
		class Turrets : Turrets
		{
			class CargoTurret_01 : CargoTurret
			{
				gunnerAction = "passenger_inside_2";
				gunnerCompartments = "Compartment1";
				memoryPointsGetInGunner = "pos_cargo_r";
				memoryPointsGetInGunnerDir = "pos_cargo_r_dir";
				gunnerName = "Passenger R";
				proxyIndex = 1;
				maxElev = 30;
				minElev = -30;
				maxTurn = 90;
				minTurn = -90;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "";
				memoryPointGunnerOptics = "";
			};
			class CargoTurret_02 : CargoTurret_01
			{
				gunnerAction = "passenger_inside_2";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos_cargo_l";
				memoryPointsGetInGunnerDir = "pos_cargo_l_dir";
				gunnerName = "Passenger L";
				proxyIndex = 2;
				maxElev = 30;
				minElev = -30;
				maxTurn = 90;
				minTurn = -90;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "";
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
		class AnimationSources : AnimationSources
		{
			class Gatling_flash
			{
				source = "ammorandom";
				weapon = "OPTRE_GUA23A";
			};
			class Muzzle_flash
			{
				source = "ammorandom";
				animPeriod = 1e-006;
				weapon = "OPTRE_GUA23A";
			};
			class Missiles_revolving
			{
				source = "revolving";
				weapon = "OPTRE_missiles_Anvil1";
			};
		};
		class UserActions {};
		class Reflectors : Reflectors
		{
			class Right
			{
				position = "Light_L_pos";
				direction = "Light_L_dir";
				hitpoint = "Light_L_hitpoint";
				selection = "Light_L";
				color[] = { 1900,1800,1700 };
				ambient[] = { 5,5,5 };
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
		};
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

		hiddenSelections[] = { "camo1","clan","clan_text","insignia" };
		hiddenSelectionsTextures[] = { "optre_vehicles\hornet\data\hornet_hull_green_co.paa" };
		class textureSources
		{
			class colorgreen
			{
				displayName = "Green";
				author = "Article 2 Studios";
				textures[] =
				{
					"optre_vehicles\hornet\data\hornet_hull_green_co.paa"
				};
				factions[] =
				{
					"OPTRE_UNSC"
				};
			};
			class colortan
			{
				displayName = "Desert";
				author = "Article 2 Studios";
				textures[] =
				{
					"optre_vehicles\hornet\data\hornet_hull_desert_co.paa"
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
					"optre_vehicles\hornet\data\hornet_hull_black_co.paa"
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
					"optre_vehicles\hornet\data\hornet_hull_snow_co.paa"
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
					"optre_vehicles\hornet\data\hornet_hull_innie_co.paa"
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
	class OPTRE_UNSC_hornet_CAP : OPTRE_hornet_base
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		vehicleClass = "OPTRE_UNSC_Air_class";
		author = "Article 2 Studios";
		faction = "OPTRE_UNSC";
		crew = "OPTRE_UNSC_Airforce_Soldier_Airman";
		accuracy = 1.5;
		displayName = "AV-14 Hornet [CAP]";
		hiddenSelectionsTextures[] = { "optre_vehicles\hornet\data\hornet_hull_green_co.paa" };

		textureList[] =
		{
			"colorgreen", 1,
			"colorblack", 1,
			"colortan", 1,
			"colorwhite", 1
		};
		cost = 2000000;
		ace_fastroping_enabled = 1;
		ace_fastroping_ropeOrigins[] = { "ropeOriginLeft","ropeOriginRight" };
		weapons[] = { "OPTRE_GUA23A","OPTRE_missiles_C2GMLS","CMFlareLauncher" };
		magazines[] = { "OPTRE_2000Rnd_20mm_HEIAP","OPTRE_12Rnd_C2GMLS_missiles","168Rnd_CMFlare_Chaff_Magazine" };
	};


	class OPTRE_UNSC_hornet_ins_CAP : OPTRE_UNSC_hornet_CAP
	{
		faction = "OPTRE_Ins";
		crew = "OPTRE_Ins_ER_Rebel_tan";
		vehicleClass = "OPTRE_Ins_Air_class";
		side = 0;
		displayName = "AV-14 Hornet (Innie) [CAP]";
		hiddenSelectionsTextures[] = { "optre_vehicles\hornet\data\hornet_hull_innie_co.paa" };
		textureList[] =
		{
			"colorins", 1
		};
	};

	class OPTRE_UNSC_hornet_CAS : OPTRE_UNSC_hornet_CAP
	{
		displayName = "AV-14 Hornet [CAS]";
		weapons[] = { "OPTRE_GUA23A","OPTRE_missiles_Anvil1","CMFlareLauncher" };
		magazines[] = { "OPTRE_2000Rnd_20mm_HEIAP","OPTRE_32Rnd_Anvil1_missiles","168Rnd_CMFlare_Chaff_Magazine" };
	};

	class OPTRE_UNSC_hornet_ins_CAS : OPTRE_UNSC_hornet_ins_CAP
	{
		displayName = "AV-14 Hornet (Innie) [CAS]";
		weapons[] = { "OPTRE_GUA23A","OPTRE_missiles_Anvil1","CMFlareLauncher" };
		magazines[] = { "OPTRE_2000Rnd_20mm_HEIAP","OPTRE_32Rnd_Anvil1_missiles","168Rnd_CMFlare_Chaff_Magazine" };
	};

	class PlaneWreck;
	class OPTRE_Objects_Wreck_Hornet : PlaneWreck
	{
		scope = 2;
		scopeCurator = 2;
		model = "OPTRE_Vehicles\hornet\hornet_wreck.p3d";
		displayname = "AV-14 Hornet Wreck";
		icon = "OPTRE_Vehicles\Falcon\Data\icon.paa";
		vehicleClass = "OPTRE_UNSC_Object_class";
	};
};