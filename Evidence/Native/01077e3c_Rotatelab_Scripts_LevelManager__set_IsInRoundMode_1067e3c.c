/* IL2CPP: Rotatelab.Scripts.LevelManager$$set_IsInRoundMode
void Rotatelab_Scripts_LevelManager__set_IsInRoundMode (bool value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelManager$$set_IsInRoundMode
   void Rotatelab_Scripts_LevelManager__set_IsInRoundMode (bool value, const MethodInfo* method); */

void Rotatelab_Scripts_LevelManager__set_IsInRoundMode_1067e3c(int param_1)

{
  int iVar1;
  uint uVar2;
  int extraout_r1;
  int extraout_r1_00;
  int *piVar3;
  char *pcVar4;
  
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar3 = *(int **)(iVar1 + 0x1c);
  uVar2 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(piVar3,0,0);
  pcVar4 = (char *)(_UNK_01150cf8 + 0x1150c38);
  if (param_1 == 0) {
    if (*pcVar4 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01150cfc + 0x1150c9c));
      *pcVar4 = '\x01';
    }
    iVar1 = *(int *)(**(int **)(_UNK_01150d00 + 0x1150cb0) + 0x74);
    if (iVar1 == 0) {
      FUN_00ec3934();
      iVar1 = extraout_r1_00;
    }
    uVar2 = ((int)uVar2 >> 0x1f) - (uVar2 ^ (int)uVar2 >> 0x1f);
  }
  else {
    if (*pcVar4 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01150d04 + 0x1150c50));
      *pcVar4 = '\x01';
    }
    iVar1 = *(int *)(**(int **)(_UNK_01150d08 + 0x1150c64) + 0x74);
    if (iVar1 == 0) {
      FUN_00ec3934();
      iVar1 = extraout_r1;
    }
    if ((int)uVar2 < 0) {
      uVar2 = -uVar2;
    }
    if ((int)uVar2 < 2) {
      uVar2 = 1;
    }
  }
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xf8))
              (piVar3,iVar1,uVar2,(int)uVar2 >> 0x1f,*(undefined4 *)(*piVar3 + 0xfc));
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

