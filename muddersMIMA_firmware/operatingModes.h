//Copyright 2022-2023(c) John Sullivan


#ifndef modes_h
	#define modes_h
	
	#define  Boost 	35  	// must be > Cruise
	#define  Cruise 25 	// provides assist during cruise. 
	#define  Coast 	12  	// compensates for voltage spoofing, must be >10
	#define  Brake 	37   	// replaces OEM brake regen to mask 3rd gear glitch & provide full regen under braking in all gears
	#define	 tpsoffset 9 	// throttle position offset at zero
	#define	 maxmph 112	// maximum MPH safeguard
				// LIBCM config (REDUCE_BACKGROUND_REGEN_UNLESS_BRAKING) does not need to be defined since this mode does not allow background regen.
	void operatingModes_handler(void);

#endif
