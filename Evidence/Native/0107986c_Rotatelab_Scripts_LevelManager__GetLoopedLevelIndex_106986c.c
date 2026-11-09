/* IL2CPP: Rotatelab.Scripts.LevelManager$$GetLoopedLevelIndex
int32_t Rotatelab_Scripts_LevelManager__GetLoopedLevelIndex (Rotatelab_Scripts_LevelManager_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelManager$$GetLoopedLevelIndex
   int32_t Rotatelab_Scripts_LevelManager__GetLoopedLevelIndex (Rotatelab_Scripts_LevelManager_o*
   __this, int32_t index, const MethodInfo* method); */

int Rotatelab_Scripts_LevelManager__GetLoopedLevelIndex_106986c(int param_1,int param_2)

{
  uint extraout_r1;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar1 = (char *)(_UNK_0107994c + 0x1079884);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01079950 + 0x1079898));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01079954 + 0x10798a4));
    *pcVar1 = '\x01';
  }
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0xc);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (param_2 < *(int *)(iVar2 + 0xc)) {
    return param_2;
  }
  iVar2 = *(int *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x14) + 0xc);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  FUN_00f88884(param_2 - *(int *)(iVar3 + 0xc),*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc));
  if (*(uint *)(iVar2 + 0xc) <= extraout_r1) {
    System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_2b955c8
              (0,extraout_r1,**(undefined4 **)(_UNK_01079958 + 0x1079940),extraout_r3,unaff_r4,
               unaff_r5,unaff_r11,unaff_lr);
  }
  iVar2 = *(int *)(iVar2 + 8);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar2 + 0xc) <= extraout_r1) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  return *(int *)(iVar2 + extraout_r1 * 4 + 0x10);
}

