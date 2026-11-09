/* IL2CPP: Rotatelab.Boosters.MagicWand3DController$$<Use>b__3_0
void Rotatelab_Boosters_MagicWand3DController___Use_b__3_0 (Rotatelab_Boosters_MagicWand3DController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.MagicWand3DController$$<Use>b__3_0
   void Rotatelab_Boosters_MagicWand3DController___Use_b__3_0
   (Rotatelab_Boosters_MagicWand3DController_o* __this, const MethodInfo* method); */

void Rotatelab_Boosters_MagicWand3DController___Use_b__3_0_11313c4(int *param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0114144c + 0x11413d8);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01141450 + 0x11413ec));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01141454 + 0x1141400);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x30);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction__Raise_fc08b8(iVar1,0);
                    /* WARNING: Could not recover jumptable at 0x01141448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x100))(param_1,*(undefined4 *)(*param_1 + 0x104));
  return;
}

