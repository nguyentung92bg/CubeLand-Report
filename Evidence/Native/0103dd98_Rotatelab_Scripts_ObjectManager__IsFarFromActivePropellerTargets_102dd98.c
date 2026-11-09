/* IL2CPP: Rotatelab.Scripts.ObjectManager$$IsFarFromActivePropellerTargets
bool Rotatelab_Scripts_ObjectManager__IsFarFromActivePropellerTargets (Rotatelab_Scripts_ObjectManager_o* __this, UnityEngine_Vector3Int_o gridPosition, float separationSqr, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ObjectManager$$IsFarFromActivePropellerTargets
   bool Rotatelab_Scripts_ObjectManager__IsFarFromActivePropellerTargets
   (Rotatelab_Scripts_ObjectManager_o* __this, UnityEngine_Vector3Int_o gridPosition, float
   separationSqr, const MethodInfo* method); */

bool Rotatelab_Scripts_ObjectManager__IsFarFromActivePropellerTargets_102dd98
               (int param_1,int param_2,int param_3,int param_4,float param_5)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  
  pcVar3 = (char *)(_UNK_0103deb0 + 0x103ddc0);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103deb4 + 0x103ddd8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103deb8 + 0x103dde4));
    *pcVar3 = '\x01';
  }
  iVar2 = 0;
  do {
    iVar1 = iVar2;
    if (*(int *)(param_1 + 0x7c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = *(int *)(*(int *)(param_1 + 0x7c) + 0xc);
    if (iVar4 <= iVar1) break;
    if (*(int *)(param_1 + 0x7c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0x7c),iVar1,**(undefined4 **)(_UNK_0103debc + 0x103de38));
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_VoxelController__get_Position_105d1e4(&iStack_3c,iVar2,0);
    fVar5 = (float)VectorSignedToFloat((iStack_34 - param_4) * (iStack_34 - param_4) +
                                       (iStack_38 - param_3) * (iStack_38 - param_3) +
                                       (iStack_3c - param_2) * (iStack_3c - param_2),
                                       (byte)(in_fpscr >> 0x16) & 3);
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar5 < param_5) << 0x1f;
    iVar2 = iVar1 + 1;
  } while (!SUB41(in_fpscr >> 0x1f,0));
  return iVar4 <= iVar1;
}

