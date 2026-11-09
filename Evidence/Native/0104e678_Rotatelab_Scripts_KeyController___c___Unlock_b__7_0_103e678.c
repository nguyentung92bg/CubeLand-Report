/* IL2CPP: Rotatelab.Scripts.KeyController.<>c$$<Unlock>b__7_0
void Rotatelab_Scripts_KeyController___c___Unlock_b__7_0 (Rotatelab_Scripts_KeyController___c_o* __this, Rotatelab_Scripts_KeyController_o* this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.KeyController.<>c$$<Unlock>b__7_0
   void Rotatelab_Scripts_KeyController___c___Unlock_b__7_0 (Rotatelab_Scripts_KeyController___c_o*
   __this, Rotatelab_Scripts_KeyController_o* this, const MethodInfo* method); */

void Rotatelab_Scripts_KeyController___c___Unlock_b__7_0_103e678(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_0104e6e4 + 0x104e68c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104e6e8 + 0x104e6a0));
    *pcVar5 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(param_2 + 0x10);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = **(int **)(_UNK_0104e6ec + 0x104e6d8);
  pcVar5 = (char *)(_UNK_035a04e4 + 0x35a0308);
  if (*pcVar5 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035a04e8 + 0x35a031c),iVar2,0x3f800000,0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035a04ec + 0x35a0328));
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035a04f0 + 0x35a0334));
    *pcVar5 = '\x01';
  }
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(iVar4 + 8);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(iVar4,0);
  }
  if (iVar2 == 0) {
    uStack_2c = 0;
    uStack_30 = 0;
  }
  else if (*(int *)(iVar2 + 8) == 0) {
    uVar1 = System_UIntPtr__op_Explicit_2bd42b0(1,0,0);
    uVar1 = System_UIntPtr__op_Explicit_2bd42dc(uVar1,0);
    uStack_1c = 0;
    uStack_20 = 0;
    UnityEngine_Bindings_ManagedSpanWrapper___ctor_361b8f8(&uStack_20,uVar1,0,0);
    uStack_30 = uStack_20;
    uStack_2c = uStack_1c;
  }
  else {
    pcVar5 = (char *)(_UNK_035a04f4 + 0x35a0394);
    if (*pcVar5 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035a04f8 + 0x35a03a8));
      *pcVar5 = '\x01';
    }
    uStack_28 = System_String__GetRawStringData_2a07d18(iVar2,0);
    uStack_24 = *(undefined4 *)(iVar2 + 8);
    uVar1 = System_ReadOnlySpan_char___GetPinnableReference_1a0c144
                      (&uStack_28,**(undefined4 **)(_UNK_035a04fc + 0x35a03c8));
    UnityEngine_Bindings_ManagedSpanWrapper___ctor_361b8f8(&uStack_30,uVar1,uStack_24,0);
  }
  pcVar3 = *(code **)(_UNK_035a0500 + 0x35a0454);
  if (pcVar3 == (code *)0x0) {
    pcVar3 = (code *)thunk_FUN_00ec3774(_UNK_035a0504 + 0x35a0464);
    *(code **)(_UNK_035a0508 + 0x35a0474) = pcVar3;
  }
  (*pcVar3)(iVar6,&uStack_30,0x3f800000);
  return;
}

