/* IL2CPP: Rotatelab.Scripts.LargeVoxelController$$AnimateCrack
void Rotatelab_Scripts_LargeVoxelController__AnimateCrack (Rotatelab_Scripts_LargeVoxelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LargeVoxelController$$AnimateCrack
   void Rotatelab_Scripts_LargeVoxelController__AnimateCrack
   (Rotatelab_Scripts_LargeVoxelController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_LargeVoxelController__AnimateCrack_10143a4(int param_1)

{
  int iVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_r6;
  int *piVar6;
  undefined4 uVar7;
  uint in_fpscr;
  float fVar8;
  
  pcVar3 = (char *)(_UNK_01024488 + 0x10243bc);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102448c + 0x10243d0));
    *pcVar3 = '\x01';
  }
  if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar8 = (float)VectorSignedToFloat(*(undefined4 *)(*(int *)(param_1 + 0x38) + 0x24),
                                     (byte)(in_fpscr >> 0x16) & 3);
  piVar6 = *(int **)(_UNK_01024490 + 0x1024404);
  iVar4 = *(int *)(param_1 + 0x54);
  iVar1 = *piVar6;
  iVar2 = *(int *)(iVar1 + 0x74);
  fVar8 = *(float *)(param_1 + 0x50) + 1.0 / fVar8;
  *(float *)(param_1 + 0x50) = fVar8;
  if (iVar2 == 0) {
    FUN_00ec3934();
    iVar1 = *piVar6;
    fVar8 = *(float *)(param_1 + 0x50);
  }
  if (iVar4 != 0) {
    UnityEngine_MaterialPropertyBlock__SetFloat_35c4024
              (iVar4,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x48),fVar8,0);
    iVar2 = *(int *)(param_1 + 0x10);
    uVar5 = *(undefined4 *)(param_1 + 0x40);
    iVar1 = *(int *)(param_1 + 0x54);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    pcVar3 = (char *)(_UNK_035d5090 + 0x35d5004);
    if (*pcVar3 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035d5094 + 0x35d5018),iVar1,uVar5,0,unaff_r4,unaff_r5,
                         unaff_r6);
      *pcVar3 = '\x01';
    }
    if (iVar2 != 0) {
      iVar4 = *(int *)(iVar2 + 8);
      if (iVar4 != 0) {
        if (iVar1 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(iVar1 + 8);
        }
        UNRECOVERED_JUMPTABLE = *(code **)(_UNK_035d5098 + 0x35d505c);
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_035d509c + 0x35d506c);
          *(code **)(_UNK_035d50a0 + 0x35d507c) = UNRECOVERED_JUMPTABLE;
        }
                    /* WARNING: Could not recover jumptable at 0x035d508c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(iVar4,uVar7,uVar5);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(iVar2,0);
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

