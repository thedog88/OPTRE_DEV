class CfgAmmo
{
	class ShotgunBase;
    class BulletBase;
	class ShotDeployBase;
	class B_762x51_Ball;
	class B_9x21_Ball;
	class B_127x99_Ball;
	class B_20mm;
	class B_30mm_HE;
	class B_30mm_MP;
	class B_35mm_AA;
	class B_35mm_AA_Tracer_Red;
	class B_40mm_GPR;
	class B_40mm_APFSDS;
	class B_40mm_APFSDS_Tracer_Green;
	class B_coil_20g_spike;
	class GrenadeHand;
	class SmokeShell;
	class B_IRStrobe;
	class R_PG32V_F;
	class R_TBG32V_F;
	class R_230mm_HE;
	class M_Scalpel_AT;
	class M_Air_AA;
	class M_Zephyr;
	class M_PG_AT;
	class M_AT;
	class M_Titan_AT;
	class M_Titan_AA; 
	class M_NLAW_AT_F;
	class Sh_105mm_HEAT_MP;
	class Sh_105mm_APFSDS_T_Green;
	class Sh_105mm_HEAT_MP_T_Green;
	class Sh_120mm_HE;
	class Sh_120mm_HE_Tracer_Yellow;
	class Sh_120mm_APFSDS;
	class Sh_155mm_AMOS;
	class Cannon_30mm_HE_Plane_CAS_02_F;
	class Bo_Mk82;
	class Bo_GBU12_LGB;
	class Cluster_155mm_AMOS;
	class Mine_155mm_AMOS_Range;
	
	//7.62x51mm (AR, M247)
	class OPTRE_B_762x51_Ball: B_762x51_Ball
	{
		hit 							= 10;
		typicalSpeed 					= 600;
		model 							= "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class OPTRE_B_762x51_Tracer: OPTRE_B_762x51_Ball
	{
		model 							= "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	
	//9.5x40mm (BR, M73)
	class OPTRE_B_95x40_Ball: B_762x51_Ball
	{
		hit 							= 11;
		caliber 						= 2;
		typicalSpeed 					= 600;
		model 							= "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class OPTRE_B_95x40_Tracer: OPTRE_B_95x40_Ball
	{
		model 							= "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	
	//14.5x114mm (Sniper)
	class OPTRE_B_145x114_APFSDS: B_127x99_Ball
	{
		hit 							= 60;
		cartridge 						= "FxCartridge_127";
		caliber 						= 8;
		typicalSpeed 					= 700;
		airFriction = 0;
		sideairFriction = 0;
		coefGravity = 0.0;
		timeToLive 						= 15;
		model 							= "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale 					= 1.5;
		tracerStartTime 				= 0;
		tracerEndTime 					= 15;
		class CamShakeExplode
		{
			power = "(20^0.5)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*3)";
		};
		class CamShakeHit
		{
			power = 20;
			duration = "((round (20^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
	};
	class OPTRE_B_145x114_HVAP: OPTRE_B_145x114_APFSDS
	{
		hit 							= 75;
		caliber 						= 15;
		typicalSpeed 					= 700;
	};
	class OPTRE_B_145x114_HEDP: OPTRE_B_145x114_APFSDS
	{
		hit 							= 50;
		indirectHit 					= 20;
		explosive 						= 0.75;
		indirectHitRange 				= 1;
		caliber 						= 0.1;
		typicalSpeed 					= 700;
		timeToLive 						= 15;
		model 							= "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale 					= 2;	
		explosionEffects 				= "ExploAmmoExplosion";
		craterEffects 					= "ExploAmmoCrater";
		explosionSoundEffect 			= "DefaultExplosion";
	};
	
	//12.7x40mm (Pistol)
	class OPTRE_B_127x40_Ball : B_762x51_Ball   
	{
		hit 							= 9;
		indirectHit 					= 8;
		indirectHitRange 				= 0.1;
		explosive						= 0;
		cartridge 						= "FxCartridge_small";
		caliber 						= 0.75;
		typicalSpeed					= 200;
		model 							= "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class OPTRE_B_127x40_AP : OPTRE_B_127x40_Ball   
	{
		hit 							= 9.5;
		indirectHit 					= 0;
		indirectHitRange 				= 0;
		caliber 						= 2;
	};
	class OPTRE_B_127x40_Tracer : OPTRE_B_127x40_Ball  
	{
		model 							= "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	
	//8 Gauge (Shotgun)
	class OPTRE_8Gauge_Pellets : ShotgunBase   
	{
		hit 							= 8;
		typicalSpeed					= 100;
		indirectHit 					= 0;
		indirectHitRange 				= 0;
		visibleFire 					= 1;	// how much is visible when this weapon is fired
		audibleFire 					= 1;
		visibleFireTime 				= 2;
		cost 							= 1;
		tracerColor[] 					= {1, 0.05, 0.05, 1};
		tracerColorR[] 					= {1, 0.05, 0.05, 1};
		airFriction 					= -0.005;
		caliber 						= 0.25;
		cartridge 						= "FxCartridge_slug";
		dispersion 						= 0.025;//0.35
		class HitEffects
		{
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitWood = "ImpactWood";
			hitMetal = "ImpactMetal";
			hitMetalPlate = "ImpactMetal";
			hitBuilding = "ImpactPlaster";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitConcrete = "ImpactConcrete";
			hitMan = "ImpactEffectsBlood";
			hitGroundSoft = "ImpactEffectsSmall";
			hitGroundHard = "ImpactEffectsHardGround";
			hitWater = "ImpactEffectsWater";
			hitVirtual = "ImpactMetal";
		};		
		soundImpactDefault1[] = {"A3\Sounds_F\weapons\Grenades\Grenade_Roll",2.5118864,1,200};
		impactGroundSoft[] = {"soundImpactDefault1",1};
		impactGroundHard[] = {"soundImpactDefault1",1};
		impactMan[] = {"soundImpactDefault1",1};
		impactIron[] = {"soundImpactDefault1",1};
		impactArmor[] = {"soundImpactDefault1",1};
		impactBuilding[] = {"soundImpactDefault1",1};
		impactFoliage[] = {"soundImpactDefault1",1};
		impactWood[] = {"soundImpactDefault1",1};
		impactGlass[] = {"soundImpactDefault1",1};
		impactGlassArmored[] = {"soundImpactDefault1",1};
		impactConcrete[] = {"soundImpactDefault1",1};
		impactRubber[] = {"soundImpactDefault1",1};
		impactPlastic[] = {"soundImpactDefault1",1};
		impactDefault[] = {"soundImpactDefault1",1};
		impactMetal[] = {"soundImpactDefault1",1};
		impactMetalplate[] = {"soundImpactDefault1",1};
		impactWater[] = {"soundImpactDefault1",1};
		soundDefault1[] = {"A3\sounds_f\weapons\hits\concrete_1",1.1220185,1,60};
		soundDefault2[] = {"A3\sounds_f\weapons\hits\concrete_2",1.1220185,1,60};
		soundDefault3[] = {"A3\sounds_f\weapons\hits\concrete_3",1.1220185,1,60};
		soundDefault4[] = {"A3\sounds_f\weapons\hits\concrete_4",1.1220185,1,60};
		soundDefault5[] = {"A3\sounds_f\weapons\hits\concrete_5",1.1220185,1,60};
		soundDefault6[] = {"A3\sounds_f\weapons\hits\concrete_6",1.1220185,1,60};
		soundDefault7[] = {"A3\sounds_f\weapons\hits\concrete_7",1.1220185,1,60};
		soundDefault8[] = {"A3\sounds_f\weapons\hits\concrete_8",1.1220185,1,60};
		soundGroundSoft1[] = {"A3\sounds_f\weapons\hits\soft_ground_1",1.2589254,1,60};
		soundGroundSoft2[] = {"A3\sounds_f\weapons\hits\soft_ground_2",1.2589254,1,60};
		soundGroundSoft3[] = {"A3\sounds_f\weapons\hits\soft_ground_3",1.2589254,1,60};
		soundGroundSoft4[] = {"A3\sounds_f\weapons\hits\soft_ground_4",1.2589254,1,60};
		soundGroundSoft5[] = {"A3\sounds_f\weapons\hits\soft_ground_5",1.2589254,1,60};
		soundGroundSoft6[] = {"A3\sounds_f\weapons\hits\soft_ground_6",1.2589254,1,60};
		soundGroundSoft7[] = {"A3\sounds_f\weapons\hits\soft_ground_7",1.2589254,1,60};
		soundGroundSoft8[] = {"A3\sounds_f\weapons\hits\soft_ground_8",1.2589254,1,60};
		soundGroundHard1[] = {"A3\sounds_f\weapons\hits\hard_ground_1",1.4125376,1,80};
		soundGroundHard2[] = {"A3\sounds_f\weapons\hits\hard_ground_2",1.4125376,1,80};
		soundGroundHard3[] = {"A3\sounds_f\weapons\hits\hard_ground_3",1.4125376,1,80};
		soundGroundHard4[] = {"A3\sounds_f\weapons\hits\hard_ground_4",1.4125376,1,80};
		soundGroundHard5[] = {"A3\sounds_f\weapons\hits\hard_ground_5",1.4125376,1,80};
		soundGroundHard6[] = {"A3\sounds_f\weapons\hits\hard_ground_6",1.4125376,1,80};
		soundGroundHard7[] = {"A3\sounds_f\weapons\hits\hard_ground_7",1.4125376,1,80};
		soundGroundHard8[] = {"A3\sounds_f\weapons\hits\hard_ground_8",1.4125376,1,80};
		soundMetal1[] = {"A3\sounds_f\weapons\hits\metal_1",1.9952624,1,150};
		soundMetal2[] = {"A3\sounds_f\weapons\hits\metal_2",1.9952624,1,150};
		soundMetal3[] = {"A3\sounds_f\weapons\hits\metal_3",1.9952624,1,150};
		soundMetal4[] = {"A3\sounds_f\weapons\hits\metal_4",1.9952624,1,150};
		soundMetal5[] = {"A3\sounds_f\weapons\hits\metal_5",1.9952624,1,150};
		soundMetal6[] = {"A3\sounds_f\weapons\hits\metal_6",1.9952624,1,150};
		soundMetal7[] = {"A3\sounds_f\weapons\hits\metal_5",1.9952624,1,150};
		soundMetal8[] = {"A3\sounds_f\weapons\hits\metal_6",1.9952624,1,150};
		soundGlass1[] = {"A3\sounds_f\weapons\hits\glass_1",1.4125376,1,100};
		soundGlass2[] = {"A3\sounds_f\weapons\hits\glass_2",1.4125376,1,100};
		soundGlass3[] = {"A3\sounds_f\weapons\hits\glass_3",1.4125376,1,100};
		soundGlass4[] = {"A3\sounds_f\weapons\hits\glass_4",1.4125376,1,100};
		soundGlass5[] = {"A3\sounds_f\weapons\hits\glass_5",1.4125376,1,100};
		soundGlass6[] = {"A3\sounds_f\weapons\hits\glass_6",1.4125376,1,100};
		soundGlass7[] = {"A3\sounds_f\weapons\hits\glass_7",1.4125376,1,100};
		soundGlass8[] = {"A3\sounds_f\weapons\hits\glass_8",1.4125376,1,100};
		soundGlassArmored1[] = {"A3\sounds_f\weapons\hits\glass_arm_1",1.2589254,1,60};
		soundGlassArmored2[] = {"A3\sounds_f\weapons\hits\glass_arm_2",1.2589254,1,60};
		soundGlassArmored3[] = {"A3\sounds_f\weapons\hits\glass_arm_3",1.2589254,1,60};
		soundGlassArmored4[] = {"A3\sounds_f\weapons\hits\glass_arm_4",1.2589254,1,60};
		soundGlassArmored5[] = {"A3\sounds_f\weapons\hits\glass_arm_5",1.2589254,1,60};
		soundGlassArmored6[] = {"A3\sounds_f\weapons\hits\glass_arm_6",1.2589254,1,60};
		soundGlassArmored7[] = {"A3\sounds_f\weapons\hits\glass_arm_7",1.2589254,1,60};
		soundGlassArmored8[] = {"A3\sounds_f\weapons\hits\glass_arm_8",1.2589254,1,60};
		soundVehiclePlate1[] = {"A3\sounds_f\weapons\hits\metal_plate_1",1.9952624,1,150};
		soundVehiclePlate2[] = {"A3\sounds_f\weapons\hits\metal_plate_2",1.9952624,1,150};
		soundVehiclePlate3[] = {"A3\sounds_f\weapons\hits\metal_plate_3",1.9952624,1,150};
		soundVehiclePlate4[] = {"A3\sounds_f\weapons\hits\metal_plate_4",1.9952624,1,150};
		soundVehiclePlate5[] = {"A3\sounds_f\weapons\hits\metal_plate_5",1.9952624,1,150};
		soundVehiclePlate6[] = {"A3\sounds_f\weapons\hits\metal_plate_6",1.9952624,1,150};
		soundVehiclePlate7[] = {"A3\sounds_f\weapons\hits\metal_plate_7",1.9952624,1,150};
		soundVehiclePlate8[] = {"A3\sounds_f\weapons\hits\metal_plate_8",1.9952624,1,150};
		soundWood1[] = {"A3\sounds_f\weapons\hits\wood_1",1.4125376,1,80};
		soundWood2[] = {"A3\sounds_f\weapons\hits\wood_2",1.4125376,1,80};
		soundWood3[] = {"A3\sounds_f\weapons\hits\wood_3",1.4125376,1,80};
		soundWood4[] = {"A3\sounds_f\weapons\hits\wood_4",1.4125376,1,80};
		soundWood5[] = {"A3\sounds_f\weapons\hits\wood_5",1.4125376,1,80};
		soundWood6[] = {"A3\sounds_f\weapons\hits\wood_6",1.4125376,1,80};
		soundWood7[] = {"A3\sounds_f\weapons\hits\wood_7",1.4125376,1,80};
		soundWood8[] = {"A3\sounds_f\weapons\hits\wood_8",1.4125376,1,80};
		soundHitBody1[] = {"A3\sounds_f\weapons\hits\body_1",1.5848932,1,10};
		soundHitBody2[] = {"A3\sounds_f\weapons\hits\body_2",1.5848932,1,10};
		soundHitBody3[] = {"A3\sounds_f\weapons\hits\body_3",1.5848932,1,10};
		soundHitBody4[] = {"A3\sounds_f\weapons\hits\body_4",1.5848932,1,10};
		soundHitBody5[] = {"A3\sounds_f\weapons\hits\body_5",1.5848932,1,10};
		soundHitBody6[] = {"A3\sounds_f\weapons\hits\body_6",1.5848932,1,10};
		soundHitBody7[] = {"A3\sounds_f\weapons\hits\body_7",1.5848932,1,10};
		soundHitBody8[] = {"A3\sounds_f\weapons\hits\body_8",1.5848932,1,10};
		soundHitBuilding1[] = {"A3\sounds_f\weapons\hits\building_1",1.0,1,60};
		soundHitBuilding2[] = {"A3\sounds_f\weapons\hits\building_2",1.0,1,60};
		soundHitBuilding3[] = {"A3\sounds_f\weapons\hits\building_3",1.0,1,60};
		soundHitBuilding4[] = {"A3\sounds_f\weapons\hits\building_4",1.0,1,60};
		soundHitBuilding5[] = {"A3\sounds_f\weapons\hits\building_5",1.0,1,60};
		soundHitBuilding6[] = {"A3\sounds_f\weapons\hits\building_6",1.0,1,60};
		soundHitBuilding7[] = {"A3\sounds_f\weapons\hits\building_7",1.0,1,60};
		soundHitBuilding8[] = {"A3\sounds_f\weapons\hits\building_8",1.0,1,60};
		soundHitFoliage1[] = {"A3\sounds_f\weapons\hits\foliage_1",0.70794576,1,20};
		soundHitFoliage2[] = {"A3\sounds_f\weapons\hits\foliage_2",0.70794576,1,20};
		soundHitFoliage3[] = {"A3\sounds_f\weapons\hits\foliage_3",0.70794576,1,20};
		soundHitFoliage4[] = {"A3\sounds_f\weapons\hits\foliage_4",0.70794576,1,20};
		soundHitFoliage5[] = {"A3\sounds_f\weapons\hits\foliage_5",0.70794576,1,20};
		soundHitFoliage6[] = {"A3\sounds_f\weapons\hits\foliage_6",0.70794576,1,20};
		soundHitFoliage7[] = {"A3\sounds_f\weapons\hits\foliage_7",0.70794576,1,20};
		soundHitFoliage8[] = {"A3\sounds_f\weapons\hits\foliage_8",0.70794576,1,20};
		soundPlastic1[] = {"A3\sounds_f\weapons\hits\plastic_1",1.0,1,70};
		soundPlastic2[] = {"A3\sounds_f\weapons\hits\plastic_2",1.0,1,70};
		soundPlastic3[] = {"A3\sounds_f\weapons\hits\plastic_3",1.0,1,70};
		soundPlastic4[] = {"A3\sounds_f\weapons\hits\plastic_4",1.0,1,70};
		soundPlastic5[] = {"A3\sounds_f\weapons\hits\plastic_5",1.0,1,70};
		soundPlastic6[] = {"A3\sounds_f\weapons\hits\plastic_6",1.0,1,70};
		soundPlastic7[] = {"A3\sounds_f\weapons\hits\plastic_7",1.0,1,70};
		soundPlastic8[] = {"A3\sounds_f\weapons\hits\plastic_8",1.0,1,70};
		soundConcrete1[] = {"A3\sounds_f\weapons\hits\concrete_1",1.0,1,70};
		soundConcrete2[] = {"A3\sounds_f\weapons\hits\concrete_2",1.0,1,70};
		soundConcrete3[] = {"A3\sounds_f\weapons\hits\concrete_3",1.0,1,70};
		soundConcrete4[] = {"A3\sounds_f\weapons\hits\concrete_4",1.0,1,70};
		soundConcrete5[] = {"A3\sounds_f\weapons\hits\concrete_5",1.0,1,70};
		soundConcrete6[] = {"A3\sounds_f\weapons\hits\concrete_6",1.0,1,70};
		soundConcrete7[] = {"A3\sounds_f\weapons\hits\concrete_7",1.0,1,70};
		soundConcrete8[] = {"A3\sounds_f\weapons\hits\concrete_8",1.0,1,70};
		soundRubber1[] = {"A3\sounds_f\weapons\hits\tyre_1",0.8912509,1,50};
		soundRubber2[] = {"A3\sounds_f\weapons\hits\tyre_2",0.8912509,1,50};
		soundRubber3[] = {"A3\sounds_f\weapons\hits\tyre_3",0.8912509,1,50};
		soundRubber4[] = {"A3\sounds_f\weapons\hits\tyre_4",0.8912509,1,50};
		soundRubber5[] = {"A3\sounds_f\weapons\hits\tyre_5",0.8912509,1,50};
		soundRubber6[] = {"A3\sounds_f\weapons\hits\tyre_6",0.8912509,1,50};
		soundRubber7[] = {"A3\sounds_f\weapons\hits\tyre_7",0.8912509,1,50};
		soundRubber8[] = {"A3\sounds_f\weapons\hits\tyre_8",0.8912509,1,50};
		soundWater1[] = {"A3\sounds_f\weapons\hits\water_01",1.0,1,40};
		soundWater2[] = {"A3\sounds_f\weapons\hits\water_02",1.0,1,40};
		soundWater3[] = {"A3\sounds_f\weapons\hits\water_03",1.0,1,40};
		soundWater4[] = {"A3\sounds_f\weapons\hits\water_04",1.0,1,40};
		soundWater5[] = {"A3\sounds_f\weapons\hits\water_05",1.0,1,40};
		soundWater6[] = {"A3\sounds_f\weapons\hits\water_06",1.0,1,40};
		soundWater7[] = {"A3\sounds_f\weapons\hits\water_07",1.0,1,40};
		soundWater8[] = {"A3\sounds_f\weapons\hits\water_08",1.0,1,40};
		hitGroundSoft[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1,"soundGroundSoft4",0.1,"soundGroundSoft5",0.1,"soundGroundSoft6",0.1,"soundGroundSoft7",0.1,"soundGroundSoft8",0.1};
		hitGroundHard[] = {"soundGroundHard1",0.2,"soundGroundHard2",0.2,"soundGroundHard3",0.1,"soundGroundHard4",0.1,"soundGroundHard5",0.1,"soundGroundHard6",0.1,"soundGroundHard7",0.1,"soundGroundHard8",0.1};
		hitMan[] = {"soundHitBody1",0.125,"soundHitBody2",0.125,"soundHitBody3",0.125,"soundHitBody4",0.125,"soundHitBody5",0.125,"soundHitBody6",0.125,"soundHitBody7",0.125,"soundHitBody8",0.125};
		hitArmor[] = {"soundVehiclePlate1",0.125,"soundVehiclePlate2",0.125,"soundVehiclePlate3",0.125,"soundVehiclePlate4",0.125,"soundVehiclePlate5",0.125,"soundVehiclePlate6",0.125,"soundVehiclePlate7",0.125,"soundVehiclePlate8",0.125};
		hitBuilding[] = {"soundHitBuilding1",0.2,"soundHitBuilding2",0.2,"soundHitBuilding3",0.1,"soundHitBuilding4",0.1,"soundHitBuilding5",0.1,"soundHitBuilding6",0.1,"soundHitBuilding7",0.1,"soundHitBuilding8",0.1};
		hitFoliage[] = {"soundHitFoliage1",0.125,"soundHitFoliage2",0.125,"soundHitFoliage3",0.125,"soundHitFoliage4",0.125,"soundHitFoliage5",0.125,"soundHitFoliage6",0.125,"soundHitFoliage7",0.125,"soundHitFoliage8",0.125};
		hitWood[] = {"soundWood1",0.125,"soundWood2",0.125,"soundWood3",0.125,"soundWood4",0.125,"soundWood5",0.125,"soundWood6",0.125,"soundWood7",0.125,"soundWood8",0.125};
		hitGlass[] = {"soundGlass1",0.125,"soundGlass2",0.125,"soundGlass3",0.125,"soundGlass4",0.125,"soundGlass5",0.125,"soundGlass6",0.125,"soundGlass7",0.125,"soundGlass8",0.125};
		hitGlassArmored[] = {"soundGlassArmored1",0.125,"soundGlassArmored2",0.125,"soundGlassArmored3",0.125,"soundGlassArmored4",0.125,"soundGlassArmored5",0.125,"soundGlassArmored6",0.125,"soundGlassArmored7",0.125,"soundGlassArmored8",0.125};
		hitConcrete[] = {"soundConcrete1",0.125,"soundConcrete2",0.125,"soundConcrete3",0.125,"soundConcrete4",0.125,"soundConcrete5",0.125,"soundConcrete6",0.125,"soundConcrete7",0.125,"soundConcrete8",0.125};
		hitRubber[] = {"soundRubber1",0.125,"soundRubber2",0.125,"soundRubber3",0.125,"soundRubber4",0.125,"soundRubber5",0.125,"soundRubber6",0.125,"soundRubber7",0.125,"soundRubber8",0.125};
		hitPlastic[] = {"soundPlastic1",0.125,"soundPlastic2",0.125,"soundPlastic3",0.125,"soundPlastic4",0.125,"soundPlastic5",0.125,"soundPlastic6",0.125,"soundPlastic7",0.125,"soundPlastic8",0.125};
		hitDefault[] = {"soundDefault1",0.2,"soundDefault2",0.2,"soundDefault3",0.1,"soundDefault4",0.1,"soundDefault5",0.1,"soundDefault6",0.1,"soundDefault7",0.1,"soundDefault8",0.1};
		hitMetal[] = {"soundMetal1",0.125,"soundMetal2",0.125,"soundMetal3",0.125,"soundMetal4",0.125,"soundMetal5",0.125,"soundMetal6",0.125,"soundMetal7",0.125,"soundMetal8",0.125};
		hitMetalplate[] = {"soundVehiclePlate1",0.125,"soundVehiclePlate2",0.125,"soundVehiclePlate3",0.125,"soundVehiclePlate4",0.125,"soundVehiclePlate5",0.125,"soundVehiclePlate6",0.125,"soundVehiclePlate7",0.125,"soundVehiclePlate8",0.125};
		hitWater[] = {"soundWater1",0.125,"soundWater2",0.125,"soundWater3",0.125,"soundWater4",0.125,"soundWater5",0.125,"soundWater6",0.125,"soundWater7",0.125,"soundWater8",0.125};
		bulletFly1[] = {"A3\sounds_f\weapons\hits\bullet_by_1",0.7943282,1,30};
		bulletFly2[] = {"A3\sounds_f\weapons\hits\bullet_by_2",0.7943282,1,30};
		bulletFly3[] = {"A3\sounds_f\weapons\hits\bullet_by_3",0.7943282,1,30};
		bulletFly4[] = {"A3\sounds_f\weapons\hits\bullet_by_4",0.7943282,1,30};
		bulletFly5[] = {"A3\sounds_f\weapons\hits\bullet_by_5",0.7943282,1,30};
		bulletFly6[] = {"A3\sounds_f\weapons\hits\bullet_by_6",0.7943282,1,30};
		bulletFly7[] = {"A3\sounds_f\weapons\hits\bullet_by_7",0.7943282,1,30};
		bulletFly8[] = {"A3\sounds_f\weapons\hits\bullet_by_8",0.7943282,1,30};
		bulletFly[] = {"bulletFly1",0.166,"bulletFly2",0.166,"bulletFly3",0.166,"bulletFly4",0.166,"bulletFly5",0.166,"bulletFly6",0.167,"bulletFly7",0.166,"bulletFly8",0.167};
	};
	class OPTRE_8Gauge_Slugs : B_762x51_Ball   
	{
		hit 							= 12;
		cartridge 						= "FxCartridge_slug";
		caliber 						= 2;
		typicalSpeed					= 200;
	};
	
	//5x23mm (SMG)
	class OPTRE_B_5x23_Caseless: B_9x21_Ball
	{
		hit 							= 8;
		typicalSpeed 					= 200;
		caliber 						= 0.75;
		cartridge 						= "FxCartridge_65_caseless";
		model 							= "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class OPTRE_B_5x23_Caseless_Tracer: OPTRE_B_5x23_Caseless
	{
		model 							= "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class OPTRE_B_5x23_Caseless_JHP: OPTRE_B_5x23_Caseless
	{
		hit 							= 9;
		caliber 						= 0.15;
		model 							= "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class OPTRE_B_5x23_Caseless_FMJ: OPTRE_B_5x23_Caseless
	{
		hit 							= 8.5;
		caliber 						= 1.5;
		model 							= "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	
	//Vehicles
	//Vehicle Cannons
	class OPTRE_25x130mm_Slug: B_40mm_APFSDS_Tracer_Green
	{
		scope = 2;
		caliber = 100;
		cost = 1000;
		explosive = 0;
		hit = 500;
		whistleOnFire = 1;
		whistleDist = 14;
		timeToLive = 1.5;
		tracerScale = 3;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		tracersEvery = 1;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_white";
		indirectHit = 50;
		indirectHitRange = 0.25;
		
		CraterEffects = "HEShellCrater";
		CraterWaterEffects = "ImpactEffectsWaterHE";
		ExplosionEffects = "HEShellExplosion";
		
		allowAgainstInfantry = 1;
		soundHit1[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_1",3.1622777,1,2000};
		soundHit2[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_2",3.1622777,1,2000};
		soundHit3[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_3",3.1622777,1,2000};
		soundHit4[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_4",3.1622777,1,2000};
		soundHit5[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_5",3.1622777,1,2000};
		soundHit6[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_6",3.1622777,1,2000};
		soundHit7[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_7",3.1622777,1,2000};
		soundHit8[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_8",3.1622777,1,2000};
		multiSoundHit[] = {"soundHit1",0.13,"soundHit2",0.13,"soundHit3",0.13,"soundHit4",0.13,"soundHit5",0.12,"soundHit6",0.12,"soundHit7",0.12,"soundHit8",0.12};
		class HitEffects
		{
			hitMetal = "ImpactMetalSabotBig";
			hitMetalPlate = "ImpactMetalSabotBig";
			hitBuilding = "ImpactConcreteSabot";
			hitConcrete = "ImpactConcreteSabot";
			hitGroundSoft = "ImpactEffectsGroundSabot";
			hitGroundHard = "ImpactEffectsGroundSabot";
			default_mat = "ImpactEffectsGroundSabot";
		};
		class CamShakeExplode
		{
			power = "(180^0.5)";
			duration = "((round (180^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((180^0.5)*3)";
		};
		class CamShakeHit
		{
			power = 180;
			duration = "((round (180^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(120^0.25)";
			duration = "((round (120^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((120^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 0.02;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class OPTRE_30mm_Rail_Slug: OPTRE_25x130mm_Slug
	{
		caliber = 120;
		cost = 1000;
		explosive = 0;
		hit = 600;
		indirectHit = 60;
		indirectHitRange = 0.30;
	};
	class OPTRE_105mm_Rail_Slug: OPTRE_30mm_Rail_Slug
	{
		caliber = 200;
		cost = 1000;
		explosive = 0.1;
		hit = 1400;
		indirectHit = 60;
		indirectHitRange = 2;
	};
	class OPTRE_MAC_Round: OPTRE_25x130mm_Slug
	{
		caliber = 1000;
		hit = 10000;
		airFriction = 0;
		allowAgainstInfantry = 1;
		audibleFire = 100.0;
		canLock = 0;
		cost = 10000;
		deflecting = 0;
		explosive = 0.5;
		fuseDistance = 1;
		indirectHit = 1000;
		indirectHitRange = 100;
		maxSpeed = 1000;
		typicalSpeed = 1000;
		sideAirFriction = 0;
		simulation = "shotSubmunitions";
		suppressionRadiusBulletClose = 100;
		suppressionRadiusHit = 100;
		timeToLive = 60;
		tracerStartTime = 0;
		supersonicCrackNear[] = {"A3\sounds_f\weapons\hits\sscrack1",1.0/*0.35481337*/,1,40};
		supersonicCrackFar[] = {"A3\sounds_f\weapons\hits\sscrack2",1.0/*0.2818383*/,1,100};
		visibleFire = 100;
		visibleFireTime = 300;
		
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_white";
		
		CraterEffects = "HEShellCrater";
		CraterWaterEffects = "ImpactEffectsWaterHE";
		ExplosionEffects = "HEShellExplosion";
	};	
	class OPTRE_B_127x99_Ball: B_127x99_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
	};
	class OPTRE_B_20mm_HE: B_20mm
	{
		//Used by: UH-144 Falcon (M638 Autocannon)
		hit = 70;
		indirectHit = 6;
		indirectHitRange = 2;
		caliber = 3.4;
		explosive = 0.4;
		tracerScale = 1;
		tracerStartTime = 0.005;
		tracerEndTime = 5;
	};
	class OPTRE_B_20mm_HEIAP: B_35mm_AA_Tracer_Red
	{
		//Used by: M71 Scythe AA, GUA23
		airlock = 1;
		hit = 75;
		indirectHit = 4;
		indirectHitRange = 5;
		caliber = 5;
		explosive = 0.4;
		tracerScale = 1;
		tracerStartTime = 0.005;
		tracerEndTime = 8;
	};
	class OPTRE_B_30mm_HE: B_30mm_MP
	{
		//Used by: AV-14 Hornet, AV-22 Sparrowhawk (GAU-23/AW), B-65 Shortsword (M955 ASW/AC)
		hit = 90;
		indirectHit = 8;
		indirectHitRange = 3.5;
		caliber = 2;
		explosive = 0.6;
		tracerScale = 1;
		tracerStartTime = 0.005;
		tracerEndTime = 5;
	};
	class OPTRE_B_40mm_HE: B_40mm_GPR
	{
		//Used by: G77H-TCI Pelican (Older Models)
		hit = 120;
		indirectHit = 8;
		indirectHitRange = 3.5;
		caliber = 4.6;
		explosive = 0.6;
		tracerScale = 1;
		tracerStartTime = 0.005;
		tracerEndTime = 5;
	};
	class OPTRE_B_40mm_APHE: B_35mm_AA_Tracer_Red
	{
		//Used by: M808B2 Sun Devil
		hit = 140;
		indirectHit = 6;
		indirectHitRange = 5;
		caliber = 6;
		explosive = 0.4;
		tracerScale = 1;
		tracerStartTime = 0.005;
		tracerEndTime = 5;
	};
	class OPTRE_B_50mm_HE: Cannon_30mm_HE_Plane_CAS_02_F
	{
		//Used by: M9109 ASW/AC (Longsword), GAU-32/AW (Vulture&Skyhawk), M230 Autocannon (Cougar)
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red.p3d";
		hit = 150;
		indirectHit = 10;
		indirectHitRange = 4;
		caliber = 5;
		explosive = 0.65;
		tracerScale = 1;
		tracerStartTime = 0.005;
		tracerEndTime = 5;
		allowAgainstInfantry = 1;
	};
	class OPTRE_B_50mm_APFSDS: OPTRE_B_50mm_HE
	{
		//Used by: M230 Autocannon (Cougar)
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red.p3d";
		hit = 240;
		indirectHit = 5;
		indirectHitRange = 0.2;
		caliber = 8;
		explosive = 0;
		tracerScale = 1;
		tracerStartTime = 0.005;
		tracerEndTime = 5;
		allowAgainstInfantry = 1;
	};
	class OPTRE_B_70mm_HE: B_30mm_HE
	{
		//Used by: M370 Autocannon (G77H-TCI Pelican (Newer Models))
		hit = 175;
		indirectHit = 20;
		indirectHitRange = 4.2;
		caliber = 6;
		explosive = 0.8;
	};
	class OPTRE_Sh_90mm_APBC : Sh_105mm_APFSDS_T_Green 
	{
		//Used by: M808 Scorpion (M512 90mm HVC), M413 Bison
		caliber = 24;
		hit =  425;
	};
	class OPTRE_Sh_90mm_SAPHE: Sh_120mm_HE
	{
		//Used by: M808 Scorpion (M512 90mm HVC), M413 Bison
		hit = 200;
		indirectHit = 60;
		indirectHitRange = 4;
		caliber = 8;
		explosive = 0.7;
	};
	class OPTRE_Sh_90mm_S1: OPTRE_Sh_90mm_SAPHE
	{
		//Used by: M808 Scorpion (M512 90mm HVC), M413 Bison
		//Experiment with the submunitions simulation when I have more time
		hit = 20;
		indirectHit = 20;
		indirectHitRange = 8;
		caliber = 2;
		explosive = 0;
		simulation = "shotSpread";
		typicalspeed = 750;
	};
	class OPTRE_Sh_105mm_APBC: Sh_105mm_APFSDS_T_Green
	{
		//Used by: M808B Scorpion (M556 105mm HVC)
		caliber = 26;
		hit =  475;
	};
	class OPTRE_Sh_105mm_SAPHE: Sh_105mm_HEAT_MP
	{
		//Used by: M808B Scorpion (M556 105mm HVC)
		hit = 260;
		indirectHit = 70;
		indirectHitRange = 5;
		caliber = 9;
		explosive = 0.7;
	};
	class OPTRE_Sh_105mm_HEAT: Sh_105mm_HEAT_MP
	{
		//Used by: M808B Scorpion (M556 105mm HVC)
		hit = 600;
		indirectHit = 20;
		indirectHitRange = 2;
		caliber = 12;
		explosive = 0.9;
	};
	class OPTRE_Sh_110mm_HEAT: Sh_105mm_HEAT_MP
	{
		//Used by: GA/TL-1 Longsword (GAU-80/AW)
		hit = 675;
		indirectHit = 32;
		indirectHitRange = 3;
		caliber = 14;
		explosive = 0.9;
		allowAgainstInfantry = 0;
		simulation = "shotBullet";
	};
	class OPTRE_Sh_120mm_SAPHE: Sh_120mm_HE_Tracer_Yellow
	{
		//Used by: GA/TL-1 Longsword (M310E/AC 120mm HVC)
		hit = 620;
		indirectHit = 80;
		indirectHitRange = 7;
		caliber = 10;
		explosive = 0.7;
		simulation = "shotBullet";
};
	class OPTRE_Sh_175mm_HE: Sh_155mm_AMOS
	{
		//Used by: Fox Cannon
		hit = 320;
		indirectHit = 80;
		indirectHitRange = 6;
		caliber = 10;
		explosive = 0.7;
	};
	//Vehicle Missiles
	class OPTRE_M41_Rocket_ATGM: M_Titan_AT
	{
		model = "\A3\Weapons_F_beta\Launchers\titan\titan_missile_at_fly";
		hit = 700;
		indirectHit = 10;
		indirectHitRange = 2.5;
		explosive = 0.8;
		irLock = 1;
		airLock = 1;
		laserLock = 1;
		manualControl = 1;
		allowAgainstInfantry = 1;
		maxControlRange = 10000;
		initTime = 0.1; //0.25
		trackOversteer = 1;
		trackLead = 0.85;
		timeToLive = 30;
		maneuvrability = 6;
		simulationStep = 0.002;
		airFriction = 0.084;
		sideAirFriction = 0.05;
		maxSpeed = 200;
		thrustTime = 3;
		thrust = 130;
		fuseDistance = 50;
		whistleDist = 4;
	};
	class OPTRE_M_ASGM2_AA: M_Air_AA
	{
		//Used by: AA Warthog, M9 Wolverine, Skyhawk, F99 Wombat UCAV, AC-220 Vulture 
		model = "OPTRE_weapons\Aircraft\ASGM2_missile_fly.p3d";
		hit = 400;
		indirectHit = 40;
		indirectHitRange = 5;
		allowAgainstInfantry = 1;
		airLock = 2;
		irLock = 1;
	};
	class OPTRE_M_ASGM4_AA : M_Air_AA
	{
		// Used by: LAU-65 (Submunition)
		model = "OPTRE_Weapons\static\LAU65D\Rocket\ASGM4_missile_fly.p3d";
		initTime = 0.5;
		missileLockCone = 120;
		airFriction = 0.05;
		maxspeed = 600;
		fuseDistance = 50;
		maneuvrability = 15;
		sideAirFriction = 0.1;
		thrust = 385;
		thrustTime = 2.5;
		trackLead = 1;
		trackOversteer = 1;
		airLock = 1;
		irLock = 1;
		explosive = 0.6;
		indirectHit = 50;
		indirectHitRange = 7;
		hit = 200;
		//ai and usage
		aiAmmoUsageFlags = "128+256+512";
		weaponLockSystem = "2 + 16";
		missileLockMinDistance = 100;
		missileLockMaxDistance = 3000;
	}; 
	class OPTRE_M_C2GMLS_AA: OPTRE_M_ASGM2_AA
	{
		//Used by: AV-14 Hornet
		model = "OPTRE_weapons\Aircraft\ASGM2_missile_fly.p3d";
		hit = 250;
		indirectHit = 70;
		indirectHitRange = 7;
		allowAgainstInfantry = 1;
		airLock = 1;
		irLock = 1;
	};
	class OPTRE_M_ASGM10_AA: M_Zephyr
	{
		//Used by: G/A TL-1 Longsword, M95 Lance
		model = "OPTRE_weapons\Aircraft\ASGM10_missile_fly.p3d";
		hit = 850;
		indirectHit = 50;
		indirectHitRange = 7;
		allowAgainstInfantry = 1;
		airLock = 2;
		irLock = 1;
	};
	class OPTRE_M_Scorpion_AT: M_Scalpel_AT
	{
		//Used by: G/A TL-1 Longsword, Skyhawk, F99 Wombat UCAV
		model = "OPTRE_weapons\Aircraft\Scorpion_missile_fly.p3d";
		hit = 1750;
		indirectHit = 60;
		indirectHitRange = 7;
		explosive = 1;
		irLock = 1;
		laserLock = 0;
	};
	class OPTRE_M_Jackknife_LGM: M_Scalpel_AT
	{
		//Used by: G/A TL-1 Longsword, F99 Wombat UCAV
		model = "OPTRE_weapons\Aircraft\Jackknife_missile_fly.p3d";
		hit = 2200;
		indirectHit = 100;
		indirectHitRange = 10;
		explosive = 1;
		irLock = 0;
		laserLock = 1;
	};
	class OPTRE_M_ANVIL_1_Rocket: M_AT
	{
		//Used by: G/A TL-1 Longsword, G77H-TC Pelican (Older Models)
		model = "OPTRE_weapons\rockets\M41_rocket.p3d";
		hit = 700;
		indirectHit = 50;
		indirectHitRange = 8;
		explosive = 1;
	};
	class OPTRE_M_ANVIL_2_IR: M_AT
	{
		//Used by: G/A TL-1 Longsword,  G77H-TC Pelican (Newer Models)
		model = "OPTRE_weapons\rockets\M41_rocket.p3d";
		hit = 800;
		indirectHit = 60;
		indirectHitRange = 8;
		explosive = 1;
		canlock = 2;
		airLock = 1;
		irLock = 1;
		laserLock = 0;
	};
	class OPTRE_M_ANVIL_3_LGM: OPTRE_M_ANVIL_2_IR
	{
		//Used by: G/A TL-1 Longsword,  G77H-TC Pelican (Newer Models)
		model = "OPTRE_weapons\rockets\M41_rocket.p3d";
		hit = 850;
		indirectHit = 60;
		indirectHitRange = 8;
		explosive = 1;
		airLock = 1;
		irLock = 1;
		canlock = 2;
		laserLock = 1;
	};
	class OPTRE_M_ANVIL_4_ARTY: R_230mm_HE
	{
		//Used by: AC-220 Vulture
		model = "OPTRE_weapons\rockets\M41_rocket.p3d";
		hit = 800;
		indirectHit = 70;
		indirectHitRange = 9;
		explosive = 1;
		simulation = 'shotRocket';
		submunitionAmmo = '';
	};
	//Aircraft Bombs
	class OPTRE_Bo_500lb: Bo_Mk82
	{
		//Used by: G/A TL-1 Longsword, B-65 Shortsword
		model = "OPTRE_weapons\Aircraft\500lb_bomb_fly.p3d";
		hit = 5000;
		indirectHit = 1100;
		indirectHitRange = 12;
		caliber = 1;
		explosive = 1;
	};
	class OPTRE_Bo_1000lb: OPTRE_Bo_500lb
	{
		//Used by: G/A TL-1 Longsword, B-65 Shortsword
		model = "OPTRE_weapons\Aircraft\1000lb_bomb_fly.p3d";
		hit = 8000;
		indirectHit = 2200;
		indirectHitRange = 20;
		caliber = 2;
		explosive = 1;
	};
	class OPTRE_Bo_2000lb: OPTRE_Bo_500lb
	{
		//Used by: G/A TL-1 Longsword, B-65 Shortsword
		model = "OPTRE_weapons\Aircraft\2000lb_bomb_fly.p3d";
		hit = 12000;
		indirectHit = 4000;
		indirectHitRange = 35;
		caliber = 4;
		explosive = 1;
	};
	class OPTRE_Bo_GBU1071_LGB: Bo_GBU12_LGB
	{
		//Used by: G/A TL-1 Longsword, B-65 Shortsword
		model = "OPTRE_weapons\Aircraft\gbu_bomb_fly.p3d";
		hit = 7500;
		indirectHit = 2000;
		indirectHitRange = 16;
		caliber = 2;
		explosive = 1;
	};
	class OPTRE_Bo_cluster_AP: Cluster_155mm_AMOS
	{
		artilleryLock = 0;
		model = "OPTRE_weapons\Aircraft\1000lb_bomb_fly.p3d";
		//Used by: G/A TL-1 Longsword, B-65 Shortsword
		//Broken.  Simulation shotSubmunition only works with Artillery.  Go figure.  Will need to use scripts to solve this.  
	};
	class OPTRE_Bo_scattermine_AP: Mine_155mm_AMOS_Range
	{
		artilleryLock = 0;
		audiblefire = 0;
		maxspeed = 100;
		model = "OPTRE_weapons\Aircraft\1000lb_bomb_fly.p3d";
		//Used by: G/A TL-1 Longsword, B-65 Shortsword
		//Broken.  Simulation shotSubmunition only works with Artillery.  Go figure.  Will need to use scripts to solve this.  
	};
	class OPTRE_M_Shiva_Nuke: OPTRE_M_Jackknife_LGM
	{
		//Used by: G/A TL-1 Longsword, UNSC Warships
		model = "OPTRE_weapons\Aircraft\Shiva_missile_fly.p3d";
		hit = 11000;
		indirectHit = 1000;
		indirectHitRange = 500;
		explosive = 1;
		irLock = 0;
		laserLock = 1;
		initTime = 5;
	};
	class OPTRE_Exp_Hydrogen_Small: Bo_Mk82
	{
		//Used by: Hydrogen Barrel
		model = "\OPTRE_Buildings\Military\OPTRE_barrel_hydrogen.p3d";
		effectssmoke = "";
		explosioneffects = "ExploAmmoExplosion";
		explosionEffectsRadius = 4;
		CraterEffects = "GrenadeCrater";
		hit = 80;
		indirectHit = 80;
		indirectHitRange = 1.5;
		caliber = 0.7;
		explosive = 0.7;
	};
	
	class OPTRE_Exp_Fusion_Coil: Bo_Mk82
	{
		//Used by: Fusion Coil
		model = "\OPTRE_Buildings\Military\OPTRE_fusion_coil.p3d";
		effectsSmoke = "";
		explosioneffects = "ExploAmmoExplosion";
		explosionEffectsRadius = 5;
		CraterEffects = "GrenadeCrater";
		hit = 175;
		indirectHit = 175;
		indirectHitRange = 2;
		caliber = 0.5;
		explosive = 0.95;
	};
	
	
	//Rockets
	class OPTRE_M41_Rocket_HEAT: R_PG32V_F
	{
		model = "OPTRE_weapons\rockets\M41_rocket.p3d";
		hit = 700;
		indirectHit = 10;
		indirectHitRange = 2.5;
		explosive = 0.8;
		cost = 500;
		airFriction = 0;
		sideairFriction = 0;
		coefGravity = 0.0;
		maxSpeed = 150;
		typicalSpeed = 150;
		initTime = 0;
		thrustTime = 0.1;
		thrust = 0.1;
		fuseDistance = 15;
		simulationStep = 0.02;
		airLock = 0;
		irLock = 0;
		laserLock = 0;
		timeToLive = 30;
		maneuvrability = 0;
		allowAgainstInfantry = 0;
	};
	class OPTRE_M41_Rocket_HEAT_Guided: OPTRE_M41_Rocket_HEAT
	{
		model = "OPTRE_weapons\rockets\M41_rocket.p3d";
		irLock = 2;
		airLock = 2;
		laserLock = 2;
		canLock = 2;
		maneuvrability = 10;
		simulationStep = 0.002;
		trackOversteer = 1;
		trackLead = 1;
		initTime = 0.25;
		thrustTime = 2.5;
		thrust = 385;
	};
	class OPTRE_M41_Rocket_HEAP: OPTRE_M41_Rocket_HEAT
	{
		model = "OPTRE_weapons\rockets\M41_rocket.p3d";
		hit = 300;
		indirectHit = 100;
		indirectHitRange = 10;
		explosive = 1;
		allowAgainstInfantry = 1;
	};
	
	//Grenades
	class OPTRE_G_M9_Frag: GrenadeHand
	{
		model 							= "\OPTRE_Weapons\explosives\m9_grenade.p3d";
		hit 							= 10;
		indirectHit 					= 10;
		indirectHitRange 				= 8;
		visibleFire 					= 0.5;
		audibleFire 					= 0.05;
		visibleFireTime 				= 1;
		fuseDistance 					= 0;
	};
	class OPTRE_G_M2_Smoke: SmokeShell
	{
		model 							= "\OPTRE_Weapons\explosives\m2_smk_grenade.p3d";
		smokeColor[]  					= {1,1,1,1};
	};
	class OPTRE_G_M2_RSmoke: OPTRE_G_M2_Smoke
	{
		smokeColor[]  					= {0.8438,0.1383,0.1353,1};
	};
	class OPTRE_G_M2_GSmoke: OPTRE_G_M2_Smoke
	{
		smokeColor[]  					= {0.2125,0.6258,0.4891,1};
	};
	class OPTRE_G_M2_BSmoke: OPTRE_G_M2_Smoke
	{
		smokeColor[]  					= {0.1183,0.1867,1,1};
	};
	class OPTRE_G_M2_OSmoke: OPTRE_G_M2_Smoke
	{
		smokeColor[]  					= {0.6697,0.2275,0.10053,1};
	};
	class OPTRE_G_M2_YSmoke: OPTRE_G_M2_Smoke
	{
		smokeColor[]  					= {0.9883,0.8606,0.0719,1};
	};
	class OPTRE_G_M2_PSmoke: OPTRE_G_M2_Smoke
	{
		smokeColor[]  					= {0.4341,0.1388,0.4144,1};
	};
	class OPTRE_G_M8_Flare: OPTRE_G_M2_Smoke
	{
		model 							= "\OPTRE_Weapons\explosives\m8_flare.p3d";
		lightColor[]					= {0.5,0.25,0.25,0};
		effectsSmoke					= "ChemlightLight_red";
		effectFlare						= "CounterMeasureFlare";
		useFlare 						= 1;
		timeToLive						= 900;
		grenadeFireSound[]				= {};
		grenadeBurningSound[]			= {};
		aiAmmoUsageFlags				= "2 + 1";
		brightness						= 12;
		size							= 1;
		triggerTime						= 3;
		triggerSpeedCoef				= 1;
	};
	class OPTRE_G_ELB47_Strobe: B_IRStrobe
	{
		model 							= "\OPTRE_Weapons\items\beacon.p3d";
		class NVGMarkers
		{
			class Blinking1
			{
			};
		};
	};
};