/* IL2CPP: Rotatelab.UI.UIManager.<>c__DisplayClass37_0$$<SetMainCanvas>g__OnTransitionReachedHalfway|1
void Rotatelab_UI_UIManager___c__DisplayClass37_0___SetMainCanvas_g__OnTransitionReachedHalfway_1 (Rotatelab_UI_UIManager___c__DisplayClass37_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.UI.UIManager.<>c__DisplayClass37_0$$<SetMainCanvas>g__OnTransitionReachedHalfway|1
   void Rotatelab_UI_UIManager___c__DisplayClass37_0___SetMainCanvas_g__OnTransitionReachedHalfway_1
   (Rotatelab_UI_UIManager___c__DisplayClass37_0_o* __this, const MethodInfo* method); */

void Rotatelab_UI_UIManager___c__DisplayClass37_0___SetMainCanvas_g__OnTransitionReachedHalfway_1_1128190
               (int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 auStack_b8 [40];
  
  pcVar4 = (char *)(_UNK_011383c0 + 0x11381a4);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011383c4 + 0x11381b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011383c8 + 0x11381c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011383cc + 0x11381d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011383d0 + 0x11381dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011383d4 + 0x11381e8));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar5 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x14);
  if (*(int *)(**(int **)(_UNK_011383d8 + 0x113820c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = UnityEngine_Object__op_Inequality_36018e4(uVar5,0,0);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x14);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_UI_MainCanvasBase__SetCanvasEnable_1127660(iVar2,0);
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar5 = Rotatelab_UI_UIManager__GetMainCanvasByType_11283ec(iVar2,*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(iVar2 + 0x14) = uVar5;
  thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x14),uVar5);
  if (*(int *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x14);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_UI_MainCanvasBase__SetCanvasEnable_1127660(iVar2,1);
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 != 0) {
    (**(code **)(iVar2 + 0xc))(*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
  }
  piVar6 = *(int **)(_UNK_011383dc + 0x1138300);
  iVar2 = *piVar6;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar6;
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x118);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_Int32Enum__bool___Raise_23a4370
            (iVar2,*(undefined4 *)(param_1 + 8),*(char *)(param_1 + 0x14) != '\0',
             **(undefined4 **)(_UNK_011383e0 + 0x113834c));
  if (*(int *)(param_1 + 8) != 1) {
    return;
  }
  if (*(int *)(**(int **)(_UNK_011383e4 + 0x113836c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = UnityEngine_Application__get_isEditor_35a9d10(0);
  if (iVar2 != 0) {
    return;
  }
  UnityEngine_Resources__UnloadUnusedAssets_35f9cf4(0);
  if (*(int *)(**(int **)(_UNK_011383e8 + 0x11383a4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar4 = (char *)(_UNK_02bbe6ec + 0x2bbe6a8);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_02bbe6f0 + 0x2bbe6bc));
    *pcVar4 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_02bbe6f4 + 0x2bbe6d0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  System_GC__get_MaxGeneration_2bae6f8();
  func_0x00f2f344(0,0);
  if (*(int *)(_UNK_00f2f63c + 0xf2f630) == 0) {
    return;
  }
  if (*(int *)(iRam00f2f840 + 0xf2f654) != 0) {
    piVar6 = (int *)(iRam00f2f844 + 0xf2f668);
    do {
      iVar2 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = 1;
    DataMemoryBarrier(0xf);
    if (iVar2 == 1) {
      func_0x00f2a474();
    }
  }
  pcVar4 = (char *)(iRam00f2f848 + 0xf2f68c);
  if (*pcVar4 == '\x01') {
    if (*(int *)(iRam00f2f84c + 0xf2f6a0) == 0) {
      return;
    }
    DataMemoryBarrier(0xf);
    *(undefined4 *)(iRam00f2f850 + 0xf2f6b8) = 0;
    return;
  }
  *pcVar4 = '\x01';
  iVar2 = *(int *)(iRam00f2f854 + 0xf2f6d0);
  iVar8 = *(int *)(iRam00f2f858 + 0xf2f6dc);
  if (iVar2 != 0) {
    iVar3 = iRam00f2f85c + 0xf2f6f4;
    thunk_FUN_00f95db8(auStack_b8,iVar3,iVar2 << 2);
    *(undefined4 *)(iRam00f2f860 + 0xf2f708) = 0;
    FUN_00f88e5c(iVar3,iVar2 << 2);
  }
  if (*(int *)(iRam00f2f864 + 0xf2f720) != 0) {
    DataMemoryBarrier(0xf);
    *(undefined4 *)(iRam00f2f868 + 0xf2f738) = 0;
  }
  if (*(int *)(iRam00f2f86c + 0xf2f744) == 0) {
    if (iVar2 == 0) goto LAB_00f2f7bc;
LAB_00f2f770:
    func_0x00f29230(_UNK_00f2f874 + 0xf2f780,iVar2);
    puVar7 = auStack_b8;
    do {
      uVar5 = *puVar7;
      (**(code **)(_UNK_00f2f878 + 0xf2f798))(uVar5);
      FUN_00f30598(uVar5);
      iVar2 = iVar2 + -1;
      puVar7 = puVar7 + 1;
    } while (iVar2 != 0);
  }
  else {
    (**(code **)(iRam00f2f870 + 0xf2f754))();
    if (iVar2 != 0) goto LAB_00f2f770;
    if (iVar8 == 0) goto LAB_00f2f7bc;
  }
  iVar2 = FUN_00f94830(_UNK_00f2f87c + 0xf2f7b4);
  if (iVar2 != 0) {
    (**(code **)(_UNK_00f2f890 + 0xf2f83c))(_UNK_00f2f88c + 0xf2f838);
                    /* WARNING: Subroutine does not return */
    FUN_00f940e0();
  }
LAB_00f2f7bc:
  if (*(int *)(_UNK_00f2f880 + 0xf2f7c8) == 0) {
    *pcVar4 = '\0';
  }
  else {
    piVar6 = (int *)(_UNK_00f2f884 + 0xf2f7dc);
    do {
      iVar2 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = 1;
    DataMemoryBarrier(0xf);
    if (iVar2 == 1) {
      func_0x00f2a474();
    }
    *pcVar4 = '\0';
    if (*(int *)(_UNK_00f2f888 + 0xf2f808) != 0) {
      DataMemoryBarrier(0xf);
      *piVar6 = 0;
    }
  }
  return;
}

