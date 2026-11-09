/* IL2CPP: Rotatelab.Boosters.UI.BoosterPurchasePopup$$<Start>b__16_1
void Rotatelab_Boosters_UI_BoosterPurchasePopup___Start_b__16_1 (Rotatelab_Boosters_UI_BoosterPurchasePopup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0114f0ac) */
/* WARNING: Removing unreachable block (ram,0x0114f0c8) */
/* WARNING: Removing unreachable block (ram,0x0114f0cc) */
/* WARNING: Removing unreachable block (ram,0x0114f238) */
/* WARNING: Removing unreachable block (ram,0x0114f24c) */
/* WARNING: Removing unreachable block (ram,0x0114f250) */
/* WARNING: Removing unreachable block (ram,0x0114f268) */
/* WARNING: Removing unreachable block (ram,0x0114f26c) */
/* WARNING: Removing unreachable block (ram,0x0114f2bc) */
/* WARNING: Removing unreachable block (ram,0x0114f2c4) */
/* WARNING: Removing unreachable block (ram,0x0114f2f0) */
/* WARNING: Removing unreachable block (ram,0x0114f2f8) */
/* WARNING: Removing unreachable block (ram,0x0114f30c) */
/* WARNING: Removing unreachable block (ram,0x0114f310) */
/* WARNING: Removing unreachable block (ram,0x0114f348) */
/* WARNING: Removing unreachable block (ram,0x0114f34c) */
/* WARNING: Removing unreachable block (ram,0x0114f0ec) */
/* WARNING: Removing unreachable block (ram,0x0114f0f8) */
/* WARNING: Removing unreachable block (ram,0x0114f0fc) */
/* WARNING: Removing unreachable block (ram,0x0114f158) */
/* WARNING: Removing unreachable block (ram,0x0114f15c) */
/* WARNING: Removing unreachable block (ram,0x0114f190) */
/* WARNING: Removing unreachable block (ram,0x0114f198) */
/* WARNING: Removing unreachable block (ram,0x0114f1a8) */
/* WARNING: Removing unreachable block (ram,0x0114f1ac) */
/* WARNING: Removing unreachable block (ram,0x0114f21c) */
/* WARNING: Removing unreachable block (ram,0x0114f220) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.UI.BoosterPurchasePopup$$<Start>b__16_1
   void Rotatelab_Boosters_UI_BoosterPurchasePopup___Start_b__16_1
   (Rotatelab_Boosters_UI_BoosterPurchasePopup_o* __this, const MethodInfo* method); */

void Rotatelab_Boosters_UI_BoosterPurchasePopup___Start_b__16_1_113f644(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar4 = (char *)(_UNK_0114f370 + 0x114ef44);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f374 + 0x114ef58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f378 + 0x114ef64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f37c + 0x114ef70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f380 + 0x114ef7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f384 + 0x114ef88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f388 + 0x114ef94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f38c + 0x114efa0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f390 + 0x114efac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f394 + 0x114efb8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f398 + 0x114efc4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f39c + 0x114efd0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f3a0 + 0x114efdc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f3a4 + 0x114efe8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114f3a8 + 0x114eff4));
    *pcVar4 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0114f3ac + 0x114f010));
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0114f3b0 + 0x114f024));
  System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(_UNK_0114f3b4 + 0x114f040),0);
  if (*(int *)(param_1 + 0x54) != 0) {
    uStack_20 = *(undefined4 *)(*(int *)(param_1 + 0x54) + 0xc);
    uStack_28 = **(undefined4 **)(_UNK_0114f3b8 + 0x114f068);
    uStack_24 = 0xffffffff;
    uVar3 = System_Enum__ToString_2bab8c0(&uStack_28,0);
    if (iVar1 != 0) {
      RotateAdLogicManager__TryShowRewarded_fab33c(iVar1,uVar2,uVar3,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

