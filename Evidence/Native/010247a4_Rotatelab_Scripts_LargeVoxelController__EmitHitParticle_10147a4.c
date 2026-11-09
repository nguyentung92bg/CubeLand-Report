/* IL2CPP: Rotatelab.Scripts.LargeVoxelController$$EmitHitParticle
void Rotatelab_Scripts_LargeVoxelController__EmitHitParticle (Rotatelab_Scripts_LargeVoxelController_o* __this, UnityEngine_Vector3_o worldPosition, UnityEngine_Vector3_o worldNormal, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LargeVoxelController$$EmitHitParticle
   void Rotatelab_Scripts_LargeVoxelController__EmitHitParticle
   (Rotatelab_Scripts_LargeVoxelController_o* __this, UnityEngine_Vector3_o worldPosition,
   UnityEngine_Vector3_o worldNormal, const MethodInfo* method); */

void Rotatelab_Scripts_LargeVoxelController__EmitHitParticle_10147a4
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0102486c + 0x10247c4);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01024870 + 0x10247dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01024874 + 0x10247e8));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01024878 + 0x10247fc);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 100);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_Int32Enum__Vector3__Vector3___Raise_23a5f38
            (iVar1,*(undefined4 *)(param_1 + 0x14),param_2,param_3,param_4,param_5,param_6,param_7,
             **(undefined4 **)(_UNK_0102487c + 0x102484c));
  return;
}

