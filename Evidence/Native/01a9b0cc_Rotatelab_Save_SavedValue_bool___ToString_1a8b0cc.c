/* IL2CPP: Rotatelab.Save.SavedValue<bool>$$ToString
System_String_o* Rotatelab_Save_SavedValue_bool___ToString (Rotatelab_Save_SavedValue_bool__o* __this, const MethodInfo_1A8B0CC* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Save.SavedValue<bool>$$ToString
   System_String_o* Rotatelab_Save_SavedValue_bool___ToString (Rotatelab_Save_SavedValue_bool__o*
   __this, const MethodInfo_1A8B0CC* method); */

void Rotatelab_Save_SavedValue_bool___ToString_1a8b0cc(int *param_1,int param_2)

{
  int iVar1;
  undefined1 uStack_11;
  
  uStack_11 = 0;
  if ((char)param_1[7] == '\0') {
    uStack_11 = (**(code **)(*param_1 + 0xe0))(param_1,*(undefined4 *)(*param_1 + 0xe4));
    *(undefined1 *)((int)param_1 + 0x1d) = uStack_11;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  else {
    uStack_11 = *(undefined1 *)((int)param_1 + 0x1d);
  }
  iVar1 = *(int *)(*(int *)(_UNK_01a9b158 + 0x1a9b124) + 0x14);
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934(iVar1);
  }
  System_Boolean__ToString_2b14940
            (&uStack_11,*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 0x40));
  return;
}

