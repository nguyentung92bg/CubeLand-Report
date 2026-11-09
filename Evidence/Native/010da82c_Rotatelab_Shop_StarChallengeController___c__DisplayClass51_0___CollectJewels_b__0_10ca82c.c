/* IL2CPP: Rotatelab.Shop.StarChallengeController.<>c__DisplayClass51_0$$<CollectJewels>b__0
void Rotatelab_Shop_StarChallengeController___c__DisplayClass51_0___CollectJewels_b__0 (Rotatelab_Shop_StarChallengeController___c__DisplayClass51_0_o* __this, float value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeController.<>c__DisplayClass51_0$$<CollectJewels>b__0
   void Rotatelab_Shop_StarChallengeController___c__DisplayClass51_0___CollectJewels_b__0
   (Rotatelab_Shop_StarChallengeController___c__DisplayClass51_0_o* __this, float value, const
   MethodInfo* method); */

void Rotatelab_Shop_StarChallengeController___c__DisplayClass51_0___CollectJewels_b__0_10ca82c
               (int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  int iVar5;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  char *pcVar6;
  undefined4 unaff_r7;
  int iVar7;
  uint uVar8;
  
  pcVar6 = (char *)(_UNK_010da9c8 + 0x10da848);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010da9cc + 0x10da85c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010da9d0 + 0x10da868));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010da9d4 + 0x10da874));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010da9d8 + 0x10da880));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010da9dc + 0x10da88c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010da9e0 + 0x10da898));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010da9e4 + 0x10da8a4));
    *pcVar6 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010da9e8 + 0x10da8bc));
  System_Object___ctor_2bb93bc(iVar1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(int *)(iVar1 + 0xc) = param_1;
  thunk_FUN_00ec5080((int *)(iVar1 + 0xc),param_1);
  iVar7 = *(int *)(param_1 + 8);
  *(undefined4 *)(iVar1 + 8) = param_2;
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = *(int *)(iVar7 + 0x1c);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010da9ec + 0x10da90c));
  System_Action_object____ctor_1f11414(uVar2,iVar1,**(undefined4 **)(_UNK_010da9f0 + 0x10da92c),0);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___ForEach_267e6f0
            (iVar7,uVar2,**(undefined4 **)(_UNK_010da9f4 + 0x10da950));
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(*(int *)(param_1 + 8) + 0x14);
  iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010da9f8 + 0x10da974));
  System_Action_object____ctor_1f11414(iVar7,iVar1,**(undefined4 **)(_UNK_010da9fc + 0x10da994),0);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    System_ThrowHelper__ThrowArgumentNullException_2b8422c
              (0x21,0,**(undefined4 **)(_UNK_010daa00 + 0x10da9b8));
  }
  if (0 < *(int *)(iVar5 + 0xc)) {
    iVar1 = *(int *)(iVar5 + 0x10);
    uVar8 = 0;
    do {
      iVar3 = *(int *)(iVar5 + 0x10);
      if (iVar1 != iVar3) goto LAB_0268e78c;
      iVar3 = *(int *)(iVar5 + 8);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar3 + 0xc) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      (**(code **)(iVar7 + 0xc))
                (*(undefined4 *)(iVar7 + 0x20),*(undefined4 *)(iVar3 + uVar8 * 4 + 0x10),
                 *(undefined4 *)(iVar7 + 0x14),*(code **)(iVar7 + 0xc),unaff_r4,unaff_r5,unaff_r6,
                 unaff_r7);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < *(int *)(iVar5 + 0xc));
    iVar3 = *(int *)(iVar5 + 0x10);
LAB_0268e78c:
    if (iVar1 != iVar3) {
      thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba53d4 + 0x2ba5394));
      uVar2 = thunk_FUN_00f00cdc();
      uVar4 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba53d8 + 0x2ba53a8));
      System_InvalidOperationException___ctor_2b6e948(uVar2,uVar4,0);
      uVar4 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba53dc + 0x2ba53c4));
      func_0x00ec3920(uVar2,uVar4);
                    /* WARNING: Subroutine does not return */
      FUN_00ec3760();
    }
  }
  return;
}

