/* IL2CPP: Rotatelab.Scripts.UtilityPlaceableController$$Place
void Rotatelab_Scripts_UtilityPlaceableController__Place (Rotatelab_Scripts_UtilityPlaceableController_o* __this, Rotatelab_Scripts_UtilityDockController_o* dock, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.UtilityPlaceableController$$Place
   void Rotatelab_Scripts_UtilityPlaceableController__Place
   (Rotatelab_Scripts_UtilityPlaceableController_o* __this,
   Rotatelab_Scripts_UtilityDockController_o* dock, const MethodInfo* method); */

void Rotatelab_Scripts_UtilityPlaceableController__Place_104f080(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char *pcVar10;
  int *piVar11;
  int iVar12;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar10 = (char *)(_UNK_0105f350 + 0x105f09c);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105f354 + 0x105f0b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105f358 + 0x105f0bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105f35c + 0x105f0c8));
    *pcVar10 = '\x01';
  }
  piVar11 = (int *)(param_1 + 0x44);
  iVar12 = *piVar11;
  if (*(int *)(**(int **)(_UNK_0105f360 + 0x105f0e0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar12 = UnityEngine_Object__op_Inequality_36018e4(iVar12,0,0);
  if (iVar12 != 0) {
    if (*piVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_BaseDockController__Empty_100b530(*piVar11,param_1,0);
  }
  *piVar11 = param_2;
  thunk_FUN_00ec5080(piVar11,param_2);
  if (*piVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_BaseDockController_object___Fill_1b27714
            (*piVar11,param_1,**(undefined4 **)(_UNK_0105f364 + 0x105f15c));
  iVar12 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar9 = UnityEngine_Component__get_transform_35fe190(param_2,0);
  if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__SetParent_3615994(iVar12,uVar9,1,0);
  Rotatelab_Scripts_UtilityPlaceableController__StopRotationTween_104d840(param_1);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_localPosition_3613b6c(&uStack_38,*(int *)(param_2 + 0x10),0);
  Rotatelab_Scripts_BasePlaceableController__LocalMove_10306f0
            (&uStack_38,param_1,uStack_38,uStack_34,uStack_30,0x3ec00000,0,0,0,0);
  uVar9 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (*(int *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_localRotation_3614f58(&uStack_38,*(int *)(param_2 + 0x10),0);
  uVar7 = uStack_2c;
  uVar5 = uStack_30;
  uVar3 = uStack_34;
  uVar1 = uStack_38;
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_38,9,0);
  uVar8 = uStack_2c;
  uVar6 = uStack_30;
  uVar4 = uStack_34;
  uVar2 = uStack_38;
  if (*(int *)(**(int **)(_UNK_0105f368 + 0x105f288) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__LocalRotation_2ce631c
            (&uStack_38,uVar9,uVar1,uVar3,uVar5,uVar7,0x3e800000,uVar2,uVar4,uVar6,uVar8,uStack_28,1
             ,0,0,0,0,0);
  *(ulonglong *)(param_1 + 0x48) = CONCAT44(uStack_34,uStack_38);
  *(ulonglong *)(param_1 + 0x50) = CONCAT44(uStack_2c,uStack_30);
  thunk_FUN_00ec5080(param_1 + 0x50,0);
  if (*(int *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_localScale_36154c0(&uStack_44,*(int *)(param_2 + 0x10),0);
  Rotatelab_Scripts_UtilityPlaceableController__Scale_104e45c(param_1,uStack_44,uStack_40,uStack_3c)
  ;
  Rotatelab_Scripts_UtilityPlaceableController__SyncIdleAnimationWithDockedSameType_104f36c(param_1)
  ;
  return;
}

