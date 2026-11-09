/* IL2CPP: Rotatelab.CustomRotateEventsController$$GetBoosterUseCountKey
System_String_o* Rotatelab_CustomRotateEventsController__GetBoosterUseCountKey (bool isPreBooster, bool isLevelBase, int32_t boosterId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$GetBoosterUseCountKey
   System_String_o* Rotatelab_CustomRotateEventsController__GetBoosterUseCountKey (bool
   isPreBooster, bool isLevelBase, int32_t boosterId, const MethodInfo* method); */

void Rotatelab_CustomRotateEventsController__GetBoosterUseCountKey_fc66bc
               (int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uStack_1c;
  
  pcVar6 = (char *)(_UNK_00fd67a4 + 0xfd66dc);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd67a8 + 0xfd66f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd67ac + 0xfd66fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd67b0 + 0xfd6708));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd67b4 + 0xfd6714));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd67b8 + 0xfd6720));
    *pcVar6 = '\x01';
  }
  puVar2 = *(undefined4 **)(_UNK_00fd67c0 + 0xfd6740);
  if (param_1 != 0) {
    puVar2 = *(undefined4 **)(_UNK_00fd67bc + 0xfd6738);
  }
  puVar3 = *(undefined4 **)(_UNK_00fd67c8 + 0xfd6758);
  if (param_2 != 0) {
    puVar3 = *(undefined4 **)(_UNK_00fd67c4 + 0xfd6750);
  }
  uVar5 = *puVar2;
  uVar4 = *puVar3;
  uStack_1c = param_3;
  uVar1 = FUN_00ec393c(*(undefined4 *)(*(int *)(_UNK_00fd67cc + 0xfd6770) + 0x24),&uStack_1c);
  System_String__Format_2a0c2b4(**(undefined4 **)(_UNK_00fd67d0 + 0xfd6790),uVar4,uVar5,uVar1,0);
  return;
}

