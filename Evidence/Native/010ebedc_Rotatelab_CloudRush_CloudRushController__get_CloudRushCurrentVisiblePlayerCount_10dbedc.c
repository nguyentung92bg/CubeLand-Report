/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$get_CloudRushCurrentVisiblePlayerCount
int32_t Rotatelab_CloudRush_CloudRushController__get_CloudRushCurrentVisiblePlayerCount (Rotatelab_CloudRush_CloudRushController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$get_CloudRushCurrentVisiblePlayerCount
   int32_t Rotatelab_CloudRush_CloudRushController__get_CloudRushCurrentVisiblePlayerCount
   (Rotatelab_CloudRush_CloudRushController_o* __this, const MethodInfo* method); */

undefined4
Rotatelab_CloudRush_CloudRushController__get_CloudRushCurrentVisiblePlayerCount_10dbedc(void)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  char *pcVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar4 = (char *)(_UNK_010ebf24 + 0x10ebeec);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ebf28 + 0x10ebf00));
    *pcVar4 = '\x01';
  }
  iVar1 = **(int **)(_UNK_010ebf2c + 0x10ebf1c);
  pcVar4 = (char *)(_UNK_03606d34 + 0x3606b8c);
  if (*pcVar4 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03606d38 + 0x3606ba0),0xb,0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03606d3c + 0x3606bac));
    *pcVar4 = '\x01';
  }
  uStack_1c = 0;
  uStack_20 = 0;
  uStack_24 = 0;
  uStack_28 = 0;
  if (iVar1 == 0) {
    uStack_24 = 0;
    uStack_28 = 0;
  }
  else if (*(int *)(iVar1 + 8) == 0) {
    uVar2 = System_UIntPtr__op_Explicit_2bd42b0(1,0,0);
    uVar2 = System_UIntPtr__op_Explicit_2bd42dc(uVar2,0);
    uStack_14 = 0;
    uStack_18 = 0;
    UnityEngine_Bindings_ManagedSpanWrapper___ctor_361b8f8(&uStack_18,uVar2,0,0);
    uStack_28 = uStack_18;
    uStack_24 = uStack_14;
  }
  else {
    pcVar4 = (char *)(_UNK_03606d40 + 0x3606be8);
    if (*pcVar4 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03606d44 + 0x3606bfc));
      *pcVar4 = '\x01';
    }
    uStack_20 = System_String__GetRawStringData_2a07d18(iVar1,0);
    uStack_1c = *(undefined4 *)(iVar1 + 8);
    uVar2 = System_ReadOnlySpan_char___GetPinnableReference_1a0c144
                      (&uStack_20,**(undefined4 **)(_UNK_03606d48 + 0x3606c1c));
    UnityEngine_Bindings_ManagedSpanWrapper___ctor_361b8f8(&uStack_28,uVar2,uStack_1c,0);
  }
  pcVar3 = *(code **)(_UNK_03606d4c + 0x3606ca4);
  if (pcVar3 == (code *)0x0) {
    pcVar3 = (code *)thunk_FUN_00ec3774(_UNK_03606d50 + 0x3606cb4);
    *(code **)(_UNK_03606d54 + 0x3606cc4) = pcVar3;
  }
  uVar2 = (*pcVar3)(&uStack_28,0xb);
  return uVar2;
}

