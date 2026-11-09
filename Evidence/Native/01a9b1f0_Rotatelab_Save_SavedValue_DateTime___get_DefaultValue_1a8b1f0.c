/* IL2CPP: Rotatelab.Save.SavedValue<DateTime>$$get_DefaultValue
System_DateTime_o Rotatelab_Save_SavedValue_DateTime___get_DefaultValue (Rotatelab_Save_SavedValue_DateTime__o* __this, const MethodInfo_1A8B1F0* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Save.SavedValue<DateTime>$$get_DefaultValue
   System_DateTime_o Rotatelab_Save_SavedValue_DateTime___get_DefaultValue
   (Rotatelab_Save_SavedValue_DateTime__o* __this, const MethodInfo_1A8B1F0* method); */

void Rotatelab_Save_SavedValue_DateTime___get_DefaultValue_1a8b1f0(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 == 0) {
    uStack_10 = *(undefined4 *)(param_2 + 0x10);
    uStack_c = *(undefined4 *)(param_2 + 0x14);
  }
  else {
    (**(code **)(iVar1 + 0xc))
              (&uStack_10,*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
  }
  *param_1 = uStack_10;
  param_1[1] = uStack_c;
  return;
}

