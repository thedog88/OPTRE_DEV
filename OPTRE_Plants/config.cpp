class CfgPatches 
{
	class OPTRE_Plants 
	{
		units[] = {"OPTRE_tree_Purp_1","OPTRE_tree_Purp_2"};
		weapons[] = {};
		worlds[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] = {"OPTRE_Core","A3_data_f"};
	};
};

class cfgVehicleClasses {

	class OPTRE_Plants {
		displayName = "Plants (OPTRE)";
	};
};

class CfgVehicles 
{
	class All {};
	class Static: All {};
	class Building: Static {};
	class NonStrategic: Building {};
	class TargetTraining: NonStrategic {};
	class TargetGrenade: TargetTraining {};
	
	class OPTRE_tree_Purp_1: static 
	{
		dlc = "OPTRE";
		scope = 2;
		model = "optre_plants\t_quercus2f.p3d";
		icon = "IconCrateWpns";
		displayName = "Tree 1 (Purple)";
		vehicleclass = "OPTRE_Plants";
		destrType = "DestructWall";
		accuracy = 1000;
		cost = 1000;
		class DestructionEffects{};
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Plants";
	};
	class OPTRE_tree_Purp_2: OPTRE_tree_Purp_1 
	{
		dlc = "OPTRE";
		model = "optre_plants\t_quercus3s.p3d";
		icon = "IconCrateWpns";
		displayName = "Tree 2 (Purple)";
	};
	class OPTRE_tree_Blue_1: OPTRE_tree_Purp_1 
	{
		dlc = "OPTRE";
		model = "optre_plants\t_quercus2f_blue.p3d";
		icon = "IconCrateWpns";
		displayName = "Tree 1 (Blue)";
	};
	class OPTRE_tree_Blue_2: OPTRE_tree_Purp_1 
	{
		dlc = "OPTRE";
		model = "optre_plants\t_quercus3s_blue.p3d";
		icon = "IconCrateWpns";
		displayName = "Tree 2 (Blue)";
	};
	class OPTRE_tree_Red_1: OPTRE_tree_Purp_1 
	{
		dlc = "OPTRE";
		model = "optre_plants\t_quercus2f_red.p3d";
		icon = "IconCrateWpns";
		displayName = "Tree 1 (Red)";
	};
	class OPTRE_tree_Red_2: OPTRE_tree_Purp_1 
	{
		dlc = "OPTRE";
		model = "optre_plants\t_quercus3s_red.p3d";
		icon = "IconCrateWpns";
		displayName = "Tree 2 (Red)";
	};
};