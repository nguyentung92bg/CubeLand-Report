/* IL2CPP: Rotatelab.Scripts.BombController.<>c$$<AnimateExplosionCoroutine>b__25_0
void Rotatelab_Scripts_BombController___c___AnimateExplosionCoroutine_b__25_0 (Rotatelab_Scripts_BombController___c_o* __this, Rotatelab_Scripts_BombController_o* this, float value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BombController.<>c$$<AnimateExplosionCoroutine>b__25_0
   void Rotatelab_Scripts_BombController___c___AnimateExplosionCoroutine_b__25_0
   (Rotatelab_Scripts_BombController___c_o* __this, Rotatelab_Scripts_BombController_o* this, float
   value, const MethodInfo* method); */

void Rotatelab_Scripts_BombController___c___AnimateExplosionCoroutine_b__25_0_ff786c
               (undefined4 param_1,int param_2,undefined4 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_r7;
  int *piVar5;
  
  pcVar1 = (char *)(_UNK_010079bc + 0x1007884);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010079c0 + 0x1007898));
    *pcVar1 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(param_2 + 0x48);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar2 + 0xc) < 2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar5 = *(int **)(_UNK_010079c4 + 0x10078d8);
  iVar3 = *(int *)(iVar2 + 0x14);
  iVar2 = *piVar5;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar5;
  }
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Material__SetFloat_35caf8c
            (iVar3,*(undefined4 *)(*(int *)(iVar2 + 0x5c) + 100),param_3,0);
  iVar2 = *(int *)(param_2 + 0x48);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar2 + 0xc) < 3) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  if (*(int *)(iVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Material__SetFloat_35caf8c
            (*(int *)(iVar2 + 0x18),*(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 100),param_3,0);
  iVar2 = *(int *)(param_2 + 0x48);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar2 + 0xc) < 4) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  iVar2 = *(int *)(iVar2 + 0x1c);
  uVar4 = *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 100);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar1 = (char *)(_UNK_035d9950 + 0x35d98a8);
  if (*pcVar1 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035d9954 + 0x35d98bc),uVar4,param_3,0,unaff_r4,unaff_r5,
                       unaff_r6,unaff_r7);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035d9958 + 0x35d98c8));
    *pcVar1 = '\x01';
  }
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(iVar2 + 8);
  if (iVar3 == 0) {
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
  (*UNRECOVERED_JUMPTABLE)(iVar3,uVar4,param_3);
  return;
}

