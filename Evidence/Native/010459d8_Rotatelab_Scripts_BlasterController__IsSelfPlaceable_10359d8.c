/* IL2CPP: Rotatelab.Scripts.BlasterController$$IsSelfPlaceable
bool Rotatelab_Scripts_BlasterController__IsSelfPlaceable (Rotatelab_Scripts_BlasterController_o* __this, bool ignoreRowRestriction, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$IsSelfPlaceable
   bool Rotatelab_Scripts_BlasterController__IsSelfPlaceable (Rotatelab_Scripts_BlasterController_o*
   __this, bool ignoreRowRestriction, const MethodInfo* method); */

uint Rotatelab_Scripts_BlasterController__IsSelfPlaceable_10359d8(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01045b04 + 0x10459f0);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01045b08 + 0x1045a04));
    *pcVar4 = '\x01';
  }
  pcVar4 = (char *)(_UNK_01045b0c + 0x1045a18);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01045b10 + 0x1045a2c));
    *pcVar4 = '\x01';
  }
  if (**(char **)(**(int **)(_UNK_01045b14 + 0x1045a40) + 0x5c) == '\0') {
    if (((param_2 == 0) && (0 < *(int *)(param_1 + 0x20))) &&
       (iVar1 = Rotatelab_Boosters_MagnetBoosterController__get_IsActive_1137284(0), iVar1 == 0)) {
      return 0;
    }
    if (((*(int *)(param_1 + 0x94) < 1) && (*(char *)(param_1 + 0xc4) == '\0')) &&
       ((iVar1 = Rotatelab_Scripts_BlasterController__get_IsTrapOpen_1030e88(param_1), iVar1 != 0 &&
        (iVar1 = Rotatelab_Scripts_BlasterController__get_IsColorBarrelOpen_1030f00(param_1),
        iVar1 != 0)))) {
      if (*(char *)(param_1 + 0xc1) != '\0') {
        return 0;
      }
      uVar3 = *(undefined4 *)(param_1 + 0xbc);
      if (*(int *)(**(int **)(_UNK_01045b18 + 0x1045acc) + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar2 = UnityEngine_Object__op_Inequality_36018e4(uVar3,0,0);
      return uVar2 ^ 1;
    }
  }
  return 0;
}

