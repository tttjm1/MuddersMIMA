//Copyright 2022-2023(c) John Sullivan


#ifndef modes_h
	#define modes_h
	
	#define  Cruise 10 	// default=10 provides assist during cruise. 
	#define  Boost 	12 	// must be > or = Cruise
	#define  Coast 	12   	// off-throttle regen, level reduced to offset increase in power with increased voltage
	#define  Brake 	15   	// replicates OEM brake regen buts masks 3rd gear glitch to provide full regen under braking in all gears
	#define	 tpsoffset 9 	// throttle position offset at zero
	#define	 maxmph 112 	// maximum MPH safeguard
				 // LIBCM config (REDUCE_BACKGROUND_REGEN_UNLESS_BRAKING) does not need to be defined since this mode does not allow background regen.
	void operatingModes_handler(void);

#endif
