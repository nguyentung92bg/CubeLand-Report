/* IL2CPP: Rotatelab.UI.PageButtonBase$$<Initialize>b__12_0
void Rotatelab_UI_PageButtonBase___Initialize_b__12_0 (Rotatelab_UI_PageButtonBase_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.PageButtonBase$$<Initialize>b__12_0
   void Rotatelab_UI_PageButtonBase___Initialize_b__12_0 (Rotatelab_UI_PageButtonBase_o* __this,
   const MethodInfo* method); */

void Rotatelab_UI_PageButtonBase___Initialize_b__12_0_112d29c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 unaff_r5;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  
  pcVar7 = (char *)(_UNK_0113d300 + 0x113d2b0);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113d304 + 0x113d2c4));
    *pcVar7 = '\x01';
  }
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0113d308 + 0x113d2d8));
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar7 = (char *)(_UNK_0113790c + 0x1137704);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01137910 + 0x1137718));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01137914 + 0x1137724));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01137918 + 0x1137730));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113791c + 0x113773c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01137920 + 0x1137748));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01137924 + 0x1137754));
    *pcVar7 = '\x01';
  }
  piVar6 = *(int **)(_UNK_01137928 + 0x1137768);
  uVar8 = *(undefined4 *)(iVar2 + 0x30);
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar6;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x5c);
  iVar9 = puVar3[1];
  if (iVar9 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(*piVar6 + 0x5c);
    }
    uVar4 = *puVar3;
    iVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0113792c + 0x11377b4));
    System_Func_object__Int32Enum__bool____ctor_239e560
              (iVar9,uVar4,**(undefined4 **)(_UNK_01137930 + 0x11377d4),0);
    piVar6 = (int *)(*(int *)(*piVar6 + 0x5c) + 4);
    *piVar6 = iVar9;
    thunk_FUN_00ec5080(piVar6,iVar9);
  }
  if (*(int *)(**(int **)(_UNK_01137934 + 0x11377fc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Extensions__Find_object__Int32Enum__1486c7c
                    (uVar8,uVar5,iVar9,**(undefined4 **)(_UNK_01137938 + 0x1137820),unaff_r4,
                     unaff_r5);
  piVar6 = *(int **)(_UNK_0113793c + 0x113783c);
  piVar10 = (int *)(iVar2 + 0x34);
  iVar9 = *piVar10;
  if (*(int *)(*piVar6 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar9 = UnityEngine_Object__op_Equality_36033f4(iVar1,iVar9,0);
  if (iVar9 == 0) {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar9 = Rotatelab_UI_PageButtonBase__SetPageEnable_1128454(iVar1,1);
    if (iVar9 != 0) {
      iVar9 = *piVar10;
      if (*(int *)(*piVar6 + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar9 = UnityEngine_Object__op_Inequality_36018e4(iVar9,0,0);
      if (iVar9 != 0) {
        if (*piVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_UI_PageButtonBase__SetPageEnable_1128454(*piVar10,0);
      }
      *(int *)(iVar2 + 0x34) = iVar1;
      thunk_FUN_00ec5080(piVar10,iVar1);
      iVar2 = *(int *)(iVar2 + 0x38);
      if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01137904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar2 + 0xc))
                  (*(undefined4 *)(iVar2 + 0x20),uVar5,*(undefined4 *)(iVar2 + 0x14));
        return;
      }
    }
  }
  return;
}

