/* IL2CPP: Rotatelab.Save.SavedDateTime$$GetSavedValue
System_DateTime_o Rotatelab_Save_SavedDateTime__GetSavedValue (Rotatelab_Save_SavedDateTime_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Save.SavedDateTime$$GetSavedValue
   System_DateTime_o Rotatelab_Save_SavedDateTime__GetSavedValue (Rotatelab_Save_SavedDateTime_o*
   __this, const MethodInfo* method); */

void Rotatelab_Save_SavedDateTime__GetSavedValue_108322c(undefined4 *param_1,int param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar1 = (char *)(_UNK_010932ec + 0x1093248);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010932f0 + 0x109325c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010932f4 + 0x1093268));
    *pcVar1 = '\x01';
  }
  uVar2 = *(undefined4 *)(param_2 + 8);
  if (*(char *)(param_2 + 0x30) == '\0') {
    Rotatelab_Save_SavedValue_DateTime___get_DefaultValue_1a8b1f0
              (&uStack_18,param_2,**(undefined4 **)(_UNK_010932f8 + 0x10932bc));
  }
  else {
    if (*(int *)(**(int **)(_UNK_010932fc + 0x109328c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    System_DateTime__get_Now_2b4a124(&uStack_18,0);
  }
  Rotatelab_Save_SaveManager__GetDateTime_1082e14(&uStack_18,uVar2,uStack_18,uStack_14);
  *param_1 = uStack_18;
  param_1[1] = uStack_14;
  return;
}

