/* IL2CPP: Rotatelab.Scripts.LevelManager.<>c$$<LoadLevel>b__40_0
void Rotatelab_Scripts_LevelManager___c___LoadLevel_b__40_0 (Rotatelab_Scripts_LevelManager___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelManager.<>c$$<LoadLevel>b__40_0
   void Rotatelab_Scripts_LevelManager___c___LoadLevel_b__40_0
   (Rotatelab_Scripts_LevelManager___c_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_LevelManager___c___LoadLevel_b__40_0_106a91c(void)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0107a9d8 + 0x107a92c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107a9dc + 0x107a940));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107a9e0 + 0x107a94c));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0107a9e4 + 0x107a960);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0xc);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction__Raise_fc08b8(iVar1,0);
  piVar3 = *(int **)(_UNK_0107a9e8 + 0x107a9a0);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0xb4);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00fd08d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
  return;
}

