class CfgSurfaces 
{
	class Default {};
	class grass_surface : Default
	{	
		 files = "gridlock_grass*";
		 rough = 0.09;
		 maxSpeedCoef = 0.85;
		 dust = 0.5;
		 soundEnviron = "dirt";
		 character = "grass_Character";
		 soundHit = "soft_ground";
		 lucidity = 1;
		 grassCover = 0.05;
	};
	class beach_surface : Default
	{	
		 files = "gridlock_beach*";
		 rough = 0.09;
		 maxSpeedCoef = 0.80;
		 dust = 0.5;
		 soundEnviron = "dirt";
		 character = "Empty";
		 soundHit = "soft_ground";
		 lucidity = 1;
		 grassCover = 0.03;
	};
	class dirt_surface : Default
	{	
		 files = "gridlock_dirt*";
		 rough = 0.09;
		 maxSpeedCoef = 0.85;
		 dust = 0.5;
		 soundEnviron = "dirt";
		 character = "Empty";
		 soundHit = "soft_ground";
		 lucidity = 1;
		 grassCover = 0.0;
	};
	class concrete_surface : Default
	{	
		files = "gridlock_concrete*";
		character = "Empty";
		soundEnviron = "concrete";
		soundHit = "concrete";
		rough = 0.05;
		maxSpeedCoef = 1;
		dust = 0.15;
		lucidity = 0.3;
		grassCover = 0.0;
		impact = "hitConcrete";
	};
};

class CfgSurfaceCharacters
{
	class grass_Character
  	{
			probability[]={0.6, 0.2};
			names[]={"Grass", "Flowers"};
  	};
};