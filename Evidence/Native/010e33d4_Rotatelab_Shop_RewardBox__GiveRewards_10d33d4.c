/* IL2CPP: Rotatelab.Shop.RewardBox$$GiveRewards
void Rotatelab_Shop_RewardBox__GiveRewards (Rotatelab_Shop_RewardBox_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.RewardBox$$GiveRewards
   void Rotatelab_Shop_RewardBox__GiveRewards (Rotatelab_Shop_RewardBox_o* __this, const MethodInfo*
   method); */

void Rotatelab_Shop_RewardBox__GiveRewards_10d33d4(int param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int *piStack_14;
  
  pcVar4 = (char *)(_UNK_010e3520 + 0x10e33ec);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e3524 + 0x10e3400));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e3528 + 0x10e340c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e352c + 0x10e3418));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e3530 + 0x10e3424));
    *pcVar4 = '\x01';
  }
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_18 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_14 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_20 = 0;
  if (*(int *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_20,*(int *)(param_1 + 0xc),**(undefined4 **)(_UNK_010e3534 + 0x10e3458));
  uVar6 = 0;
  puVar5 = *(undefined4 **)(_UNK_010e3538 + 0x10e3478);
  puVar7 = &uStack_20;
  while( true ) {
    iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720(&uStack_20,*puVar5)
    ;
    if (iVar1 == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                (&uStack_20,**(undefined4 **)(_UNK_010e353c + 0x10e34bc));
      return;
    }
    if (piStack_14 == (int *)0x0) break;
    pcVar2 = *(code **)(*piStack_14 + 0xe0);
    uVar3 = *(undefined4 *)(*piStack_14 + 0xe4);
    (*pcVar2)(piStack_14,uVar3,pcVar2,uVar3,uVar6,puVar7);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

