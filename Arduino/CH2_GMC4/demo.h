#ifdef __cplusplus
extern "C"
{
#endif

#ifndef __DEMO__
  #define __DEMO__

  #include <stdint.h>
  #include "systemout.h"
  #include "gmc4Vm.h"
  void startup();
  void ElectronicOrgan_GMC4Prog9();
  void PlayNotes_GMC4ProgA(Cpu_t *cpu);

#endif // __DEMO__

#ifdef __cplusplus
}
#endif
