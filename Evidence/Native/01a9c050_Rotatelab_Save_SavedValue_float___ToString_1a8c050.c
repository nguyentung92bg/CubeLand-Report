/* IL2CPP: Rotatelab.Save.SavedValue<float>$$ToString
System_String_o* Rotatelab_Save_SavedValue_float___ToString (Rotatelab_Save_SavedValue_float__o* __this, const MethodInfo_1A8C050* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Save.SavedValue<float>$$ToString
   System_String_o* Rotatelab_Save_SavedValue_float___ToString (Rotatelab_Save_SavedValue_float__o*
   __this, const MethodInfo_1A8C050* method); */

void Rotatelab_Save_SavedValue_float___ToString_1a8c050(int *param_1,int param_2)

{
  int iStack_14;
  
  iStack_14 = 0;
  if ((char)param_1[7] == '\0') {
    iStack_14 = (**(code **)(*param_1 + 0xe0))(param_1,*(undefined4 *)(*param_1 + 0xe4));
    param_1[8] = iStack_14;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  else {
    iStack_14 = param_1[8];
  }
  System_Single__ToString_2b8501c
            (&iStack_14,*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 0x40));
  return;
}

