/* IL2CPP: Rotatelab.Scripts.ShieldController$$<AnimateHit>b__22_0
void Rotatelab_Scripts_ShieldController___AnimateHit_b__22_0 (Rotatelab_Scripts_ShieldController_o* __this, float value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ShieldController$$<AnimateHit>b__22_0
   void Rotatelab_Scripts_ShieldController___AnimateHit_b__22_0
   (Rotatelab_Scripts_ShieldController_o* __this, float value, const MethodInfo* method); */

void Rotatelab_Scripts_ShieldController___AnimateHit_b__22_0_10508dc(int param_1,undefined4 param_2)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar2;
  undefined4 unaff_r6;
  char *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  
  pcVar3 = (char *)(_UNK_01060960 + 0x10608f4);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01060964 + 0x1060908));
    *pcVar3 = '\x01';
  }
  piVar4 = *(int **)(_UNK_01060968 + 0x106091c);
  iVar2 = *(int *)(param_1 + 0x38);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar4;
  }
  uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x70);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar3 = (char *)(_UNK_035d9950 + 0x35d98a8);
  if (*pcVar3 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035d9954 + 0x35d98bc),uVar5,param_2,0,unaff_r4,unaff_r5,
                       unaff_r6);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035d9958 + 0x35d98c8));
    *pcVar3 = '\x01';
  }
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar2 + 8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(iVar2,0);
  }
  if (*(int *)(**(int **)(_UNK_035d995c + 0x35d9900) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(_UNK_035d9960 + 0x35d991c);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_035d9964 + 0x35d992c);
    *(code **)(_UNK_035d9968 + 0x35d993c) = UNRECOVERED_JUMPTABLE;
  }
                    /* WARNING: Could not recover jumptable at 0x035d994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(iVar1,uVar5,param_2);
  return;
}

