/* IL2CPP: Rotatelab.Scripts.PilotBlasterController$$SetSkinnedRendererActive
void Rotatelab_Scripts_PilotBlasterController__SetSkinnedRendererActive (Rotatelab_Scripts_PilotBlasterController_o* __this, bool isActive, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PilotBlasterController$$SetSkinnedRendererActive
   void Rotatelab_Scripts_PilotBlasterController__SetSkinnedRendererActive
   (Rotatelab_Scripts_PilotBlasterController_o* __this, bool isActive, const MethodInfo* method); */

void Rotatelab_Scripts_PilotBlasterController__SetSkinnedRendererActive_103f920
               (int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  float fVar6;
  
  pcVar3 = (char *)(_UNK_0104fad8 + 0x104f940);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104fadc + 0x104f954));
    *pcVar3 = '\x01';
  }
  Rotatelab_Scripts_BlasterController__SetSkinnedRendererActive_1033038(param_1,param_2,0);
  iVar1 = Rotatelab_Scripts_BasePlaceableController__get_Row_10303f8(param_1,0);
  fVar6 = 1.0;
  if (iVar1 != 0) {
    uVar4 = *(undefined4 *)(param_1 + 0xbc);
    if (*(int *)(**(int **)(_UNK_0104fae0 + 0x104f990) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = UnityEngine_Object__op_Inequality_36018e4(uVar4,0,0);
    if (iVar1 == 0) {
      fVar6 = *(float *)(param_1 + 0x148);
    }
  }
  iVar1 = *(int *)(param_1 + 0x128);
  pcVar3 = (char *)(_UNK_0104fae4 + 0x104f9cc);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104fae8 + 0x104f9e0));
    *pcVar3 = '\x01';
  }
  piVar5 = *(int **)(_UNK_0104faec + 0x104f9f8);
  iVar2 = *(int *)(*piVar5 + 0x5c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc
            (iVar1,fVar6 * *(float *)(iVar2 + 0xc),fVar6 * *(float *)(iVar2 + 0x10),
             fVar6 * *(float *)(iVar2 + 0x14),0);
  if (*(int *)(param_1 + 0x130) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x130),0);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104faf0 + 0x104fa7c));
    *pcVar3 = '\x01';
  }
  iVar2 = *(int *)(*piVar5 + 0x5c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc
            (iVar1,fVar6 * *(float *)(iVar2 + 0xc),fVar6 * *(float *)(iVar2 + 0x10),
             fVar6 * *(float *)(iVar2 + 0x14),0);
  return;
}

