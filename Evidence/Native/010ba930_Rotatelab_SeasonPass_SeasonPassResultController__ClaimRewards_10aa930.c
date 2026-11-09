/* IL2CPP: Rotatelab.SeasonPass.SeasonPassResultController$$ClaimRewards
void Rotatelab_SeasonPass_SeasonPassResultController__ClaimRewards (Rotatelab_SeasonPass_SeasonPassResultController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassResultController$$ClaimRewards
   void Rotatelab_SeasonPass_SeasonPassResultController__ClaimRewards
   (Rotatelab_SeasonPass_SeasonPassResultController_o* __this, const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassResultController__ClaimRewards_10aa930(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined1 auStack_68 [16];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 *puStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar3 = (char *)(_UNK_010bab2c + 0x10ba948);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bab30 + 0x10ba95c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bab34 + 0x10ba968));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bab38 + 0x10ba974));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bab3c + 0x10ba980));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bab40 + 0x10ba98c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bab44 + 0x10ba998));
    *pcVar3 = '\x01';
  }
  puStack_34 = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  uStack_38 = 0;
  uStack_24 = puStack_34;
  uStack_20 = uStack_30;
  iStack_1c = iStack_2c;
  if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_28,*(int *)(param_1 + 0x40),**(undefined4 **)(_UNK_010bab48 + 0x10ba9d4));
  uStack_48 = 0;
  puVar4 = *(undefined4 **)(_UNK_010bab4c + 0x10ba9f4);
  puStack_44 = &uStack_28;
  while( true ) {
    iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720(&uStack_28,*puVar4)
    ;
    if (iVar1 == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                (&uStack_28,**(undefined4 **)(_UNK_010bab50 + 0x10baa30));
      PrimeTween_Sequence__Create_2cef1e0(&uStack_48,1,0,1,0,0,0);
      uStack_38 = uStack_48;
      puStack_34 = puStack_44;
      uStack_30 = uStack_40;
      iStack_2c = uStack_3c;
      PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_58,&uStack_38,0x3e800000,0);
      uStack_38 = uStack_58;
      puStack_34 = (undefined4 *)uStack_54;
      uStack_30 = uStack_50;
      iStack_2c = uStack_4c;
      uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010bab58 + 0x10baa90));
      System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(_UNK_010bab5c + 0x10baab0),0);
      PrimeTween_Sequence__OnComplete_2cf16e0(auStack_68,&uStack_38,uVar2,0,0);
      return;
    }
    if (iStack_1c == 0) break;
    Rotatelab_SeasonPassUnClaimedReward__ClaimReward_fc447c(iStack_1c,0);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

