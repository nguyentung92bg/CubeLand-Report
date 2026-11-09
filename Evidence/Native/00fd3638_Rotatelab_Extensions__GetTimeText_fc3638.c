/* IL2CPP: Rotatelab.Extensions$$GetTimeText
System_String_o* Rotatelab_Extensions__GetTimeText (System_TimeSpan_o timeSpan, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$GetTimeText
   System_String_o* Rotatelab_Extensions__GetTimeText (System_TimeSpan_o timeSpan, const MethodInfo*
   method); */

void Rotatelab_Extensions__GetTimeText_fc3638(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar5 = (char *)(_UNK_00fd38dc + 0xfd3650);
  uStack_18 = param_1;
  uStack_14 = param_2;
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd38e0 + 0xfd3668));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd38e4 + 0xfd3674));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd38e8 + 0xfd3680));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd38ec + 0xfd368c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd38f0 + 0xfd3698));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(_UNK_00fd38f4 + 0xfd36ac);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = System_TimeSpan__get_Days_2b89b68(&uStack_18,0);
  if (iVar1 < 1) {
    if (*(int *)(*piVar6 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = System_TimeSpan__get_Hours_2b89b84(&uStack_18,0);
    if (iVar1 < 1) {
      if (*(int *)(*piVar6 + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar1 = System_TimeSpan__get_Minutes_2b89bbc(&uStack_18,0);
      if (iVar1 < 1) {
        if (*(int *)(*piVar6 + 0x74) == 0) {
          FUN_00ec3934();
        }
        uStack_1c = System_TimeSpan__get_Seconds_2b89be8(&uStack_18,0);
        uVar2 = FUN_00ec393c(*(undefined4 *)(*(int *)(_UNK_00fd3910 + 0xfd38b0) + 0x24),&uStack_1c);
        System_String__Format_29ffb6c(**(undefined4 **)(_UNK_00fd3914 + 0xfd38d4),uVar2,0);
        return;
      }
      if (*(int *)(*piVar6 + 0x74) == 0) {
        FUN_00ec3934();
      }
      uStack_1c = System_TimeSpan__get_Minutes_2b89bbc(&uStack_18,0);
      iVar1 = *(int *)(_UNK_00fd3908 + 0xfd3838);
      uVar2 = FUN_00ec393c(*(undefined4 *)(iVar1 + 0x24),&uStack_1c);
      uStack_20 = System_TimeSpan__get_Seconds_2b89be8(&uStack_18,0);
      uVar3 = FUN_00ec393c(*(undefined4 *)(iVar1 + 0x24),&uStack_20);
      puVar4 = *(undefined4 **)(_UNK_00fd390c + 0xfd3878);
    }
    else {
      if (*(int *)(*piVar6 + 0x74) == 0) {
        FUN_00ec3934();
      }
      uStack_1c = System_TimeSpan__get_Hours_2b89b84(&uStack_18,0);
      iVar1 = *(int *)(_UNK_00fd3900 + 0xfd37a0);
      uVar2 = FUN_00ec393c(*(undefined4 *)(iVar1 + 0x24),&uStack_1c);
      uStack_20 = System_TimeSpan__get_Minutes_2b89bbc(&uStack_18,0);
      uVar3 = FUN_00ec393c(*(undefined4 *)(iVar1 + 0x24),&uStack_20);
      puVar4 = *(undefined4 **)(_UNK_00fd3904 + 0xfd37e0);
    }
  }
  else {
    if (*(int *)(*piVar6 + 0x74) == 0) {
      FUN_00ec3934();
    }
    uStack_1c = System_TimeSpan__get_Days_2b89b68(&uStack_18,0);
    iVar1 = *(int *)(_UNK_00fd38f8 + 0xfd3708);
    uVar2 = FUN_00ec393c(*(undefined4 *)(iVar1 + 0x24),&uStack_1c);
    uStack_20 = System_TimeSpan__get_Hours_2b89b84(&uStack_18,0);
    uVar3 = FUN_00ec393c(*(undefined4 *)(iVar1 + 0x24),&uStack_20);
    puVar4 = *(undefined4 **)(_UNK_00fd38fc + 0xfd3748);
  }
  System_String__Format_2a0c264(*puVar4,uVar2,uVar3,0);
  return;
}

