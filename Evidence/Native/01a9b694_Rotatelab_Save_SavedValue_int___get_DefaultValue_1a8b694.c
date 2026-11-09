/* IL2CPP: Rotatelab.Save.SavedValue<int>$$get_DefaultValue
int32_t Rotatelab_Save_SavedValue_int___get_DefaultValue (Rotatelab_Save_SavedValue_int__o* __this, const MethodInfo_1A8B694* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Save.SavedValue<int>$$get_DefaultValue
   int32_t Rotatelab_Save_SavedValue_int___get_DefaultValue (Rotatelab_Save_SavedValue_int__o*
   __this, const MethodInfo_1A8B694* method); */

undefined4 Rotatelab_Save_SavedValue_int___get_DefaultValue_1a8b694(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a9b6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(iVar2 + 0xc))(*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
    return uVar1;
  }
  return *(undefined4 *)(param_1 + 0xc);
}

