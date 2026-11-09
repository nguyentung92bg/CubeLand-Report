/* IL2CPP: Rotatelab.Networking.HiroController.<SaveAndSyncSystemsDelayed>d__80$$MoveNext
void Rotatelab_Networking_HiroController__SaveAndSyncSystemsDelayed_d__80__MoveNext (Rotatelab_Networking_HiroController__SaveAndSyncSystemsDelayed_d__80_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroController.<SaveAndSyncSystemsDelayed>d__80$$MoveNext
   void Rotatelab_Networking_HiroController__SaveAndSyncSystemsDelayed_d__80__MoveNext
   (Rotatelab_Networking_HiroController__SaveAndSyncSystemsDelayed_d__80_o __this, const MethodInfo*
   method); */

void Rotatelab_Networking_HiroController__SaveAndSyncSystemsDelayed_d__80__MoveNext_115c1b0
               (int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uStack_18;
  int iStack_14;
  
  pcVar4 = (char *)(_UNK_0116c38c + 0x116c1c8);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116c390 + 0x116c1dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116c394 + 0x116c1e8));
    *pcVar4 = '\x01';
  }
  iVar5 = param_1[2];
  iStack_14 = 0;
  uStack_18 = 0;
  if (*param_1 == 0) {
    *param_1 = -1;
    iStack_14 = param_1[3];
    param_1[3] = 0;
  }
  else {
    if (*(int *)(**(int **)(_UNK_0116c398 + 0x116c21c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uStack_18 = Cysharp_Threading_Tasks_UniTask__Yield_3216554(0);
    iStack_14 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter_321c1d4(&uStack_18,0);
    iVar1 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted_321c1e4(&iStack_14,0);
    if (iVar1 == 0) {
      puVar2 = *(undefined4 **)(_UNK_0116c39c + 0x116c26c);
      *param_1 = 0;
      uVar3 = *puVar2;
      param_1[3] = iStack_14;
      func_0x0117480c(param_1 + 1,&iStack_14,param_1,uVar3);
      return;
    }
  }
  Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult_321c1ec(&iStack_14,0);
  if (iVar5 != 0) {
    Rotatelab_Networking_HiroController__SaveSystems_114bc94(iVar5);
    Rotatelab_Networking_HiroController__SyncSystems_114c050();
    *param_1 = -2;
    func_0x00fcef34(param_1 + 1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

