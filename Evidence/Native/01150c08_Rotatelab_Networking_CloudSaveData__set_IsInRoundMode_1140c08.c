/* IL2CPP: Rotatelab.Networking.CloudSaveData$$set_IsInRoundMode
void Rotatelab_Networking_CloudSaveData__set_IsInRoundMode (Rotatelab_Networking_CloudSaveData_o* __this, bool value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.CloudSaveData$$set_IsInRoundMode
   void Rotatelab_Networking_CloudSaveData__set_IsInRoundMode (Rotatelab_Networking_CloudSaveData_o*
   __this, bool value, const MethodInfo* method); */

void Rotatelab_Networking_CloudSaveData__set_IsInRoundMode_1140c08(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int extraout_r1;
  int extraout_r1_00;
  int *piVar3;
  char *pcVar4;
  
  piVar3 = *(int **)(param_1 + 0x1c);
  uVar1 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(piVar3,0);
  pcVar4 = (char *)(_UNK_01150cf8 + 0x1150c38);
  if (param_2 == 0) {
    if (*pcVar4 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01150cfc + 0x1150c9c));
      *pcVar4 = '\x01';
    }
    iVar2 = *(int *)(**(int **)(_UNK_01150d00 + 0x1150cb0) + 0x74);
    if (iVar2 == 0) {
      FUN_00ec3934();
      iVar2 = extraout_r1_00;
    }
    uVar1 = ((int)uVar1 >> 0x1f) - (uVar1 ^ (int)uVar1 >> 0x1f);
  }
  else {
    if (*pcVar4 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01150d04 + 0x1150c50));
      *pcVar4 = '\x01';
    }
    iVar2 = *(int *)(**(int **)(_UNK_01150d08 + 0x1150c64) + 0x74);
    if (iVar2 == 0) {
      FUN_00ec3934();
      iVar2 = extraout_r1;
    }
    if ((int)uVar1 < 0) {
      uVar1 = -uVar1;
    }
    if ((int)uVar1 < 2) {
      uVar1 = 1;
    }
  }
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xf8))
              (piVar3,iVar2,uVar1,(int)uVar1 >> 0x1f,*(undefined4 *)(*piVar3 + 0xfc));
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

