
#include <math.h>
#include "./mysqrt.h"
#include "../TutorialConfig.h"

double mysqrt(double value)
{
// if we have both log and exp then use them
#if defined(HAVE_LOG) && defined(HAVE_EXP)
    return exp(log(x) * 0.5);
#else
    return sqrt(value);
#endif
}