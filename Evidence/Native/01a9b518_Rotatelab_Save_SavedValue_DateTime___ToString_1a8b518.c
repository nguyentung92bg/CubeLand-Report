/* IL2CPP: Rotatelab.Save.SavedValue<DateTime>$$ToString
System_String_o* Rotatelab_Save_SavedValue_DateTime___ToString (Rotatelab_Save_SavedValue_DateTime__o* __this, const MethodInfo_1A8B518* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Save.SavedValue<DateTime>$$ToString
   System_String_o* Rotatelab_Save_SavedValue_DateTime___ToString
   (Rotatelab_Save_SavedValue_DateTime__o* __this, const MethodInfo_1A8B518* method); */

void Rotatelab_Save_SavedValue_DateTime___ToString_1a8b518(int *param_1,int param_2)

{
  char *pcVar1;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  pcVar1 = (char *)(_UNK_01a9b5e4 + 0x1a9b534);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01a9b5e8 + 0x1a9b548));
    *pcVar1 = '\x01';
  }
  iStack_24 = 0;
  iStack_28 = 0;
  if ((char)param_1[9] == '\0') {
    (**(code **)(*param_1 + 0xe0))(&iStack_20,param_1,*(undefined4 *)(*param_1 + 0xe4));
    param_1[10] = iStack_20;
    param_1[0xb] = iStack_1c;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  else {
    iStack_20 = param_1[10];
    iStack_1c = param_1[0xb];
  }
  iStack_28 = iStack_20;
  iStack_24 = iStack_1c;
  if (*(int *)(**(int **)(_UNK_01a9b5ec + 0x1a9b5b0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  System_DateTime__ToString_2b4b4b0
            (&iStack_28,*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 0x40));
  return;
}

