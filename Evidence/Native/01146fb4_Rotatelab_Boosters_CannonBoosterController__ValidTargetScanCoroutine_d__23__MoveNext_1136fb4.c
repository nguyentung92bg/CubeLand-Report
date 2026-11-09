/* IL2CPP: Rotatelab.Boosters.CannonBoosterController.<ValidTargetScanCoroutine>d__23$$MoveNext
bool Rotatelab_Boosters_CannonBoosterController__ValidTargetScanCoroutine_d__23__MoveNext (Rotatelab_Boosters_CannonBoosterController__ValidTargetScanCoroutine_d__23_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.CannonBoosterController.<ValidTargetScanCoroutine>d__23$$MoveNext
   bool Rotatelab_Boosters_CannonBoosterController__ValidTargetScanCoroutine_d__23__MoveNext
   (Rotatelab_Boosters_CannonBoosterController__ValidTargetScanCoroutine_d__23_o* __this, const
   MethodInfo* method); */

undefined4
Rotatelab_Boosters_CannonBoosterController__ValidTargetScanCoroutine_d__23__MoveNext_1136fb4
          (int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  pcVar2 = (char *)(_UNK_01147084 + 0x1146fc8);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01147088 + 0x1146fdc));
    *pcVar2 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 8) == 1) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
  }
  else {
    if (*(int *)(param_1 + 8) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = *(undefined4 *)(iVar3 + 0x14);
    uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0114708c + 0x1147020));
    UnityEngine_WaitForSeconds___ctor_360c704(uVar1,uVar4,0);
    *(undefined4 *)(param_1 + 0x14) = uVar1;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x14),uVar1);
  }
  Rotatelab_Boosters_CannonBoosterController__UpdateValidTargetState_11364ec(iVar3);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x14);
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 8) = 1;
  return 1;
}

