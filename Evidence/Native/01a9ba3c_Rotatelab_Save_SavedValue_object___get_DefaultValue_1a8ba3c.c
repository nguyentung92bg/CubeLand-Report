/* IL2CPP: Rotatelab.Save.SavedValue<object>$$get_DefaultValue
Il2CppObject* Rotatelab_Save_SavedValue_object___get_DefaultValue (Rotatelab_Save_SavedValue_T__o* __this, const MethodInfo_1A8BA3C* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Save.SavedValue<object>$$get_DefaultValue
   Il2CppObject* Rotatelab_Save_SavedValue_object___get_DefaultValue
   (Rotatelab_Save_SavedValue_T__o* __this, const MethodInfo_1A8BA3C* method); */

undefined4 Rotatelab_Save_SavedValue_object___get_DefaultValue_1a8ba3c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a9ba58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(iVar2 + 0xc))(*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
    return uVar1;
  }
  return *(undefined4 *)(param_1 + 0xc);
}

