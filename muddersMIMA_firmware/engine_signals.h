//Copyright 2022-2023(c) John Sullivan


#ifndef engine_signals_h
	#define engine_signals_h

	#define ONE_MINUTE_IN_MICROSECONDS 60E6
	
	void engineSignals_begin(void);

	void engineSignals_handler(void);

	uint16_t engineSignals_getLatestRPM(void);

#endif