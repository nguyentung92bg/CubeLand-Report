/* IL2CPP: Rotatelab.Scripts.DockManager$$OnMagnetAnimationStartedHandler
void Rotatelab_Scripts_DockManager__OnMagnetAnimationStartedHandler (Rotatelab_Scripts_DockManager_o* __this, Rotatelab_Scripts_BlasterController_o* pulledBlaster, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.DockManager$$OnMagnetAnimationStartedHandler
   void Rotatelab_Scripts_DockManager__OnMagnetAnimationStartedHandler
   (Rotatelab_Scripts_DockManager_o* __this, Rotatelab_Scripts_BlasterController_o* pulledBlaster,
   const MethodInfo* method); */

void Rotatelab_Scripts_DockManager__OnMagnetAnimationStartedHandler_1008d64
               (undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01018e2c + 0x1018d80);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01018e30 + 0x1018d94));
    *pcVar3 = '\x01';
  }
  if (param_2 != (int *)0x0) {
    uVar2 = (uint)*(byte *)(**(int **)(_UNK_01018e34 + 0x1018db0) + 0xb8);
    if ((uVar2 <= *(byte *)(*param_2 + 0xb8)) &&
       (*(int *)(*(int *)(*param_2 + 100) + uVar2 * 4 + -4) == **(int **)(_UNK_01018e34 + 0x1018db0)
       )) {
      pcVar3 = (char *)(_UNK_01018e38 + 0x1018de4);
      if (*pcVar3 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_01018e3c + 0x1018df8));
        *pcVar3 = '\x01';
      }
      puVar1 = *(undefined4 **)(**(int **)(_UNK_01018e40 + 0x1018e0c) + 0x5c);
      Rotatelab_Scripts_DockManager__RestorePilotBlasterDocks_1008974
                (param_1,*puVar1,puVar1[1],puVar1[2],0x3e800000);
    }
  }
  return;
}

