/* IL2CPP: Rotatelab.WinStreak.Chest$$Collect
void Rotatelab_WinStreak_Chest__Collect (Rotatelab_WinStreak_Chest_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.WinStreak.Chest$$Collect
   void Rotatelab_WinStreak_Chest__Collect (Rotatelab_WinStreak_Chest_o* __this, const MethodInfo*
   method); */

void Rotatelab_WinStreak_Chest__Collect_10903a8(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint in_fpscr;
  float fVar12;
  undefined1 auStack_40 [16];
  
  pcVar4 = (char *)(_UNK_010a0614 + 0x10a03c8);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a0618 + 0x10a03dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a061c + 0x10a03e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a0620 + 0x10a03f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a0624 + 0x10a0400));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a0628 + 0x10a040c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a062c + 0x10a0418));
    *pcVar4 = '\x01';
  }
  fVar1 = _UNK_010a0610;
  if (*(char *)(param_1 + 0x40) == '\0') {
    iVar11 = 4;
    while( true ) {
      if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar10 = iVar11 - 4;
      if (*(int *)(*(int *)(param_1 + 0x20) + 0xc) <= (int)uVar10) break;
      iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010a0630 + 0x10a0460));
      System_Object___ctor_2bb93bc(iVar2,0);
      iVar7 = *(int *)(param_1 + 0x20);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar7 + 0xc) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar7 = *(int *)(iVar7 + iVar11 * 4);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar8 = (int *)(iVar2 + 8);
      *piVar8 = iVar7;
      thunk_FUN_00ec5080(piVar8,iVar7);
      iVar7 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_010a0634 + 0x10a04c0));
      if (*piVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar5 = *(int *)(*piVar8 + 0x18);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*piVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar6 = *(int *)(*piVar8 + 0x18);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Currency_CurrencyManager__IncreaseCurrency_10839a0
                (iVar7,*(undefined4 *)(iVar5 + 8),*(undefined4 *)(iVar6 + 0x10),
                 *(undefined4 *)(iVar6 + 0x14),0,0,0);
      iVar7 = *(int *)(param_1 + 0x38);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar7 + 0xc) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      uVar9 = *(undefined4 *)(iVar7 + iVar11 * 4);
      uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010a0638 + 0x10a056c));
      System_Action_object____ctor_1f11414
                (uVar3,iVar2,**(undefined4 **)(_UNK_010a063c + 0x10a058c),0);
      if (*(int *)(**(int **)(_UNK_010a0640 + 0x10a05a0) + 0x74) == 0) {
        FUN_00ec3934();
      }
      fVar12 = (float)VectorSignedToFloat(uVar10,(byte)(in_fpscr >> 0x16) & 3);
      PrimeTween_Tween__Delay_object__15d6154
                (auStack_40,uVar9,fVar12 * fVar1,uVar3,0,0,
                 **(undefined4 **)(_UNK_010a0644 + 0x10a05cc));
      iVar11 = iVar11 + 1;
    }
    Rotatelab_WinStreak_Chest__SetCollected_1090348(param_1,1);
  }
  return;
}

