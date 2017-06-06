class CfgAmmo
{
	class OPTRE_25x130mm_Slug;
	class OPTRE_FC_16x65mm_Slug: OPTRE_25x130mm_Slug
	{
		hit 							= 100;
		indirectHit 					= 25;
		indirectHitRange 				= 0.25;
		cartridge 						= "FxCartridge_65_caseless";
		caliber 						= 100;
		coefGravity 					= 0.0;
		deflecting 						= 0;
		tracerScale 					= 1;
		tracerStartTime 				= 0.05;
		tracerEndTime 					= 1;
		tracersEvery 					= 1;
		model 							= "\A3\Weapons_f\Data\bullettracer\shell_tracer_white";
		typicalSpeed 					= 1000;
		maxSpeed 						= 1000;
		explosive 						= 0;
		airFriction 					= 0;
		sideairFriction 				= 0;
		timeToLive 						= 10;
	};
};