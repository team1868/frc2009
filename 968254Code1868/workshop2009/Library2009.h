#ifndef LIBRARY2009_H_
#define LIBRARY2009_H_

#define SHOOT_BUTTON ds->GetDigitalIn(4)
#define	PICK_UP_BUTTON ds->GetDigitalIn(6)
#define	UNJAM_BUTTON ds->GetDigitalIn(1)
#define	EXAUHST_BUTTON ds->GetDigitalIn(2)

class Library2009{
public:
	static float analogWheelInScale(float oldx);
	static float analogJoystickInScale(float oldx);
	static void conveyorControl(void);
};

#endif
