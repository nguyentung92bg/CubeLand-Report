/* IL2CPP: Rotatelab.UI.CopyTextOnClick$$UnityEngine.EventSystems.IPointerClickHandler.OnPointerClick
void Rotatelab_UI_CopyTextOnClick__UnityEngine_EventSystems_IPointerClickHandler_OnPointerClick (Rotatelab_UI_CopyTextOnClick_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.UI.CopyTextOnClick$$UnityEngine.EventSystems.IPointerClickHandler.OnPointerClick
   void Rotatelab_UI_CopyTextOnClick__UnityEngine_EventSystems_IPointerClickHandler_OnPointerClick
   (Rotatelab_UI_CopyTextOnClick_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData,
   const MethodInfo* method); */

void Rotatelab_UI_CopyTextOnClick__UnityEngine_EventSystems_IPointerClickHandler_OnPointerClick_111ff7c
               (int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_r1;
  code *pcVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar4 = (char *)(_UNK_01130040 + 0x112ff90);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01130044 + 0x112ffa4));
    *pcVar4 = '\x01';
  }
  if (*(char *)(param_1 + 0x14) != '\0') {
    piVar5 = *(int **)(param_1 + 0x10);
    if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar1 = (**(code **)(*piVar5 + 0x2a8))(piVar5,*(undefined4 *)(*piVar5 + 0x2ac));
    iVar2 = System_String__IsNullOrWhiteSpace_2a0a85c(uVar1,0);
    if (iVar2 != 0) {
      return;
    }
  }
  piVar5 = *(int **)(param_1 + 0x10);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = (**(code **)(*piVar5 + 0x2a8))(piVar5,*(undefined4 *)(*piVar5 + 0x2ac));
  if (*(int *)(**(int **)(_UNK_01130048 + 0x1130020) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = 0;
  pcVar4 = (char *)(_UNK_0367b11c + 0x367af5c);
  if (*pcVar4 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0367b120 + 0x367af70),0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0367b124 + 0x367af7c));
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0367b128 + 0x367af88));
    *pcVar4 = '\x01';
    uVar1 = extraout_r1;
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
    uVar1 = System_UIntPtr__op_Explicit_2bd42b0(1,0,0);
    uVar1 = System_UIntPtr__op_Explicit_2bd42dc(uVar1,0);
    uStack_14 = 0;
    uStack_18 = 0;
    UnityEngine_Bindings_ManagedSpanWrapper___ctor_361b8f8(&uStack_18,uVar1,0,0);
    uStack_28 = uStack_18;
    uStack_24 = uStack_14;
  }
  else {
    pcVar4 = (char *)(_UNK_0367b12c + 0x367afc4);
    if (*pcVar4 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0367b130 + 0x367afd8),uVar1);
      *pcVar4 = '\x01';
    }
    uStack_20 = System_String__GetRawStringData_2a07d18(iVar2,0);
    uStack_1c = *(undefined4 *)(iVar2 + 8);
    uVar1 = System_ReadOnlySpan_char___GetPinnableReference_1a0c144
                      (&uStack_20,**(undefined4 **)(_UNK_0367b134 + 0x367aff8));
    UnityEngine_Bindings_ManagedSpanWrapper___ctor_361b8f8(&uStack_28,uVar1,uStack_1c,0);
  }
  if (*(int *)(**(int **)(_UNK_0367b138 + 0x367b080) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  pcVar3 = *(code **)(_UNK_0367b13c + 0x367b09c);
  if (pcVar3 == (code *)0x0) {
    pcVar3 = (code *)thunk_FUN_00ec3774(_UNK_0367b140 + 0x367b0ac);
    *(code **)(_UNK_0367b144 + 0x367b0bc) = pcVar3;
  }
  (*pcVar3)(&uStack_28);
  return;
}

