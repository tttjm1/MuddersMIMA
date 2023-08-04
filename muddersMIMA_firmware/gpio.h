#ifndef gpio_h
	#define gpio_h
	
	#define BUTTON_PRESSED      0
	#define BUTTON_NOT_PRESSED  1

	#define TOGGLE_POSITION0 3
	#define TOGGLE_POSITION1 1
	#define TOGGLE_POSITION2 2
	#define TOGGLE_UNDEFINED 0

	#define BRAKE_LIGHTS_ARE_ON  true
	#define BRAKE_LIGHTS_ARE_OFF false

	void gpio_begin(void);

	bool gpio_getButton_momentary(void);

	uint8_t gpio_getButton_toggle(void);

	void gpio_setMCM_MAMODE1_percent(uint8_t newPercent);
	
	void gpio_setMCM_CMDPWR_percent(uint8_t newPercent);

	uint8_t gpio_getMCM_CMDPWR_percent(void);

	bool gpio_getECM_MAMODE2_bool(void);
	
	void gpio_setMCM_MAMODE2_bool(bool mode);

	bool gpio_getBrakePosition_bool(void);

	void gpio_brakeLights_turnOn(void);

	void gpio_brakeLights_turnOff(void);

	void gpio_brakeLights_floatPin(void);

#endif