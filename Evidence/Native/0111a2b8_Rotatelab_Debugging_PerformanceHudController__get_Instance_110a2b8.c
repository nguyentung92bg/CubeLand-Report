/* IL2CPP: Rotatelab.Debugging.PerformanceHudController$$get_Instance
Rotatelab_Debugging_PerformanceHudController_o* Rotatelab_Debugging_PerformanceHudController__get_Instance (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.PerformanceHudController$$get_Instance
   Rotatelab_Debugging_PerformanceHudController_o*
   Rotatelab_Debugging_PerformanceHudController__get_Instance (const MethodInfo* method); */

undefined4 Rotatelab_Debugging_PerformanceHudController__get_Instance_110a2b8(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_0111a2fc + 0x111a2c8);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111a300 + 0x111a2dc));
    *pcVar1 = '\x01';
  }
  return **(undefined4 **)(**(int **)(_UNK_0111a304 + 0x111a2f0) + 0x5c);
}

