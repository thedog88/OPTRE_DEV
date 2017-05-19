#define _ARMA_

//Class config.bin{
class CfgPatches
{
 class OPTRE_Sandstorm
 {
  units[] = {"OPTRE_Sandstorm"};
  weapons[] = {};
  requiredVersion = 1.0;
  requiredaddons[]={"A3_Map_Stratis"};
  version = "02/02/2015";
  fileName = "OPTRE_Sandstorm.pbo"; 
  author = "Lumnuon"; 
 };
};
class CfgWorlds
{
 class CAWorld;
 class Stratis: CAWorld
 {
  class Grid;
  class DefaultClutter;
 };
 class OPTRE_Sandstorm: Stratis
 {
  cutscenes[] = {};
  author = "Article 2 Studios"; 
  description = "Sandstorm"; // Name in editor
  pictureMap = "OPTRE_Sandstorm\data\picturemap_ca.paa"; //Picture of the map
  worldName = "OPTRE_Sandstorm\OPTRE_Sandstorm.wrp"; // WRP Export location
  startTime = "12:00"; // Default start time for missions
  startDate = "01/01/2015"; // Default start date for missions
  startWeather = 0.2; // Starting weather for missions
  startFog = 0.0; // Starting fog for missions
  forecastWeather = 0.6;
  forecastFog = 0.0;
  centerPosition[] = {1024,1024,500};
  seagullPos[] = {1024,1024,500}; //Position where players spawn as seagull
  longitude = 65;
  latitude = -34;
  elevationOffset = 5;
  envTexture = "A3\Data_f\env_land_ca.tga";
  minTreesInForestSquare = 2;
  minRocksInRockSquare = 2;
  newRoadsShape = "OPTRE_Sandstorm\data\roads\roads.shp";
  ilsPosition[] = {1024,1024}; 
  ilsDirection[] = {0.5075,0.08,-0.8616}; 
  ilsTaxiIn[] = {};
  ilsTaxiOff[] = {}; 
  drawTaxiway = 0; 
 class SecondaryAirports {}; 
class Sea
  {
   seaTexture = "a3\data_f\seatexture_co.paa";
   seaMaterial = "#water";
   shoreMaterial = "#shore";
   shoreFoamMaterial = "#shorefoam";
   shoreWetMaterial = "#shorewet";
   WaterMapScale = 20;
   WaterGrid = 50;
   MaxTide = 0;
   MaxWave = 0;
   SeaWaveXScale = "2.0/50";
   SeaWaveZScale = "1.0/50";
   SeaWaveHScale = 2.0;
   SeaWaveXDuration = 5000;
   SeaWaveZDuration = 10000;
  };
  class Grid: Grid
  {
   offsetX = 0;
   offsetY = 5120;
   class Zoom1
   {
    zoomMax = 0.15;
    format = "XY";
    formatX = "000";
    formatY = "000";
    stepX = 100;
    stepY = -100;
   };
   class Zoom2
   {
    zoomMax = 0.85;
    format = "XY";
    formatX = "00";
    formatY = "00";
    stepX = 1000;
    stepY = -1000;
   };
   class Zoom3
   {
    zoomMax = 1e+030.0;
    format = "XY";
    formatX = "0";
    formatY = "0";
    stepX = 10000;
    stepY = -10000;
   };
  };
#include "cfgVehicles.hpp"
#include "cfgClutter.hpp"
		class Names
		{
			#include "OPTRE_Sandstorm.hpp"
		};
	loadingTexts[] = {"Sandstorm was made with PvP combat in mind.","Settlers established small farms in this inhospitable area but they are heavily dependent on the UNSC to protect them."};
 };
};
class CfgWorldList
{
 class OPTRE_Sandstorm{};
};
class CfgMissions
{
 class Cutscenes
 {
 
 };
};

#include "cfgSurfaces.hpp"