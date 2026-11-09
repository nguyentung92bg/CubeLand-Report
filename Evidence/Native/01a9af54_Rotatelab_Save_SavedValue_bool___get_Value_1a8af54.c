/* IL2CPP: Rotatelab.Save.SavedValue<bool>$$get_Value
bool Rotatelab_Save_SavedValue_bool___get_Value (Rotatelab_Save_SavedValue_bool__o* __this, const MethodInfo_1A8AF54* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Save.SavedValue<bool>$$get_Value
   bool Rotatelab_Save_SavedValue_bool___get_Value (Rotatelab_Save_SavedValue_bool__o* __this, const
   MethodInfo_1A8AF54* method); */

uint Rotatelab_Save_SavedValue_bool___get_Value_1a8af54(int *param_1)

{
  uint uVar1;
  
  if ((char)param_1[7] != '\0') {
    return (uint)(*(char *)((int)param_1 + 0x1d) != '\0');
  }
  uVar1 = (**(code **)(*param_1 + 0xe0))(param_1,*(undefined4 *)(*param_1 + 0xe4));
  *(char *)((int)param_1 + 0x1d) = (char)uVar1;
  *(undefined1 *)(param_1 + 7) = 1;
  return uVar1;
}

