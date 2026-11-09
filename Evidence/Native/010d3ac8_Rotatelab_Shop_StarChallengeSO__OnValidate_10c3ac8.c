/* IL2CPP: Rotatelab.Shop.StarChallengeSO$$OnValidate
void Rotatelab_Shop_StarChallengeSO__OnValidate (Rotatelab_Shop_StarChallengeSO_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeSO$$OnValidate
   void Rotatelab_Shop_StarChallengeSO__OnValidate (Rotatelab_Shop_StarChallengeSO_o* __this, const
   MethodInfo* method); */

void Rotatelab_Shop_StarChallengeSO__OnValidate_10c3ac8(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar2 = (char *)(_UNK_010d3c28 + 0x10d3ae0);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d3c2c + 0x10d3af4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d3c30 + 0x10d3b00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d3c34 + 0x10d3b0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d3c38 + 0x10d3b18));
    *pcVar2 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  if (*(int *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_28,*(int *)(param_1 + 0xc),**(undefined4 **)(_UNK_010d3c3c + 0x10d3b4c));
  puVar3 = *(undefined4 **)(_UNK_010d3c40 + 0x10d3b6c);
  while( true ) {
    iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720(&uStack_28,*puVar3)
    ;
    if (iVar1 == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                (&uStack_28,**(undefined4 **)(_UNK_010d3c44 + 0x10d3bb8));
      Rotatelab_Shop_StarChallengeSO__FillRewardIcons_10c3ddc(param_1);
      return;
    }
    if (iStack_1c == 0) break;
    if (*(int *)(iStack_1c + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Shop_StarChallengeSO_RewardSlot__SetOwner_10c3c4c(*(int *)(iStack_1c + 0xc),param_1);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

