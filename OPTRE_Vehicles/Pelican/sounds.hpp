		attenuationEffectType = "HeliAttenuation"; //utlumovani v interieru (odkaz do Attenuation.hpp ve slozce SOUNDS_F

		soundGetIn[]={"A3\Sounds_F\air\Heli_Light_02\open",db-5,1};
		soundGetOut[]={"A3\Sounds_F\air\Heli_Light_02\close",db0,1, 50};
		soundEnviron[]={"", db-30, 1.0};
		soundDammage[]={"A3\Sounds_F\air\Heli_Light_02\crash", db-5, 1};
		soundEngineOnInt[] = {"A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_int_start_v2", db-5, 1.0};
		soundEngineOnExt[] = {"A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_ext_start_v2", db-2, 1.0, 600};
		soundEngineOffInt[] =  {"A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_int_stop_v2", db-5, 1.0};
		soundEngineOffExt[] =  {"A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_ext_stop_v2", db-2, 1.0, 600};
    		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_1", db-20, 1};
    		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_2", db-20, 1};

		class Sounds
		{
/*--------------------------------------------------------
					EXTERNAL SAMPLES KA60
  --------------------------------------------------------*/
			class Engine
			{
				sound[] = {"A3\Sounds_F\air\plane_fighter_03\Plane_Fighter_03_engi_ext", db-10, 1.0, 900}; // changed "db5" to "db-5"
				frequency = "rotorSpeed";
				volume = "0.5*camPos*((rotorSpeed-0.72)*4)";
				//volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[] = {"A3\Sounds_F\air\plane_fighter_03\Plane_Fighter_03_low_ext", db-5, 1.0, 1200}; // changed "db3" to "db-3"
				frequency = "rotorSpeed";
				volume = "0.5*camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust/3)*0.8";
				//volume = "camPos*(0 max (rotorSpeed-0.1))";
				cone[] = {1.6,3.14, 1.6, 0.95};
			};
			class RotorHighOut
			{
				sound[] = {"A3\Sounds_F\air\plane_fighter_03\Plane_Fighter_03_engi_ext", db-5, 1.0, 1500}; // changed "db5" to "db-5"
				frequency = "rotorSpeed";
				volume = "0.5*camPos*(rotorSpeed factor[0.4,1])";
				//volume = "camPos*10*(0 max (rotorThrust-0.9))" ;
				cone[] = {1.6,3.14, 1.6, 0.95};
			};
			class RotorNoiseExt
			{
				sound[] = {"A3\Sounds_F\air\plane_fighter_03\Plane_Fighter_03-fors_ext", db-5, 1, 800}; // changed "db0" to "db-0"
				frequency = 1;
				volume = "0.5*camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust/3)*0.8";
				cone[] = {1.6,3.14,1.6,0.95};
				//volume = "(camPos*(rotorSpeed factor [0.6, 0.85]))";
				//cone[] = {0.7, 1.3, 1.0, 0}; //smerovy kuzel zvuku - a=uhel vyzarovani zvuku b=uhel fadu (hranice vnejsiho fadu) x=hlasitost v vnitrnim kuzelu  y=hlasitost na druhou stranu smeru zvuku
			};


			class EngineLowIn
			{
				sound[] =  {"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_low_int", db-5, 1.0};
				frequency = "rotorSpeed";
				volume = "0.25*camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust/3)*0.8";
				//volume = (1-camPos)*((rpm factor[0.7, 0.1])*(rpm factor[0.1, 0.7]));
			};
			class EngineHighIn
			{
				sound[] =  {"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_engi_int", db-5, 1.2};
				frequency = "rotorSpeed";
				volume = "0.25*camPos*(rotorSpeed factor[0.4,1])";
				//volume = "(1-camPos)*(rpm factor[0.85, 1.0])";
			};
			class ForsageIn
			{
				sound[] =  {"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-fors_int", db-5, 1.0};
				frequency = "rotorSpeed";
				volume = "0.25*(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
				//volume = "(1-camPos)*(engineOn*(thrust factor[0.6, 1.0]))";
			};
			class WindNoiseIn
			{
				sound[] =  {"A3\Sounds_F\air\Plane_Fighter_03\noise", db-5, 1.0};
				frequency ="1";
				volume = "0.25*(1-camPos)*(speed factor[1, 150])";
			};
		};