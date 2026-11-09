/* IL2CPP: Rotatelab.Scripts.BlasterDockController$$Init
void Rotatelab_Scripts_BlasterDockController__Init (Rotatelab_Scripts_BlasterDockController_o* __this, int32_t levelDifficulty, bool isExtraSlot, bool hasIvyLock, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterDockController$$Init
   void Rotatelab_Scripts_BlasterDockController__Init (Rotatelab_Scripts_BlasterDockController_o*
   __this, int32_t levelDifficulty, bool isExtraSlot, bool hasIvyLock, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterDockController__Init_10057a8
               (int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_0101595c + 0x10157c8);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01015960 + 0x10157dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01015964 + 0x10157e8));
    *pcVar6 = '\x01';
  }
  *(char *)(param_1 + 0x38) = (char)param_3;
  if (param_3 == 0) {
    Rotatelab_Scripts_BlasterDockController__ApplyLightMode_100cc0c(param_1);
  }
  else {
    if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Renderer__set_material_35c59b4
              (*(int *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),0);
  }
  if (param_4 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x2c);
    iVar2 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__get_position_36149b0(&uStack_30,iVar2,0);
    pcVar6 = (char *)(_UNK_01015968 + 0x1015878);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0101596c + 0x101589c));
      *pcVar6 = '\x01';
    }
    puVar3 = *(undefined4 **)(**(int **)(_UNK_01015970 + 0x10158b4) + 0x5c);
    uVar7 = *puVar3;
    uVar8 = puVar3[1];
    uVar9 = puVar3[2];
    uVar10 = puVar3[3];
    uVar4 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    if (*(int *)(**(int **)(_UNK_01015974 + 0x10158d4) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar2 = UnityEngine_Object__Instantiate_object__14d51e0
                      (uVar1,uStack_30,uStack_2c,uStack_28,uVar7,uVar8,uVar9,uVar10,uVar4,
                       **(undefined4 **)(_UNK_01015978 + 0x10158f4));
    piVar5 = (int *)(param_1 + 0x48);
    *piVar5 = iVar2;
    thunk_FUN_00ec5080(piVar5,iVar2);
    if (*piVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_IvyLockController__Init_100ccfc(*piVar5);
  }
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = 2;
  }
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  Rotatelab_Scripts_BlasterDockController__UpdateAnimationState_100ce9c(param_1,1);
  return;
}

