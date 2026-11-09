/* IL2CPP: Rotatelab.Save.SavedValue<int>$$get_Value
int32_t Rotatelab_Save_SavedValue_int___get_Value (Rotatelab_Save_SavedValue_int__o* __this, const MethodInfo_1A8B7E4* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Save.SavedValue<int>$$get_Value
   int32_t Rotatelab_Save_SavedValue_int___get_Value (Rotatelab_Save_SavedValue_int__o* __this,
   const MethodInfo_1A8B7E4* method); */

int Rotatelab_Save_SavedValue_int___get_Value_1a8b7e4(int *param_1)

{
  int iVar1;
  
  if ((char)param_1[7] == '\0') {
    iVar1 = (**(code **)(*param_1 + 0xe0))(param_1,*(undefined4 *)(*param_1 + 0xe4));
    param_1[8] = iVar1;
    *(undefined1 *)(param_1 + 7) = 1;
    return iVar1;
  }
  return param_1[8];
}

