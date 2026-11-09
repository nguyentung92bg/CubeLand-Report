/* IL2CPP: Rotatelab.UI.PreLevelStartController$$OnAnyPreBoosterUsedHandler
void Rotatelab_UI_PreLevelStartController__OnAnyPreBoosterUsedHandler (Rotatelab_UI_PreLevelStartController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.PreLevelStartController$$OnAnyPreBoosterUsedHandler
   void Rotatelab_UI_PreLevelStartController__OnAnyPreBoosterUsedHandler
   (Rotatelab_UI_PreLevelStartController_o* __this, const MethodInfo* method); */

void Rotatelab_UI_PreLevelStartController__OnAnyPreBoosterUsedHandler_11255f8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_r4;
  int iVar6;
  undefined4 unaff_r5;
  char *pcVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  uint uVar10;
  undefined8 uVar11;
  
  pcVar7 = (char *)(_UNK_01135750 + 0x1135610);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01135754 + 0x1135624));
    *pcVar7 = '\x01';
  }
  if (*(char *)(param_1 + 0x54) != '\0') {
    puVar1 = *(undefined4 **)(_UNK_01135758 + 0x1135648);
    *(undefined1 *)(param_1 + 0x54) = 0;
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar1);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar8 = *(int **)(iVar2 + 0x18);
    if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar11 = (**(code **)(*piVar8 + 0xf0))(piVar8,*(undefined4 *)(*piVar8 + 0xf4));
    iVar2 = (int)((ulonglong)uVar11 >> 0x20);
    (**(code **)(*piVar8 + 0xf8))
              (piVar8,iVar2,(int)uVar11 + -1,iVar2 - (uint)((int)uVar11 == 0),
               *(undefined4 *)(*piVar8 + 0xfc));
    Rotatelab_UI_PreLevelStartController___OnAnyPreBoosterUsedHandler_g__IncrementBoosterUsage_22_0_1125760
              (1,2);
  }
  if (*(char *)(param_1 + 0x55) != '\0') {
    puVar1 = *(undefined4 **)(_UNK_0113575c + 0x11356c8);
    *(undefined1 *)(param_1 + 0x55) = 0;
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar1);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar8 = *(int **)(iVar2 + 0x14);
    if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar11 = (**(code **)(*piVar8 + 0xf0))(piVar8,*(undefined4 *)(*piVar8 + 0xf4));
    iVar2 = (int)((ulonglong)uVar11 >> 0x20);
    (**(code **)(*piVar8 + 0xf8))
              (piVar8,iVar2,(int)uVar11 + -1,iVar2 - (uint)((int)uVar11 == 0),
               *(undefined4 *)(*piVar8 + 0xfc));
    Rotatelab_UI_PreLevelStartController___OnAnyPreBoosterUsedHandler_g__IncrementBoosterUsage_22_0_1125760
              (1,1);
  }
  iVar2 = *(int *)(param_1 + 0x1c);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar7 = (char *)(_UNK_010fd810 + 0x10fd714);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fd814 + 0x10fd728),0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fd818 + 0x10fd734));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fd81c + 0x10fd740));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fd820 + 0x10fd74c));
    *pcVar7 = '\x01';
  }
  piVar8 = *(int **)(_UNK_010fd824 + 0x10fd760);
  iVar5 = *(int *)(iVar2 + 0x18);
  iVar2 = *piVar8;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar8;
  }
  puVar1 = *(undefined4 **)(iVar2 + 0x5c);
  iVar6 = puVar1[1];
  if (iVar6 == 0) {
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      puVar1 = *(undefined4 **)(*piVar8 + 0x5c);
    }
    uVar9 = *puVar1;
    iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010fd828 + 0x10fd7ac));
    System_Action_object____ctor_1f11414(iVar6,uVar9,**(undefined4 **)(_UNK_010fd82c + 0x10fd7cc),0)
    ;
    piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 4);
    *piVar8 = iVar6;
    thunk_FUN_00ec5080(piVar8,iVar6);
  }
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    System_ThrowHelper__ThrowArgumentNullException_2b8422c
              (0x21,0,**(undefined4 **)(_UNK_010fd830 + 0x10fd804));
  }
  if (0 < *(int *)(iVar5 + 0xc)) {
    iVar2 = *(int *)(iVar5 + 0x10);
    uVar10 = 0;
    do {
      iVar3 = *(int *)(iVar5 + 0x10);
      if (iVar2 != iVar3) goto LAB_0268e78c;
      iVar3 = *(int *)(iVar5 + 8);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar3 + 0xc) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      (**(code **)(iVar6 + 0xc))
                (*(undefined4 *)(iVar6 + 0x20),*(undefined4 *)(iVar3 + uVar10 * 4 + 0x10),
                 *(undefined4 *)(iVar6 + 0x14),*(code **)(iVar6 + 0xc),unaff_r4,unaff_r5,unaff_r6,
                 unaff_r7);
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < *(int *)(iVar5 + 0xc));
    iVar3 = *(int *)(iVar5 + 0x10);
LAB_0268e78c:
    if (iVar2 != iVar3) {
      thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba53d4 + 0x2ba5394));
      uVar9 = thunk_FUN_00f00cdc();
      uVar4 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba53d8 + 0x2ba53a8));
      System_InvalidOperationException___ctor_2b6e948(uVar9,uVar4,0);
      uVar4 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba53dc + 0x2ba53c4));
      func_0x00ec3920(uVar9,uVar4);
                    /* WARNING: Subroutine does not return */
      FUN_00ec3760();
    }
  }
  return;
}

