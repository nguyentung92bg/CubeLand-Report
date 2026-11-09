/* IL2CPP: Rotatelab.CustomRotateEventsController$$GetProgressInfo
System_ValueTuple_bool__int__string__o Rotatelab_CustomRotateEventsController__GetProgressInfo (Rotatelab_CustomRotateEventsController_o* __this, Rotatelab_Scripts_LevelAttemptInfo_o attempt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$GetProgressInfo
   System_ValueTuple_bool__int__string__o Rotatelab_CustomRotateEventsController__GetProgressInfo
   (Rotatelab_CustomRotateEventsController_o* __this, Rotatelab_Scripts_LevelAttemptInfo_o attempt,
   const MethodInfo* method); */

void Rotatelab_CustomRotateEventsController__GetProgressInfo_fca97c(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000008;
  uint in_stack_00000010;
  
  pcVar6 = (char *)(_UNK_00fdaa54 + 0xfda998);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdaa58 + 0xfda9ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdaa5c + 0xfda9b8));
    *pcVar6 = '\x01';
  }
  piVar7 = *(int **)(_UNK_00fdaa60 + 0xfda9d0);
  iVar1 = *piVar7;
  if ((in_stack_00000010 & 1) == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar7;
    }
    puVar2 = (undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x14);
    in_stack_00000008 = in_stack_00000000;
  }
  else {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar7;
    }
    puVar2 = (undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x18);
  }
  puVar3 = *(undefined4 **)(_UNK_00fdaa64 + 0xfdaa2c);
  uVar5 = *puVar2;
  *param_1 = 0;
  uVar4 = *puVar3;
  param_1[1] = 0;
  param_1[2] = 0;
  System_ValueTuple_bool__int__object____ctor_1d6271c
            (param_1,(in_stack_00000010 & 1) != 0,in_stack_00000008,uVar5,uVar4);
  return;
}

