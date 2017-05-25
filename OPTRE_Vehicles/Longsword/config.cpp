
class CfgPatches
{
	class OPTRE_Vehicles_Longsword
	{
		units[] = { "OPTRE_Longsword_Base","OPTRE_Longsword_Super","OPTRE_Longsword_SuperNuke","OPTRE_Longsword_SuperGunship","OPTRE_Longsword_CAS","OPTRE_Longsword_Bomb","OPTRE_Longsword_Carpet","OPTRE_Longsword_Precision","OPTRE_Longsword_Heavy","OPTRE_Longsword_CAP","OPTRE_Longsword_Multirole","OPTRE_Longsword_Nuke" };
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
	class Air;
	class Plane : Air
	{
		class HitPoints;
		class Turrets;
	};
	class Plane_Base_F : Plane
	{
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class HitPoints : HitPoints
		{
			class HitHull;
		};
		class Turrets : Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
	};
	class OPTRE_Longsword_Base : Plane_Base_F
	{
		scope = 1;
		scopeCurator = 1;
		displayName = "GA-TL1 Base";
		class Library
		{
			libTextDesc = "The GA-TL1/A is the atmospheric variant of the UNSC's mainstay starfighter. Whilst the aircraft's primary role is that of an interceptor, it is more than capable of serving in a ground support role.";
		};
		dlc = "OPTRE";
		side = 1;
		vehicleClass = "OPTRE_UNSC_Air_class";
		faction = "OPTRE_UNSC";
		crew = "OPTRE_UNSC_Airforce_Soldier_Airman";
		author = "Article 2 Studios";
		armor = 180;
		accuracy = 0.2;
		destrType = "DestructWreck";
		damageResistance = 0.004;
		gearRetracting = 1;
		gunBeg[] = { "z_gunL_muzzle","z_gunR_muzzle" };
		gunEnd[] = { "z_gunL_chamber","z_gunR_chamber" };
		model = "OPTRE_Vehicles\Longsword\Longsword.p3d";
		vtol = 3;
		extCameraPosition[] = { 0,10,-45 };
		icon = "A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Map_Plane_Fighter_03_CA.paa";
		picture = "A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Plane_Fighter_03_CA.paa";
		driverAction = "passenger_apc_narrow_generic01";
		cargoAction[] = { "passenger_apc_narrow_generic01" };
		LockDetectionSystem = 8;
		incomingMissileDetectionSystem = 16;
		transportSoldier = 0;
		cargoCanEject = 0;
		driverCanEject = 0;
		memoryPointsGetInCargo = "pos driver";
		memoryPointsGetInCargoDir = "pos driver dir";
		hideWeaponsCargo = 1;
		cargoProxyIndexes[] = { 1 };
		getInAction = "GetInHigh";
		getOutAction = "GetOutHigh";
		weapons[] = { "OPTRE_M9109","CMFlareLauncher" };
		magazines[] = { "OPTRE_2500Rnd_50mm_HE","120Rnd_CMFlare_Chaff_Magazine" };
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
				memoryPointsGetInGunner = "pos Driver";
				memoryPointsGetInGunnerDir = "pos Driver dir";
				canEject = 0;
				body = "mainTurret";
				gun = "";
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
				weapons[] = {};
				magazines[] = {};
				minElev = -55;
				maxElev = 55;
				initElev = 0;
				minTurn = -55;
				maxTurn = 55;
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
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel = "";
				gunnerForceOptics = 0;
			};
			class LeftTurret : CopilotTurret
			{
				gunnerAction = "pilot_Heli_Light_02";
				gunnerInAction = "pilot_Heli_Light_02";
				precisegetinout = 1;
				gunnerGetInAction = "pilot_Heli_Light_02_Enter";
				gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
				memoryPointsGetInGunner = "pos Driver";
				memoryPointsGetInGunnerDir = "pos Driver dir";
				canEject = 0;
				body = "Turret2";
				gun = "Gun2";
				animationSourceBody = "Turret2";
				animationSourceGun = "Gun2";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				maxHorizontalRotSpeed = 10;
				maxVerticalRotSpeed = 10;
				proxyindex = 2;
				isCopilot = 0;
				gunnerName = "Systems Operator";
				primaryGunner = 0;
				visionMode[] = { "Normal","NVG","Ti" };
				weapons[] = {};
				magazines[] = {};
				minElev = -55;
				maxElev = 55;
				initElev = 0;
				minTurn = -55;
				maxTurn = 55;
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
					minFov = 0.02;
					maxFov = 0.85;
					visionMode[] = { "Normal","NVG","Ti" };
				};
				soundServo[] = { "",0.01,1 };
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner2";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis = "Turret2_axis";
				gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class RightTurret : LeftTurret
			{
				gunnerAction = "pilot_Heli_Light_02";
				gunnerInAction = "pilot_Heli_Light_02";
				precisegetinout = 1;
				gunnerGetInAction = "pilot_Heli_Light_02_Enter";
				gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
				memoryPointsGetInGunner = "pos Driver";
				memoryPointsGetInGunnerDir = "pos Driver dir";
				canEject = 0;
				body = "Turret3";
				gun = "Gun3";
				animationSourceBody = "Turret3";
				animationSourceGun = "Gun3";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				maxHorizontalRotSpeed = 10;
				maxVerticalRotSpeed = 10;
				proxyindex = 3;
				isCopilot = 0;
				gunnerName = "Navigator";
				primaryGunner = 0;
				visionMode[] = { "Normal","NVG","Ti" };
				weapons[] = {};
				magazines[] = {};
				minElev = -55;
				maxElev = 55;
				initElev = 0;
				minTurn = -55;
				maxTurn = 55;
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
					minFov = 0.02;
					maxFov = 0.85;
					visionMode[] = { "Normal","NVG","Ti" };
				};
				soundServo[] = { "",0.01,1 };
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner2";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis = "Turret2_axis";
				gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
		};
		class TransportItems {};
		class WingVortices
		{
			class WingTipLeft
			{
				effectName = "WingVortices";
				position = "body_vapour_L_E";
			};
			class WingTipRight
			{
				effectName = "WingVortices";
				position = "body_vapour_R_E";
			};
			class BodyLeft
			{
				effectName = "BodyVortices";
				position = "body_vapour_L_S";
			};
			class BodyRight
			{
				effectName = "BodyVortices";
				position = "body_vapour_R_S";
			};
		};
		attenuationEffectType = "HeliAttenuation";
		soundGetIn[] = { "A3\Sounds_F\air\Plane_Fighter_03\buzzard_getin","db0",1,40 };
		soundGetOut[] = { "A3\Sounds_F\air\Plane_Fighter_03\getout","db0",1,40 };
		soundDammage[] = { "","db-5",1 };
		soundEngineOnInt[] = { "A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-start_int","db-0",1.0 };
		soundEngineOnExt[] = { "A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-start_ext","db5",1.0,500 };
		soundEngineOffInt[] = { "A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-stop_int","db-0",1.0 };
		soundEngineOffExt[] = { "A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-stop_ext","db5",1.0,500 };
		soundLocked[] = { "\A3\Sounds_F\weapons\Rockets\locked_1","db-20",1 };
		soundIncommingMissile[] = { "\A3\Sounds_F\weapons\Rockets\locked_3","db-20",1.5 };
		soundGearUp[] = { "A3\Sounds_F_EPC\CAS_02\gear_up","db-2",1.0,150 };
		soundGearDown[] = { "A3\Sounds_F_EPC\CAS_02\gear_down","db-2",1.0,150 };
		soundFlapsUp[] = { "A3\Sounds_F_EPC\CAS_02\Flaps_Up","db-4",1.0,100 };
		soundFlapsDown[] = { "A3\Sounds_F_EPC\CAS_02\Flaps_Down","db-4",1.0,100 };
		class Sounds
		{
			class EngineLowOut
			{
				sound[] = { "A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_low_ext","db8",1.0,1200 };
				frequency = "1.0 min (rpm + 0.5)";
				volume = "camPos*2*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class EngineHighOut
			{
				sound[] = { "A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_engi_ext","db8",1.2,1400 };
				frequency = "1";
				volume = "camPos*4*(rpm factor[0.5, 1.1])*(rpm factor[1.1, 0.5])";
			};
			class ForsageOut
			{
				sound[] = { "A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-fors_ext","db5",0.99,1700 };
				frequency = "1";
				volume = "engineOn*camPos*(thrust factor[0.6, 1.0])";
				cone[] = { 3.14,3.92,2.0,0.5 };
			};
			class WindNoiseOut
			{
				sound[] = { "A3\Sounds_F\air\Plane_Fighter_03\noise","db-5",1.0,150 };
				frequency = "(0.1+(1.2*(speed factor[1, 150])))";
				volume = "camPos*(speed factor[1, 150])";
			};
			class EngineLowIn
			{
				sound[] = { "A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_low_int","db0",1.0 };
				frequency = "1.0 min (rpm + 0.5)";
				volume = "(1-camPos)*((rpm factor[0.7, 0.1])*(rpm factor[0.1, 0.7]))";
			};
			class EngineHighIn
			{
				sound[] = { "A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_engi_int","db0",1.2 };
				frequency = "1";
				volume = "(1-camPos)*(rpm factor[0.85, 1.0])";
			};
			class ForsageIn
			{
				sound[] = { "A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-fors_int","db0",1.0 };
				frequency = "1";
				volume = "(1-camPos)*(engineOn*(thrust factor[0.6, 1.0]))";
			};
			class WindNoiseIn
			{
				sound[] = { "A3\Sounds_F\air\Plane_Fighter_03\noise","db-6",1.0 };
				frequency = "(0.1+(1.2*(speed factor[1, 150])))";
				volume = "(1-camPos)*(speed factor[1, 150])";
			};
		};
		landingSpeed = 200;
		acceleration = 500;
		maxSpeed = 1750;
		driveOnComponent[] = { "wheel_1","wheel_2","wheel_3" };
		rudderInfluence = 0.5;
		aileronSensitivity = 5;
		elevatorSensitivity = 5;
		irScanRangeMin = 500;
		irScanRangeMax = 8000;
		irScanToEyeFactor = 3;
		envelope[] = { 0.0,0.15,1.1,3,5,5.83,6.0,5.85,5.5,4.8,3.6,1.8,0 };
		angleOfIndicence = 0.05235987;
		draconicForceXCoef = 2.5;
		draconicForceYCoef = 0.5;
		draconicForceZCoef = 0.5;
		draconicTorqueXCoef = 0.15;
		draconicTorqueYCoef = 2.0;
		thrustCoef[] = { 1.5,1.2,1.1,1.0,1.0,1.0,1.0,0.9,0.7,0.5,0.3,0.1,0.0,0.0,0.0,0.0 };
		elevatorCoef[] = {};
		aileronCoef[] = {};
		elevatorControlsSensitivityCoef = 4;
		aileronControlsSensitivityCoef = 4;
		landingAoa = "rad 10";
		laserScanner = 1;
		gunAimDown = 0.0;
		headAimDown = 0.0;
		memoryPointLRocket = "Rocket_1";
		memoryPointRRocket = "Rocket_2";
		flapsFrictionCoef = 0.5;
		minFireTime = 30;
		threat[] = { 1,1,1 };
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
					class PlaneOrientation
					{
						type = "fixed";
						pos[] = { 0.498,0.38 };
					};
					class WeaponAim
					{
						type = "vector";
						source = "weapon";
						pos0[] = { 0.498,0.38 };
						pos10[] = { 1.166,1.215 };
					};
					class Target
					{
						type = "vector";
						source = "target";
						pos0[] = { 0.498,0.38 };
						pos10[] = { 1.166,1.215 };
					};
					class ImpactPoint
					{
						type = "vector";
						source = "ImpactPoint";
						pos0[] = { 0.5,0.38 };
						pos10[] = { 1.168,1.215 };
					};
					class NormalizeBombCircle
					{
						type = "normalizedorsmaller";
						limit = 0.08;
						aspectRatio = 1.25;
					};
					class Velocity
					{
						type = "vector";
						source = "velocity";
						pos0[] = { 0.498,0.38 };
						pos10[] = { 1.166,1.215 };
					};
					class Level0
					{
						type = "horizon";
						pos0[] = { 0.5,0.38 };
						pos10[] = { 1.168,1.215 };
						angle = 0;
					};
					class Limit0109
					{
						type = "limit";
						limits[] = { 0.1,0.1,0.9,0.9 };
					};
					class VerticalSpeed
					{
						type = "linear";
						source = "vspeed";
						sourceScale = 1.0;
						min = -100;
						max = 100;
						minPos[] = { 0.0,0.15 };
						maxPos[] = { 0.0,-0.15 };
					};
					class HorizonIndicatorBank
					{
						type = "rotational";
						source = "horizonBank";
						sourceScale = 1.0;
						center[] = { 0.065,0.12 };
						min = -3.1415927;
						max = 3.1415927;
						minAngle = 0;
						maxAngle = 360;
						aspectRatio = 1.25;
					};
					class HorizonIndicatorDive : HorizonIndicatorBank
					{
						source = "horizonDive";
						min = -1.5708;
						max = 1.5708;
						minAngle = 90;
						maxAngle = -90;
					};
					class TerrainBone
					{
						type = "linear";
						source = "altitudeAGL";
						sourceScale = 1.0;
						min = 0;
						max = 200;
						minPos[] = { 0.0,0.88 };
						maxPos[] = { 0.0,0.38 };
					};
					class MissileFlightTimeRot1
					{
						type = "rotational";
						source = "MissileFlightTime";
						sourceScale = 1.0;
						center[] = { 0,0 };
						min = 0;
						max = 0.5;
						minAngle = 0;
						maxAngle = 18;
						aspectRatio = 1.25;
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
					class Airport1
					{
						type = "vector";
						source = "airportCorner1";
						pos0[] = { 0.5,0.38 };
						pos10[] = { 1.168,1.215 };
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
						pos0[] = { 0.5,0.38 };
						pos3[] = { 0.7004,0.38 };
					};
					class ILS_W : ILS_H
					{
						pos3[] = { 0.5,0.6305 };
					};
					class LarAmmoMax
					{
						type = "linear";
						source = "LarAmmoMax";
						sourceScale = 1.0;
						min = 0;
						max = 1;
						minPos[] = { 0.0,1.0 };
						maxPos[] = { 0.0,0.0 };
					};
					class LarAmmoMin : LarAmmoMax
					{
						source = "LarAmmoMin";
					};
					class LarTargetDist : LarAmmoMax
					{
						source = "LarTargetDist";
					};
				};
				class Draw
				{
					color[] = { 0.15,0.15,1 };
					alpha = 1;
					condition = "on";
					class PlaneOrientationCrosshair
					{
						clipTL[] = { 0.0,1.0 };
						clipBR[] = { 1.0,0.0 };
						type = "line";
						width = 4.0;
						points[] = { { "PlaneOrientation",{ -0.01,0 },1 },{ "PlaneOrientation",{ 0.01,0 },1 },{},{ "PlaneOrientation",{ 0,-0.0125 },1 },{ "PlaneOrientation",{ 0,0.0125 },1 },{} };
					};
					class PlaneMovementCrosshair
					{
						clipTL[] = { 0.0,1.0 };
						clipBR[] = { 1.0,0.0 };
						type = "line";
						width = 4.0;
						points[] = { { "Velocity",{ 0,-0.025 },1 },{ "Velocity",{ 0.01,-0.02165 },1 },{ "Velocity",{ 0.01732,-0.0125 },1 },{ "Velocity",{ 0.02,0 },1 },{ "Velocity",{ 0.01732,0.0125 },1 },{ "Velocity",{ 0.01,0.02165 },1 },{ "Velocity",{ 0,0.025 },1 },{ "Velocity",{ -0.01,0.02165 },1 },{ "Velocity",{ -0.01732,0.0125 },1 },{ "Velocity",{ -0.02,0 },1 },{ "Velocity",{ -0.01732,-0.0125 },1 },{ "Velocity",{ -0.01,-0.02165 },1 },{ "Velocity",{ 0,-0.025 },1 },{},{ "Velocity",{ 0.04,0 },1 },{ "Velocity",{ 0.02,0 },1 },{},{ "Velocity",{ -0.04,0 },1 },{ "Velocity",{ -0.02,0 },1 },{},{ "Velocity",{ 0,-0.05 },1 },{ "Velocity",{ 0,-0.025 },1 },{} };
					};
					class MachineGunCrosshairGroup
					{
						type = "group";
						condition = "mgun";
						class MachineGunCrosshair
						{
							type = "line";
							width = 3.0;
							points[] = { { "ImpactPoint",{ 0.0,-0.1125 },1 },{ "ImpactPoint",{ 0.0,-0.1 },1 },{},{ "ImpactPoint",{ 0.0,0.1125 },1 },{ "ImpactPoint",{ 0.0,0.1 },1 },{},{ "ImpactPoint",{ -0.09,0.0 },1 },{ "ImpactPoint",{ -0.08,0.0 },1 },{},{ "ImpactPoint",{ 0.09,0.0 },1 },{ "ImpactPoint",{ 0.08,0.0 },1 },{},{ "ImpactPoint",{ 0.0,-0.0025 },1 },{ "ImpactPoint",{ 0.0,0.0025 },1 },{},{ "ImpactPoint",{ -0.002,0.0 },1 },{ "ImpactPoint",{ 0.002,0.0 },1 },{} };
						};
						class Circle
						{
							type = "line";
							width = 6.0;
							points[] = { { "ImpactPoint",{ 0,-0.08 },1 },{ "ImpactPoint",{ 0,-0.1 },1 },{ "MissileFlightTimeRot1",{ 0,0.08 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot2",{ 0,0.08 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot3",{ 0,0.08 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot4",{ 0,0.08 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot5",{ 0,0.08 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot6",{ 0,0.08 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot7",{ 0,0.08 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot8",{ 0,0.08 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot9",{ 0,0.08 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot10",{ 0,0.08 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot11",{ 0,0.08 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot12",{ 0,0.08 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot13",{ 0,0.08 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot14",{ 0,0.08 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot15",{ 0,0.08 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot16",{ 0,0.08 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot17",{ 0,0.08 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot18",{ 0,0.08 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot19",{ 0,0.08 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot20",{ 0,0.08 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot20",{ 0,0.064 },1,"ImpactPoint",1 } };
						};
						class Circle_Min_Range
						{
							type = "line";
							width = 3.0;
							points[] = { { "ImpactPoint",{ 0,-0.1 },1 },{ "ImpactPoint",{ 0.013888,-0.09848 },1 },{ "ImpactPoint",{ 0.02736,-0.09397 },1 },{ "ImpactPoint",{ 0.04,-0.0866 },1 },{ "ImpactPoint",{ 0.051424,-0.0766 },1 },{ "ImpactPoint",{ 0.06128,-0.06428 },1 },{ "ImpactPoint",{ 0.06928,-0.05 },1 },{ "ImpactPoint",{ 0.075176,-0.0342 },1 },{ "ImpactPoint",{ 0.078784,-0.01736 },1 },{ "ImpactPoint",{ 0.08,0 },1 },{ "ImpactPoint",{ 0.078784,0.01736 },1 },{ "ImpactPoint",{ 0.075176,0.0342 },1 },{ "ImpactPoint",{ 0.06928,0.05 },1 },{ "ImpactPoint",{ 0.06128,0.06428 },1 },{ "ImpactPoint",{ 0.051424,0.0766 },1 },{ "ImpactPoint",{ 0.04,0.0866 },1 },{ "ImpactPoint",{ 0.02736,0.09397 },1 },{ "ImpactPoint",{ 0.013888,0.09848 },1 },{ "ImpactPoint",{ 0,0.1 },1 },{ "ImpactPoint",{ -0.013888,0.09848 },1 },{ "ImpactPoint",{ -0.02736,0.09397 },1 },{ "ImpactPoint",{ -0.04,0.0866 },1 },{ "ImpactPoint",{ -0.051424,0.0766 },1 },{ "ImpactPoint",{ -0.06128,0.06428 },1 },{ "ImpactPoint",{ -0.06928,0.05 },1 },{ "ImpactPoint",{ -0.075176,0.0342 },1 },{ "ImpactPoint",{ -0.078784,0.01736 },1 },{ "ImpactPoint",{ -0.08,0 },1 },{ "ImpactPoint",{ -0.078784,-0.01736 },1 },{ "ImpactPoint",{ -0.075176,-0.0342 },1 },{ "ImpactPoint",{ -0.06928,-0.05 },1 },{ "ImpactPoint",{ -0.06128,-0.06428 },1 },{ "ImpactPoint",{ -0.051424,-0.0766 },1 },{ "ImpactPoint",{ -0.04,-0.0866 },1 },{ "ImpactPoint",{ -0.02736,-0.09397 },1 },{ "ImpactPoint",{ -0.013888,-0.09848 },1 },{ "ImpactPoint",{ 0,-0.1 },1 } };
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
							pos[] = { "ImpactPoint",{ -0.002,0.11 },1 };
							right[] = { "ImpactPoint",{ 0.045,0.11 },1 };
							down[] = { "ImpactPoint",{ -0.002,0.15 },1 };
						};
					};
					class AAMissileCrosshairGroup
					{
						type = "group";
						condition = "AAmissile";
						class AAMissileCrosshair
						{
							type = "line";
							width = 4.0;
							points[] = { { "WeaponAim",{ 0,-0.3125 },1 },{ "WeaponAim",{ 0.0434,-0.30775 },1 },{ "WeaponAim",{ 0.0855,-0.293656 },1 },{ "WeaponAim",{ 0.125,-0.270625 },1 },{ "WeaponAim",{ 0.1607,-0.239375 },1 },{ "WeaponAim",{ 0.1915,-0.200875 },1 },{ "WeaponAim",{ 0.2165,-0.15625 },1 },{ "WeaponAim",{ 0.234925,-0.106875 },1 },{ "WeaponAim",{ 0.2462,-0.05425 },1 },{ "WeaponAim",{ 0.25,0 },1 },{ "WeaponAim",{ 0.2462,0.05425 },1 },{ "WeaponAim",{ 0.234925,0.106875 },1 },{ "WeaponAim",{ 0.2165,0.15625 },1 },{ "WeaponAim",{ 0.1915,0.200875 },1 },{ "WeaponAim",{ 0.1607,0.239375 },1 },{ "WeaponAim",{ 0.125,0.270625 },1 },{ "WeaponAim",{ 0.0855,0.293656 },1 },{ "WeaponAim",{ 0.0434,0.30775 },1 },{ "WeaponAim",{ 0,0.3125 },1 },{ "WeaponAim",{ -0.0434,0.30775 },1 },{ "WeaponAim",{ -0.0855,0.293656 },1 },{ "WeaponAim",{ -0.125,0.270625 },1 },{ "WeaponAim",{ -0.1607,0.239375 },1 },{ "WeaponAim",{ -0.1915,0.200875 },1 },{ "WeaponAim",{ -0.2165,0.15625 },1 },{ "WeaponAim",{ -0.234925,0.106875 },1 },{ "WeaponAim",{ -0.2462,0.05425 },1 },{ "WeaponAim",{ -0.25,0 },1 },{ "WeaponAim",{ -0.2462,-0.05425 },1 },{ "WeaponAim",{ -0.234925,-0.106875 },1 },{ "WeaponAim",{ -0.2165,-0.15625 },1 },{ "WeaponAim",{ -0.1915,-0.200875 },1 },{ "WeaponAim",{ -0.1607,-0.239375 },1 },{ "WeaponAim",{ -0.125,-0.270625 },1 },{ "WeaponAim",{ -0.0855,-0.293656 },1 },{ "WeaponAim",{ -0.0434,-0.30775 },1 },{ "WeaponAim",{ 0,-0.3125 },1 } };
						};
					};
					class ATMissileCrosshairGroup
					{
						condition = "ATmissile";
						type = "group";
						class ATMissileCrosshair
						{
							type = "line";
							width = 4.0;
							points[] = { { "WeaponAim",{ -0.15,-0.15 },1 },{ "WeaponAim",{ -0.15,-0.13 },1 },{},{ "WeaponAim",{ -0.15,0.15 },1 },{ "WeaponAim",{ -0.15,0.13 },1 },{},{ "WeaponAim",{ 0.15,-0.15 },1 },{ "WeaponAim",{ 0.15,-0.13 },1 },{},{ "WeaponAim",{ 0.15,0.15 },1 },{ "WeaponAim",{ 0.15,0.13 },1 },{},{ "WeaponAim",{ -0.15,-0.15 },1 },{ "WeaponAim",{ -0.13,-0.15 },1 },{},{ "WeaponAim",{ -0.15,0.15 },1 },{ "WeaponAim",{ -0.13,0.15 },1 },{},{ "WeaponAim",{ 0.15,-0.15 },1 },{ "WeaponAim",{ 0.13,-0.15 },1 },{},{ "WeaponAim",{ 0.15,0.15 },1 },{ "WeaponAim",{ 0.13,0.15 },1 } };
						};
					};
					class RocketCrosshairGroup
					{
						type = "group";
						condition = "Rocket";
						class MachineGunCrosshair
						{
							type = "line";
							width = 3.0;
							points[] = { { "ImpactPoint",{ 0.0,-0.05 },1 },{ "ImpactPoint",{ 0.0,-0.025 },1 },{},{ "ImpactPoint",{ 0.0,0.05 },1 },{ "ImpactPoint",{ 0.0,0.025 },1 },{},{ "ImpactPoint",{ -0.04,0.0 },1 },{ "ImpactPoint",{ -0.02,0.0 },1 },{},{ "ImpactPoint",{ 0.04,0.0 },1 },{ "ImpactPoint",{ 0.02,0.0 },1 },{},{ "ImpactPoint",{ 0.01,-0.05 },1 },{ "ImpactPoint",{ -0.01,-0.05 },1 },{},{ "ImpactPoint",{ 0.0,-0.0025 },1 },{ "ImpactPoint",{ 0.0,0.0025 },1 },{},{ "ImpactPoint",{ -0.002,0.0 },1 },{ "ImpactPoint",{ 0.002,0.0 },1 },{} };
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
							pos[] = { "ImpactPoint",{ -0.002,0.07 },1 };
							right[] = { "ImpactPoint",{ 0.045,0.07 },1 };
							down[] = { "ImpactPoint",{ -0.002,0.11 },1 };
						};
					};
					class BombCrosshairGroup
					{
						type = "group";
						condition = "bomb";
						class BombCrosshair
						{
							width = 4.0;
							type = "line";
							points[] = { { "ImpactPoint",{ 0.0,0.1125 },1 },{ "ImpactPoint",{ 0.0,0.1 },1 },{},{ "ImpactPoint",{ -0.09,0.0 },1 },{ "ImpactPoint",{ -0.08,0.0 },1 },{},{ "ImpactPoint",{ 0.09,0.0 },1 },{ "ImpactPoint",{ 0.08,0.0 },1 },{},{ "ImpactPoint",{ 0.0,-0.0025 },1 },{ "ImpactPoint",{ 0.0,0.0025 },1 },{},{ "ImpactPoint",{ -0.002,0.0 },1 },{ "ImpactPoint",{ 0.002,0.0 },1 },{},{ "ImpactPoint",{ 0,-0.1 },1 },{ "ImpactPoint",{ 0.013888,-0.09848 },1 },{ "ImpactPoint",{ 0.02736,-0.09397 },1 },{ "ImpactPoint",{ 0.04,-0.0866 },1 },{ "ImpactPoint",{ 0.051424,-0.0766 },1 },{ "ImpactPoint",{ 0.06128,-0.06428 },1 },{ "ImpactPoint",{ 0.06928,-0.05 },1 },{ "ImpactPoint",{ 0.075176,-0.0342 },1 },{ "ImpactPoint",{ 0.078784,-0.01736 },1 },{ "ImpactPoint",{ 0.08,0 },1 },{ "ImpactPoint",{ 0.078784,0.01736 },1 },{ "ImpactPoint",{ 0.075176,0.0342 },1 },{ "ImpactPoint",{ 0.06928,0.05 },1 },{ "ImpactPoint",{ 0.06128,0.06428 },1 },{ "ImpactPoint",{ 0.051424,0.0766 },1 },{ "ImpactPoint",{ 0.04,0.0866 },1 },{ "ImpactPoint",{ 0.02736,0.09397 },1 },{ "ImpactPoint",{ 0.013888,0.09848 },1 },{ "ImpactPoint",{ 0,0.1 },1 },{ "ImpactPoint",{ -0.013888,0.09848 },1 },{ "ImpactPoint",{ -0.02736,0.09397 },1 },{ "ImpactPoint",{ -0.04,0.0866 },1 },{ "ImpactPoint",{ -0.051424,0.0766 },1 },{ "ImpactPoint",{ -0.06128,0.06428 },1 },{ "ImpactPoint",{ -0.06928,0.05 },1 },{ "ImpactPoint",{ -0.075176,0.0342 },1 },{ "ImpactPoint",{ -0.078784,0.01736 },1 },{ "ImpactPoint",{ -0.08,0 },1 },{ "ImpactPoint",{ -0.078784,-0.01736 },1 },{ "ImpactPoint",{ -0.075176,-0.0342 },1 },{ "ImpactPoint",{ -0.06928,-0.05 },1 },{ "ImpactPoint",{ -0.06128,-0.06428 },1 },{ "ImpactPoint",{ -0.051424,-0.0766 },1 },{ "ImpactPoint",{ -0.04,-0.0866 },1 },{ "ImpactPoint",{ -0.02736,-0.09397 },1 },{ "ImpactPoint",{ -0.013888,-0.09848 },1 },{ "ImpactPoint",{ 0,-0.1 },1 },{},{},{ "ImpactPoint",-1,"Velocity",1,"NormalizeBombCircle",1,"ImpactPoint",1,{ 0.0,0.0 },1 },{ "Velocity",1,"Limit0109",1,{ 0.0,0.0 },1 } };
						};
						class Circle
						{
							type = "line";
							width = 6.0;
							points[] = { { "ImpactPoint",{ 0,-0.08 },1 },{ "ImpactPoint",{ 0,-0.1 },1 },{ "MissileFlightTimeRot1",{ 0,0.08 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot2",{ 0,0.08 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot3",{ 0,0.08 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot4",{ 0,0.08 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot5",{ 0,0.08 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot6",{ 0,0.08 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot7",{ 0,0.08 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot8",{ 0,0.08 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot9",{ 0,0.08 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot10",{ 0,0.08 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot11",{ 0,0.08 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot12",{ 0,0.08 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot13",{ 0,0.08 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot14",{ 0,0.08 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot15",{ 0,0.08 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot16",{ 0,0.08 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot17",{ 0,0.08 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot18",{ 0,0.08 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot19",{ 0,0.08 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot20",{ 0,0.08 },1,"ImpactPoint",1 },{ "MissileFlightTimeRot20",{ 0,0.064 },1,"ImpactPoint",1 } };
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
							pos[] = { "ImpactPoint",{ -0.002,0.11 },1 };
							right[] = { "ImpactPoint",{ 0.045,0.11 },1 };
							down[] = { "ImpactPoint",{ -0.002,0.15 },1 };
						};
					};
					class WeaponName
					{
						type = "text";
						source = "weapon";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = { { 0.05,0.85 },1 };
						right[] = { { 0.09,0.85 },1 };
						down[] = { { 0.05,0.89 },1 };
					};
					class AmmoCount
					{
						type = "text";
						source = "ammo";
						sourceScale = 1;
						align = "left";
						scale = 1;
						pos[] = { { 0.95,0.85 },1 };
						right[] = { { 0.99,0.85 },1 };
						down[] = { { 0.95,0.89 },1 };
					};
					class StallGroup
					{
						type = "group";
						condition = "stall";
						color[] = { 1.0,0.0,0.0 };
						blinkingPattern[] = { 0.2,0.2 };
						blinkingStartsOn = 1;
						class StallText
						{
							type = "text";
							source = "static";
							text = "STALL";
							align = "center";
							scale = 1;
							pos[] = { { 0.5,0.25 },1 };
							right[] = { { 0.54,0.25 },1 };
							down[] = { { 0.5,0.29 },1 };
						};
					};
					class PitchNumber
					{
						type = "text";
						source = "horizonDive";
						sourceScale = 57.29578;
						align = "right";
						scale = 1;
						pos[] = { { 0.13,0.225 },1 };
						right[] = { { 0.17,0.225 },1 };
						down[] = { { 0.13,0.265 },1 };
					};
					class PitchText
					{
						type = "text";
						source = "static";
						text = "PITCH";
						align = "left";
						scale = 1;
						pos[] = { { 0.11,0.225 },1 };
						right[] = { { 0.15,0.225 },1 };
						down[] = { { 0.11,0.265 },1 };
					};
					class RollNumber
					{
						type = "text";
						source = "horizonBank";
						sourceScale = 57.29578;
						align = "right";
						scale = 1;
						pos[] = { { 0.13,0.27 },1 };
						right[] = { { 0.17,0.27 },1 };
						down[] = { { 0.13,0.31 },1 };
					};
					class RollText
					{
						type = "text";
						source = "static";
						text = "ROLL";
						align = "left";
						scale = 1;
						pos[] = { { 0.11,0.27 },1 };
						right[] = { { 0.15,0.27 },1 };
						down[] = { { 0.11,0.31 },1 };
					};
					class SpeedNumber
					{
						type = "text";
						source = "speed";
						sourceScale = 3.6;
						align = "right";
						scale = 1;
						pos[] = { { 0.13,0.36 },1 };
						right[] = { { 0.17,0.36 },1 };
						down[] = { { 0.13,0.4 },1 };
					};
					class SpeedText
					{
						type = "text";
						source = "static";
						text = "SPEED";
						align = "left";
						scale = 1;
						pos[] = { { 0.11,0.36 },1 };
						right[] = { { 0.15,0.36 },1 };
						down[] = { { 0.11,0.4 },1 };
					};
					class SpeedSeparator
					{
						type = "line";
						width = 2.0;
						points[] = { { { 0.12,0.225 },1 },{ { 0.12,0.633 },1 } };
					};
					class FlapsGroup
					{
						type = "group";
						condition = "flaps";
						class FlapsText
						{
							type = "text";
							source = "static";
							text = "FLAPS";
							align = "left";
							scale = 1;
							pos[] = { { 0.11,0.45 },1 };
							right[] = { { 0.15,0.45 },1 };
							down[] = { { 0.11,0.49 },1 };
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
							align = "left";
							scale = 1;
							pos[] = { { 0.11,0.495 },1 };
							right[] = { { 0.15,0.495 },1 };
							down[] = { { 0.11,0.535 },1 };
						};
					};
					class ILS
					{
						condition = "ils";
						class Glideslope
						{
							clipTL[] = { 0.0,0.0 };
							clipBR[] = { 1.0,1.0 };
							class ILS
							{
								type = "line";
								points[] = { { "ILS_W",{ -0.24,0 },1 },{ "ILS_W",{ 0.24,0 },1 },{},{ "ILS_W",{ -0.24,-0.03 },1 },{ "ILS_W",{ -0.24,0.03 },1 },{},{ "ILS_W",{ -0.12,-0.0225 },1 },{ "ILS_W",{ -0.12,0.0225 },1 },{},{ "ILS_W",{ 0,-0.03 },1 },{ "ILS_W",{ 0,0.03 },1 },{},{ "ILS_W",{ 0.12,-0.0225 },1 },{ "ILS_W",{ 0.12,0.0225 },1 },{},{ "ILS_W",{ 0.24,-0.03 },1 },{ "ILS_W",{ 0.24,0.03 },1 },{},{ "ILS_H",{ 0,-0.3 },1 },{ "ILS_H",{ 0,0.3 },1 },{},{ "ILS_H",{ -0.024,-0.3 },1 },{ "ILS_H",{ 0.024,-0.3 },1 },{},{ "ILS_H",{ -0.018,-0.15 },1 },{ "ILS_H",{ 0.018,-0.15 },1 },{},{ "ILS_H",{ -0.024,0 },1 },{ "ILS_H",{ 0.024,0 },1 },{},{ "ILS_H",{ -0.018,0.15 },1 },{ "ILS_H",{ 0.018,0.15 },1 },{},{ "ILS_H",{ -0.024,0.3 },1 },{ "ILS_H",{ 0.024,0.3 },1 } };
							};
							class airport
							{
								type = "line";
								points[] = { { "airport1",1 },{ "airport2",1 },{ "airport4",1 },{ "airport3",1 },{ "airport1",1 } };
							};
						};
					};
					class LightsGroup
					{
						type = "group";
						condition = "lights";
						class LightsText
						{
							type = "text";
							source = "static";
							text = "LLS";
							align = "left";
							scale = 1;
							pos[] = { { 0.11,0.54 },1 };
							right[] = { { 0.15,0.54 },1 };
							down[] = { { 0.11,0.58 },1 };
						};
					};
					class CollisionLightsGroup
					{
						type = "group";
						condition = "collisionlights";
						class CollisionLightsText
						{
							type = "text";
							source = "static";
							text = "COLL";
							align = "left";
							scale = 1;
							pos[] = { { 0.11,0.585 },1 };
							right[] = { { 0.15,0.585 },1 };
							down[] = { { 0.11,0.625 },1 };
						};
					};
					class Climb
					{
						type = "line";
						width = 1.0;
						points[] = { { "VerticalSpeed",{ 0.875,0.22 },1 },{ "VerticalSpeed",{ 0.875,0.54 },1 },{},{ "VerticalSpeed",{ 0.869,0.23 },1 },{ "VerticalSpeed",{ 0.874,0.23 },1 },{},{ "VerticalSpeed",{ 0.865,0.26 },1 },{ "VerticalSpeed",{ 0.874,0.26 },1 },{},{ "VerticalSpeed",{ 0.865,0.29 },1 },{ "VerticalSpeed",{ 0.874,0.29 },1 },{},{ "VerticalSpeed",{ 0.865,0.32 },1 },{ "VerticalSpeed",{ 0.874,0.32 },1 },{},{ "VerticalSpeed",{ 0.865,0.35 },1 },{ "VerticalSpeed",{ 0.874,0.35 },1 },{},{ "VerticalSpeed",{ 0.855,0.38 },1 },{ "VerticalSpeed",{ 0.874,0.38 },1 },{},{ "VerticalSpeed",{ 0.874,0.41 },1 },{ "VerticalSpeed",{ 0.865,0.41 },1 },{},{ "VerticalSpeed",{ 0.874,0.44 },1 },{ "VerticalSpeed",{ 0.865,0.44 },1 },{},{ "VerticalSpeed",{ 0.874,0.47 },1 },{ "VerticalSpeed",{ 0.865,0.47 },1 },{},{ "VerticalSpeed",{ 0.874,0.5 },1 },{ "VerticalSpeed",{ 0.865,0.5 },1 },{},{ "VerticalSpeed",{ 0.874,0.53 },1 },{ "VerticalSpeed",{ 0.869,0.53 },1 } };
					};
					class ClimbMinGroup
					{
						type = "group";
						clipTL[] = { 0.0,0.4 };
						clipBR[] = { 1.0,0.76 };
						class ClimbMin
						{
							type = "text";
							source = "static";
							text = "-100";
							align = "left";
							scale = 1;
							pos[] = { "VerticalSpeed",{ 0.866,0.5175 },1 };
							right[] = { "VerticalSpeed",{ 0.891,0.5175 },1 };
							down[] = { "VerticalSpeed",{ 0.866,0.5425 },1 };
						};
					};
					class ClimbMaxGroup
					{
						type = "group";
						clipTL[] = { 0.0,0.0 };
						clipBR[] = { 1.0,0.36 };
						class ClimbMax
						{
							type = "text";
							source = "static";
							text = "100";
							align = "left";
							scale = 1;
							pos[] = { "VerticalSpeed",{ 0.866,0.2175 },1 };
							right[] = { "VerticalSpeed",{ 0.891,0.2175 },1 };
							down[] = { "VerticalSpeed",{ 0.866,0.2425 },1 };
						};
					};
					class ClimbText
					{
						type = "text";
						source = "static";
						text = "CLIMB";
						align = "left";
						scale = 1;
						pos[] = { { 0.87,0.721 },1 };
						right[] = { { 0.895,0.721 },1 };
						down[] = { { 0.87,0.746 },1 };
					};
					class TerrainGroup
					{
						type = "group";
						clipTL[] = { 0.0,0.0 };
						clipBR[] = { 1.0,0.7 };
						class TerrainLine
						{
							type = "line";
							width = 1.0;
							points[] = { { "TerrainBone",{ 0.74,0.0 },1 },{ "TerrainBone",{ 0.909,0.0 },1 } };
						};
						class TerrainText
						{
							type = "text";
							source = "static";
							text = "TERRAIN";
							align = "right";
							scale = 1;
							pos[] = { "TerrainBone",{ 0.74,0.003 },1 };
							right[] = { "TerrainBone",{ 0.765,0.003 },1 };
							down[] = { "TerrainBone",{ 0.74,0.028 },1 };
						};
						class TerrainNumber
						{
							type = "text";
							source = "altitudeAGL";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] = { "TerrainBone",{ 0.74,-0.043 },1 };
							right[] = { "TerrainBone",{ 0.78,-0.043 },1 };
							down[] = { "TerrainBone",{ 0.74,-0.003 },1 };
						};
					};
					class AltitudeNumber
					{
						type = "text";
						source = "altitudeASL";
						sourceScale = 1;
						align = "left";
						scale = 1;
						pos[] = { { 0.845,0.36 },1 };
						right[] = { { 0.885,0.36 },1 };
						down[] = { { 0.845,0.4 },1 };
					};
					class AltitudeText
					{
						type = "text";
						source = "static";
						text = "ASL";
						align = "right";
						scale = 1;
						pos[] = { { 0.88,0.72 },1 };
						right[] = { { 0.92,0.72 },1 };
						down[] = { { 0.88,0.76 },1 };
					};
					class AltitudeArrow
					{
						type = "line";
						width = 3.0;
						points[] = { { { 0.857,0.364 },1 },{ { 0.875,0.38 },1 },{ { 0.857,0.396 },1 },{},{ { 0.898,0.364 },1 },{ { 0.88,0.38 },1 },{ { 0.898,0.396 },1 } };
					};
					class AltitudeScale
					{
						type = "scale";
						horizontal = 0;
						source = "altitudeASL";
						sourceScale = 1;
						min = 0;
						width = 4.0;
						top = 0.71;
						center = 0.38;
						bottom = 0.05;
						lineXleft = 0.88;
						lineYright = 0.89;
						lineXleftMajor = 0.88;
						lineYrightMajor = 0.9;
						majorLineEach = 5;
						numberEach = 10;
						step = 10;
						stepSize = 0.025;
						align = "right";
						scale = 1;
						pos[] = { 0.91,0.69 };
						right[] = { 0.95,0.69 };
						down[] = { 0.91,0.73 };
					};
					class HeadingArrows
					{
						type = "line";
						width = 3.0;
						points[] = { { { 0.484,0.897 },1 },{ { 0.5,0.915 },1 },{ { 0.516,0.897 },1 },{},{ { 0.484,0.998 },1 },{ { 0.5,0.98 },1 },{ { 0.516,0.998 },1 } };
					};
					class HeadingScale
					{
						type = "scale";
						horizontal = 1;
						source = "heading";
						sourceScale = 1.0;
						width = 4.0;
						top = 0.05;
						center = 0.5;
						bottom = 0.95;
						lineXleft = 0.93;
						lineYright = 0.92;
						lineXleftMajor = 0.94;
						lineYrightMajor = 0.92;
						majorLineEach = 3;
						numberEach = 9;
						step = 5;
						stepSize = 0.02;
						align = "center";
						scale = 1.0;
						pos[] = { 0.05,0.94 };
						right[] = { 0.09,0.94 };
						down[] = { 0.05,0.98 };
					};
					class HorizontalLine
					{
						clipTL[] = { 0.2,0.0 };
						clipBR[] = { 0.8,0.76 };
						class HorizontalLineDraw
						{
							type = "line";
							source = "Level0";
							points[] = { { "Level0",{ -0.225,0 },1 },{ "Level0",{ -0.1875,0 },1 },{},{ "Level0",{ -0.15,0 },1 },{ "Level0",{ -0.1125,0 },1 },{},{ "Level0",{ -0.075,0 },1 },{ "Level0",{ -0.0375,0 },1 },{},{ "Level0",{ 0.0375,0 },1 },{ "Level0",{ 0.075,0 },1 },{},{ "Level0",{ 0.1125,0 },1 },{ "Level0",{ 0.15,0 },1 },{},{ "Level0",{ 0.1875,0 },1 },{ "Level0",{ 0.225,0 },1 } };
						};
					};
					class HorizonIndicatorBackground
					{
						type = "line";
						width = 1.0;
						points[] = { { { 0.000599995,0.12 },1 },{ { 0.1294,0.12 },1 } };
					};
					class HorizonIndicator
					{
						type = "line";
						width = 4.0;
						points[] = { { "HorizonIndicatorBank",{ -0.0552,0 },1 },{ "HorizonIndicatorBank",{ -0.046,0 },1 },{ "HorizonIndicatorBank",{ -0.0454342,0.0079856 },1 },{ "HorizonIndicatorBank",{ -0.0432262,0.015732 },1 },{ "HorizonIndicatorBank",{ -0.039836,0.023 },1 },{ "HorizonIndicatorBank",{ -0.035236,0.0295688 },1 },{ "HorizonIndicatorBank",{ -0.0295688,0.035236 },1 },{ "HorizonIndicatorBank",{ -0.023,0.039836 },1 },{ "HorizonIndicatorBank",{ -0.015732,0.0432262 },1 },{ "HorizonIndicatorBank",{ -0.0079856,0.0454342 },1 },{ "HorizonIndicatorBank",{ 0,0.046 },1 },{ "HorizonIndicatorBank",{ 0.0079856,0.0454342 },1 },{ "HorizonIndicatorBank",{ 0.015732,0.0432262 },1 },{ "HorizonIndicatorBank",{ 0.023,0.039836 },1 },{ "HorizonIndicatorBank",{ 0.0295688,0.035236 },1 },{ "HorizonIndicatorBank",{ 0.035236,0.0295688 },1 },{ "HorizonIndicatorBank",{ 0.039836,0.023 },1 },{ "HorizonIndicatorBank",{ 0.0432262,0.015732 },1 },{ "HorizonIndicatorBank",{ 0.0454342,0.0079856 },1 },{ "HorizonIndicatorBank",{ 0.046,0 },1 },{ "HorizonIndicatorBank",{ 0.0552,0 },1 } };
					};
					class RadarBoxes
					{
						type = "radar";
						pos0[] = { 0.498,0.38 };
						pos10[] = { 1.166,1.215 };
						width = 4;
						points[] = { { { -0.002,-0.0025 },1 },{ { 0.002,-0.0025 },1 },{ { 0.002,0.0025 },1 },{ { -0.002,0.0025 },1 },{ { -0.002,-0.0025 },1 } };
					};
					class TargetDiamond
					{
						class shape
						{
							type = "line";
							width = 4;
							points[] = { { "Target",1,"Limit0109",1,{ 0.02,0.025 },1 },{ "Target",1,"Limit0109",1,{ -0.02,0.025 },1 },{ "Target",1,"Limit0109",1,{ -0.02,-0.025 },1 },{ "Target",1,"Limit0109",1,{ 0.02,-0.025 },1 },{ "Target",1,"Limit0109",1,{ 0.02,0.025 },1 } };
						};
					};
					class TargetLocked
					{
						condition = "missilelocked";
						class shape
						{
							type = "line";
							width = 4;
							points[] = { { "Target",1,"Limit0109",1,{ 0,-0.0375 },1 },{ "Target",1,"Limit0109",1,{ 0.03,0 },1 },{ "Target",1,"Limit0109",1,{ 0,0.0375 },1 },{ "Target",1,"Limit0109",1,{ -0.03,0 },1 },{ "Target",1,"Limit0109",1,{ 0,-0.0375 },1 } };
						};
					};
					class LAR
					{
						type = "group";
						condition = "AAmissile";
						class Lines
						{
							type = "line";
							width = 4.0;
							points[] = { { { 0.17,0.55 },1 },{ { 0.15,0.55 },1 },{ { 0.15,0.85 },1 },{ { 0.17,0.85 },1 },{},{ { 0.17,0.775 },1 },{ { 0.15,0.775 },1 },{},{ { 0.17,0.7 },1 },{ { 0.15,0.7 },1 },{},{ { 0.17,0.625 },1 },{ { 0.15,0.625 },1 },{},{ "LarTargetDist",-0.3,{ 0.13,0.87 },1 },{ "LarTargetDist",-0.3,{ 0.15,0.85 },1 },{ "LarTargetDist",-0.3,{ 0.13,0.83 },1 },{} };
						};
						class Poly
						{
							type = "polygon";
							points[] = { { { "LarAmmoMin",-0.3,{ 0.151,0.85 },1 },{ "LarAmmoMax",-0.3,{ 0.151,0.85 },1 },{ "LarAmmoMax",-0.3,{ 0.168,0.85 },1 },{ "LarAmmoMin",-0.3,{ 0.168,0.85 },1 } } };
						};
						class TopText
						{
							type = "text";
							source = "LarTop";
							sourceScale = 0.001;
							scale = 1;
							pos[] = { { "_EVAL(0.15+0.03)","_EVAL(0.55-0.02)" },1 };
							right[] = { { "_EVAL(0.15+0.07)","_EVAL(0.55-0.02)" },1 };
							down[] = { { "_EVAL(0.15+0.03)","_EVAL(0.55+0.02)" },1 };
							align = "right";
						};
						class MiddleText : TopText
						{
							source = "LarTop";
							sourcePrecision = -1;
							sourceScale = 0.0005;
							pos[] = { { "_EVAL(0.15+0.03)","_EVAL(0.55-0.02+0.3*0.5)" },1 };
							right[] = { { "_EVAL(0.15+0.07)","_EVAL(0.55-0.02+0.3*0.5)" },1 };
							down[] = { { "_EVAL(0.15+0.03)","_EVAL(0.55+0.02+0.3*0.5)" },1 };
						};
						class SpeedText : TopText
						{
							source = "LarTargetSpeed";
							align = "left";
							sourceScale = 3.6;
							pos[] = { "LarTargetDist",-0.3,{ 0.12,0.83 },1 };
							right[] = { "LarTargetDist",-0.3,{ 0.16,0.83 },1 };
							down[] = { "LarTargetDist",-0.3,{ 0.12,0.87 },1 };
						};
						class SpeedText2 : TopText
						{
							source = "LarTop";
							align = "left";
							sourceScale = 1;
							pos[] = { "LarTargetDist",-0.3,{ 0.12,0.73 },1 };
							right[] = { "LarTargetDist",-0.3,{ 0.16,0.73 },1 };
							down[] = { "LarTargetDist",-0.3,{ 0.12,0.77 },1 };
						};
						class SpeedText3 : TopText
						{
							source = "LarAmmoMax";
							align = "left";
							sourceScale = 1;
							pos[] = { "LarTargetDist",-0.3,{ 0.12,0.63 },1 };
							right[] = { "LarTargetDist",-0.3,{ 0.16,0.63 },1 };
							down[] = { "LarTargetDist",-0.3,{ 0.12,0.67 },1 };
						};
					};
				};
			};
		};
		class Reflectors
		{
			class Left
			{
				color[] = { 7000,7500,10000,1 };
				ambient[] = { 100,100,100 };
				position = "Light_L";
				direction = "Light_L_end";
				hitpoint = "Light_L";
				selection = "Light_L";
				innerAngle = 20;
				outerAngle = 60;
				coneFadeCoef = 10;
				intensity = 50;
				useFlare = 1;
				dayLight = 0;
				FlareSize = 4;
				size = 1;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 4;
					hardLimitStart = 150;
					hardLimitEnd = 300;
				};
			};
			class Right : Left
			{
				position = "Light_R";
				direction = "Light_R_end";
				hitpoint = "Light_R";
				selection = "Light_R";
			};
		};
		class AnimationSources : AnimationSources
		{
			class rampDoor
			{
				source = "user";
				animPeriod = 3;
				initPhase = 0;
				sound = "ServoRampSound_2";
			};
			class bayDoor
			{
				source = "user";
				animPeriod = 3;
				initPhase = 0;
				sound = "ServoRampSound_2";
			};
		};
		class UserActions {};
		class ViewPilot : ViewPilot
		{
			initFov = 0.5;
			minFov = 0.25;
			maxFov = 1.0;
		};
		class Viewoptics : ViewOptics
		{
			initAngleX = 0;
			minAngleX = 0;
			maxAngleX = 0;
			initAngleY = 0;
			minAngleY = 0;
			maxAngleY = 0;
			minFov = 0.25;
			maxFov = 1.25;
			initFov = 0.5;
			visionMode[] = { "Normal","NVG","Ti" };
			thermalMode[] = { 0,1 };
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
				showMiniMapInOptics = 1;
				showUAVViewpInOptics = 1;
				showSlingLoadManagerInOptics = 0;
			};
			minTurn = 0;
			maxTurn = 0;
			initTurn = 0;
			minElev = 0;
			maxElev = 0;
			initElev = 0;
			maxXRotSpeed = 0.5;
			maxYRotSpeed = 0.5;
			pilotOpticsShowCursor = 1;
			controllable = 0;
		};
		memoryPointDriverOptics = "PilotCamera_Pos";
		driverWeaponsInfoType = "RscOptics_CAS_01_TGP";
		driverOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
		driverForceOptics = 0;
	};
	class OPTRE_Longsword_Super : OPTRE_Longsword_Base
	{
		scope = 1;
		scopeCurator = 1;
		displayName = "GA-TL1/A Longsword (Overloaded)";
		dlc = "OPTRE";
		author = "Article 2 Studios";
		weapons[] = { "OPTRE_M9109","OPTRE_110mm_Gatling","OPTRE_missiles_Anvil1","OPTRE_missiles_Anvil2","OPTRE_missiles_Anvil3","CMFlareLauncher" };
		magazines[] = { "OPTRE_2500Rnd_50mm_HE","OPTRE_600Rnd_110mm","OPTRE_32Rnd_Anvil1_missiles","OPTRE_32Rnd_Anvil1_missiles","OPTRE_24Rnd_Anvil2_missiles","OPTRE_12Rnd_Anvil3_missiles","120Rnd_CMFlare_Chaff_Magazine" };
		class Turrets : Turrets
		{
			class CopilotTurret : CopilotTurret
			{
				gunnerAction = "pilot_Heli_Light_02";
				gunnerInAction = "pilot_Heli_Light_02";
				precisegetinout = 1;
				gunnerGetInAction = "pilot_Heli_Light_02_Enter";
				gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
				memoryPointsGetInGunner = "pos Driver";
				memoryPointsGetInGunnerDir = "pos Driver dir";
				canEject = 0;
				body = "mainTurret";
				gun = "mainGun";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				maxHorizontalRotSpeed = 10;
				maxVerticalRotSpeed = 10;
				proxyindex = 1;
				isCopilot = 1;
				gunnerName = "Co-Pilot";
				primaryGunner = 1;
				visionMode[] = { "Normal","NVG","Ti" };
				weapons[] = { "OPTRE_missiles_ASGM2","OPTRE_missiles_ASGM10","OPTRE_missiles_Scorpion","OPTRE_missiles_Jackknife","OPTRE_bomblauncher_500lb","OPTRE_bomblauncher_1000lb","OPTRE_bomblauncher_2000lb","OPTRE_bomblauncher_GBU","CMFlareLauncher" };
				magazines[] = { "OPTRE_48Rnd_ASGM2_rockets","OPTRE_12Rnd_ASGM10_missiles","OPTRE_16Rnd_Scorpion_missiles","OPTRE_3Rnd_Jackknife_missile","OPTRE_48Rnd_500lb_bomb","OPTRE_36Rnd_1000lb_bomb","OPTRE_16Rnd_2000lb_bomb","OPTRE_8Rnd_GBU_bomb","120Rnd_CMFlare_Chaff_Magazine" };
				minElev = -75;
				maxElev = 25;
				initElev = 0;
				minTurn = -35;
				maxTurn = 35;
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
					minFov = 0.1;
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
				gunnerOpticsModel = "A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class LeftTurret : CopilotTurret
			{
				gunnerAction = "pilot_Heli_Light_02";
				gunnerInAction = "pilot_Heli_Light_02";
				precisegetinout = 1;
				gunnerGetInAction = "pilot_Heli_Light_02_Enter";
				gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
				memoryPointsGetInGunner = "pos Driver";
				memoryPointsGetInGunnerDir = "pos Driver dir";
				canEject = 0;
				body = "Turret2";
				gun = "Gun2";
				gunBeg = "gun2beg";
				gunEnd = "gun2end";
				animationSourceBody = "Turret2";
				animationSourceGun = "Gun2";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				maxHorizontalRotSpeed = 10;
				maxVerticalRotSpeed = 10;
				proxyindex = 2;
				isCopilot = 0;
				gunnerName = "Systems Operator";
				primaryGunner = 0;
				visionMode[] = { "Normal","NVG","Ti" };
				weapons[] = { "Laserdesignator_mounted" };
				magazines[] = { "Laserbatteries" };
				minElev = -85;
				maxElev = 10;
				initElev = -10;
				minTurn = 0;
				maxTurn = 90;
				initTurn = 20;
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
					minFov = 0.02;
					maxFov = 0.85;
					visionMode[] = { "Normal","NVG","Ti" };
				};
				soundServo[] = { "",0.01,1 };
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner2";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis = "Turret2_axis";
				gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class RightTurret : CopilotTurret
			{
				gunnerAction = "pilot_Heli_Light_02";
				gunnerInAction = "pilot_Heli_Light_02";
				precisegetinout = 1;
				gunnerGetInAction = "pilot_Heli_Light_02_Enter";
				gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
				memoryPointsGetInGunner = "pos Driver";
				memoryPointsGetInGunnerDir = "pos Driver dir";
				canEject = 0;
				body = "Turret3";
				gun = "Gun3";
				gunBeg = "gun3beg";
				gunEnd = "gun3end";
				animationSourceBody = "Turret3";
				animationSourceGun = "Gun3";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				maxHorizontalRotSpeed = 10;
				maxVerticalRotSpeed = 10;
				proxyindex = 3;
				isCopilot = 0;
				gunnerName = "Navigator";
				primaryGunner = 0;
				visionMode[] = { "Normal","NVG","Ti" };
				weapons[] = { "Laserdesignator_mounted" };
				magazines[] = { "Laserbatteries" };
				minElev = -85;
				maxElev = 10;
				initElev = 10;
				minTurn = -90;
				maxTurn = 0;
				initTurn = -20;
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
					minFov = 0.02;
					maxFov = 0.85;
					visionMode[] = { "Normal","NVG","Ti" };
				};
				soundServo[] = { "",0.01,1 };
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner3";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis = "Turret3_axis";
				gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
		};
	};
	class OPTRE_Longsword_SuperNuke : OPTRE_Longsword_Base
	{
		scope = 1;
		scopeCurator = 1;
		displayName = "GA-TL1/A Longsword (NukeOverloaded)";
		dlc = "OPTRE";
		author = "Article 2 Studios";
		weapons[] = { "OPTRE_M9109","OPTRE_110mm_Gatling","CMFlareLauncher" };
		magazines[] = { "OPTRE_2500Rnd_50mm_HE","OPTRE_600Rnd_110mm","120Rnd_CMFlare_Chaff_Magazine" };
		class Turrets : Turrets
		{
			class CopilotTurret : CopilotTurret
			{
				gunnerAction = "pilot_Heli_Light_02";
				gunnerInAction = "pilot_Heli_Light_02";
				precisegetinout = 1;
				gunnerGetInAction = "pilot_Heli_Light_02_Enter";
				gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
				memoryPointsGetInGunner = "pos Driver";
				memoryPointsGetInGunnerDir = "pos Driver dir";
				canEject = 0;
				body = "mainTurret";
				gun = "mainGun";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				maxHorizontalRotSpeed = 10;
				maxVerticalRotSpeed = 10;
				proxyindex = 1;
				isCopilot = 1;
				gunnerName = "Co-Pilot";
				primaryGunner = 1;
				visionMode[] = { "Normal","NVG","Ti" };
				weapons[] = { "OPTRE_missiles_ASGM2","OPTRE_missiles_ASGM10","OPTRE_missiles_Scorpion","OPTRE_missiles_Jackknife","CMFlareLauncher" };
				magazines[] = { "OPTRE_48Rnd_ASGM2_rockets","OPTRE_12Rnd_ASGM10_missiles","OPTRE_16Rnd_Scorpion_missiles","OPTRE_3Rnd_Jackknife_missile","120Rnd_CMFlare_Chaff_Magazine" };
				minElev = -75;
				maxElev = 25;
				initElev = 0;
				minTurn = -35;
				maxTurn = 35;
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
					minFov = 0.1;
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
				gunnerOpticsModel = "A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class LeftTurret : CopilotTurret
			{
				gunnerAction = "pilot_Heli_Light_02";
				gunnerInAction = "pilot_Heli_Light_02";
				precisegetinout = 1;
				gunnerGetInAction = "pilot_Heli_Light_02_Enter";
				gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
				memoryPointsGetInGunner = "pos Driver";
				memoryPointsGetInGunnerDir = "pos Driver dir";
				canEject = 0;
				body = "Turret2";
				gun = "Gun2";
				gunBeg = "gun2beg";
				gunEnd = "gun2end";
				animationSourceBody = "Turret2";
				animationSourceGun = "Gun2";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				maxHorizontalRotSpeed = 10;
				maxVerticalRotSpeed = 10;
				proxyindex = 2;
				isCopilot = 0;
				gunnerName = "Systems Operator";
				primaryGunner = 0;
				visionMode[] = { "Normal","NVG","Ti" };
				weapons[] = { "OPTRE_missiles_Shiva_nuke","Laserdesignator_mounted" };
				magazines[] = { "OPTRE_2Rnd_Shiva_nuke_missile","Laserbatteries" };
				minElev = -85;
				maxElev = 10;
				initElev = -10;
				minTurn = 0;
				maxTurn = 90;
				initTurn = 20;
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
					minFov = 0.02;
					maxFov = 0.85;
					visionMode[] = { "Normal","NVG","Ti" };
				};
				soundServo[] = { "",0.01,1 };
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner2";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis = "Turret2_axis";
				gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class RightTurret : CopilotTurret
			{
				gunnerAction = "pilot_Heli_Light_02";
				gunnerInAction = "pilot_Heli_Light_02";
				precisegetinout = 1;
				gunnerGetInAction = "pilot_Heli_Light_02_Enter";
				gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
				memoryPointsGetInGunner = "pos Driver";
				memoryPointsGetInGunnerDir = "pos Driver dir";
				canEject = 0;
				body = "Turret3";
				gun = "Gun3";
				gunBeg = "gun3beg";
				gunEnd = "gun3end";
				animationSourceBody = "Turret3";
				animationSourceGun = "Gun3";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				maxHorizontalRotSpeed = 10;
				maxVerticalRotSpeed = 10;
				proxyindex = 3;
				isCopilot = 0;
				gunnerName = "Navigator";
				primaryGunner = 0;
				visionMode[] = { "Normal","NVG","Ti" };
				weapons[] = { "Laserdesignator_mounted" };
				magazines[] = { "Laserbatteries" };
				minElev = -85;
				maxElev = 10;
				initElev = 10;
				minTurn = -90;
				maxTurn = 0;
				initTurn = -20;
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
					minFov = 0.02;
					maxFov = 0.85;
					visionMode[] = { "Normal","NVG","Ti" };
				};
				soundServo[] = { "",0.01,1 };
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner3";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis = "Turret3_axis";
				gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
		};
	};
	class OPTRE_Longsword_SuperGunship : OPTRE_Longsword_Base
	{
		scope = 1;
		scopeCurator = 1;
		displayName = "GA-TL1/A Longsword (Overloaded Gunship)";
		dlc = "OPTRE";
		author = "Article 2 Studios";
		weapons[] = { "OPTRE_M9109","OPTRE_110mm_Gatling","OPTRE_missiles_Anvil1","OPTRE_missiles_Anvil2","OPTRE_missiles_Anvil3","CMFlareLauncher" };
		magazines[] = { "OPTRE_2500Rnd_50mm_HE","OPTRE_600Rnd_110mm","OPTRE_32Rnd_Anvil1_missiles","OPTRE_32Rnd_Anvil1_missiles","OPTRE_24Rnd_Anvil2_missiles","OPTRE_12Rnd_Anvil3_missiles","120Rnd_CMFlare_Chaff_Magazine" };
		class Turrets : Turrets
		{
			class CopilotTurret : CopilotTurret
			{
				gunnerAction = "pilot_Heli_Light_02";
				gunnerInAction = "pilot_Heli_Light_02";
				precisegetinout = 1;
				gunnerGetInAction = "pilot_Heli_Light_02_Enter";
				gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
				memoryPointsGetInGunner = "pos Driver";
				memoryPointsGetInGunnerDir = "pos Driver dir";
				canEject = 0;
				body = "mainTurret";
				gun = "mainGun";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				maxHorizontalRotSpeed = 10;
				maxVerticalRotSpeed = 10;
				proxyindex = 1;
				isCopilot = 1;
				gunnerName = "Co-Pilot";
				primaryGunner = 1;
				visionMode[] = { "Normal","NVG","Ti" };
				weapons[] = { "OPTRE_missiles_ASGM2","OPTRE_missiles_ASGM10","OPTRE_missiles_Scorpion","OPTRE_missiles_Jackknife","OPTRE_bomblauncher_500lb","OPTRE_bomblauncher_1000lb","OPTRE_bomblauncher_2000lb","OPTRE_bomblauncher_GBU","CMFlareLauncher" };
				magazines[] = { "OPTRE_48Rnd_ASGM2_rockets","OPTRE_12Rnd_ASGM10_missiles","OPTRE_16Rnd_Scorpion_missiles","OPTRE_3Rnd_Jackknife_missile","OPTRE_48Rnd_500lb_bomb","OPTRE_36Rnd_1000lb_bomb","OPTRE_16Rnd_2000lb_bomb","OPTRE_8Rnd_GBU_bomb","120Rnd_CMFlare_Chaff_Magazine" };
				minElev = -75;
				maxElev = 25;
				initElev = 0;
				minTurn = -35;
				maxTurn = 35;
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
					minFov = 0.1;
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
				gunnerOpticsModel = "A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class LeftTurret : CopilotTurret
			{
				gunnerAction = "pilot_Heli_Light_02";
				gunnerInAction = "pilot_Heli_Light_02";
				precisegetinout = 1;
				gunnerGetInAction = "pilot_Heli_Light_02_Enter";
				gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
				memoryPointsGetInGunner = "pos Driver";
				memoryPointsGetInGunnerDir = "pos Driver dir";
				canEject = 0;
				body = "Turret4";
				gun = "Gun4";
				gunBeg = "gun4beg";
				gunEnd = "gun4end";
				animationSourceBody = "Turret4";
				animationSourceGun = "Gun4";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				maxHorizontalRotSpeed = 10;
				maxVerticalRotSpeed = 10;
				proxyindex = 2;
				isCopilot = 0;
				gunnerName = "Left Gunner";
				primaryGunner = 0;
				visionMode[] = { "Normal","NVG","Ti" };
				weapons[] = { "OPTRE_120mm_M310E","Laserdesignator_mounted" };
				magazines[] = { "OPTRE_120Rnd_120mm","Laserbatteries" };
				minElev = -85;
				maxElev = 10;
				initElev = -10;
				minTurn = 0;
				maxTurn = 90;
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
					minFov = 0.05;
					maxFov = 0.85;
					visionMode[] = { "Normal","NVG","Ti" };
				};
				soundServo[] = { "",0.01,1 };
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner4";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis = "Turret4_axis";
				gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class RightTurret : CopilotTurret
			{
				gunnerAction = "pilot_Heli_Light_02";
				gunnerInAction = "pilot_Heli_Light_02";
				precisegetinout = 1;
				gunnerGetInAction = "pilot_Heli_Light_02_Enter";
				gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
				memoryPointsGetInGunner = "pos Driver";
				memoryPointsGetInGunnerDir = "pos Driver dir";
				canEject = 0;
				body = "Turret5";
				gun = "Gun5";
				gunBeg = "gun5beg";
				gunEnd = "gun5end";
				animationSourceBody = "Turret5";
				animationSourceGun = "Gun5";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				maxHorizontalRotSpeed = 10;
				maxVerticalRotSpeed = 10;
				proxyindex = 3;
				isCopilot = 0;
				gunnerName = "Right Gunner";
				primaryGunner = 0;
				visionMode[] = { "Normal","NVG","Ti" };
				weapons[] = { "OPTRE_120mm_M310E","Laserdesignator_mounted" };
				magazines[] = { "OPTRE_120Rnd_120mm","Laserbatteries" };
				minElev = -85;
				maxElev = 10;
				initElev = 10;
				minTurn = -90;
				maxTurn = 0;
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
					minFov = 0.05;
					maxFov = 0.85;
					visionMode[] = { "Normal","NVG","Ti" };
				};
				soundServo[] = { "",0.01,1 };
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner5";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis = "Turret5_axis";
				gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
		};
	};
	class OPTRE_Longsword_CAS : OPTRE_Longsword_Base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "GA-TL1/A Longsword (CAS)";
		dlc = "OPTRE";
		author = "Article 2 Studios";
		weapons[] = { "OPTRE_M9109","OPTRE_110mm_Gatling","OPTRE_missiles_Anvil1","CMFlareLauncher" };
		magazines[] = { "OPTRE_2500Rnd_50mm_HE","OPTRE_600Rnd_110mm","OPTRE_32Rnd_Anvil1_missiles","120Rnd_CMFlare_Chaff_Magazine" };
		class Turrets : Turrets
		{
			class CopilotTurret : CopilotTurret
			{
				gunnerAction = "pilot_Heli_Light_02";
				gunnerInAction = "pilot_Heli_Light_02";
				precisegetinout = 1;
				gunnerGetInAction = "pilot_Heli_Light_02_Enter";
				gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
				memoryPointsGetInGunner = "pos Driver";
				memoryPointsGetInGunnerDir = "pos Driver dir";
				canEject = 0;
				body = "mainTurret";
				gun = "mainGun";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				maxHorizontalRotSpeed = 10;
				maxVerticalRotSpeed = 10;
				proxyindex = 1;
				isCopilot = 1;
				gunnerName = "Co-Pilot";
				primaryGunner = 1;
				visionMode[] = { "Normal","NVG","Ti" };
				weapons[] = { "OPTRE_missiles_ASGM10","OPTRE_missiles_Scorpion","OPTRE_bomblauncher_GBU","CMFlareLauncher" };
				magazines[] = { "OPTRE_4Rnd_ASGM10_missiles","OPTRE_12Rnd_Scorpion_missiles","OPTRE_4Rnd_GBU_bomb","120Rnd_CMFlare_Chaff_Magazine" };
				minElev = -75;
				maxElev = 25;
				initElev = 0;
				minTurn = -35;
				maxTurn = 35;
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
					minFov = 0.1;
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
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class LeftTurret : CopilotTurret
			{
				gunnerAction = "pilot_Heli_Light_02";
				gunnerInAction = "pilot_Heli_Light_02";
				precisegetinout = 1;
				gunnerGetInAction = "pilot_Heli_Light_02_Enter";
				gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
				memoryPointsGetInGunner = "pos Driver";
				memoryPointsGetInGunnerDir = "pos Driver dir";
				canEject = 0;
				body = "Turret2";
				gun = "Gun2";
				gunBeg = "gun2beg";
				gunEnd = "gun2end";
				animationSourceBody = "Turret2";
				animationSourceGun = "Gun2";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				maxHorizontalRotSpeed = 10;
				maxVerticalRotSpeed = 10;
				proxyindex = 2;
				isCopilot = 0;
				gunnerName = "Systems Operator";
				primaryGunner = 0;
				visionMode[] = { "Normal","NVG","Ti" };
				weapons[] = { "Laserdesignator_mounted" };
				magazines[] = { "Laserbatteries" };
				minElev = -85;
				maxElev = 10;
				initElev = -10;
				minTurn = 0;
				maxTurn = 90;
				initTurn = 20;
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
					minFov = 0.02;
					maxFov = 0.85;
					visionMode[] = { "Normal","NVG","Ti" };
				};
				soundServo[] = { "",0.01,1 };
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner2";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis = "Turret2_axis";
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class RightTurret : CopilotTurret
			{
				gunnerAction = "pilot_Heli_Light_02";
				gunnerInAction = "pilot_Heli_Light_02";
				precisegetinout = 1;
				gunnerGetInAction = "pilot_Heli_Light_02_Enter";
				gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
				memoryPointsGetInGunner = "pos Driver";
				memoryPointsGetInGunnerDir = "pos Driver dir";
				canEject = 0;
				body = "Turret3";
				gun = "Gun3";
				gunBeg = "gun3beg";
				gunEnd = "gun3end";
				animationSourceBody = "Turret3";
				animationSourceGun = "Gun3";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				maxHorizontalRotSpeed = 10;
				maxVerticalRotSpeed = 10;
				proxyindex = 3;
				isCopilot = 0;
				gunnerName = "Navigator";
				primaryGunner = 0;
				visionMode[] = { "Normal","NVG","Ti" };
				weapons[] = { "Laserdesignator_mounted" };
				magazines[] = { "Laserbatteries" };
				minElev = -85;
				maxElev = 10;
				initElev = 10;
				minTurn = -90;
				maxTurn = 0;
				initTurn = -20;
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
					minFov = 0.02;
					maxFov = 0.85;
					visionMode[] = { "Normal","NVG","Ti" };
				};
				soundServo[] = { "",0.01,1 };
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner3";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis = "Turret3_axis";
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
		};
	};
	class OPTRE_Longsword_Bomb : OPTRE_Longsword_Base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "GA-TL1/A Longsword (Bomber)";
		dlc = "OPTRE";
		author = "Article 2 Studios";
		weapons[] = { "OPTRE_M9109","OPTRE_110mm_Gatling","CMFlareLauncher" };
		magazines[] = { "OPTRE_2500Rnd_50mm_HE","OPTRE_600Rnd_110mm","120Rnd_CMFlare_Chaff_Magazine" };
		class Turrets : Turrets
		{
			class CopilotTurret : CopilotTurret
			{
				gunnerAction = "pilot_Heli_Light_02";
				gunnerInAction = "pilot_Heli_Light_02";
				precisegetinout = 1;
				gunnerGetInAction = "pilot_Heli_Light_02_Enter";
				gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
				memoryPointsGetInGunner = "pos Driver";
				memoryPointsGetInGunnerDir = "pos Driver dir";
				canEject = 0;
				body = "mainTurret";
				gun = "mainGun";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				maxHorizontalRotSpeed = 10;
				maxVerticalRotSpeed = 10;
				proxyindex = 1;
				isCopilot = 1;
				gunnerName = "Co-Pilot";
				primaryGunner = 1;
				visionMode[] = { "Normal","NVG","Ti" };
				weapons[] = { "OPTRE_missiles_ASGM10","OPTRE_missiles_Scorpion","OPTRE_bomblauncher_1000lb","OPTRE_bomblauncher_GBU","CMFlareLauncher" };
				magazines[] = { "OPTRE_4Rnd_ASGM10_missiles","OPTRE_12Rnd_Scorpion_missiles","OPTRE_12Rnd_1000lb_bomb","OPTRE_4Rnd_GBU_bomb","120Rnd_CMFlare_Chaff_Magazine" };
				minElev = -75;
				maxElev = 25;
				initElev = 0;
				minTurn = -35;
				maxTurn = 35;
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
					minFov = 0.1;
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
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel = "A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class LeftTurret : CopilotTurret
			{
				gunnerAction = "pilot_Heli_Light_02";
				gunnerInAction = "pilot_Heli_Light_02";
				precisegetinout = 1;
				gunnerGetInAction = "pilot_Heli_Light_02_Enter";
				gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
				memoryPointsGetInGunner = "pos Driver";
				memoryPointsGetInGunnerDir = "pos Driver dir";
				canEject = 0;
				body = "Turret2";
				gun = "Gun2";
				gunBeg = "gun2beg";
				gunEnd = "gun2end";
				animationSourceBody = "Turret2";
				animationSourceGun = "Gun2";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				maxHorizontalRotSpeed = 10;
				maxVerticalRotSpeed = 10;
				proxyindex = 2;
				isCopilot = 0;
				gunnerName = "Systems Operator";
				primaryGunner = 0;
				visionMode[] = { "Normal","NVG","Ti" };
				weapons[] = { "Laserdesignator_mounted" };
				magazines[] = { "Laserbatteries" };
				minElev = -85;
				maxElev = 10;
				initElev = -10;
				minTurn = 0;
				maxTurn = 90;
				initTurn = 20;
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
					minFov = 0.02;
					maxFov = 0.85;
					visionMode[] = { "Normal","NVG","Ti" };
				};
				soundServo[] = { "",0.01,1 };
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner2";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis = "Turret2_axis";
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class RightTurret : CopilotTurret
			{
				gunnerAction = "pilot_Heli_Light_02";
				gunnerInAction = "pilot_Heli_Light_02";
				precisegetinout = 1;
				gunnerGetInAction = "pilot_Heli_Light_02_Enter";
				gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
				memoryPointsGetInGunner = "pos Driver";
				memoryPointsGetInGunnerDir = "pos Driver dir";
				canEject = 0;
				body = "Turret3";
				gun = "Gun3";
				gunBeg = "gun3beg";
				gunEnd = "gun3end";
				animationSourceBody = "Turret3";
				animationSourceGun = "Gun3";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				maxHorizontalRotSpeed = 10;
				maxVerticalRotSpeed = 10;
				proxyindex = 3;
				isCopilot = 0;
				gunnerName = "Navigator";
				primaryGunner = 0;
				visionMode[] = { "Normal","NVG","Ti" };
				weapons[] = { "Laserdesignator_mounted" };
				magazines[] = { "Laserbatteries" };
				minElev = -85;
				maxElev = 10;
				initElev = 10;
				minTurn = -90;
				maxTurn = 0;
				initTurn = -20;
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
					minFov = 0.02;
					maxFov = 0.85;
					visionMode[] = { "Normal","NVG","Ti" };
				};
				soundServo[] = { "",0.01,1 };
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner3";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis = "Turret3_axis";
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
		};
	};
	class OPTRE_Longsword_Carpet : OPTRE_Longsword_Base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "GA-TL1/A Longsword (Carpet Bomber)";
		dlc = "OPTRE";
		author = "Article 2 Studios";
		weapons[] = { "OPTRE_M9109","OPTRE_110mm_Gatling","CMFlareLauncher" };
		magazines[] = { "OPTRE_2500Rnd_50mm_HE","OPTRE_600Rnd_110mm","120Rnd_CMFlare_Chaff_Magazine" };
		class Turrets : Turrets
		{
			class CopilotTurret : CopilotTurret
			{
				gunnerAction = "pilot_Heli_Light_02";
				gunnerInAction = "pilot_Heli_Light_02";
				precisegetinout = 1;
				gunnerGetInAction = "pilot_Heli_Light_02_Enter";
				gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
				memoryPointsGetInGunner = "pos Driver";
				memoryPointsGetInGunnerDir = "pos Driver dir";
				canEject = 0;
				body = "mainTurret";
				gun = "mainGun";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				maxHorizontalRotSpeed = 10;
				maxVerticalRotSpeed = 10;
				proxyindex = 1;
				isCopilot = 1;
				gunnerName = "Co-Pilot";
				primaryGunner = 1;
				visionMode[] = { "Normal","NVG","Ti" };
				weapons[] = { "OPTRE_missiles_ASGM10","OPTRE_missiles_Scorpion","OPTRE_missiles_Jackknife","OPTRE_bomblauncher_500lb","CMFlareLauncher" };
				magazines[] = { "OPTRE_4Rnd_ASGM10_missiles","OPTRE_4Rnd_Scorpion_missiles","OPTRE_1Rnd_Jackknife_missile","OPTRE_48Rnd_500lb_bomb","120Rnd_CMFlare_Chaff_Magazine" };
				minElev = -75;
				maxElev = 25;
				initElev = 0;
				minTurn = -35;
				maxTurn = 35;
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
					minFov = 0.1;
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
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel = "A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class LeftTurret : CopilotTurret
			{
				gunnerAction = "pilot_Heli_Light_02";
				gunnerInAction = "pilot_Heli_Light_02";
				precisegetinout = 1;
				gunnerGetInAction = "pilot_Heli_Light_02_Enter";
				gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
				memoryPointsGetInGunner = "pos Driver";
				memoryPointsGetInGunnerDir = "pos Driver dir";
				canEject = 0;
				body = "Turret2";
				gun = "Gun2";
				gunBeg = "gun2beg";
				gunEnd = "gun2end";
				animationSourceBody = "Turret2";
				animationSourceGun = "Gun2";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				maxHorizontalRotSpeed = 10;
				maxVerticalRotSpeed = 10;
				proxyindex = 2;
				isCopilot = 0;
				gunnerName = "Systems Operator";
				primaryGunner = 0;
				visionMode[] = { "Normal","NVG","Ti" };
				weapons[] = { "Laserdesignator_mounted" };
				magazines[] = { "Laserbatteries" };
				minElev = -85;
				maxElev = 10;
				initElev = -10;
				minTurn = 0;
				maxTurn = 90;
				initTurn = 20;
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
					minFov = 0.02;
					maxFov = 0.85;
					visionMode[] = { "Normal","NVG","Ti" };
				};
				soundServo[] = { "",0.01,1 };
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner2";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis = "Turret2_axis";
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class RightTurret : CopilotTurret
			{
				gunnerAction = "pilot_Heli_Light_02";
				gunnerInAction = "pilot_Heli_Light_02";
				precisegetinout = 1;
				gunnerGetInAction = "pilot_Heli_Light_02_Enter";
				gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
				memoryPointsGetInGunner = "pos Driver";
				memoryPointsGetInGunnerDir = "pos Driver dir";
				canEject = 0;
				body = "Turret3";
				gun = "Gun3";
				gunBeg = "gun3beg";
				gunEnd = "gun3end";
				animationSourceBody = "Turret3";
				animationSourceGun = "Gun3";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				maxHorizontalRotSpeed = 10;
				maxVerticalRotSpeed = 10;
				proxyindex = 3;
				isCopilot = 0;
				gunnerName = "Navigator";
				primaryGunner = 0;
				visionMode[] = { "Normal","NVG","Ti" };
				weapons[] = { "Laserdesignator_mounted" };
				magazines[] = { "Laserbatteries" };
				minElev = -85;
				maxElev = 10;
				initElev = 10;
				minTurn = -90;
				maxTurn = 0;
				initTurn = -20;
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
					minFov = 0.02;
					maxFov = 0.85;
					visionMode[] = { "Normal","NVG","Ti" };
				};
				soundServo[] = { "",0.01,1 };
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner3";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis = "Turret3_axis";
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
		};
	};
	class OPTRE_Longsword_Precision : OPTRE_Longsword_Base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "GA-TL1/A Longsword (Precision Bomber)";
		dlc = "OPTRE";
		author = "Article 2 Studios";
		weapons[] = { "OPTRE_M9109","OPTRE_110mm_Gatling","CMFlareLauncher" };
		magazines[] = { "OPTRE_2500Rnd_50mm_HE","OPTRE_600Rnd_110mm","120Rnd_CMFlare_Chaff_Magazine" };
		class Turrets : Turrets
		{
			class CopilotTurret : CopilotTurret
			{
				gunnerAction = "pilot_Heli_Light_02";
				gunnerInAction = "pilot_Heli_Light_02";
				precisegetinout = 1;
				gunnerGetInAction = "pilot_Heli_Light_02_Enter";
				gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
				memoryPointsGetInGunner = "pos Driver";
				memoryPointsGetInGunnerDir = "pos Driver dir";
				canEject = 0;
				body = "mainTurret";
				gun = "mainGun";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				maxHorizontalRotSpeed = 10;
				maxVerticalRotSpeed = 10;
				proxyindex = 1;
				isCopilot = 1;
				gunnerName = "Co-Pilot";
				primaryGunner = 1;
				visionMode[] = { "Normal","NVG","Ti" };
				weapons[] = { "OPTRE_missiles_Scorpion","OPTRE_missiles_Jackknife","OPTRE_bomblauncher_GBU","CMFlareLauncher" };
				magazines[] = { "OPTRE_4Rnd_Scorpion_missiles","OPTRE_2Rnd_Jackknife_missile","OPTRE_8Rnd_GBU_bomb","120Rnd_CMFlare_Chaff_Magazine" };
				minElev = -75;
				maxElev = 25;
				initElev = 0;
				minTurn = -35;
				maxTurn = 35;
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
					minFov = 0.1;
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
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel = "A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class LeftTurret : CopilotTurret
			{
				gunnerAction = "pilot_Heli_Light_02";
				gunnerInAction = "pilot_Heli_Light_02";
				precisegetinout = 1;
				gunnerGetInAction = "pilot_Heli_Light_02_Enter";
				gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
				memoryPointsGetInGunner = "pos Driver";
				memoryPointsGetInGunnerDir = "pos Driver dir";
				canEject = 0;
				body = "Turret2";
				gun = "Gun2";
				gunBeg = "gun2beg";
				gunEnd = "gun2end";
				animationSourceBody = "Turret2";
				animationSourceGun = "Gun2";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				maxHorizontalRotSpeed = 10;
				maxVerticalRotSpeed = 10;
				proxyindex = 2;
				isCopilot = 0;
				gunnerName = "Systems Operator";
				primaryGunner = 0;
				visionMode[] = { "Normal","NVG","Ti" };
				weapons[] = { "Laserdesignator_mounted" };
				magazines[] = { "Laserbatteries" };
				minElev = -85;
				maxElev = 10;
				initElev = -10;
				minTurn = 0;
				maxTurn = 90;
				initTurn = 20;
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
					minFov = 0.02;
					maxFov = 0.85;
					visionMode[] = { "Normal","NVG","Ti" };
				};
				soundServo[] = { "",0.01,1 };
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner2";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis = "Turret2_axis";
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class RightTurret : CopilotTurret
			{
				gunnerAction = "pilot_Heli_Light_02";
				gunnerInAction = "pilot_Heli_Light_02";
				precisegetinout = 1;
				gunnerGetInAction = "pilot_Heli_Light_02_Enter";
				gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
				memoryPointsGetInGunner = "pos Driver";
				memoryPointsGetInGunnerDir = "pos Driver dir";
				canEject = 0;
				body = "Turret3";
				gun = "Gun3";
				gunBeg = "gun3beg";
				gunEnd = "gun3end";
				animationSourceBody = "Turret3";
				animationSourceGun = "Gun3";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				maxHorizontalRotSpeed = 10;
				maxVerticalRotSpeed = 10;
				proxyindex = 3;
				isCopilot = 0;
				gunnerName = "Navigator";
				primaryGunner = 0;
				visionMode[] = { "Normal","NVG","Ti" };
				weapons[] = { "Laserdesignator_mounted" };
				magazines[] = { "Laserbatteries" };
				minElev = -85;
				maxElev = 10;
				initElev = 10;
				minTurn = -90;
				maxTurn = 0;
				initTurn = -20;
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
					minFov = 0.02;
					maxFov = 0.85;
					visionMode[] = { "Normal","NVG","Ti" };
				};
				soundServo[] = { "",0.01,1 };
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner3";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretInfoType = "RscOptics_CAS_01_TGP";
				turretAxis = "Turret3_axis";
				gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
		};
	};
	class OPTRE_Longsword_Heavy : OPTRE_Longsword_Base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "GA-TL1/A Longsword (Heavy Bomber)";
		dlc = "OPTRE";
		author = "Article 2 Studios";
		weapons[] = { "OPTRE_M9109","OPTRE_110mm_Gatling","CMFlareLauncher" };
		magazines[] = { "OPTRE_2500Rnd_50mm_HE","OPTRE_600Rnd_110mm","120Rnd_CMFlare_Chaff_Magazine" };
		class Turrets : Turrets
		{
			class CopilotTurret : CopilotTurret
			{
				gunnerAction = "pilot_Heli_Light_02";
				gunnerInAction = "pilot_Heli_Light_02";
				precisegetinout = 1;
				gunnerGetInAction = "pilot_Heli_Light_02_Enter";
				gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
				memoryPointsGetInGunner = "pos Driver";
				memoryPointsGetInGunnerDir = "pos Driver dir";
				canEject = 0;
				body = "mainTurret";
				gun = "mainGun";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				maxHorizontalRotSpeed = 10;
				maxVerticalRotSpeed = 10;
				proxyindex = 1;
				isCopilot = 1;
				gunnerName = "Co-Pilot";
				primaryGunner = 1;
				visionMode[] = { "Normal","NVG","Ti" };
				weapons[] = { "OPTRE_missiles_ASGM10","OPTRE_missiles_Scorpion","OPTRE_missiles_Jackknife","OPTRE_bomblauncher_2000lb","OPTRE_bomblauncher_GBU","CMFlareLauncher" };
				magazines[] = { "OPTRE_4Rnd_ASGM10_missiles","OPTRE_4Rnd_Scorpion_missiles","OPTRE_1Rnd_Jackknife_missile","OPTRE_8Rnd_2000lb_bomb","OPTRE_4Rnd_GBU_bomb","120Rnd_CMFlare_Chaff_Magazine" };
				minElev = -75;
				maxElev = 25;
				initElev = 0;
				minTurn = -35;
				maxTurn = 35;
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
					minFov = 0.1;
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
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel = "A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class LeftTurret : CopilotTurret
			{
				gunnerAction = "pilot_Heli_Light_02";
				gunnerInAction = "pilot_Heli_Light_02";
				precisegetinout = 1;
				gunnerGetInAction = "pilot_Heli_Light_02_Enter";
				gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
				memoryPointsGetInGunner = "pos Driver";
				memoryPointsGetInGunnerDir = "pos Driver dir";
				canEject = 0;
				body = "Turret2";
				gun = "Gun2";
				gunBeg = "gun2beg";
				gunEnd = "gun2end";
				animationSourceBody = "Turret2";
				animationSourceGun = "Gun2";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				maxHorizontalRotSpeed = 10;
				maxVerticalRotSpeed = 10;
				proxyindex = 2;
				isCopilot = 0;
				gunnerName = "Systems Operator";
				primaryGunner = 0;
				visionMode[] = { "Normal","NVG","Ti" };
				weapons[] = { "Laserdesignator_mounted" };
				magazines[] = { "Laserbatteries" };
				minElev = -85;
				maxElev = 10;
				initElev = -10;
				minTurn = 0;
				maxTurn = 90;
				initTurn = 20;
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
					minFov = 0.02;
					maxFov = 0.85;
					visionMode[] = { "Normal","NVG","Ti" };
				};
				soundServo[] = { "",0.01,1 };
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner2";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis = "Turret2_axis";
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class RightTurret : CopilotTurret
			{
				gunnerAction = "pilot_Heli_Light_02";
				gunnerInAction = "pilot_Heli_Light_02";
				precisegetinout = 1;
				gunnerGetInAction = "pilot_Heli_Light_02_Enter";
				gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
				memoryPointsGetInGunner = "pos Driver";
				memoryPointsGetInGunnerDir = "pos Driver dir";
				canEject = 0;
				body = "Turret3";
				gun = "Gun3";
				gunBeg = "gun3beg";
				gunEnd = "gun3end";
				animationSourceBody = "Turret3";
				animationSourceGun = "Gun3";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				maxHorizontalRotSpeed = 10;
				maxVerticalRotSpeed = 10;
				proxyindex = 3;
				isCopilot = 0;
				gunnerName = "Navigator";
				primaryGunner = 0;
				visionMode[] = { "Normal","NVG","Ti" };
				weapons[] = { "Laserdesignator_mounted" };
				magazines[] = { "Laserbatteries" };
				minElev = -85;
				maxElev = 10;
				initElev = 10;
				minTurn = -90;
				maxTurn = 0;
				initTurn = -20;
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
					minFov = 0.02;
					maxFov = 0.85;
					visionMode[] = { "Normal","NVG","Ti" };
				};
				soundServo[] = { "",0.01,1 };
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner3";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis = "Turret3_axis";
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
		};
	};
	class OPTRE_Longsword_CAP : OPTRE_Longsword_Base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "GA-TL1/A Longsword (CAP) [A/X]";
		dlc = "OPTRE";
		author = "Article 2 Studios";
		weapons[] = { "OPTRE_M9109","OPTRE_110mm_Gatling","OPTRE_missiles_Anvil1","OPTRE_missiles_Anvil2","CMFlareLauncher" };
		magazines[] = { "OPTRE_2500Rnd_50mm_HE","OPTRE_600Rnd_110mm","OPTRE_32Rnd_Anvil1_missiles","OPTRE_24Rnd_Anvil2_missiles","120Rnd_CMFlare_Chaff_Magazine" };
		class Turrets : Turrets
		{
			class CopilotTurret : CopilotTurret
			{
				gunnerAction = "pilot_Heli_Light_02";
				gunnerInAction = "pilot_Heli_Light_02";
				precisegetinout = 1;
				gunnerGetInAction = "pilot_Heli_Light_02_Enter";
				gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
				memoryPointsGetInGunner = "pos Driver";
				memoryPointsGetInGunnerDir = "pos Driver dir";
				canEject = 0;
				body = "mainTurret";
				gun = "mainGun";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				maxHorizontalRotSpeed = 10;
				maxVerticalRotSpeed = 10;
				proxyindex = 1;
				isCopilot = 1;
				gunnerName = "Co-Pilot";
				primaryGunner = 1;
				visionMode[] = { "Normal","NVG","Ti" };
				weapons[] = { "OPTRE_missiles_ASGM2","OPTRE_missiles_ASGM10","CMFlareLauncher" };
				magazines[] = { "OPTRE_12Rnd_ASGM2_rockets","OPTRE_8Rnd_ASGM10_missiles","120Rnd_CMFlare_Chaff_Magazine" };
				minElev = -75;
				maxElev = 25;
				initElev = 0;
				minTurn = -35;
				maxTurn = 35;
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
					minFov = 0.1;
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
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel = "A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class LeftTurret : CopilotTurret
			{
				gunnerAction = "pilot_Heli_Light_02";
				gunnerInAction = "pilot_Heli_Light_02";
				precisegetinout = 1;
				gunnerGetInAction = "pilot_Heli_Light_02_Enter";
				gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
				memoryPointsGetInGunner = "pos Driver";
				memoryPointsGetInGunnerDir = "pos Driver dir";
				canEject = 0;
				body = "Turret2";
				gun = "Gun2";
				gunBeg = "gun2beg";
				gunEnd = "gun2end";
				animationSourceBody = "Turret2";
				animationSourceGun = "Gun2";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				maxHorizontalRotSpeed = 10;
				maxVerticalRotSpeed = 10;
				proxyindex = 2;
				isCopilot = 0;
				gunnerName = "Systems Operator";
				primaryGunner = 0;
				visionMode[] = { "Normal","NVG","Ti" };
				weapons[] = { "Laserdesignator_mounted" };
				magazines[] = { "Laserbatteries" };
				minElev = -85;
				maxElev = 10;
				initElev = -10;
				minTurn = 0;
				maxTurn = 90;
				initTurn = 20;
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
					minFov = 0.02;
					maxFov = 0.85;
					visionMode[] = { "Normal","NVG","Ti" };
				};
				soundServo[] = { "",0.01,1 };
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner2";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis = "Turret2_axis";
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class RightTurret : CopilotTurret
			{
				gunnerAction = "pilot_Heli_Light_02";
				gunnerInAction = "pilot_Heli_Light_02";
				precisegetinout = 1;
				gunnerGetInAction = "pilot_Heli_Light_02_Enter";
				gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
				memoryPointsGetInGunner = "pos Driver";
				memoryPointsGetInGunnerDir = "pos Driver dir";
				canEject = 0;
				body = "Turret3";
				gun = "Gun3";
				gunBeg = "gun3beg";
				gunEnd = "gun3end";
				animationSourceBody = "Turret3";
				animationSourceGun = "Gun3";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				maxHorizontalRotSpeed = 10;
				maxVerticalRotSpeed = 10;
				proxyindex = 3;
				isCopilot = 0;
				gunnerName = "Navigator";
				primaryGunner = 0;
				visionMode[] = { "Normal","NVG","Ti" };
				weapons[] = { "Laserdesignator_mounted" };
				magazines[] = { "Laserbatteries" };
				minElev = -85;
				maxElev = 10;
				initElev = 10;
				minTurn = -90;
				maxTurn = 0;
				initTurn = -20;
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
					minFov = 0.02;
					maxFov = 0.85;
					visionMode[] = { "Normal","NVG","Ti" };
				};
				soundServo[] = { "",0.01,1 };
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner3";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis = "Turret3_axis";
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
		};
	};
	class OPTRE_Longsword_Multirole : OPTRE_Longsword_Base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "GA-TL1/A Longsword (Multirole) [A/X]";
		dlc = "OPTRE";
		author = "Article 2 Studios";
		weapons[] = { "OPTRE_M9109","OPTRE_110mm_Gatling","OPTRE_missiles_Anvil2","OPTRE_missiles_Anvil3","CMFlareLauncher" };
		magazines[] = { "OPTRE_2500Rnd_50mm_HE","OPTRE_600Rnd_110mm","OPTRE_24Rnd_Anvil2_missiles","OPTRE_12Rnd_Anvil3_missiles","120Rnd_CMFlare_Chaff_Magazine" };
		class Turrets : Turrets
		{
			class CopilotTurret : CopilotTurret
			{
				gunnerAction = "pilot_Heli_Light_02";
				gunnerInAction = "pilot_Heli_Light_02";
				precisegetinout = 1;
				gunnerGetInAction = "pilot_Heli_Light_02_Enter";
				gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
				memoryPointsGetInGunner = "pos Driver";
				memoryPointsGetInGunnerDir = "pos Driver dir";
				canEject = 0;
				body = "mainTurret";
				gun = "mainGun";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				maxHorizontalRotSpeed = 10;
				maxVerticalRotSpeed = 10;
				proxyindex = 1;
				isCopilot = 1;
				gunnerName = "Co-Pilot";
				primaryGunner = 1;
				visionMode[] = { "Normal","NVG","Ti" };
				weapons[] = { "OPTRE_missiles_ASGM2","OPTRE_missiles_ASGM10","OPTRE_missiles_Scorpion","CMFlareLauncher" };
				magazines[] = { "OPTRE_12Rnd_ASGM2_rockets","OPTRE_4Rnd_ASGM10_missiles","OPTRE_8Rnd_Scorpion_missiles","120Rnd_CMFlare_Chaff_Magazine" };
				minElev = -75;
				maxElev = 25;
				initElev = 0;
				minTurn = -35;
				maxTurn = 35;
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
					minFov = 0.1;
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
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel = "A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class LeftTurret : CopilotTurret
			{
				gunnerAction = "pilot_Heli_Light_02";
				gunnerInAction = "pilot_Heli_Light_02";
				precisegetinout = 1;
				gunnerGetInAction = "pilot_Heli_Light_02_Enter";
				gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
				memoryPointsGetInGunner = "pos Driver";
				memoryPointsGetInGunnerDir = "pos Driver dir";
				canEject = 0;
				body = "Turret2";
				gun = "Gun2";
				gunBeg = "gun2beg";
				gunEnd = "gun2end";
				animationSourceBody = "Turret2";
				animationSourceGun = "Gun2";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				maxHorizontalRotSpeed = 10;
				maxVerticalRotSpeed = 10;
				proxyindex = 2;
				isCopilot = 0;
				gunnerName = "Systems Operator";
				primaryGunner = 0;
				visionMode[] = { "Normal","NVG","Ti" };
				weapons[] = { "Laserdesignator_mounted" };
				magazines[] = { "Laserbatteries" };
				minElev = -85;
				maxElev = 10;
				initElev = -10;
				minTurn = 0;
				maxTurn = 90;
				initTurn = 20;
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
					minFov = 0.02;
					maxFov = 0.85;
					visionMode[] = { "Normal","NVG","Ti" };
				};
				soundServo[] = { "",0.01,1 };
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner2";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis = "Turret2_axis";
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class RightTurret : CopilotTurret
			{
				gunnerAction = "pilot_Heli_Light_02";
				gunnerInAction = "pilot_Heli_Light_02";
				precisegetinout = 1;
				gunnerGetInAction = "pilot_Heli_Light_02_Enter";
				gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
				memoryPointsGetInGunner = "pos Driver";
				memoryPointsGetInGunnerDir = "pos Driver dir";
				canEject = 0;
				body = "Turret3";
				gun = "Gun3";
				gunBeg = "gun3beg";
				gunEnd = "gun3end";
				animationSourceBody = "Turret3";
				animationSourceGun = "Gun3";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				maxHorizontalRotSpeed = 10;
				maxVerticalRotSpeed = 10;
				proxyindex = 3;
				isCopilot = 0;
				gunnerName = "Navigator";
				primaryGunner = 0;
				visionMode[] = { "Normal","NVG","Ti" };
				weapons[] = { "Laserdesignator_mounted" };
				magazines[] = { "Laserbatteries" };
				minElev = -85;
				maxElev = 10;
				initElev = 10;
				minTurn = -90;
				maxTurn = 0;
				initTurn = -20;
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
					minFov = 0.02;
					maxFov = 0.85;
					visionMode[] = { "Normal","NVG","Ti" };
				};
				soundServo[] = { "",0.01,1 };
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner3";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis = "Turret3_axis";
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
		};
	};
	class OPTRE_Longsword_Nuke : OPTRE_Longsword_Base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "GA-TL1/A Longsword (Nuclear) [A/X]";
		dlc = "OPTRE";
		author = "Article 2 Studios";
		weapons[] = { "OPTRE_M9109","OPTRE_110mm_Gatling","CMFlareLauncher" };
		magazines[] = { "OPTRE_2500Rnd_50mm_HE","OPTRE_600Rnd_110mm","120Rnd_CMFlare_Chaff_Magazine" };
		class Turrets : Turrets
		{
			class CopilotTurret : CopilotTurret
			{
				gunnerAction = "pilot_Heli_Light_02";
				gunnerInAction = "pilot_Heli_Light_02";
				precisegetinout = 1;
				gunnerGetInAction = "pilot_Heli_Light_02_Enter";
				gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
				memoryPointsGetInGunner = "pos Driver";
				memoryPointsGetInGunnerDir = "pos Driver dir";
				canEject = 0;
				body = "mainTurret";
				gun = "mainGun";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				maxHorizontalRotSpeed = 10;
				maxVerticalRotSpeed = 10;
				proxyindex = 1;
				isCopilot = 1;
				gunnerName = "Co-Pilot";
				primaryGunner = 1;
				visionMode[] = { "Normal","NVG","Ti" };
				weapons[] = { "OPTRE_missiles_ASGM2","OPTRE_missiles_ASGM10","CMFlareLauncher" };
				magazines[] = { "OPTRE_12Rnd_ASGM2_rockets","OPTRE_8Rnd_ASGM10_missiles","120Rnd_CMFlare_Chaff_Magazine" };
				minElev = -75;
				maxElev = 25;
				initElev = 0;
				minTurn = -35;
				maxTurn = 35;
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
					minFov = 0.1;
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
				gunnerOpticsModel = "A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class LeftTurret : CopilotTurret
			{
				gunnerAction = "pilot_Heli_Light_02";
				gunnerInAction = "pilot_Heli_Light_02";
				precisegetinout = 1;
				gunnerGetInAction = "pilot_Heli_Light_02_Enter";
				gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
				memoryPointsGetInGunner = "pos Driver";
				memoryPointsGetInGunnerDir = "pos Driver dir";
				canEject = 0;
				body = "Turret2";
				gun = "Gun2";
				gunBeg = "gun2beg";
				gunEnd = "gun2end";
				animationSourceBody = "Turret2";
				animationSourceGun = "Gun2";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				maxHorizontalRotSpeed = 10;
				maxVerticalRotSpeed = 10;
				proxyindex = 2;
				isCopilot = 0;
				gunnerName = "Systems Operator";
				primaryGunner = 0;
				visionMode[] = { "Normal","NVG","Ti" };
				weapons[] = { "OPTRE_missiles_Shiva_nuke","Laserdesignator_mounted" };
				magazines[] = { "OPTRE_2Rnd_Shiva_nuke_missile","Laserbatteries" };
				minElev = -85;
				maxElev = 10;
				initElev = -10;
				minTurn = -25;
				maxTurn = 90;
				initTurn = 20;
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
					minFov = 0.02;
					maxFov = 0.85;
					visionMode[] = { "Normal","NVG","Ti" };
				};
				soundServo[] = { "",0.01,1 };
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner2";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis = "Turret2_axis";
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class RightTurret : CopilotTurret
			{
				gunnerAction = "pilot_Heli_Light_02";
				gunnerInAction = "pilot_Heli_Light_02";
				precisegetinout = 1;
				gunnerGetInAction = "pilot_Heli_Light_02_Enter";
				gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
				memoryPointsGetInGunner = "pos Driver";
				memoryPointsGetInGunnerDir = "pos Driver dir";
				canEject = 0;
				body = "Turret3";
				gun = "Gun3";
				gunBeg = "gun3beg";
				gunEnd = "gun3end";
				animationSourceBody = "Turret3";
				animationSourceGun = "Gun3";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				maxHorizontalRotSpeed = 10;
				maxVerticalRotSpeed = 10;
				proxyindex = 3;
				isCopilot = 0;
				gunnerName = "Navigator";
				primaryGunner = 0;
				visionMode[] = { "Normal","NVG","Ti" };
				weapons[] = { "Laserdesignator_mounted" };
				magazines[] = { "Laserbatteries" };
				minElev = -85;
				maxElev = 10;
				initElev = 10;
				minTurn = -90;
				maxTurn = 25;
				initTurn = -20;
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
					minFov = 0.02;
					maxFov = 0.85;
					visionMode[] = { "Normal","NVG","Ti" };
				};
				soundServo[] = { "",0.01,1 };
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner3";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis = "Turret3_axis";
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
		};
	};
};
