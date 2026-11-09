/* IL2CPP: Rotatelab.Scripts.ConnectionController$$SetIced
void Rotatelab_Scripts_ConnectionController__SetIced (Rotatelab_Scripts_ConnectionController_o* __this, bool isIced, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ConnectionController$$SetIced
   void Rotatelab_Scripts_ConnectionController__SetIced (Rotatelab_Scripts_ConnectionController_o*
   __this, bool isIced, const MethodInfo* method); */

void Rotatelab_Scripts_ConnectionController__SetIced_1033758(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_r5;
  int iVar5;
  undefined4 unaff_r6;
  char *pcVar6;
  undefined4 unaff_lr;
  
  pcVar6 = (char *)(_UNK_01043808 + 0x1043770);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104380c + 0x1043784));
    *pcVar6 = '\x01';
  }
  if (param_2 == 0) {
    piVar2 = (int *)(param_1 + 0x30);
  }
  else {
    iVar1 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8
                      (**(undefined4 **)(_UNK_01043810 + 0x10437a0));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar2 = (int *)(iVar1 + 0x20);
  }
  iVar1 = *piVar2;
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Renderer__set_sharedMaterial_35c59bc(*(int *)(param_1 + 0x10),iVar1,0);
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar6 = (char *)(_UNK_035d4aa8 + 0x35d49f8);
  if (*pcVar6 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035d4aac + 0x35d4a0c),iVar1,0,extraout_r3,unaff_r4,
                       unaff_r5,unaff_r6,unaff_lr);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035d4ab0 + 0x35d4a18));
    *pcVar6 = '\x01';
  }
  if (iVar3 != 0) {
    iVar5 = *(int *)(iVar3 + 8);
    if (iVar5 != 0) {
      if (*(int *)(**(int **)(_UNK_035d4ab4 + 0x35d4a50) + 0x1c) == 0) {
        thunk_FUN_00efd7c4();
      }
      if (iVar1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(iVar1 + 8);
      }
      UNRECOVERED_JUMPTABLE = *(code **)(_UNK_035d4ab8 + 0x35d4a78);
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_035d4abc + 0x35d4a88);
        *(code **)(_UNK_035d4ac0 + 0x35d4a98) = UNRECOVERED_JUMPTABLE;
      }
                    /* WARNING: Could not recover jumptable at 0x035d4aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(iVar5,uVar4);
      return;
    }
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(iVar3,0);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

