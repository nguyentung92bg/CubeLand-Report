/* IL2CPP: Rotatelab.Scripts.BlasterController.<>c__DisplayClass126_0$$<BreakChains>b__1
void Rotatelab_Scripts_BlasterController___c__DisplayClass126_0___BreakChains_b__1 (Rotatelab_Scripts_BlasterController___c__DisplayClass126_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController.<>c__DisplayClass126_0$$<BreakChains>b__1
   void Rotatelab_Scripts_BlasterController___c__DisplayClass126_0___BreakChains_b__1
   (Rotatelab_Scripts_BlasterController___c__DisplayClass126_0_o* __this, const MethodInfo* method);
    */

void Rotatelab_Scripts_BlasterController___c__DisplayClass126_0___BreakChains_b__1_103a778
               (int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 unaff_r4;
  int iVar5;
  undefined4 unaff_r5;
  char *pcVar6;
  int iVar7;
  undefined4 unaff_r6;
  undefined4 uVar8;
  undefined4 unaff_r7;
  int *piVar9;
  uint uVar10;
  
  pcVar6 = (char *)(_UNK_0104a898 + 0x104a78c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104a89c + 0x104a7a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104a8a0 + 0x104a7ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104a8a4 + 0x104a7b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104a8a8 + 0x104a7c4));
    *pcVar6 = '\x01';
  }
  if (*(int *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar9 = *(int **)(_UNK_0104a8ac + 0x104a7e8);
  iVar5 = *(int *)(*(int *)(param_1 + 0xc) + 0x124);
  iVar1 = *piVar9;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar9;
  }
  puVar4 = *(undefined4 **)(iVar1 + 0x5c);
  iVar7 = puVar4[5];
  if (iVar7 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar4 = *(undefined4 **)(*piVar9 + 0x5c);
    }
    uVar8 = *puVar4;
    iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0104a8b0 + 0x104a834));
    System_Action_object____ctor_1f11414(iVar7,uVar8,**(undefined4 **)(_UNK_0104a8b4 + 0x104a854),0)
    ;
    piVar9 = (int *)(*(int *)(*piVar9 + 0x5c) + 0x14);
    *piVar9 = iVar7;
    thunk_FUN_00ec5080(piVar9,iVar7);
  }
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    System_ThrowHelper__ThrowArgumentNullException_2b8422c
              (0x21,0,**(undefined4 **)(_UNK_0104a8b8 + 0x104a88c));
  }
  if (0 < *(int *)(iVar5 + 0xc)) {
    iVar1 = *(int *)(iVar5 + 0x10);
    uVar10 = 0;
    do {
      iVar2 = *(int *)(iVar5 + 0x10);
      if (iVar1 != iVar2) goto LAB_0268e78c;
      iVar2 = *(int *)(iVar5 + 8);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar2 + 0xc) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      (**(code **)(iVar7 + 0xc))
                (*(undefined4 *)(iVar7 + 0x20),*(undefined4 *)(iVar2 + uVar10 * 4 + 0x10),
                 *(undefined4 *)(iVar7 + 0x14),*(code **)(iVar7 + 0xc),unaff_r4,unaff_r5,unaff_r6,
                 unaff_r7);
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < *(int *)(iVar5 + 0xc));
    iVar2 = *(int *)(iVar5 + 0x10);
LAB_0268e78c:
    if (iVar1 != iVar2) {
      thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba53d4 + 0x2ba5394));
      uVar8 = thunk_FUN_00f00cdc();
      uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba53d8 + 0x2ba53a8));
      System_InvalidOperationException___ctor_2b6e948(uVar8,uVar3,0);
      uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba53dc + 0x2ba53c4));
      func_0x00ec3920(uVar8,uVar3);
                    /* WARNING: Subroutine does not return */
      FUN_00ec3760();
    }
  }
  return;
}

