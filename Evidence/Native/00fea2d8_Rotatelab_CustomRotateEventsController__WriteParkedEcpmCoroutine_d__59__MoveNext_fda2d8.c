/* IL2CPP: Rotatelab.CustomRotateEventsController.<WriteParkedEcpmCoroutine>d__59$$MoveNext
bool Rotatelab_CustomRotateEventsController__WriteParkedEcpmCoroutine_d__59__MoveNext (Rotatelab_CustomRotateEventsController__WriteParkedEcpmCoroutine_d__59_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController.<WriteParkedEcpmCoroutine>d__59$$MoveNext
   bool Rotatelab_CustomRotateEventsController__WriteParkedEcpmCoroutine_d__59__MoveNext
   (Rotatelab_CustomRotateEventsController__WriteParkedEcpmCoroutine_d__59_o* __this, const
   MethodInfo* method); */

bool Rotatelab_CustomRotateEventsController__WriteParkedEcpmCoroutine_d__59__MoveNext_fda2d8
               (int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  
  pcVar3 = (char *)(_UNK_00fea3a0 + 0xfea2ec);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fea3a4 + 0xfea300));
    *pcVar3 = '\x01';
  }
  iVar5 = *(int *)(param_1 + 8);
  if (iVar5 == 0) {
    puVar1 = *(undefined4 **)(_UNK_00fea3a8 + 0xfea360);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    uVar2 = thunk_FUN_00f00cdc(*puVar1);
    UnityEngine_WaitForSecondsRealtime___ctor_360c850(uVar2,0x41700000,0);
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),uVar2);
    *(undefined4 *)(param_1 + 8) = 1;
  }
  else if (iVar5 == 1) {
    iVar4 = *(int *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined4 *)(iVar4 + 0x2c) = 0;
    thunk_FUN_00ec5080();
    Rotatelab_CustomRotateEventsController__WriteParkedEcpm_fd2e58(iVar4);
  }
  return iVar5 == 0;
}

