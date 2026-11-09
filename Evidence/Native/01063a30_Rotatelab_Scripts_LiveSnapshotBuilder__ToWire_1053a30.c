/* IL2CPP: Rotatelab.Scripts.LiveSnapshotBuilder$$ToWire
System_Int32_array* Rotatelab_Scripts_LiveSnapshotBuilder__ToWire (UnityEngine_Vector3Int_o p, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LiveSnapshotBuilder$$ToWire
   System_Int32_array* Rotatelab_Scripts_LiveSnapshotBuilder__ToWire (UnityEngine_Vector3Int_o p,
   const MethodInfo* method); */

int Rotatelab_Scripts_LiveSnapshotBuilder__ToWire_1053a30
              (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01063ad0 + 0x1063a4c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01063ad4 + 0x1063a60));
    *pcVar3 = '\x01';
  }
  iVar1 = FUN_00ec388c(**(undefined4 **)(_UNK_01063ad8 + 0x1063a78),3);
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

