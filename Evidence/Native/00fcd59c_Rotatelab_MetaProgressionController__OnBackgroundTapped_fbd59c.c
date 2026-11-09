/* IL2CPP: Rotatelab.MetaProgressionController$$OnBackgroundTapped
void Rotatelab_MetaProgressionController__OnBackgroundTapped (Rotatelab_MetaProgressionController_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.MetaProgressionController$$OnBackgroundTapped
   void Rotatelab_MetaProgressionController__OnBackgroundTapped
   (Rotatelab_MetaProgressionController_o* __this, UnityEngine_EventSystems_PointerEventData_o*
   eventData, const MethodInfo* method); */

void Rotatelab_MetaProgressionController__OnBackgroundTapped_fbd59c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 unaff_r4;
  undefined4 uVar4;
  undefined4 unaff_r5;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  
  pcVar5 = (char *)(_UNK_00fcd618 + 0xfcd5b0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcd61c + 0xfcd5c4));
    *pcVar5 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(char *)(param_2 + 0x131) != '\0') {
    return;
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00fcd620 + 0xfcd5f0));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar5 = (char *)(_UNK_0113790c + 0x1137704);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01137910 + 0x1137718),1,0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_01137914 + 0x1137724));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01137918 + 0x1137730));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113791c + 0x113773c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01137920 + 0x1137748));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01137924 + 0x1137754));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(_UNK_01137928 + 0x1137768);
  uVar7 = *(undefined4 *)(iVar1 + 0x30);
  iVar2 = *piVar6;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar6;
  }
  puVar3 = *(undefined4 **)(iVar2 + 0x5c);
  iVar8 = puVar3[1];
  if (iVar8 == 0) {
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(*piVar6 + 0x5c);
    }
    uVar4 = *puVar3;
    iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0113792c + 0x11377b4));
    System_Func_object__Int32Enum__bool____ctor_239e560
              (iVar8,uVar4,**(undefined4 **)(_UNK_01137930 + 0x11377d4),0);
    piVar6 = (int *)(*(int *)(*piVar6 + 0x5c) + 4);
    *piVar6 = iVar8;
    thunk_FUN_00ec5080(piVar6,iVar8);
  }
  if (*(int *)(**(int **)(_UNK_01137934 + 0x11377fc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = Rotatelab_Extensions__Find_object__Int32Enum__1486c7c
                    (uVar7,1,iVar8,**(undefined4 **)(_UNK_01137938 + 0x1137820),unaff_r4,unaff_r5);
  piVar6 = *(int **)(_UNK_0113793c + 0x113783c);
  piVar9 = (int *)(iVar1 + 0x34);
  iVar8 = *piVar9;
  if (*(int *)(*piVar6 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar8 = UnityEngine_Object__op_Equality_36033f4(iVar2,iVar8,0);
  if (iVar8 == 0) {
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar8 = Rotatelab_UI_PageButtonBase__SetPageEnable_1128454(iVar2,1);
    if (iVar8 != 0) {
      iVar8 = *piVar9;
      if (*(int *)(*piVar6 + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar8 = UnityEngine_Object__op_Inequality_36018e4(iVar8,0,0);
      if (iVar8 != 0) {
        if (*piVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_UI_PageButtonBase__SetPageEnable_1128454(*piVar9,0);
      }
      *(int *)(iVar1 + 0x34) = iVar2;
      thunk_FUN_00ec5080(piVar9,iVar2);
      iVar1 = *(int *)(iVar1 + 0x38);
      if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01137904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),1,*(undefined4 *)(iVar1 + 0x14));
        return;
      }
    }
  }
  return;
}

