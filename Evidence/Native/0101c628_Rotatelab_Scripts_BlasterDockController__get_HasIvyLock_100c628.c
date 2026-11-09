/* IL2CPP: Rotatelab.Scripts.BlasterDockController$$get_HasIvyLock
bool Rotatelab_Scripts_BlasterDockController__get_HasIvyLock (Rotatelab_Scripts_BlasterDockController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterDockController$$get_HasIvyLock
   bool Rotatelab_Scripts_BlasterDockController__get_HasIvyLock
   (Rotatelab_Scripts_BlasterDockController_o* __this, const MethodInfo* method); */

uint Rotatelab_Scripts_BlasterDockController__get_HasIvyLock_100c628
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 unaff_r4;
  undefined4 uVar2;
  undefined4 unaff_r5;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_0101c68c + 0x101c63c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101c690 + 0x101c650));
    *pcVar3 = '\x01';
    param_4 = extraout_r3;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x48);
  if (*(int *)(**(int **)(_UNK_0101c694 + 0x101c664) + 0x74) == 0) {
    FUN_00ec3934();
    param_4 = extraout_r3_00;
  }
  pcVar3 = (char *)(_UNK_03611948 + 0x36118fc);
  if (*pcVar3 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0361194c + 0x3611910),0,0,param_4,unaff_r4,unaff_r5);
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_03611950 + 0x3611924) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  uVar1 = UnityEngine_Object__CompareBaseObjects_3607f30(uVar2,0);
  return uVar1 ^ 1;
}

