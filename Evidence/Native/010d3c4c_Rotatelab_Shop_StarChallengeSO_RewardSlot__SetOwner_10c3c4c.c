/* IL2CPP: Rotatelab.Shop.StarChallengeSO.RewardSlot$$SetOwner
void Rotatelab_Shop_StarChallengeSO_RewardSlot__SetOwner (Rotatelab_Shop_StarChallengeSO_RewardSlot_o* __this, Rotatelab_Shop_StarChallengeSO_o* so, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeSO.RewardSlot$$SetOwner
   void Rotatelab_Shop_StarChallengeSO_RewardSlot__SetOwner
   (Rotatelab_Shop_StarChallengeSO_RewardSlot_o* __this, Rotatelab_Shop_StarChallengeSO_o* so, const
   MethodInfo* method); */

void Rotatelab_Shop_StarChallengeSO_RewardSlot__SetOwner_10c3c4c(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar2 = (char *)(_UNK_010d3db8 + 0x10d3c68);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d3dbc + 0x10d3c7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d3dc0 + 0x10d3c88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d3dc4 + 0x10d3c94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d3dc8 + 0x10d3ca0));
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
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0xc) + 8);
  *puVar3 = param_2;
  thunk_FUN_00ec5080(puVar3,param_2);
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_28,*(int *)(param_1 + 0x18),**(undefined4 **)(_UNK_010d3dcc + 0x10d3cf4));
  puVar3 = *(undefined4 **)(_UNK_010d3dd0 + 0x10d3d14);
  while( true ) {
    iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720(&uStack_28,*puVar3)
    ;
    if (iVar1 == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                (&uStack_28,**(undefined4 **)(_UNK_010d3dd4 + 0x10d3d54));
      return;
    }
    if (iStack_1c == 0) break;
    *(undefined4 *)(iStack_1c + 8) = param_2;
    thunk_FUN_00ec5080((undefined4 *)(iStack_1c + 8),param_2);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

