/* IL2CPP: Rotatelab.UI.UIManager$$OpenPage
void Rotatelab_UI_UIManager__OpenPage (Rotatelab_UI_UIManager_o* __this, int32_t type, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.UIManager$$OpenPage
   void Rotatelab_UI_UIManager__OpenPage (Rotatelab_UI_UIManager_o* __this, int32_t type, const
   MethodInfo* method); */

void Rotatelab_UI_UIManager__OpenPage_11276ec(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  
  pcVar3 = (char *)(_UNK_0113790c + 0x1137704);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01137910 + 0x1137718));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01137914 + 0x1137724));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01137918 + 0x1137730));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113791c + 0x113773c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01137920 + 0x1137748));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01137924 + 0x1137754));
    *pcVar3 = '\x01';
  }
  piVar5 = *(int **)(_UNK_01137928 + 0x1137768);
  uVar6 = *(undefined4 *)(param_1 + 0x30);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar5;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x5c);
  iVar7 = puVar2[1];
  if (iVar7 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar2 = *(undefined4 **)(*piVar5 + 0x5c);
    }
    uVar4 = *puVar2;
    iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0113792c + 0x11377b4));
    System_Func_object__Int32Enum__bool____ctor_239e560
              (iVar7,uVar4,**(undefined4 **)(_UNK_01137930 + 0x11377d4),0);
    piVar5 = (int *)(*(int *)(*piVar5 + 0x5c) + 4);
    *piVar5 = iVar7;
    thunk_FUN_00ec5080(piVar5,iVar7);
  }
  if (*(int *)(**(int **)(_UNK_01137934 + 0x11377fc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Extensions__Find_object__Int32Enum__1486c7c
                    (uVar6,param_2,iVar7,**(undefined4 **)(_UNK_01137938 + 0x1137820));
  piVar5 = *(int **)(_UNK_0113793c + 0x113783c);
  piVar8 = (int *)(param_1 + 0x34);
  iVar7 = *piVar8;
  if (*(int *)(*piVar5 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar7 = UnityEngine_Object__op_Equality_36033f4(iVar1,iVar7,0);
  if (iVar7 == 0) {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = Rotatelab_UI_PageButtonBase__SetPageEnable_1128454(iVar1,1);
    if (iVar7 != 0) {
      iVar7 = *piVar8;
      if (*(int *)(*piVar5 + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar7 = UnityEngine_Object__op_Inequality_36018e4(iVar7,0,0);
      if (iVar7 != 0) {
        if (*piVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_UI_PageButtonBase__SetPageEnable_1128454(*piVar8,0);
      }
      *(int *)(param_1 + 0x34) = iVar1;
      thunk_FUN_00ec5080(piVar8,iVar1);
      iVar1 = *(int *)(param_1 + 0x38);
      if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01137904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar1 + 0xc))
                  (*(undefined4 *)(iVar1 + 0x20),param_2,*(undefined4 *)(iVar1 + 0x14));
        return;
      }
    }
  }
  return;
}

