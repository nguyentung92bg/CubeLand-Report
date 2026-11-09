/* IL2CPP: Rotatelab.Scripts.ComboBarUI$$OnComboTriggeredHandler
void Rotatelab_Scripts_ComboBarUI__OnComboTriggeredHandler (Rotatelab_Scripts_ComboBarUI_o* __this, int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ComboBarUI$$OnComboTriggeredHandler
   void Rotatelab_Scripts_ComboBarUI__OnComboTriggeredHandler (Rotatelab_Scripts_ComboBarUI_o*
   __this, int32_t level, const MethodInfo* method); */

void Rotatelab_Scripts_ComboBarUI__OnComboTriggeredHandler_10014c4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  pcVar5 = (char *)(_UNK_0101183c + 0x10114e8);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01011840 + 0x10114fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01011844 + 0x1011508));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01011848 + 0x1011514));
    *pcVar5 = '\x01';
  }
  uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_58 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  piVar6 = *(int **)(param_1 + 0x14);
  uStack_60 = 0;
  uStack_64 = param_2;
  uVar3 = FUN_00ec393c(*(undefined4 *)(*(int *)(_UNK_0101184c + 0x1011534) + 0x24),&uStack_64);
  uVar3 = System_String__Format_29ffb6c(**(undefined4 **)(_UNK_01011850 + 0x101155c),uVar3,0);
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar6 + 0x2b0))(piVar6,uVar3,*(undefined4 *)(*piVar6 + 0x2b4));
  PrimeTween_Sequence__Stop_2cf07bc((undefined4 *)(param_1 + 0x30),0);
  PrimeTween_Sequence__Create_2cef1e0(&uStack_78,1,0,1,0,0,0);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  pcVar5 = (char *)(_UNK_01011854 + 0x10115d0);
  uStack_60 = uStack_78;
  uStack_5c = uStack_74;
  uStack_58 = uStack_70;
  uStack_54 = uStack_6c;
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01011858 + 0x10115f0));
    *pcVar5 = '\x01';
  }
  fVar10 = *(float *)(param_1 + 0x24);
  fVar11 = *(float *)(param_1 + 0x28);
  iVar4 = *(int *)(**(int **)(_UNK_0101185c + 0x101160c) + 0x5c);
  fVar12 = *(float *)(iVar4 + 0xc);
  fVar13 = *(float *)(iVar4 + 0x10);
  fVar14 = *(float *)(iVar4 + 0x14);
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_90,0x1b,0);
  uVar2 = uStack_80;
  uVar1 = uStack_84;
  uVar9 = uStack_88;
  uVar8 = uStack_8c;
  uVar7 = uStack_90;
  if (*(int *)(**(int **)(_UNK_01011860 + 0x101165c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce6560
            (&uStack_90,uVar3,fVar12 * fVar10,fVar13 * fVar10,fVar14 * fVar10,fVar11 * 0.5,uVar7,
             uVar8,uVar9,uVar1,uVar2,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_a0,&uStack_60,uStack_90,uStack_8c,uStack_88,uStack_84,0);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  uStack_60 = uStack_a0;
  uStack_5c = uStack_9c;
  uStack_58 = uStack_98;
  uStack_54 = uStack_94;
  pcVar5 = (char *)(_UNK_01011864 + 0x101170c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01011868 + 0x1011720));
    *pcVar5 = '\x01';
  }
  fVar10 = *(float *)(param_1 + 0x28);
  iVar4 = *(int *)(**(int **)(_UNK_0101186c + 0x101173c) + 0x5c);
  uVar8 = *(undefined4 *)(iVar4 + 0xc);
  uVar9 = *(undefined4 *)(iVar4 + 0x10);
  uVar7 = *(undefined4 *)(iVar4 + 0x14);
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_90,7,0);
  PrimeTween_Tween__Scale_2ce6560
            (&uStack_90,uVar3,uVar8,uVar9,uVar7,fVar10 * 0.5,uStack_90,uStack_8c,uStack_88,uStack_84
             ,uStack_80,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_90,&uStack_60,uStack_90,uStack_8c,uStack_88,uStack_84,0);
  *(undefined4 *)(param_1 + 0x30) = uStack_90;
  *(undefined4 *)(param_1 + 0x34) = uStack_8c;
  *(undefined4 *)(param_1 + 0x38) = uStack_88;
  *(undefined4 *)(param_1 + 0x3c) = uStack_84;
  thunk_FUN_00ec5080(param_1 + 0x38,0);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  if (*(int *)(**(int **)(_UNK_01011870 + 0x10117e4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar4 = UnityEngine_Object__op_Inequality_36018e4(uVar3,0,0);
  if (iVar4 != 0) {
    if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_ParticleSystem__Play_368e960(*(int *)(param_1 + 0x20),0);
  }
  return;
}

