
#include "main.h"

static uint8_t order = 0;
static bool is_enabled = false;

void SolenoidDrive(uint8_t order);
void enable(void);
void disable(void);
bool is_ES_opened(void);
