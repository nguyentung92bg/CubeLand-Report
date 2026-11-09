/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$get_Now
System_DateTime_o Rotatelab_CloudRush_CloudRushController__get_Now (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$get_Now
   System_DateTime_o Rotatelab_CloudRush_CloudRushController__get_Now (const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushController__get_Now_10dbbb0(undefined4 *param_1)

{
  int iVar1;
  float fVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_010ebcac + 0x10ebbc8);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ebcb0 + 0x10ebbdc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ebcb4 + 0x10ebbe8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ebcb8 + 0x10ebbf4));
    *pcVar3 = '\x01';
  }
  uStack_14 = 0;
  uStack_18 = 0;
  if (*(int *)(**(int **)(_UNK_010ebcbc + 0x10ebc0c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  System_DateTime__get_Now_2b4a124(&uStack_18,0);
  piVar4 = *(int **)(_UNK_010ebcc0 + 0x10ebc3c);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar4;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar2 = (float)Rotatelab_Save_SavedValue_float___get_Value_1a8becc
                           (iVar1,**(undefined4 **)(_UNK_010ebcc4 + 0x10ebc70));
  System_DateTime__AddSeconds_2b491b0
            (&uStack_20,&uStack_18,SUB84((double)fVar2,0),(int)((ulonglong)(double)fVar2 >> 0x20),0)
  ;
  *param_1 = uStack_20;
  param_1[1] = uStack_1c;
  return;
}

