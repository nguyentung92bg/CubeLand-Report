/* IL2CPP: Rotatelab.Boosters.CannonRig$$Fire
void Rotatelab_Boosters_CannonRig__Fire (Rotatelab_Boosters_CannonRig_o* __this, UnityEngine_Vector3_o impactPoint, System_Action_o* onImpact, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.CannonRig$$Fire
   void Rotatelab_Boosters_CannonRig__Fire (Rotatelab_Boosters_CannonRig_o* __this,
   UnityEngine_Vector3_o impactPoint, System_Action_o* onImpact, const MethodInfo* method); */

void Rotatelab_Boosters_CannonRig__Fire_11348ac
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar6 = (char *)(_UNK_0114497c + 0x11448c8);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01144980 + 0x11448e4));
    *pcVar6 = '\x01';
  }
  *(undefined4 *)(param_1 + 0x90) = param_5;
  *(undefined4 *)(param_1 + 0x8c) = param_4;
  *(undefined4 *)(param_1 + 0x88) = param_3;
  *(undefined4 *)(param_1 + 0x84) = param_2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x90),param_5);
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  if (*(int *)(**(int **)(_UNK_01144984 + 0x1144910) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Object__op_Inequality_36018e4(uVar4,0,0);
  if ((iVar1 == 0) ||
     (iVar1 = System_String__IsNullOrEmpty_2a0a844(*(undefined4 *)(param_1 + 0x4c),0), iVar1 != 0))
  {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  iVar7 = *(int *)(param_1 + 0x4c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar6 = (char *)(_UNK_035a09dc + 0x35a0808);
  if (*pcVar6 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035a09e0 + 0x35a081c),iVar7,0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035a09e4 + 0x35a0828));
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035a09e8 + 0x35a0834));
    *pcVar6 = '\x01';
  }
  uStack_24 = 0;
  uStack_28 = 0;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(iVar1 + 8);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(iVar1,0);
  }
  if (iVar7 == 0) {
    uStack_24 = 0;
    uStack_28 = 0;
  }
  else if (*(int *)(iVar7 + 8) == 0) {
    uVar4 = System_UIntPtr__op_Explicit_2bd42b0(1,0,0);
    uVar4 = System_UIntPtr__op_Explicit_2bd42dc(uVar4,0);
    UnityEngine_Bindings_ManagedSpanWrapper___ctor_361b8f8(&stack0xffffffe8,uVar4,0,0);
    uStack_28 = 0;
    uStack_24 = 0;
  }
  else {
    pcVar6 = (char *)(_UNK_035a09ec + 0x35a0894);
    if (*pcVar6 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035a09f0 + 0x35a08a8));
      *pcVar6 = '\x01';
    }
    System_String__GetRawStringData_2a07d18(iVar7,0);
    uVar2 = *(undefined4 *)(iVar7 + 8);
    uVar4 = System_ReadOnlySpan_char___GetPinnableReference_1a0c144
                      (&stack0xffffffe0,**(undefined4 **)(_UNK_035a09f4 + 0x35a08c8));
    UnityEngine_Bindings_ManagedSpanWrapper___ctor_361b8f8(&uStack_28,uVar4,uVar2,0);
  }
  pcVar3 = *(code **)(_UNK_035a09f8 + 0x35a0954);
  if (pcVar3 == (code *)0x0) {
    pcVar3 = (code *)thunk_FUN_00ec3774(_UNK_035a09fc + 0x35a0964);
    *(code **)(_UNK_035a0a00 + 0x35a0974) = pcVar3;
  }
  (*pcVar3)(iVar5,&uStack_28);
  return;
}

