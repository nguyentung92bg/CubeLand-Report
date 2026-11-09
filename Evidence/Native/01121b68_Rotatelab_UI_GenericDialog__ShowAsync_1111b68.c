/* IL2CPP: Rotatelab.UI.GenericDialog$$ShowAsync
Cysharp_Threading_Tasks_UniTask_int__o Rotatelab_UI_GenericDialog__ShowAsync (Rotatelab_UI_GenericDialog_o* __this, System_String_o* title, System_String_o* message, UnityEngine_Sprite_o* icon, Rotatelab_UI_GenericDialog_ButtonConfiguration_array* buttons, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.GenericDialog$$ShowAsync
   Cysharp_Threading_Tasks_UniTask_int__o Rotatelab_UI_GenericDialog__ShowAsync
   (Rotatelab_UI_GenericDialog_o* __this, System_String_o* title, System_String_o* message,
   UnityEngine_Sprite_o* icon, Rotatelab_UI_GenericDialog_ButtonConfiguration_array* buttons, const
   MethodInfo* method); */

void Rotatelab_UI_GenericDialog__ShowAsync_1111b68
               (undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int *piVar11;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_01121e84 + 0x1121b90);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01121e88 + 0x1121ba4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01121e8c + 0x1121bb0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01121e90 + 0x1121bbc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01121e94 + 0x1121bc8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01121e98 + 0x1121bd4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01121e9c + 0x1121be0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01121ea0 + 0x1121bec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01121ea4 + 0x1121bf8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01121ea8 + 0x1121c04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01121eac + 0x1121c10));
    *pcVar7 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01121eb0 + 0x1121c24));
  uVar2 = System_Object___ctor_2bb93bc(iVar1,0);
  Rotatelab_UI_GenericDialog__EnsureAtLeastOneDialogButton_11121ac(uVar2,param_6);
  iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01121eb4 + 0x1121c48));
  Cysharp_Threading_Tasks_UniTaskCompletionSource_int____ctor_1c3c988
            (iVar3,**(undefined4 **)(_UNK_01121eb8 + 0x1121c5c));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar4 = (int *)(iVar1 + 8);
  *piVar4 = iVar3;
  thunk_FUN_00ec5080(piVar4,iVar3);
  if (param_6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar5 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_01121ebc + 0x1121c9c),
                               *(undefined4 *)(param_6 + 0xc));
  if (0 < *(int *)(param_6 + 0xc)) {
    uVar10 = 0;
    piVar11 = piVar5 + 4;
    do {
      iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01121ec0 + 0x1121cd4));
      System_Object___ctor_2bb93bc(iVar3,0);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      *(int *)(iVar3 + 0xc) = iVar1;
      thunk_FUN_00ec5080((int *)(iVar3 + 0xc),iVar1);
      uVar6 = *(uint *)(param_6 + 0xc);
      *(uint *)(iVar3 + 8) = uVar10;
      if (uVar6 <= uVar10) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar8 = *(int *)(param_6 + 0x10 + uVar10 * 4);
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar9 = *(undefined4 *)(iVar8 + 8);
      uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01121ec4 + 0x1121d3c));
      System_Action___ctor_2b10bac(uVar2,iVar3,**(undefined4 **)(_UNK_01121ec8 + 0x1121d5c),0);
      iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01121ecc + 0x1121d70));
      Rotatelab_UI_GenericDialog_ButtonConfiguration___ctor_1111944(iVar3,uVar9,uVar2);
      if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if ((iVar3 != 0) &&
         (iVar8 = thunk_FUN_00f00bc8(iVar3,*(undefined4 *)(*piVar5 + 0x20)), iVar8 == 0)) {
        uVar2 = thunk_FUN_00f08b98();
        func_0x00ec3920(uVar2,0);
      }
      if ((uint)piVar5[3] <= uVar10) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      *piVar11 = iVar3;
      thunk_FUN_00ec5080(piVar11,iVar3);
      uVar10 = uVar10 + 1;
      piVar11 = piVar11 + 1;
    } while ((int)uVar10 < *(int *)(param_6 + 0xc));
  }
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01121ed0 + 0x1121e08));
  Rotatelab_UI_GenericDialog_DialogData___ctor_1111318(uVar2,param_3,param_4,param_5,piVar5);
  Rotatelab_UI_GenericDialog__Show_1111378(param_2,uVar2);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*piVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Cysharp_Threading_Tasks_UniTaskCompletionSource_int___get_Task_1c3c9a4
            (&uStack_30,*piVar4,**(undefined4 **)(_UNK_01121ed4 + 0x1121e60));
  *(undefined4 *)(param_1 + 1) = uStack_28;
  *param_1 = uStack_30;
  return;
}

