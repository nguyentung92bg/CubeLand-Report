/* IL2CPP: Rotatelab.Scripts.VoxelController$$UpdateColor
void Rotatelab_Scripts_VoxelController__UpdateColor (Rotatelab_Scripts_VoxelController_o* __this, int32_t colorType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.VoxelController$$UpdateColor
   void Rotatelab_Scripts_VoxelController__UpdateColor (Rotatelab_Scripts_VoxelController_o* __this,
   int32_t colorType, const MethodInfo* method); */

void Rotatelab_Scripts_VoxelController__UpdateColor_105d468(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 unaff_r4;
  int iVar3;
  undefined4 unaff_r5;
  int iVar4;
  undefined4 unaff_r6;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 unaff_lr;
  
  pcVar5 = (char *)(_UNK_0106d568 + 0x106d480);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106d56c + 0x106d494));
    *pcVar5 = '\x01';
  }
  Rotatelab_Scripts_BaseTargetableController__UpdateColor_ff596c(param_1,param_2,0);
  puVar6 = *(undefined4 **)(_UNK_0106d570 + 0x106d4bc);
  uVar1 = *puVar6;
  if (param_2 == 0x15) {
    iVar3 = *(int *)(param_1 + 0x10);
    iVar2 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(uVar1);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = *(int *)(iVar2 + 0x18);
    uVar1 = extraout_r3;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x3c);
    iVar2 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(uVar1);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar1 = Rotatelab_Scripts_VoxelColorDataSo__GetVoxelMesh_ff54cc(iVar2,param_2,0);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_MeshFilter__set_sharedMesh_35ce1a4(iVar3,uVar1,0);
    iVar3 = *(int *)(param_1 + 0x10);
    iVar2 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(*puVar6);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = *(int *)(iVar2 + 0x14);
    uVar1 = extraout_r3_00;
  }
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar5 = (char *)(_UNK_035d4aa8 + 0x35d49f8);
  if (*pcVar5 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035d4aac + 0x35d4a0c),iVar2,0,uVar1,unaff_r4,unaff_r5,
                       unaff_r6,unaff_lr);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035d4ab0 + 0x35d4a18));
    *pcVar5 = '\x01';
  }
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + 8);
    if (iVar4 != 0) {
      if (*(int *)(**(int **)(_UNK_035d4ab4 + 0x35d4a50) + 0x1c) == 0) {
        thunk_FUN_00efd7c4();
      }
      if (iVar2 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(iVar2 + 8);
      }
      UNRECOVERED_JUMPTABLE = *(code **)(_UNK_035d4ab8 + 0x35d4a78);
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_035d4abc + 0x35d4a88);
        *(code **)(_UNK_035d4ac0 + 0x35d4a98) = UNRECOVERED_JUMPTABLE;
      }
                    /* WARNING: Could not recover jumptable at 0x035d4aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(iVar4,uVar1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(iVar3,0);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

