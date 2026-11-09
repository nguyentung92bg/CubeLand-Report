/* IL2CPP: Rotatelab.WinStreak.WinStreakManager$$ShowPopupAfterDelay
void Rotatelab_WinStreak_WinStreakManager__ShowPopupAfterDelay (Rotatelab_WinStreak_WinStreakManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.WinStreak.WinStreakManager$$ShowPopupAfterDelay
   void Rotatelab_WinStreak_WinStreakManager__ShowPopupAfterDelay
   (Rotatelab_WinStreak_WinStreakManager_o* __this, const MethodInfo* method); */

void Rotatelab_WinStreak_WinStreakManager__ShowPopupAfterDelay_1092d48(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int extraout_r1;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_010a2f0c + 0x10a2d60);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a2f10 + 0x10a2d74));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a2f14 + 0x10a2d80));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a2f18 + 0x10a2d8c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a2f1c + 0x10a2d98));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a2f20 + 0x10a2da4));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  PrimeTween_Sequence__Create_2cef1e0(&uStack_40,1,0,1,0,0,0);
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  uStack_28 = uStack_38;
  uStack_24 = uStack_34;
  PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_50,&uStack_30,0x3f800000,0);
  piVar7 = *(int **)(_UNK_010a2f24 + 0x10a2e0c);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  iVar1 = *piVar7;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_28 = uStack_48;
  uStack_24 = uStack_44;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x5c);
  iVar5 = puVar2[1];
  if (iVar5 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar2 = *(undefined4 **)(*piVar7 + 0x5c);
    }
    uVar6 = *puVar2;
    iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010a2f28 + 0x10a2e60));
    System_Action_object____ctor_1f11414(iVar5,uVar6,**(undefined4 **)(_UNK_010a2f2c + 0x10a2e80),0)
    ;
    piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 4);
    *piVar7 = iVar5;
    thunk_FUN_00ec5080(piVar7,iVar5);
  }
  PrimeTween_Sequence__ChainCallback_object__15b4c64
            (&uStack_40,&uStack_30,uVar3,iVar5,0,**(undefined4 **)(_UNK_010a2f30 + 0x10a2eb8));
  iVar1 = *(int *)(**(int **)(_UNK_010a2f34 + 0x10a2ed4) + 0x74);
  if (iVar1 == 0) {
    FUN_00ec3934();
    iVar1 = extraout_r1;
  }
  Rotatelab_Extensions__BlockInputDuringAnimation_fc2e14
            (&uStack_40,iVar1,uStack_40,uStack_3c,uStack_38,uStack_34,0);
  return;
}

