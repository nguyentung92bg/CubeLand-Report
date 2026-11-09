/* IL2CPP: Rotatelab.Scripts.BlasterController.<>c__DisplayClass126_0$$<BreakChains>b__0
void Rotatelab_Scripts_BlasterController___c__DisplayClass126_0___BreakChains_b__0 (Rotatelab_Scripts_BlasterController___c__DisplayClass126_0_o* __this, Rotatelab_Scripts_BlasterController_o* blaster, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController.<>c__DisplayClass126_0$$<BreakChains>b__0
   void Rotatelab_Scripts_BlasterController___c__DisplayClass126_0___BreakChains_b__0
   (Rotatelab_Scripts_BlasterController___c__DisplayClass126_0_o* __this,
   Rotatelab_Scripts_BlasterController_o* blaster, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterController___c__DisplayClass126_0___BreakChains_b__0_1039cb0
               (int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar4;
  undefined4 unaff_r6;
  char *pcVar5;
  int iVar6;
  undefined4 unaff_r7;
  uint uVar7;
  int iVar8;
  
  pcVar5 = (char *)(_UNK_01049d84 + 0x1049cc8);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01049d88 + 0x1049cdc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01049d8c + 0x1049ce8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01049d90 + 0x1049cf4));
    *pcVar5 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(param_2 + 0x11c);
  iVar6 = *(int *)(param_1 + 0x10);
  if (iVar6 == 0) {
    iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01049d94 + 0x1049d28));
    System_Action_object____ctor_1f11414
              (iVar6,param_1,**(undefined4 **)(_UNK_01049d98 + 0x1049d44),0);
    *(int *)(param_1 + 0x10) = iVar6;
    thunk_FUN_00ec5080((int *)(param_1 + 0x10),iVar6);
  }
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    System_ThrowHelper__ThrowArgumentNullException_2b8422c
              (0x21,0,**(undefined4 **)(_UNK_01049d9c + 0x1049d78));
  }
  if (0 < *(int *)(iVar4 + 0xc)) {
    iVar8 = *(int *)(iVar4 + 0x10);
    uVar7 = 0;
    do {
      iVar1 = *(int *)(iVar4 + 0x10);
      if (iVar8 != iVar1) goto LAB_0268e78c;
      iVar1 = *(int *)(iVar4 + 8);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar1 + 0xc) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      (**(code **)(iVar6 + 0xc))
                (*(undefined4 *)(iVar6 + 0x20),*(undefined4 *)(iVar1 + uVar7 * 4 + 0x10),
                 *(undefined4 *)(iVar6 + 0x14),*(code **)(iVar6 + 0xc),unaff_r4,unaff_r5,unaff_r6,
                 unaff_r7);
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < *(int *)(iVar4 + 0xc));
    iVar1 = *(int *)(iVar4 + 0x10);
LAB_0268e78c:
    if (iVar8 != iVar1) {
      thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba53d4 + 0x2ba5394));
      uVar2 = thunk_FUN_00f00cdc();
      uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba53d8 + 0x2ba53a8));
      System_InvalidOperationException___ctor_2b6e948(uVar2,uVar3,0);
      uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba53dc + 0x2ba53c4));
      func_0x00ec3920(uVar2,uVar3);
                    /* WARNING: Subroutine does not return */
      FUN_00ec3760();
    }
  }
  return;
}

