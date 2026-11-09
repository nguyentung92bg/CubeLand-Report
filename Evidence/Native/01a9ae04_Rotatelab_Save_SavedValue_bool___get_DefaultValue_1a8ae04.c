/* IL2CPP: Rotatelab.Save.SavedValue<bool>$$get_DefaultValue
bool Rotatelab_Save_SavedValue_bool___get_DefaultValue (Rotatelab_Save_SavedValue_bool__o* __this, const MethodInfo_1A8AE04* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Save.SavedValue<bool>$$get_DefaultValue
   bool Rotatelab_Save_SavedValue_bool___get_DefaultValue (Rotatelab_Save_SavedValue_bool__o*
   __this, const MethodInfo_1A8AE04* method); */

uint Rotatelab_Save_SavedValue_bool___get_DefaultValue_1a8ae04(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a9ae20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(iVar2 + 0xc))(*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
    return uVar1;
  }
  return (uint)*(byte *)(param_1 + 0xc);
}

