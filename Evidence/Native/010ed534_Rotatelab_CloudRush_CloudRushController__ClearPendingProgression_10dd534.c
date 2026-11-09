/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$ClearPendingProgression
void Rotatelab_CloudRush_CloudRushController__ClearPendingProgression (Rotatelab_CloudRush_CloudRushController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$ClearPendingProgression
   void Rotatelab_CloudRush_CloudRushController__ClearPendingProgression
   (Rotatelab_CloudRush_CloudRushController_o* __this, const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushController__ClearPendingProgression_10dd534(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  code *pcVar4;
  char *pcVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar5 = (char *)(_UNK_010ed580 + 0x10ed544);
  cVar1 = *pcVar5;
  if (cVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ed584 + 0x10ed558));
    cVar1 = '\x01';
    *pcVar5 = '\x01';
  }
  Rotatelab_CloudRush_CloudRushController__set_ShowCloudRushProgressOnSessionStarted_10dc134
            (cVar1,0);
  uVar3 = 0;
  iVar2 = **(int **)(_UNK_010ed588 + 0x10ed578);
  pcVar5 = (char *)(_UNK_0360789c + 0x3607704);
  if (*pcVar5 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_036078a0 + 0x3607718),0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_036078a4 + 0x3607724));
    *pcVar5 = '\x01';
    uVar3 = extraout_r1;
  }
  uStack_1c = 0;
  uStack_20 = 0;
  uStack_24 = 0;
  uStack_28 = 0;
  if (iVar2 == 0) {
    uStack_24 = 0;
    uStack_28 = 0;
  }
  else if (*(int *)(iVar2 + 8) == 0) {
    uVar3 = System_UIntPtr__op_Explicit_2bd42b0(1,0,0);
    uVar3 = System_UIntPtr__op_Explicit_2bd42dc(uVar3,0);
    uStack_14 = 0;
    uStack_18 = 0;
    UnityEngine_Bindings_ManagedSpanWrapper___ctor_361b8f8(&uStack_18,uVar3,0,0);
    uStack_28 = uStack_18;
    uStack_24 = uStack_14;
  }
  else {
    pcVar5 = (char *)(_UNK_036078a8 + 0x3607760);
    if (*pcVar5 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_036078ac + 0x3607774),uVar3);
      *pcVar5 = '\x01';
    }
    uStack_20 = System_String__GetRawStringData_2a07d18(iVar2,0);
    uStack_1c = *(undefined4 *)(iVar2 + 8);
    uVar3 = System_ReadOnlySpan_char___GetPinnableReference_1a0c144
                      (&uStack_20,**(undefined4 **)(_UNK_036078b0 + 0x3607794));
    UnityEngine_Bindings_ManagedSpanWrapper___ctor_361b8f8(&uStack_28,uVar3,uStack_1c,0);
  }
  pcVar4 = *(code **)(_UNK_036078b4 + 0x360781c);
  if (pcVar4 == (code *)0x0) {
    pcVar4 = (code *)thunk_FUN_00ec3774(_UNK_036078b8 + 0x360782c);
    *(code **)(_UNK_036078bc + 0x360783c) = pcVar4;
  }
  (*pcVar4)(&uStack_28);
  return;
}

