/* IL2CPP: Rotatelab.Scripts.HiddenChestController$$UpdateColor
void Rotatelab_Scripts_HiddenChestController__UpdateColor (Rotatelab_Scripts_HiddenChestController_o* __this, int32_t colorType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.HiddenChestController$$UpdateColor
   void Rotatelab_Scripts_HiddenChestController__UpdateColor
   (Rotatelab_Scripts_HiddenChestController_o* __this, int32_t colorType, const MethodInfo* method);
    */

void Rotatelab_Scripts_HiddenChestController__UpdateColor_100ffac(int param_1,undefined4 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_r5;
  int iVar3;
  int iVar4;
  undefined4 unaff_r6;
  char *pcVar5;
  undefined4 unaff_lr;
  
  Rotatelab_Scripts_BaseTargetableController__UpdateColor_ff596c(param_1,param_2,0);
  iVar3 = *(int *)(param_1 + 0x44);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar5 = (char *)(_UNK_0102007c + 0x101fff8);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01020080 + 0x102000c));
    *pcVar5 = '\x01';
  }
  iVar1 = *(int *)(iVar3 + 0x14);
  iVar3 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8
                    (**(undefined4 **)(_UNK_01020084 + 0x1020020));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = Rotatelab_Scripts_VoxelColorDataSo__GetData_ff536c(iVar3,param_2,0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(iVar3 + 0x34);
  if (iVar1 != 0) {
    pcVar5 = (char *)(_UNK_035d4aa8 + 0x35d49f8);
    if (*pcVar5 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035d4aac + 0x35d4a0c),iVar3,0,extraout_r3,unaff_r4,
                         unaff_r5,unaff_r6,unaff_lr);
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035d4ab0 + 0x35d4a18));
      *pcVar5 = '\x01';
    }
    if (iVar1 != 0) {
      iVar4 = *(int *)(iVar1 + 8);
      if (iVar4 != 0) {
        if (*(int *)(**(int **)(_UNK_035d4ab4 + 0x35d4a50) + 0x1c) == 0) {
          thunk_FUN_00efd7c4();
        }
        if (iVar3 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined4 *)(iVar3 + 8);
        }
        UNRECOVERED_JUMPTABLE = *(code **)(_UNK_035d4ab8 + 0x35d4a78);
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_035d4abc + 0x35d4a88);
          *(code **)(_UNK_035d4ac0 + 0x35d4a98) = UNRECOVERED_JUMPTABLE;
        }
                    /* WARNING: Could not recover jumptable at 0x035d4aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(iVar4,uVar2);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(iVar1,0);
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

