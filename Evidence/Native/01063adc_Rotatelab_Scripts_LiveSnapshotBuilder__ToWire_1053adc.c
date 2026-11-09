/* IL2CPP: Rotatelab.Scripts.LiveSnapshotBuilder$$ToWire
System_Single_array* Rotatelab_Scripts_LiveSnapshotBuilder__ToWire (UnityEngine_Vector3_o v, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LiveSnapshotBuilder$$ToWire
   System_Single_array* Rotatelab_Scripts_LiveSnapshotBuilder__ToWire (UnityEngine_Vector3_o v,
   const MethodInfo* method); */

int Rotatelab_Scripts_LiveSnapshotBuilder__ToWire_1053adc
              (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01063b7c + 0x1063af8);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01063b80 + 0x1063b0c));
    *pcVar3 = '\x01';
  }
  iVar1 = FUN_00ec388c(**(undefined4 **)(_UNK_01063b84 + 0x1063b24),3);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = *(uint *)(iVar1 + 0xc);
  if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  if (uVar2 < 2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  if (uVar2 < 3) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(undefined4 *)(iVar1 + 0x18) = param_3;
  return iVar1;
}

