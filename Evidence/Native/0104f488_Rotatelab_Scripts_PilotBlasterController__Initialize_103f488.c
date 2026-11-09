/* IL2CPP: Rotatelab.Scripts.PilotBlasterController$$Initialize
void Rotatelab_Scripts_PilotBlasterController__Initialize (Rotatelab_Scripts_PilotBlasterController_o* __this, Rotatelab_Pool_BulletPool_o* bulletPool, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PilotBlasterController$$Initialize
   void Rotatelab_Scripts_PilotBlasterController__Initialize
   (Rotatelab_Scripts_PilotBlasterController_o* __this, Rotatelab_Pool_BulletPool_o* bulletPool,
   const MethodInfo* method); */

void Rotatelab_Scripts_PilotBlasterController__Initialize_103f488(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 auStack_24 [2];
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_0104f5c4 + 0x104f4a4);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104f5c8 + 0x104f4b8));
    *pcVar3 = '\x01';
  }
  Rotatelab_Scripts_BlasterController__Initialize_10316d8(param_1,param_2,0);
  if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh_35ce2e4(*(int *)(param_1 + 0x44),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = UnityEngine_Mesh__GetBlendShapeIndex_35cf620
                    (iVar1,**(undefined4 **)(_UNK_0104f5cc + 0x104f50c),0);
  *(undefined4 *)(param_1 + 0x1b0) = uVar2;
  if (*(int *)(param_1 + 0x130) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x130),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_localEulerAngles_3614ed4(auStack_24,iVar1,0);
  uVar2 = UnityEngine_Random__Range_35f8ac0(0,0x43b40000,0);
  if (*(int *)(param_1 + 0x130) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x130),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localEulerAngles_3615014(iVar1,auStack_24[0],uVar2,uStack_1c,0);
  return;
}

