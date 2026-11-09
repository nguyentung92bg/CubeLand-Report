/* IL2CPP: Rotatelab.Scripts.AppUpdateManager$$OnUpdateButtonClicked
void Rotatelab_Scripts_AppUpdateManager__OnUpdateButtonClicked (Rotatelab_Scripts_AppUpdateManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.AppUpdateManager$$OnUpdateButtonClicked
   void Rotatelab_Scripts_AppUpdateManager__OnUpdateButtonClicked
   (Rotatelab_Scripts_AppUpdateManager_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_AppUpdateManager__OnUpdateButtonClicked_105f368(int param_1)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  code *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar4 = (char *)(_UNK_0106f3d0 + 0x106f37c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106f3d4 + 0x106f390));
    *pcVar4 = '\x01';
  }
  Rotatelab_Scripts_AppUpdateManager__ShowForceUpdateDialog_105f130(param_1);
  iVar3 = *(int *)(param_1 + 0x14);
  if (*(int *)(**(int **)(_UNK_0106f3d8 + 0x106f3ac) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = 0;
  pcVar4 = (char *)(_UNK_035b80a0 + 0x35b7ee0);
  if (*pcVar4 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035b80a4 + 0x35b7ef4),0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035b80a8 + 0x35b7f00));
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035b80ac + 0x35b7f0c));
    *pcVar4 = '\x01';
    uVar1 = extraout_r1;
  }
  uStack_1c = 0;
  uStack_20 = 0;
  uStack_24 = 0;
  uStack_28 = 0;
  if (iVar3 == 0) {
    uStack_24 = 0;
    uStack_28 = 0;
  }
  else if (*(int *)(iVar3 + 8) == 0) {
    uVar1 = System_UIntPtr__op_Explicit_2bd42b0(1,0,0);
    uVar1 = System_UIntPtr__op_Explicit_2bd42dc(uVar1,0);
    uStack_14 = 0;
    uStack_18 = 0;
    UnityEngine_Bindings_ManagedSpanWrapper___ctor_361b8f8(&uStack_18,uVar1,0,0);
    uStack_28 = uStack_18;
    uStack_24 = uStack_14;
  }
  else {
    pcVar4 = (char *)(_UNK_035b80b0 + 0x35b7f48);
    if (*pcVar4 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035b80b4 + 0x35b7f5c),uVar1);
      *pcVar4 = '\x01';
    }
    uStack_20 = System_String__GetRawStringData_2a07d18(iVar3,0);
    uStack_1c = *(undefined4 *)(iVar3 + 8);
    uVar1 = System_ReadOnlySpan_char___GetPinnableReference_1a0c144
                      (&uStack_20,**(undefined4 **)(_UNK_035b80b8 + 0x35b7f7c));
    UnityEngine_Bindings_ManagedSpanWrapper___ctor_361b8f8(&uStack_28,uVar1,uStack_1c,0);
  }
  if (*(int *)(**(int **)(_UNK_035b80bc + 0x35b8004) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  pcVar2 = *(code **)(_UNK_035b80c0 + 0x35b8020);
  if (pcVar2 == (code *)0x0) {
    pcVar2 = (code *)thunk_FUN_00ec3774(_UNK_035b80c4 + 0x35b8030);
    *(code **)(_UNK_035b80c8 + 0x35b8040) = pcVar2;
  }
  (*pcVar2)(&uStack_28);
  return;
}

