class CfgVehicles
{
	class All;
	class AllVehicles : All {};
	class Land : AllVehicles {};
	class LandVehicle : Land {};
	
	class car : LandVehicle
	{
		rightDustEffects[] = {{ "beach","RDustEffects" },{ "beach","RSandEffects" },{ "beach","RDirtEffects" },{ "beach","RStonesEffects"}};
		leftDustEffects[] = {{ "beach","RDustEffects" },{ "beach","RSandEffects" },{ "beach","RDirtEffects" },{ "beach","RStonesEffects"}};
	};
	class tank: LandVehicle
	{
		rightDustEffects[] = {{ "beach","RDustEffects" },{ "beach","RSandEffects" },{ "beach","RDirtEffects" },{ "beach","RStonesEffects"}};
		leftDustEffects[] = {{ "beach","RDustEffects" },{ "beach","RSandEffects" },{ "beach","RDirtEffects" },{ "beach","RStonesEffects"}};
	};
	class Air: AllVehicles
	{
		rightDustEffects[] = {{ "beach","RDustEffectsAir" },{ "beach","RSandEffects" },{ "beach","RDirtEffects" },{ "beach","RStonesEffects"}};
		leftDustEffects[] = {{ "beach","LDustEffectsAir" },{ "beach","RSandEffects" },{ "beach","RDirtEffects" },{ "beach","RStonesEffects"}};
	};
	class Man: Land
	{
		rightDustEffects[] = {{ "beach","RDustEffectsMan" },{ "beach","RSandEffects" },{ "beach","RDirtEffects" },{ "beach","RStonesEffects"}};
		leftDustEffects[] = {{ "beach","RDustEffectsMan" },{ "beach","RSandEffects" },{ "beach","RDirtEffects" },{ "beach","RStonesEffects"}};
	};
};