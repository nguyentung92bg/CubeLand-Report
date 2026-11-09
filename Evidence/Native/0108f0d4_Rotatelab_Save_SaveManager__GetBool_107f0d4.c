/* IL2CPP: Rotatelab.Save.SaveManager$$GetBool
bool Rotatelab_Save_SaveManager__GetBool (System_String_o* key, bool defaultValue, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Save.SaveManager$$GetBool
   bool Rotatelab_Save_SaveManager__GetBool (System_String_o* key, bool defaultValue, const
   MethodInfo* method); */

bool Rotatelab_Save_SaveManager__GetBool_107f0d4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = UnityEngine_PlayerPrefs__GetInt_35f6b70(param_1,param_2,0);
  return 0 < iVar1;
}

