/* IL2CPP: Rotatelab.Scripts.LargeVoxelController$$UpdateColor
void Rotatelab_Scripts_LargeVoxelController__UpdateColor (Rotatelab_Scripts_LargeVoxelController_o* __this, int32_t colorType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LargeVoxelController$$UpdateColor
   void Rotatelab_Scripts_LargeVoxelController__UpdateColor
   (Rotatelab_Scripts_LargeVoxelController_o* __this, int32_t colorType, const MethodInfo* method);
    */

void Rotatelab_Scripts_LargeVoxelController__UpdateColor_10139c8(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 unaff_r4;
  int *piVar3;
  undefined4 unaff_r5;
  undefined4 uVar4;
  undefined4 unaff_r6;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 unaff_r7;
  int iVar7;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar5 = (char *)(_UNK_01023bc4 + 0x10239ec);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01023bc8 + 0x1023a00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01023bcc + 0x1023a0c));
    *pcVar5 = '\x01';
  }
  Rotatelab_Scripts_BaseTargetableController__UpdateColor_ff596c(param_1,param_2,0);
  iVar1 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8
                    (**(undefined4 **)(_UNK_01023bd0 + 0x1023a30));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Scripts_VoxelColorDataSo__GetData_ff536c(iVar1,param_2,0);
  piVar3 = *(int **)(_UNK_01023bd4 + 0x1023a64);
  iVar7 = *(int *)(param_1 + 0x54);
  iVar2 = *piVar3;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar3;
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_MaterialPropertyBlock__SetColor_35c40d0
            (iVar7,**(undefined4 **)(iVar2 + 0x5c),*(undefined4 *)(iVar1 + 0xc),
             *(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0x14),
             *(undefined4 *)(iVar1 + 0x18),0);
  piVar3 = *(int **)(_UNK_01023bd8 + 0x1023ad8);
  if (*(int *)(param_1 + 0x54) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_MaterialPropertyBlock__SetFloat_35c4024
            (*(int *)(param_1 + 0x54),*(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x40),
             *(undefined4 *)(iVar1 + 0x3c),0);
  if (*(int *)(param_1 + 0x54) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_MaterialPropertyBlock__SetFloat_35c4024
            (*(int *)(param_1 + 0x54),*(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x3c),
             *(undefined4 *)(iVar1 + 0x40),0);
  if (*(int *)(param_1 + 0x54) != 0) {
    UnityEngine_MaterialPropertyBlock__SetColor_35c40d0
              (*(int *)(param_1 + 0x54),**(undefined4 **)(*piVar3 + 0x5c),
               *(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x10),
               *(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(iVar1 + 0x18),0);
    iVar2 = *(int *)(param_1 + 0x10);
    uVar4 = *(undefined4 *)(param_1 + 0x40);
    iVar1 = *(int *)(param_1 + 0x54);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    pcVar5 = (char *)(_UNK_035d5090 + 0x35d5004);
    if (*pcVar5 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035d5094 + 0x35d5018),iVar1,uVar4,0,unaff_r4,unaff_r5,
                         unaff_r6,unaff_r7,unaff_r11,unaff_lr);
      *pcVar5 = '\x01';
    }
    if (iVar2 != 0) {
      iVar7 = *(int *)(iVar2 + 8);
      if (iVar7 != 0) {
        if (iVar1 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)(iVar1 + 8);
        }
        UNRECOVERED_JUMPTABLE = *(code **)(_UNK_035d5098 + 0x35d505c);
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_035d509c + 0x35d506c);
          *(code **)(_UNK_035d50a0 + 0x35d507c) = UNRECOVERED_JUMPTABLE;
        }
                    /* WARNING: Could not recover jumptable at 0x035d508c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(iVar7,uVar6,uVar4);
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

